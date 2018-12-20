// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "du3456g.cpp" // lalr1.cc:398

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "du3456g.hpp"

// User implementation prologue.

#line 51 "du3456g.cpp" // lalr1.cc:406
// Unqualified %code blocks.
#line 37 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:407

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


#line 72 "du3456g.cpp" // lalr1.cc:407


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyempty = true)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 158 "du3456g.cpp" // lalr1.cc:473

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   mlaskal_parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   mlaskal_parser :: mlaskal_parser  (mlc::yyscan_t2 yyscanner_yyarg, mlc::MlaskalCtx* ctx_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      yyscanner (yyscanner_yyarg),
      ctx (ctx_yyarg)
  {}

   mlaskal_parser ::~ mlaskal_parser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
   mlaskal_parser ::by_state::by_state ()
    : state (empty)
  {}

  inline
   mlaskal_parser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   mlaskal_parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
   mlaskal_parser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   mlaskal_parser ::symbol_number_type
   mlaskal_parser ::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
   mlaskal_parser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   mlaskal_parser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 44: // FOR_DIRECTION
        value.move< mlc::DUTOKGE_FOR_DIRECTION > (that.value);
        break;

      case 43: // OPER_MUL
        value.move< mlc::DUTOKGE_OPER_MUL > (that.value);
        break;

      case 41: // OPER_REL
        value.move< mlc::DUTOKGE_OPER_REL > (that.value);
        break;

      case 42: // OPER_SIGNADD
        value.move< mlc::DUTOKGE_OPER_SIGNADD > (that.value);
        break;

      case 26: // IDENTIFIER
        value.move< mlc::ls_id_index > (that.value);
        break;

      case 27: // UINT
        value.move< mlc::ls_int_index > (that.value);
        break;

      case 28: // REAL
        value.move< mlc::ls_real_index > (that.value);
        break;

      case 29: // STRING
        value.move< mlc::ls_str_index > (that.value);
        break;

      case 86: // unsigned_const_withoutID
        value.move< std::list<mlc::ls_int_index> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty;
  }

  inline
   mlaskal_parser ::stack_symbol_type&
   mlaskal_parser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 44: // FOR_DIRECTION
        value.copy< mlc::DUTOKGE_FOR_DIRECTION > (that.value);
        break;

      case 43: // OPER_MUL
        value.copy< mlc::DUTOKGE_OPER_MUL > (that.value);
        break;

      case 41: // OPER_REL
        value.copy< mlc::DUTOKGE_OPER_REL > (that.value);
        break;

      case 42: // OPER_SIGNADD
        value.copy< mlc::DUTOKGE_OPER_SIGNADD > (that.value);
        break;

      case 26: // IDENTIFIER
        value.copy< mlc::ls_id_index > (that.value);
        break;

      case 27: // UINT
        value.copy< mlc::ls_int_index > (that.value);
        break;

      case 28: // REAL
        value.copy< mlc::ls_real_index > (that.value);
        break;

      case 29: // STRING
        value.copy< mlc::ls_str_index > (that.value);
        break;

      case 86: // unsigned_const_withoutID
        value.copy< std::list<mlc::ls_int_index> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   mlaskal_parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   mlaskal_parser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   mlaskal_parser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   mlaskal_parser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   mlaskal_parser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   mlaskal_parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   mlaskal_parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   mlaskal_parser ::debug_level_type
   mlaskal_parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   mlaskal_parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  mlaskal_parser ::state_type
   mlaskal_parser ::yy_lr_goto_state_ (state_type yystate, int yylhs)
  {
    int yyr = yypgoto_[yylhs - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yylhs - yyntokens_];
  }

  inline bool
   mlaskal_parser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   mlaskal_parser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   mlaskal_parser ::parse ()
  {
    /// Whether yyla contains a lookahead.
    bool yyempty = true;

    // State.
    int yyn;
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// $$ and @$.
    stack_symbol_type yylhs;

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULL, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyempty)
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (yyscanner, ctx));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
        yyempty = false;
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Discard the token being shifted.
    yyempty = true;

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
    /* Variants are always initialized to an empty instance of the
       correct type. The default $$=$1 action is NOT applied when using
       variants.  */
      switch (yyr1_[yyn])
    {
      case 44: // FOR_DIRECTION
        yylhs.value.build< mlc::DUTOKGE_FOR_DIRECTION > ();
        break;

      case 43: // OPER_MUL
        yylhs.value.build< mlc::DUTOKGE_OPER_MUL > ();
        break;

      case 41: // OPER_REL
        yylhs.value.build< mlc::DUTOKGE_OPER_REL > ();
        break;

      case 42: // OPER_SIGNADD
        yylhs.value.build< mlc::DUTOKGE_OPER_SIGNADD > ();
        break;

      case 26: // IDENTIFIER
        yylhs.value.build< mlc::ls_id_index > ();
        break;

      case 27: // UINT
        yylhs.value.build< mlc::ls_int_index > ();
        break;

      case 28: // REAL
        yylhs.value.build< mlc::ls_real_index > ();
        break;

      case 29: // STRING
        yylhs.value.build< mlc::ls_str_index > ();
        break;

      case 86: // unsigned_const_withoutID
        yylhs.value.build< std::list<mlc::ls_int_index> > ();
        break;

      default:
        break;
    }


    // Compute the default @$.
    {
      slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
      YYLLOC_DEFAULT (yylhs.location, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    try
      {
        switch (yyn)
          {
  case 6:
#line 126 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 637 "du3456g.cpp" // lalr1.cc:846
    break;

  case 10:
#line 132 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 645 "du3456g.cpp" // lalr1.cc:846
    break;

  case 15:
#line 141 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
	ctx->tab->add_label_entry(yystack_[0].location, yystack_[0].value.as< mlc::ls_int_index > (), ctx->tab->new_label());
}
#line 653 "du3456g.cpp" // lalr1.cc:846
    break;

  case 16:
#line 144 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
				ctx->tab->add_label_entry(yystack_[2].location, yystack_[0].value.as< mlc::ls_int_index > (), ctx->tab->new_label());
			}
#line 661 "du3456g.cpp" // lalr1.cc:846
    break;

  case 17:
#line 148 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_int(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_int_index > ()); }
#line 667 "du3456g.cpp" // lalr1.cc:846
    break;

  case 18:
#line 149 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_real(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_real_index > ()); }
#line 673 "du3456g.cpp" // lalr1.cc:846
    break;

  case 19:
#line 150 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_str(yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_str_index > ()); }
#line 679 "du3456g.cpp" // lalr1.cc:846
    break;

  case 20:
#line 152 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			mlc::symbol_pointer sp = ctx->tab->find_symbol(yystack_[1].value.as< mlc::ls_id_index > ());
			if ( sp->kind() != SKIND_CONST ) { message( DUERR_NOTCONST, yystack_[1].location, * yystack_[1].value.as< mlc::ls_id_index > ()); }

			if ( sp->access_const()->type()->cat() == TCAT_INT )
			{
  			mlc::ls_int_index val = sp->access_const()->access_int_const()->int_value();
  			ctx->tab->add_const_int( yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_REAL )
			{
  			mlc::ls_real_index val = sp->access_const()->access_real_const()->real_value();
  			ctx->tab->add_const_real( yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_BOOL )
			{
  			bool val = sp->access_const()->access_bool_const()->bool_value();
  			ctx->tab->add_const_bool( yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_STR )
			{
  			mlc::ls_str_index val = sp->access_const()->access_str_const()->str_value();
  			ctx->tab->add_const_str( yystack_[3].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
		}
#line 709 "du3456g.cpp" // lalr1.cc:846
    break;

  case 21:
#line 178 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			auto val = yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *yystack_[1].value.as< mlc::ls_int_index > () : *yystack_[1].value.as< mlc::ls_int_index > ();
			ctx->tab->add_const_int(yystack_[4].location, yystack_[4].value.as< mlc::ls_id_index > (), ctx->tab->ls_int().add(val));
		}
#line 718 "du3456g.cpp" // lalr1.cc:846
    break;

  case 22:
#line 183 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			auto val = yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *yystack_[1].value.as< mlc::ls_real_index > () : *yystack_[1].value.as< mlc::ls_real_index > ();
			ctx->tab->add_const_real(yystack_[4].location, yystack_[4].value.as< mlc::ls_id_index > (), ctx->tab->ls_real().add(val));
		}
#line 727 "du3456g.cpp" // lalr1.cc:846
    break;

  case 23:
#line 187 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_int(yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_int_index > ()); }
#line 733 "du3456g.cpp" // lalr1.cc:846
    break;

  case 24:
#line 188 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_real(yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_real_index > ()); }
#line 739 "du3456g.cpp" // lalr1.cc:846
    break;

  case 25:
#line 189 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_str(yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), yystack_[1].value.as< mlc::ls_str_index > ()); }
#line 745 "du3456g.cpp" // lalr1.cc:846
    break;

  case 26:
#line 191 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
				mlc::symbol_pointer sp = ctx->tab->find_symbol(yystack_[1].value.as< mlc::ls_id_index > ());
			if ( sp->kind() != SKIND_CONST ) { message( DUERR_NOTCONST, yystack_[1].location, * yystack_[1].value.as< mlc::ls_id_index > ()); }

			if ( sp->access_const()->type()->cat() == TCAT_INT )
			{
  			mlc::ls_int_index val = sp->access_const()->access_int_const()->int_value();
  			ctx->tab->add_const_int( yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_REAL )
			{
  			mlc::ls_real_index val = sp->access_const()->access_real_const()->real_value();
  			ctx->tab->add_const_real( yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_BOOL )
			{
  			bool val = sp->access_const()->access_bool_const()->bool_value();
  			ctx->tab->add_const_bool( yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
			else if ( sp->access_const()->type()->cat() == TCAT_STR )
			{
  			mlc::ls_str_index val = sp->access_const()->access_str_const()->str_value();
  			ctx->tab->add_const_str( yystack_[4].location, yystack_[3].value.as< mlc::ls_id_index > (), val);
			}
		}
#line 775 "du3456g.cpp" // lalr1.cc:846
    break;

  case 27:
#line 217 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			auto val = yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *yystack_[1].value.as< mlc::ls_int_index > () : *yystack_[1].value.as< mlc::ls_int_index > ();
			ctx->tab->add_const_int(yystack_[5].location, yystack_[4].value.as< mlc::ls_id_index > (), ctx->tab->ls_int().add(val));
		}
#line 784 "du3456g.cpp" // lalr1.cc:846
    break;

  case 28:
#line 222 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			auto val = yystack_[2].value.as< mlc::DUTOKGE_OPER_SIGNADD > () == mlc::DUTOKGE_OPER_SIGNADD::DUTOKGE_MINUS ? - *yystack_[1].value.as< mlc::ls_real_index > () : *yystack_[1].value.as< mlc::ls_real_index > ();
			ctx->tab->add_const_real(yystack_[5].location, yystack_[4].value.as< mlc::ls_id_index > (), ctx->tab->ls_real().add(val));
		}
#line 793 "du3456g.cpp" // lalr1.cc:846
    break;

  case 29:
#line 226 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    { ctx->tab->add_const_int(yystack_[2].location, yystack_[2].value.as< mlc::ls_id_index > (), yystack_[0].value.as< mlc::ls_int_index > ()); }
#line 799 "du3456g.cpp" // lalr1.cc:846
    break;

  case 30:
#line 229 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 807 "du3456g.cpp" // lalr1.cc:846
    break;

  case 31:
#line 232 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
			}
#line 814 "du3456g.cpp" // lalr1.cc:846
    break;

  case 32:
#line 252 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 822 "du3456g.cpp" // lalr1.cc:846
    break;

  case 36:
#line 260 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {
}
#line 829 "du3456g.cpp" // lalr1.cc:846
    break;

  case 48:
#line 278 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 837 "du3456g.cpp" // lalr1.cc:846
    break;

  case 49:
#line 281 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

				}
#line 845 "du3456g.cpp" // lalr1.cc:846
    break;

  case 51:
#line 287 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

				}
#line 853 "du3456g.cpp" // lalr1.cc:846
    break;

  case 52:
#line 292 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

}
#line 861 "du3456g.cpp" // lalr1.cc:846
    break;

  case 66:
