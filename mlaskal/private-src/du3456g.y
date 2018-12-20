%language "c++"
%require "3.0.4"
%defines
%define parser_class_name{ mlaskal_parser }
%define api.token.constructor
%define api.token.prefix{DUTOK_}
%define api.value.type variant
%define parse.assert
%define parse.error verbose

%locations
%define api.location.type{ unsigned }

%code requires
{
	// this code is emitted to du3456g.hpp

	// allow references to semantic types in %type
#include "dutables.hpp"
#include <list>
	// avoid no-case warnings when compiling du3g.hpp
#pragma warning (disable:4065)

// adjust YYLLOC_DEFAULT macro for our api.location.type
#define YYLLOC_DEFAULT(res,rhs,N)	(res = (N)?YYRHSLOC(rhs, 1):YYRHSLOC(rhs, 0))
// supply missing YY_NULL in bfexpg.hpp
#define YY_NULL	0
#define YY_NULLPTR	0
}

%param{ mlc::yyscan_t2 yyscanner }	// formal name "yyscanner" is enforced by flex
%param{ mlc::MlaskalCtx* ctx }

%start mlaskal

%code
{
	// this code is emitted to du3456g.cpp

	// declare yylex here
	#include "bisonflex.hpp"
	YY_DECL;

	// allow access to context
	#include "dutables.hpp"

	// other user-required contents
	#include<assert.h>
	#include <stdlib.h>
  #include <list>
    /* local stuff */
    using namespace mlc;

}

%token EOF	0	"end of file"

%token PROGRAM			/* program */
%token LABEL			    /* label */
%token CONST			    /* const */
%token TYPE			    /* type */
%token VAR			    /* var */
%token BEGIN			    /* begin */
%token END			    /* end */
%token PROCEDURE			/* procedure */
%token FUNCTION			/* function */
%token ARRAY			    /* array */
%token OF				    /* of */
%token GOTO			    /* goto */
%token IF				    /* if */
%token THEN			    /* then */
%token ELSE			    /* else */
%token WHILE			    /* while */
%token DO				    /* do */
%token REPEAT			    /* repeat */
%token UNTIL			    /* until */
%token FOR			    /* for */
%token OR				    /* or */
%token NOT			    /* not */
%token RECORD			    /* record */

/* literals */
%token<mlc::ls_id_index> IDENTIFIER			/* identifier */
%token<mlc::ls_int_index> UINT			    /* unsigned integer */
%token<mlc::ls_real_index> REAL			    /* real number */
%token<mlc::ls_str_index> STRING			    /* string */

/* delimiters */
%token SEMICOLON			/* ; */
%token DOT			    /* . */
%token COMMA			    /* , */
%token EQ				    /* = */
%token COLON			    /* : */
%token LPAR			    /* ( */
%token RPAR			    /* ) */
%token DOTDOT			    /* .. */
%token LSBRA			    /* [ */
%token RSBRA			    /* ] */
%token ASSIGN			    /* := */

/* grouped operators and keywords */
%token<mlc::DUTOKGE_OPER_REL> OPER_REL			    /* <, <=, <>, >=, > */
%token<mlc::DUTOKGE_OPER_SIGNADD> OPER_SIGNADD		    /* +, - */
%token<mlc::DUTOKGE_OPER_MUL> OPER_MUL			    /* *, /, div, mod, and */
%token<mlc::DUTOKGE_FOR_DIRECTION> FOR_DIRECTION		    /* to, downto */


%type<std::list<mlc::ls_int_index>> constant
%type<std::list<mlc::ls_int_index>> unsigned_const
%type<std::list<mlc::ls_int_index>> unsigned_const_withoutID

%%

mlaskal:	    PROGRAM
		    IDENTIFIER
		    SEMICOLON
				block_P
				DOT
		;

block_P: start_block const_block
			| const_block
	;
start_block: LABEL C1 SEMICOLON ;

const_block: CONST C2 type_block {

}
			| type_block;
type_block: TYPE C3 var_block
			| var_block;
var_block: VAR C5 procedure_block {

}
			| procedure_block;
procedure_block: end_block
			| C7 end_block
	;
end_block: BEGIN state_cycle END;

C1: UINT {
	ctx->tab->add_label_entry(@1, $1, ctx->tab->new_label());
}
			| C1 COMMA UINT {
				ctx->tab->add_label_entry(@1, $3, ctx->tab->new_label());
			}
