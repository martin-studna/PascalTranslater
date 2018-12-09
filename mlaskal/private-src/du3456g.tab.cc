// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

#line 37 "du3456g.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "du3456g.tab.hh"

// User implementation prologue.

#line 51 "du3456g.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 37 "du3456g.y" // lalr1.cc:413

	// this code is emitted to du3456g.cpp

	// declare yylex here
	#include "bisonflex.hpp"
	YY_DECL;

	// allow access to context
	#include "dutables.hpp"

	// other user-required contents
	#include<assert.h>
	#include <stdlib.h>

    /* local stuff */
    using namespace mlc;


#line 72 "du3456g.tab.cc" // lalr1.cc:413


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
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 158 "du3456g.tab.cc" // lalr1.cc:479

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
    : state (empty_state)
  {}

  inline
   mlaskal_parser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   mlaskal_parser ::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
   mlaskal_parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
   mlaskal_parser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   mlaskal_parser ::symbol_number_type
   mlaskal_parser ::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
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

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
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
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
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
   mlaskal_parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
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
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

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
    yypush_ (YY_NULLPTR, 0, yyla);

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
    if (yyla.empty ())
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
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
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

#line 628 "du3456g.tab.cc" // lalr1.cc:859
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
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
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
    if (!yyla.empty ())
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
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
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
   mlaskal_parser ::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
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
       - The only way there can be no lookahead present (in yyla) is
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
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
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

    char const* yyformat = YY_NULLPTR;
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

    std::string yyres;
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


  const short int  mlaskal_parser ::yypact_ninf_ = -151;

  const signed char  mlaskal_parser ::yytable_ninf_ = -103;

  const short int
   mlaskal_parser ::yypact_[] =
  {
      72,    31,    93,    79,  -151,   192,    95,   121,   195,   215,
      10,   225,   226,   161,   203,  -151,  -151,  -151,  -151,  -151,
     220,   122,   223,  -151,   113,   196,    63,   222,    80,  -151,
     139,   102,   224,  -151,   103,    18,   227,   126,  -151,  -151,
    -151,   229,   230,    17,    17,  -151,   234,   148,   231,  -151,
       3,   232,  -151,   228,     3,  -151,   147,  -151,    10,   236,
     107,   107,   138,   240,   177,   166,  -151,    33,    57,   241,
      57,    17,    17,   121,   195,   215,   219,  -151,   238,  -151,
    -151,  -151,   239,  -151,  -151,  -151,  -151,  -151,   216,  -151,
     242,   148,   218,   233,  -151,   221,   243,  -151,  -151,   237,
       3,  -151,   245,     3,    23,  -151,   156,    89,  -151,  -151,
    -151,   107,   156,   244,  -151,   255,    51,    44,   214,  -151,
    -151,   257,    84,   246,   107,   107,   107,  -151,   251,  -151,
      49,   200,  -151,   142,   248,   249,    70,    54,     9,  -151,
    -151,  -151,  -151,  -151,  -151,   250,     7,  -151,  -151,  -151,
       7,   253,  -151,   254,  -151,  -151,   107,   252,    44,   107,
      29,   107,   107,   156,   156,   156,    33,   107,   107,   184,
    -151,    65,  -151,  -151,   201,    74,  -151,   259,   261,   247,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,    87,  -151,
    -151,  -151,   186,  -151,    98,  -151,   272,   136,  -151,  -151,
     214,   214,  -151,  -151,  -151,   256,   107,  -151,   107,  -151,
     264,   251,   204,  -151,  -151,   265,     7,   279,  -151,   258,
      33,    10,   266,   107,   107,   138,   268,     1,   199,   107,
    -151,  -151,  -151,   208,   269,  -151,  -151,     3,  -151,    38,
     280,   282,   283,   111,   263,   107,   107,   285,   273,  -151,
    -151,   284,    29,    29,   107,   107,   187,   288,    33,  -151,
     289,  -151,   290,   267,   291,  -151,    29,   107,  -151,   293,
      29,  -151
  };

  const unsigned char
   mlaskal_parser ::yydefact_[] =
  {
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,     4,     7,     9,    11,    12,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    77,     0,     0,    37,     0,     2,     3,
      13,     0,     0,     0,     0,     5,     0,     0,     0,     6,
       0,     0,     8,     0,     0,    10,     0,    75,    76,     0,
       0,     0,    76,     0,    56,     0,    14,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    30,
      32,    34,     0,    16,   112,   109,   110,   111,     0,   113,
       0,     0,     0,    48,   105,     0,     0,    49,    47,     0,
       0,    22,     0,     0,     0,    58,     0,    98,   108,   106,
     107,     0,     0,     0,    97,     0,    86,    90,    93,    94,
      96,     0,     0,     0,     0,     0,     0,    78,     0,    45,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    29,
      25,    26,   114,   115,    17,     0,     0,   103,   104,    19,
       0,     0,    23,     0,    59,   101,     0,     0,    89,     0,
      76,     0,     0,     0,     0,     0,    76,     0,     0,     0,
      84,     0,    82,    55,     0,     0,    38,     0,     0,     0,
      27,    28,    31,    33,    35,    18,   102,    52,     0,    51,
      20,    24,     0,   100,     0,    60,     0,     0,    88,    87,
      92,    91,    95,    62,    63,     0,     0,    57,     0,    79,
       0,     0,     0,    46,    42,     0,     0,     0,    99,    81,
      76,    76,     0,     0,     0,    76,     0,    56,     0,     0,
      85,    83,    41,     0,     0,    40,    53,     0,    61,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      50,    59,    76,    76,     0,     0,     0,    55,    76,    43,
       0,    72,    63,     0,    57,    64,    76,     0,    71,     0,
      76,    74
  };

  const short int
   mlaskal_parser ::yypgoto_[] =
  {
    -151,  -151,  -151,   304,   296,   287,   286,   292,     0,  -151,
     260,   262,   -23,   270,  -151,   -28,   271,   179,   180,   298,
     299,   274,  -117,   -48,  -151,  -134,  -151,   -65,  -113,  -150,
     -55,   -30,  -151,   157,  -147,   -60,    88,   209,    82,   -93,
     170,  -151,  -151,   235
  };

  const short int
   mlaskal_parser ::yydefgoto_[] =
  {
      -1,     2,    13,    76,    15,    16,    17,    18,    77,    24,
      26,    28,    30,    31,    20,    78,    79,    80,    81,    21,
      22,   130,   131,    96,    97,    98,   188,    33,   196,    34,
      35,   113,   114,   171,   169,   170,   116,   117,   118,   119,
      99,   120,    89,    90
  };

  const short int
   mlaskal_parser ::yytable_[] =
  {
     115,   121,   127,   104,    65,    19,   102,   122,    56,   192,
     197,   174,   187,   155,    19,    92,    82,    10,   -67,   -54,
      40,     6,    73,    74,    75,    10,    19,    66,    19,    93,
      94,    19,   154,   186,    94,    29,   245,    32,   -54,   -80,
     -54,   -80,   -54,   134,   135,    95,   -65,   251,    67,    95,
     -54,   157,   151,    67,   -54,   153,    32,     3,   212,   -54,
      32,    75,    10,   -54,   128,   172,   173,   163,    67,     8,
       9,    10,   202,    11,    12,     1,    74,    75,    10,   175,
      51,   211,   236,   129,   161,   176,   164,     9,    10,    48,
      11,    12,   162,     4,   233,   195,    48,   208,   256,   172,
     129,   203,   197,   197,   209,   167,    51,   204,   205,     5,
      10,    58,    11,    12,    67,    56,   197,    59,    60,   216,
     197,    61,    23,    62,   156,    63,   217,   -80,    29,    64,
     208,   106,   254,   107,   108,   109,   110,   219,   184,   260,
     261,    67,   111,    45,   221,    46,   230,    25,   231,   112,
     222,   223,    43,   268,   224,   238,   225,   271,   226,   -54,
      69,    70,   227,   241,   242,    32,   239,   228,   -54,   247,
     243,    53,   175,    54,    84,    85,    86,    87,   179,    53,
     106,   103,   107,   108,   109,   110,   257,   195,   203,   250,
      88,   111,    38,   265,   262,   263,     6,     7,     8,     9,
      10,   238,    11,    12,   125,   265,   126,   269,     7,     8,
       9,    10,   124,    11,    12,   -80,   206,   -80,   206,   206,
     207,    27,   218,   264,    73,    74,    75,    10,    10,    47,
      11,    12,   177,   177,   178,   210,   177,   125,   234,   246,
     177,    29,   248,   142,   143,   200,   201,   147,   148,   198,
     199,    36,    37,    44,   101,    50,   146,   165,    57,    71,
      72,    83,    68,   105,    91,   100,   123,   132,   140,   141,
    -102,   160,   144,   149,   150,   152,   166,   129,   180,   181,
     185,   215,   159,   190,   191,   213,   168,   214,   193,   220,
     232,   235,   237,   240,   244,   249,   -79,   -69,   252,   259,
     229,   -70,   253,   255,   258,   -66,   266,   -73,   -68,    14,
      39,   267,   270,    49,    52,   182,   194,   183,    41,    42,
     189,   158,     0,    55,     0,     0,   145,     0,     0,     0,
       0,     0,     0,   136,     0,     0,   137,     0,     0,     0,
       0,     0,     0,     0,   133,   138,     0,   139
  };

  const short int
   mlaskal_parser ::yycheck_[] =
  {
      60,    61,    67,    58,    34,     5,    54,    62,    31,   156,
     160,   128,   146,   106,    14,    12,    44,     8,    17,     9,
      20,     4,     5,     6,     7,     8,    26,     9,    28,    26,
      27,    31,     9,    26,    27,    26,    35,    27,     9,    38,
      30,    40,     9,    71,    72,    42,    17,     9,    30,    42,
      21,   111,   100,    30,    21,   103,    27,    26,   175,    30,
      27,     7,     8,    30,     7,   125,   126,    23,    30,     6,
       7,     8,   165,    10,    11,     3,     6,     7,     8,    30,
      26,     7,   216,    26,    33,    36,    42,     7,     8,    26,
      10,    11,    41,     0,   211,   160,    26,    32,   245,   159,
      26,   166,   252,   253,    39,    21,    26,   167,   168,    30,
       8,     8,    10,    11,    30,   138,   266,    14,    15,    32,
     270,    18,    27,    20,    35,    22,    39,    38,    26,    26,
      32,    24,    21,    26,    27,    28,    29,    39,   138,   252,
     253,    30,    35,    30,     8,    32,   206,    26,   208,    42,
      14,    15,    30,   266,    18,   220,    20,   270,    22,    21,
      34,    35,    26,   223,   224,    27,   221,   197,    30,   229,
     225,    32,    30,    34,    26,    27,    28,    29,    36,    32,
      24,    34,    26,    27,    28,    29,   246,   252,   253,   237,
      42,    35,    31,   258,   254,   255,     4,     5,     6,     7,
       8,   266,    10,    11,    38,   270,    40,   267,     5,     6,
       7,     8,    35,    10,    11,    38,    32,    40,    32,    32,
      36,    26,    36,    36,     5,     6,     7,     8,     8,    33,
      10,    11,    32,    32,    34,    34,    32,    38,    34,    40,
      32,    26,    34,    27,    28,   163,   164,    26,    27,   161,
     162,    26,    26,    30,    26,    33,    38,    43,    34,    30,
      30,    27,    35,    27,    33,    33,    26,    26,    30,    30,
      37,    16,    30,    30,    37,    30,    19,    26,    30,    30,
      30,    34,    38,    30,    30,    26,    40,    26,    36,    17,
      26,    26,    13,    27,    26,    26,    38,    17,    16,    26,
      44,    17,    19,    40,    19,    17,    17,    17,    17,     5,
      14,    44,    19,    26,    28,   136,   159,   137,    20,    20,
     150,   112,    -1,    31,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    75,    -1,    76
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
      62,    63,    60,    27,    26,    27,    28,    29,    42,    87,
      88,    33,    12,    26,    27,    42,    68,    69,    70,    85,
      33,    26,    68,    34,    75,    27,    24,    26,    27,    28,
      29,    35,    42,    76,    77,    80,    81,    82,    83,    84,
      86,    80,    75,    26,    35,    38,    40,    72,     7,    26,
      66,    67,    26,    66,    60,    60,    55,    56,    58,    61,
      30,    30,    27,    28,    30,    88,    38,    26,    27,    30,
      37,    68,    30,    68,     9,    84,    35,    80,    82,    38,
      16,    33,    41,    23,    42,    43,    19,    21,    40,    79,
      80,    78,    80,    80,    67,    30,    36,    32,    34,    36,
      30,    30,    62,    63,    53,    30,    26,    70,    71,    85,
      30,    30,    79,    36,    78,    72,    73,    74,    81,    81,
      83,    83,    84,    72,    80,    80,    32,    36,    32,    39,
      34,     7,    67,    26,    26,    34,    32,    39,    36,    39,
      17,     8,    14,    15,    18,    20,    22,    26,    76,    44,
      80,    80,    26,    67,    34,    26,    70,    13,    72,    75,
      27,    80,    80,    75,    26,    35,    40,    80,    34,    26,
      68,     9,    16,    19,    21,    40,    79,    80,    19,    26,
      73,    73,    80,    80,    36,    72,    17,    44,    73,    80,
      19,    73
  };

  const unsigned char
   mlaskal_parser ::yyr1_[] =
  {
       0,    45,    46,    47,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      69,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    77,    78,    78,    79,    79,    80,    80,    80,    81,
      81,    82,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    85,    86,    86,    86,    87,
      87,    87,    87,    88,    88,    88
  };

  const unsigned char
   mlaskal_parser ::yyr2_[] =
  {
       0,     2,     5,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     3,     1,     3,     4,     5,     4,
       5,     1,     3,     4,     5,     4,     4,     5,     5,     2,
       1,     3,     1,     3,     1,     3,     1,     2,     5,     4,
       7,     4,     3,     6,     5,     1,     3,     1,     1,     1,
       6,     3,     1,     3,     0,     4,     2,     5,     3,     4,
       5,     7,     5,     5,     9,     0,     4,     2,     5,     3,
       4,     7,     5,     5,     9,     2,     0,     1,     3,     4,
       1,     4,     1,     3,     1,     3,     1,     3,     3,     2,
       1,     3,     3,     1,     1,     3,     1,     1,     1,     4,
       3,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2
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
  "unsigned_const_withoutID", "unsigned_const", "constant", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   mlaskal_parser ::yyrline_[] =
  {
       0,   112,   112,   119,   120,   122,   124,   125,   126,   127,
     128,   129,   130,   131,   133,   135,   136,   138,   139,   141,
     142,   145,   146,   148,   149,   151,   152,   153,   154,   157,
     158,   161,   162,   163,   164,   165,   166,   168,   169,   172,
     173,   176,   177,   178,   179,   182,   183,   186,   187,   188,
     191,   193,   195,   196,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   224,   224,   228,   229,   235,
     236,   238,   240,   241,   245,   246,   249,   250,   251,   254,
     255,   258,   259,   260,   263,   264,   267,   268,   269,   270,
     271,   272,   278,   279,   280,   281,   284,   285,   286,   289,
     290,   291,   292,   296,   297,   298
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
#line 1194 "du3456g.tab.cc" // lalr1.cc:1167
#line 305 "du3456g.y" // lalr1.cc:1168



namespace yy {

	void mlaskal_parser::error(const location_type& l, const std::string& m)
	{
		message(DUERR_SYNTAX, l, m);
	}

}