#line 318 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

				}
#line 869 "du3456g.cpp" // lalr1.cc:846
    break;

  case 68:
#line 322 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

				}
#line 877 "du3456g.cpp" // lalr1.cc:846
    break;

  case 77:
#line 335 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:846
    {

				}
#line 885 "du3456g.cpp" // lalr1.cc:846
    break;


#line 889 "du3456g.cpp" // lalr1.cc:846
          default:
            break;
          }
      }
    catch (const syntax_error& yyexc)
      {
        error (yyexc);
        YYERROR;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yylhs);
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    // Shift the result of the reduction.
    yypush_ (YY_NULL, yylhs);
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state,
                                           yyempty ? yyempty_ : yyla.type_get ()));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyempty)
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyempty = true;
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* $$ was initialized before running the user action.  */
    YY_SYMBOL_PRINT ("Error: discarding", yylhs);
    yylhs.~stack_symbol_type();
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyempty)
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyempty)
          yy_destroy_ (YY_NULL, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULL, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   mlaskal_parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   mlaskal_parser ::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULL;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int  mlaskal_parser ::yypact_ninf_ = -174;

  const signed char  mlaskal_parser ::yytable_ninf_ = -114;

  const short int
   mlaskal_parser ::yypact_[] =
  {
      64,    71,   105,    98,  -174,   187,   134,   149,   156,   173,
       8,   186,   191,   195,   217,  -174,  -174,  -174,  -174,  -174,
     136,   207,   227,  -174,    88,   228,    63,   229,    75,  -174,
      47,   124,   230,  -174,   111,    12,   231,   -11,  -174,  -174,
    -174,   233,   235,   225,   225,  -174,   240,   139,   237,  -174,
       3,   238,  -174,   234,     3,  -174,   130,  -174,     8,   241,
     114,   114,   183,   243,   176,   180,  -174,    38,    49,   246,
      49,   225,   225,   149,   156,   173,   236,  -174,   244,  -174,
    -174,  -174,   245,  -174,   247,   248,   249,   250,   126,   144,
     251,   239,  -174,   179,   252,  -174,  -174,   253,     3,  -174,
     254,     3,    13,  -174,   161,    17,  -174,  -174,  -174,   114,
     161,   255,  -174,   257,   -14,    35,   242,  -174,  -174,   262,
     100,   256,   114,   114,   114,  -174,   260,  -174,    66,   142,
    -174,    86,   258,   261,    54,    25,    58,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,   264,   265,   267,   268,   269,   270,
     226,    61,  -174,  -174,  -174,    61,   271,  -174,   272,  -174,
    -174,   114,   273,    35,   114,    27,   114,   114,   161,   161,
     161,    38,   114,   114,   202,  -174,    59,  -174,  -174,   213,
      69,  -174,   266,   277,   274,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,   275,   276,  -174,  -174,
      60,  -174,  -174,  -174,   203,  -174,    85,  -174,   287,   137,
    -174,  -174,   242,   242,  -174,  -174,  -174,   263,   114,  -174,
     114,  -174,   284,   260,   214,  -174,  -174,   285,  -174,  -174,
      61,   299,  -174,   278,    38,     8,   286,   114,   114,   183,
     288,    -1,   211,   114,  -174,  -174,  -174,   218,   289,  -174,
    -174,     3,  -174,    16,   300,   302,   301,   118,   279,   114,
     114,   303,   295,  -174,  -174,   306,    27,    27,   114,   114,
     204,   307,    38,  -174,   308,  -174,   309,   283,   311,  -174,
      27,   114,  -174,   310,    27,  -174
  };

  const unsigned char
   mlaskal_parser ::yydefact_[] =
  {
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     4,     7,     9,    11,    12,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    88,     0,     0,    48,     0,     2,     3,
      13,     0,     0,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     8,     0,     0,    10,     0,    86,    87,     0,
       0,     0,    87,     0,    67,     0,    14,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    41,
      43,    45,     0,    16,     0,    29,     0,     0,     0,     0,
       0,    59,   116,     0,     0,    60,    58,     0,     0,    33,
       0,     0,     0,    69,     0,   109,   119,   117,   118,     0,
       0,     0,   108,     0,    97,   101,   104,   105,   107,     0,
       0,     0,     0,     0,     0,    89,     0,    56,     0,     0,
      50,     0,     0,     0,     0,     0,     0,    40,    36,    37,
      20,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   115,    30,     0,     0,    34,     0,    70,
     112,     0,     0,   100,     0,    87,     0,     0,     0,     0,
       0,    87,     0,     0,     0,    95,     0,    93,    66,     0,
       0,    49,     0,     0,     0,    38,    39,    42,    44,    46,
      21,    22,    26,    23,    24,    25,     0,     0,   113,    63,
       0,    62,    31,    35,     0,   111,     0,    71,     0,     0,
      99,    98,   103,   102,   106,    73,    74,     0,     0,    68,
       0,    90,     0,     0,     0,    57,    53,     0,    27,    28,
       0,     0,   110,    92,    87,    87,     0,     0,     0,    87,
       0,    67,     0,     0,    96,    94,    52,     0,     0,    51,
      64,     0,    72,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    61,    70,    87,    87,     0,     0,
       0,    66,    87,    54,     0,    83,    74,     0,    68,    75,
      87,     0,    82,     0,    87,    85
  };

  const short int
   mlaskal_parser ::yypgoto_[] =
  {
    -174,  -174,  -174,   282,   316,   305,   304,   312,     0,  -174,
     210,   259,   -22,   280,  -174,   -31,   281,   200,   201,   315,
     317,   290,  -108,   -48,  -174,  -140,  -174,   -65,  -173,  -157,
     -55,   -30,  -174,   174,  -151,   -60,    89,   232,    90,   -92,
     184,  -174
  };

  const short int
   mlaskal_parser ::yydefgoto_[] =
  {
      -1,     2,    13,    76,    15,    16,    17,    18,    77,    24,
      26,    28,    30,    31,    20,    78,    79,    80,    81,    21,
      22,   128,   129,    94,    95,    96,   200,    33,   208,    34,
      35,   111,   112,   176,   174,   175,   114,   115,   116,   117,
      97,   118
  };

  const short int
   mlaskal_parser ::yytable_[] =
  {
     113,   119,   125,   102,    65,    19,   100,   120,   209,    56,
     204,   199,   160,    82,    19,    90,   -78,   -65,   179,   166,
      40,    66,   159,    69,    70,   265,    19,   167,    19,    91,
      92,    19,    75,    10,   259,    32,   -65,   -91,   -65,   -91,
     132,   133,    67,    67,   -76,    93,    67,   -65,   -65,   162,
     156,    51,   161,   158,    32,   -91,   126,   -65,   168,   -65,
      74,    75,    10,   177,   178,    32,    10,     1,   -65,     8,
       9,    10,   224,    11,    12,   127,   223,   169,   214,    53,
      48,    54,     9,    10,    29,    11,    12,   198,    92,    48,
     250,   220,   230,   274,   275,   127,   180,     3,   221,   231,
     207,    51,   181,    93,   177,     4,   215,   282,   270,   209,
     209,   285,   216,   217,    56,   247,   180,   220,    45,    58,
      46,   172,   184,   209,   233,    59,    60,   209,     5,    61,
      67,    62,    10,    63,    11,    12,   189,    64,   104,   268,
     105,   106,   107,   108,    10,   235,    11,    12,    67,   109,
      29,   236,   237,   144,   145,   238,   110,   239,   244,   240,
     245,    23,    53,   241,   101,    84,    85,    86,    87,   252,
     146,   147,   148,   149,   182,    25,   183,   255,   256,   242,
     253,    88,    27,   261,   257,   104,   150,   105,   106,   107,
     108,     6,     7,     8,     9,    10,   109,    11,    12,    29,
     271,   207,   215,   264,   -65,   152,   153,   279,   276,   277,
      32,   122,    36,   -65,   -91,   252,   -91,    37,   123,   279,
     124,   283,     7,     8,     9,    10,    38,    11,    12,     6,
      73,    74,    75,    10,   218,   218,   218,    43,   219,   232,
     278,    73,    74,    75,    10,   182,   182,   222,   248,   123,
     182,   260,   262,   196,   197,   210,   211,    44,   212,   213,
      99,    47,    50,    71,    57,    72,    68,    83,   103,   121,
      89,    98,   130,   165,   138,   139,  -113,   140,   141,   142,
     143,   171,   154,   134,   157,   170,   127,    14,   185,   151,
     155,   186,   225,   164,   190,   191,   173,   192,   193,   194,
     195,   202,   203,   226,   234,   228,   229,   243,   227,   205,
     246,   249,   251,   254,   258,   263,   -90,   -80,   266,   269,
     267,   273,   272,   -81,   -77,   280,   -84,   281,   -79,   284,
      39,    49,    52,   135,   187,    41,   188,    42,   206,   201,
       0,     0,   163,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   136,     0,   137,     0,     0,
     131
  };

  const short int
   mlaskal_parser ::yycheck_[] =
  {
      60,    61,    67,    58,    34,     5,    54,    62,   165,    31,
     161,   151,   104,    44,    14,    12,    17,     9,   126,    33,
      20,     9,     9,    34,    35,     9,    26,    41,    28,    26,
      27,    31,     7,     8,    35,    27,     9,    38,    30,    40,
      71,    72,    30,    30,    17,    42,    30,     9,    21,   109,
      98,    26,    35,   101,    27,    38,     7,    30,    23,    21,
       6,     7,     8,   123,   124,    27,     8,     3,    30,     6,
       7,     8,   180,    10,    11,    26,     7,    42,   170,    32,
      26,    34,     7,     8,    26,    10,    11,    26,    27,    26,
     230,    32,    32,   266,   267,    26,    30,    26,    39,    39,
     165,    26,    36,    42,   164,     0,   171,   280,   259,   266,
     267,   284,   172,   173,   136,   223,    30,    32,    30,     8,
      32,    21,    36,   280,    39,    14,    15,   284,    30,    18,
      30,    20,     8,    22,    10,    11,   136,    26,    24,    21,
      26,    27,    28,    29,     8,     8,    10,    11,    30,    35,
      26,    14,    15,    27,    28,    18,    42,    20,   218,    22,
     220,    27,    32,    26,    34,    26,    27,    28,    29,   234,
      26,    27,    28,    29,    32,    26,    34,   237,   238,   209,
     235,    42,    26,   243,   239,    24,    42,    26,    27,    28,
      29,     4,     5,     6,     7,     8,    35,    10,    11,    26,
     260,   266,   267,   251,    21,    26,    27,   272,   268,   269,
      27,    35,    26,    30,    38,   280,    40,    26,    38,   284,
      40,   281,     5,     6,     7,     8,    31,    10,    11,     4,
       5,     6,     7,     8,    32,    32,    32,    30,    36,    36,
      36,     5,     6,     7,     8,    32,    32,    34,    34,    38,
      32,    40,    34,    27,    28,   166,   167,    30,   168,   169,
      26,    33,    33,    30,    34,    30,    35,    27,    27,    26,
      33,    33,    26,    16,    30,    30,    37,    30,    30,    30,
      30,    19,    30,    73,    30,    43,    26,     5,    30,    38,
      37,    30,    26,    38,    30,    30,    40,    30,    30,    30,
      30,    30,    30,    26,    17,    30,    30,    44,    34,    36,
      26,    26,    13,    27,    26,    26,    38,    17,    16,    40,
      19,    26,    19,    17,    17,    17,    17,    44,    17,    19,
      14,    26,    28,    74,   134,    20,   135,    20,   164,   155,
      -1,    -1,   110,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    76,    -1,    -1,
      70
  };

  const unsigned char
   mlaskal_parser ::yystos_[] =
  {
       0,     3,    46,    26,     0,    30,     4,     5,     6,     7,
       8,    10,    11,    47,    48,    49,    50,    51,    52,    53,
      59,    64,    65,    27,    54,    26,    55,    26,    56,    26,
      57,    58,    27,    72,    74,    75,    26,    26,    31,    49,
      53,    64,    65,    30,    30,    30,    32,    33,    26,    50,
      33,    26,    51,    32,    34,    52,    57,    34,     8,    14,
      15,    18,    20,    22,    26,    76,     9,    30,    35,    34,
      35,    30,    30,     5,     6,     7,    48,    53,    60,    61,
      62,    63,    60,    27,    26,    27,    28,    29,    42,    33,
      12,    26,    27,    42,    68,    69,    70,    85,    33,    26,
      68,    34,    75,    27,    24,    26,    27,    28,    29,    35,
      42,    76,    77,    80,    81,    82,    83,    84,    86,    80,
      75,    26,    35,    38,    40,    72,     7,    26,    66,    67,
      26,    66,    60,    60,    55,    56,    58,    61,    30,    30,
      30,    30,    30,    30,    27,    28,    26,    27,    28,    29,
      42,    38,    26,    27,    30,    37,    68,    30,    68,     9,
      84,    35,    80,    82,    38,    16,    33,    41,    23,    42,
      43,    19,    21,    40,    79,    80,    78,    80,    80,    67,
      30,    36,    32,    34,    36,    30,    30,    62,    63,    53,
      30,    30,    30,    30,    30,    30,    27,    28,    26,    70,
      71,    85,    30,    30,    79,    36,    78,    72,    73,    74,
      81,    81,    83,    83,    84,    72,    80,    80,    32,    36,
      32,    39,    34,     7,    67,    26,    26,    34,    30,    30,
      32,    39,    36,    39,    17,     8,    14,    15,    18,    20,
      22,    26,    76,    44,    80,    80,    26,    67,    34,    26,
      70,    13,    72,    75,    27,    80,    80,    75,    26,    35,
      40,    80,    34,    26,    68,     9,    16,    19,    21,    40,
      79,    80,    19,    26,    73,    73,    80,    80,    36,    72,
      17,    44,    73,    80,    19,    73
  };

  const unsigned char
   mlaskal_parser ::yyr1_[] =
  {
       0,    45,    46,    47,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      68,    69,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    78,    78,    79,    79,    80,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    86,    86,    86
  };

  const unsigned char
   mlaskal_parser ::yyr2_[] =
  {
       0,     2,     5,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     3,     1,     3,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     5,     6,     6,     3,
       4,     5,     1,     3,     4,     5,     4,     4,     5,     5,
       2,     1,     3,     1,     3,     1,     3,     1,     2,     5,
       4,     7,     4,     3,     6,     5,     1,     3,     1,     1,
       1,     6,     3,     1,     3,     0,     4,     2,     5,     3,
       4,     5,     7,     5,     5,     9,     0,     4,     2,     5,
       3,     4,     7,     5,     5,     9,     2,     0,     1,     3,
       4,     1,     4,     1,     3,     1,     3,     1,     3,     3,
       2,     1,     3,     3,     1,     1,     3,     1,     1,     1,
       4,     3,     2,     1,     2,     2,     1,     1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  mlaskal_parser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "PROGRAM", "LABEL", "CONST",
  "TYPE", "VAR", "BEGIN", "END", "PROCEDURE", "FUNCTION", "ARRAY", "OF",
  "GOTO", "IF", "THEN", "ELSE", "WHILE", "DO", "REPEAT", "UNTIL", "FOR",
  "OR", "NOT", "RECORD", "IDENTIFIER", "UINT", "REAL", "STRING",
  "SEMICOLON", "DOT", "COMMA", "EQ", "COLON", "LPAR", "RPAR", "DOTDOT",
  "LSBRA", "RSBRA", "ASSIGN", "OPER_REL", "OPER_SIGNADD", "OPER_MUL",
  "FOR_DIRECTION", "$accept", "mlaskal", "block_P", "start_block",
  "const_block", "type_block", "var_block", "procedure_block", "end_block",
  "C1", "C2", "C3", "C4", "C5", "C7", "block", "const_block2",
  "type_block2", "var_block2", "procedure_header", "function_header",
  "form_par", "id_cycl", "type", "struc_type", "ord_type", "ord_type_cycl",
  "statement", "statement2", "D0", "state_cycle", "variable",
  "variable_withoutID", "ord_expr_cylc", "real_par", "expression",
  "simp_expression", "term_oper", "term", "factor", "ord_const",
  "unsigned_const_withoutID", YY_NULL
  };

#if YYDEBUG
  const unsigned short int
   mlaskal_parser ::yyrline_[] =
  {
       0,   114,   114,   121,   122,   124,   126,   129,   130,   131,
     132,   135,   136,   137,   139,   141,   144,   148,   149,   150,
     151,   177,   182,   187,   188,   189,   190,   216,   221,   226,
     229,   232,   252,   255,   257,   258,   260,   262,   263,   264,
     267,   268,   271,   272,   273,   274,   275,   276,   278,   281,
     286,   287,   292,   295,   296,   297,   300,   301,   304,   305,
     306,   309,   311,   313,   314,   317,   318,   321,   322,   325,
     326,   327,   328,   329,   330,   331,   334,   335,   338,   339,
     340,   341,   342,   343,   344,   345,   348,   348,   350,   351,
     357,   358,   360,   362,   363,   367,   368,   371,   372,   373,
     376,   377,   380,   381,   382,   385,   386,   389,   390,   391,
     392,   393,   394,   400,   401,   402,   403,   406,   407,   408
  };

  // Print the state stack on the debug stream.
  void
   mlaskal_parser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   mlaskal_parser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1464 "du3456g.cpp" // lalr1.cc:1156
#line 419 "C:\\Users\\Martin\\source\\repos\\PascalTranslater\\mlaskal\\private-src\\du3456g.y" // lalr1.cc:1157



namespace yy {

	void mlaskal_parser::error(const location_type& l, const std::string& m)
	{
		message(DUERR_SYNTAX, l, m);
	}

}