;
C2:   IDENTIFIER EQ UINT SEMICOLON { ctx->tab->add_const_int(@1, $1, $3); }
		| IDENTIFIER EQ REAL SEMICOLON { ctx->tab->add_const_real(@1, $1, $3); }
		| IDENTIFIER EQ STRING SEMICOLON { ctx->tab->add_const_str(@1, $1, $3); }
		| IDENTIFIER EQ IDENTIFIER SEMICOLON
	 	{
			mlc::symbol_pointer sp = ctx->tab->find_symbol($3);
			if ( sp->kind() != SKIND_CONST ) { message( DUERR_NOTCONST, @3, * $3); }

			if ( sp->access_const()->type()->cat() == TCAT_INT )
			{
  			mlc::ls_int_index val = sp->access_const()->access_int_const()->int_value();
  			ctx->tab->add_const_int( @1, $1, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_REAL )
			{
  			mlc::ls_real_index val = sp->access_const()->access_real_const()->real_value();
  			ctx->tab->add_const_real( @1, $1, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_BOOL )
			{
  			bool val = sp->access_const()->access_bool_const()->bool_value();
  			ctx->tab->add_const_bool( @1, $1, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_STR )
			{
  			mlc::ls_str_index val = sp->access_const()->access_str_const()->str_value();
  			ctx->tab->add_const_str( @1, $1, val);
			}
		}
		| IDENTIFIER EQ OPER_SIGNADD UINT SEMICOLON
		{
			auto val = $3 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *$4 : *$4;
			ctx->tab->add_const_int(@1, $1, ctx->tab->ls_int().add(val));
		}
		| IDENTIFIER EQ OPER_SIGNADD REAL SEMICOLON
		{
			auto val = $3 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *$4 : *$4;
			ctx->tab->add_const_real(@1, $1, ctx->tab->ls_real().add(val));
		}
		| C2 IDENTIFIER EQ UINT SEMICOLON { ctx->tab->add_const_int(@1, $2, $4); }
		| C2 IDENTIFIER EQ REAL SEMICOLON { ctx->tab->add_const_real(@1, $2, $4); }
		| C2 IDENTIFIER EQ STRING SEMICOLON { ctx->tab->add_const_str(@1, $2, $4); }
		| C2 IDENTIFIER EQ IDENTIFIER SEMICOLON
		{
				mlc::symbol_pointer sp = ctx->tab->find_symbol($4);
			if ( sp->kind() != SKIND_CONST ) { message( DUERR_NOTCONST, @4, * $4); }

			if ( sp->access_const()->type()->cat() == TCAT_INT )
			{
  			mlc::ls_int_index val = sp->access_const()->access_int_const()->int_value();
  			ctx->tab->add_const_int( @1, $2, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_REAL )
			{
  			mlc::ls_real_index val = sp->access_const()->access_real_const()->real_value();
  			ctx->tab->add_const_real( @1, $2, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_BOOL )
			{
  			bool val = sp->access_const()->access_bool_const()->bool_value();
  			ctx->tab->add_const_bool( @1, $2, val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_STR )
			{
  			mlc::ls_str_index val = sp->access_const()->access_str_const()->str_value();
  			ctx->tab->add_const_str( @1, $2, val);
			}
		}
		| C2 IDENTIFIER EQ OPER_SIGNADD UINT SEMICOLON
		{
			auto val = $4 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *$5 : *$5;
			ctx->tab->add_const_int(@1, $2, ctx->tab->ls_int().add(val));
		}
		| C2 IDENTIFIER EQ OPER_SIGNADD REAL SEMICOLON
		{
			auto val = $4 == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *$5 : *$5;
			ctx->tab->add_const_real(@1, $2, ctx->tab->ls_real().add(val));
		}
		| IDENTIFIER EQ UINT { ctx->tab->add_const_int(@1, $1, $3); }
		;

C3: IDENTIFIER EQ  type SEMICOLON {

}
			| C3 IDENTIFIER EQ type SEMICOLON {
			}
		;

constant: unsigned_const {

}
			| OPER_SIGNADD UINT {

			}
			| OPER_SIGNADD REAL {

			}
		;
unsigned_const: UINT
			| REAL
			| STRING
			| IDENTIFIER /* Constant identifier */
	;

C4: IDENTIFIER {

}
			| C4 COMMA IDENTIFIER
		;
C5: C4 COLON type SEMICOLON
			| C5 C4 COLON type SEMICOLON
		;
C7: procedure_header SEMICOLON block SEMICOLON {
}
			| function_header SEMICOLON block SEMICOLON
			| C7 procedure_header SEMICOLON block SEMICOLON
			| C7 function_header SEMICOLON block SEMICOLON
		;

block: start_block const_block2
			| const_block2
		;

const_block2: CONST C2 type_block2
			| type_block2;
type_block2: TYPE C3 var_block2
			| var_block2;
var_block2: VAR C5 end_block;
			| end_block

procedure_header: PROCEDURE IDENTIFIER {

}
				| PROCEDURE IDENTIFIER LPAR form_par RPAR {

				}
		;

function_header: FUNCTION IDENTIFIER COLON IDENTIFIER
				| FUNCTION IDENTIFIER LPAR form_par RPAR COLON IDENTIFIER /* Scalar type identifier */ {

				}
		;

form_par: VAR id_cycl COLON IDENTIFIER /* Type identifier */ {

}
				| id_cycl COLON IDENTIFIER /* Type identifier */
				| form_par SEMICOLON VAR id_cycl COLON IDENTIFIER /* Type identifier */
				| form_par SEMICOLON id_cycl COLON IDENTIFIER /* Type identifier */
		;

id_cycl: IDENTIFIER
				| id_cycl COMMA IDENTIFIER
		;

type: ord_type
				| IDENTIFIER /* type identifier */
				| struc_type
		;

struc_type: ARRAY LSBRA ord_type_cycl RSBRA OF type;

ord_type: ord_const DOTDOT ord_const;

ord_type_cycl: ord_type
				| ord_type_cycl COMMA ord_type
		;

statement: %empty
				| D0 variable ASSIGN expression {

				}
				| D0 IDENTIFIER
				| D0 IDENTIFIER LPAR real_par RPAR {

				}
				| D0 GOTO UINT
				| D0 BEGIN state_cycle END
				| D0 IF expression THEN statement
				| D0 IF expression THEN statement2 ELSE statement
				| D0 WHILE expression DO statement
				| D0 REPEAT state_cycle UNTIL expression
				| D0 FOR IDENTIFIER ASSIGN expression FOR_DIRECTION expression DO statement
		;

statement2: %empty
				| D0 variable ASSIGN expression {

				}
				| D0 IDENTIFIER
				| D0 IDENTIFIER LPAR real_par RPAR /* */
				| D0 GOTO UINT
				| D0 BEGIN state_cycle END
				| D0 IF expression THEN statement2 ELSE statement2
				| D0 WHILE expression DO statement2
				| D0 REPEAT state_cycle UNTIL expression
				| D0 FOR IDENTIFIER ASSIGN expression FOR_DIRECTION expression DO statement2
;

D0: UINT COLON | %empty;

state_cycle: statement
				| state_cycle SEMICOLON statement
		;




variable: variable LSBRA ord_expr_cylc RSBRA
				| IDENTIFIER /* variable identifier */
		;
variable_withoutID: variable LSBRA ord_expr_cylc RSBRA;

ord_expr_cylc: expression
				| ord_expr_cylc COMMA expression
		;


real_par: expression
				| real_par COMMA expression
		;

expression: simp_expression
			| simp_expression OPER_REL simp_expression
			| simp_expression EQ simp_expression
		;

simp_expression:  OPER_SIGNADD term_oper
			| term_oper
		;

term_oper: term_oper OPER_SIGNADD term
			| term_oper OR term
			| term
		;

term: factor
			| term OPER_MUL factor
		;

factor: unsigned_const_withoutID
				| variable_withoutID
				| IDENTIFIER /* Function identifier */
				| IDENTIFIER LPAR real_par RPAR /* Function identifier */
				| LPAR expression RPAR
				| NOT factor
		;




ord_const: IDENTIFIER /* Integer constant identifier */
			| OPER_SIGNADD IDENTIFIER /* Integer constant identifier */
			| OPER_SIGNADD UINT
			| UINT
		;

unsigned_const_withoutID: REAL
			| STRING
			| UINT
		;









%%


namespace yy {

	void mlaskal_parser::error(const location_type& l, const std::string& m)
	{
		message(DUERR_SYNTAX, l, m);
	}

}

