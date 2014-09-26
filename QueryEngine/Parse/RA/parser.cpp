#define YY_Parser_h_included

/*  A Bison++ parser, made from parser.y  */

 /* with Bison++ version bison++ version 1.21-45, adapted from GNU Bison by coetmeur@icdc.fr
  */


#line 1 "/usr/local/lib/bison.cc"
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* HEADER SECTION */
#if defined( _MSDOS ) || defined(MSDOS) || defined(__MSDOS__) 
#define __MSDOS_AND_ALIKE
#endif
#if defined(_WINDOWS) && defined(_MSC_VER)
#define __HAVE_NO_ALLOCA
#define __MSDOS_AND_ALIKE
#endif

#ifndef alloca
#if defined( __GNUC__)
#define alloca __builtin_alloca

#elif (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)  || defined (__sgi)
#include <alloca.h>

#elif defined (__MSDOS_AND_ALIKE)
#include <malloc.h>
#ifndef __TURBOC__
/* MS C runtime lib */
#define alloca _alloca
#endif

#elif defined(_AIX)
#include <malloc.h>
#pragma alloca

#elif defined(__hpux)
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */

#endif /* not _AIX  not MSDOS, or __TURBOC__ or _AIX, not sparc.  */
#endif /* alloca not defined.  */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif
#ifdef __cplusplus
#ifndef YY_USE_CLASS
#define YY_USE_CLASS
#endif
#else
#ifndef __STDC__
#define const
#endif
#endif
#include <stdio.h>
#define YYBISON 1  

/* #line 73 "/usr/local/lib/bison.cc" */
#line 85 "parser.cpp"
#define YY_Parser_CLASS  RAParser
#define YY_Parser_LSP_NEEDED 
#define YY_Parser_MEMBERS                  \
    virtual ~RAParser()   {} \
    int parse(const string & inputStr, RelAlgNode *& parseRoot, string &lastParsed) { istringstream ss(inputStr); lexer.switch_streams(&ss,0);  yyparse(parseRoot); lastParsed = lexer.YYText(); return yynerrs; } \
    private:                   \
       yyFlexLexer lexer;
#define YY_Parser_LEX_BODY  {return lexer.yylex();}
#define YY_Parser_ERROR_BODY  {cerr << "Syntax error on line " << lexer.lineno() << ". Last word parsed:" << lexer.YYText() << endl;}
#line 12 "parser.y"

#include <iostream>
#include <fstream>
#include <FlexLexer.h>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <cassert>

// RA Parse Tree Nodes
#include "ast/RelAlgNode.h"
#include "ast/UnaryOp.h"
#include "ast/BinaryOp.h"

#include "ast/AggrExpr.h"
#include "ast/AggrList.h"
#include "ast/AntijoinOp.h"
#include "ast/Attribute.h"
#include "ast/AttrList.h"
#include "ast/Comparison.h"
#include "ast/DiffOp.h"
#include "ast/Expr.h"
#include "ast/ExtendOp.h"
#include "ast/GroupbyOp.h"
#include "ast/JoinOp.h"
#include "ast/MathExpr.h"
#include "ast/OuterjoinOp.h"
#include "ast/Predicate.h"
#include "ast/ProductOp.h"
#include "ast/Program.h"
#include "ast/ProjectOp.h"
#include "ast/Relation.h"
#include "ast/RelExpr.h"
#include "ast/RelExprList.h"
#include "ast/RenameOp.h"
#include "ast/ScanOp.h"
#include "ast/SelectOp.h"
#include "ast/SemijoinOp.h"
#include "ast/SortOp.h"
#include "ast/UnionOp.h"

using namespace std;
using namespace RA_Namespace;

extern RelAlgNode* parse_root;

// define stack element type to be a 
// pointer to an AST node	
#define YY_Parser_STYPE RelAlgNode*
#define YY_Parser_PARSE_PARAM RelAlgNode*& parseRoot

// Variables declared in RelAlgebraLexer.l
extern std::vector<std::string> strData;
extern std::vector<long int> intData;
extern std::vector<double> realData;



#line 73 "/usr/local/lib/bison.cc"
/* %{ and %header{ and %union, during decl */
#define YY_Parser_BISON 1
#ifndef YY_Parser_COMPATIBILITY
#ifndef YY_USE_CLASS
#define  YY_Parser_COMPATIBILITY 1
#else
#define  YY_Parser_COMPATIBILITY 0
#endif
#endif

#if YY_Parser_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YYLTYPE
#ifndef YY_Parser_LTYPE
#define YY_Parser_LTYPE YYLTYPE
#endif
#endif
#ifdef YYSTYPE
#ifndef YY_Parser_STYPE 
#define YY_Parser_STYPE YYSTYPE
#endif
#endif
#ifdef YYDEBUG
#ifndef YY_Parser_DEBUG
#define  YY_Parser_DEBUG YYDEBUG
#endif
#endif
#ifdef YY_Parser_STYPE
#ifndef yystype
#define yystype YY_Parser_STYPE
#endif
#endif
/* use goto to be compatible */
#ifndef YY_Parser_USE_GOTO
#define YY_Parser_USE_GOTO 1
#endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_Parser_USE_GOTO
#define YY_Parser_USE_GOTO 0
#endif

#ifndef YY_Parser_PURE

/* #line 117 "/usr/local/lib/bison.cc" */
#line 202 "parser.cpp"

#line 117 "/usr/local/lib/bison.cc"
/*  YY_Parser_PURE */
#endif

/* section apres lecture def, avant lecture grammaire S2 */

/* #line 121 "/usr/local/lib/bison.cc" */
#line 211 "parser.cpp"

#line 121 "/usr/local/lib/bison.cc"
/* prefix */
#ifndef YY_Parser_DEBUG

/* #line 123 "/usr/local/lib/bison.cc" */
#line 218 "parser.cpp"

#line 123 "/usr/local/lib/bison.cc"
/* YY_Parser_DEBUG */
#endif


#ifndef YY_Parser_LSP_NEEDED

/* #line 128 "/usr/local/lib/bison.cc" */
#line 228 "parser.cpp"

#line 128 "/usr/local/lib/bison.cc"
 /* YY_Parser_LSP_NEEDED*/
#endif



/* DEFAULT LTYPE*/
#ifdef YY_Parser_LSP_NEEDED
#ifndef YY_Parser_LTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YY_Parser_LTYPE yyltype
#endif
#endif
/* DEFAULT STYPE*/
      /* We used to use `unsigned long' as YY_Parser_STYPE on MSDOS,
	 but it seems better to be consistent.
	 Most programs should declare their own type anyway.  */

#ifndef YY_Parser_STYPE
#define YY_Parser_STYPE int
#endif
/* DEFAULT MISCELANEOUS */
#ifndef YY_Parser_PARSE
#define YY_Parser_PARSE yyparse
#endif
#ifndef YY_Parser_LEX
#define YY_Parser_LEX yylex
#endif
#ifndef YY_Parser_LVAL
#define YY_Parser_LVAL yylval
#endif
#ifndef YY_Parser_LLOC
#define YY_Parser_LLOC yylloc
#endif
#ifndef YY_Parser_CHAR
#define YY_Parser_CHAR yychar
#endif
#ifndef YY_Parser_NERRS
#define YY_Parser_NERRS yynerrs
#endif
#ifndef YY_Parser_DEBUG_FLAG
#define YY_Parser_DEBUG_FLAG yydebug
#endif
#ifndef YY_Parser_ERROR
#define YY_Parser_ERROR yyerror
#endif
#ifndef YY_Parser_PARSE_PARAM
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
#define YY_Parser_PARSE_PARAM
#ifndef YY_Parser_PARSE_PARAM_DEF
#define YY_Parser_PARSE_PARAM_DEF
#endif
#endif
#endif
#endif
#ifndef YY_Parser_PARSE_PARAM
#define YY_Parser_PARSE_PARAM void
#endif
#endif
#if YY_Parser_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YY_Parser_LTYPE
#ifndef YYLTYPE
#define YYLTYPE YY_Parser_LTYPE
#else
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
#endif
#endif
#ifndef YYSTYPE
#define YYSTYPE YY_Parser_STYPE
#else
/* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
#endif
#ifdef YY_Parser_PURE
#ifndef YYPURE
#define YYPURE YY_Parser_PURE
#endif
#endif
#ifdef YY_Parser_DEBUG
#ifndef YYDEBUG
#define YYDEBUG YY_Parser_DEBUG 
#endif
#endif
#ifndef YY_Parser_ERROR_VERBOSE
#ifdef YYERROR_VERBOSE
#define YY_Parser_ERROR_VERBOSE YYERROR_VERBOSE
#endif
#endif
#ifndef YY_Parser_LSP_NEEDED
#ifdef YYLSP_NEEDED
#define YY_Parser_LSP_NEEDED YYLSP_NEEDED
#endif
#endif
#endif
#ifndef YY_USE_CLASS
/* TOKEN C */

/* #line 236 "/usr/local/lib/bison.cc" */
#line 341 "parser.cpp"
#define	PLUS	258
#define	MINUS	259
#define	MULTIPLY	260
#define	DIVIDE	261
#define	OR	262
#define	AND	263
#define	NOT	264
#define	NEQ	265
#define	EQ	266
#define	GT	267
#define	GTE	268
#define	LT	269
#define	LTE	270
#define	SCAN	271
#define	SELECT	272
#define	PROJECT	273
#define	SORT	274
#define	RENAME	275
#define	EXTEND	276
#define	GROUPBY	277
#define	PRODUCT	278
#define	JOIN	279
#define	SEMIJOIN	280
#define	ANTIJOIN	281
#define	OUTERJOIN	282
#define	UNION	283
#define	DIFF	284
#define	INTERSECTION	285
#define	MAX	286
#define	MIN	287
#define	COUNT	288
#define	SUM	289
#define	AVG	290
#define	MAX_DISTINCT	291
#define	MIN_DISTINCT	292
#define	COUNT_DISTINCT	293
#define	SUM_DISTINCT	294
#define	AVG_DISTINCT	295
#define	NAME	296
#define	INTVAL	297
#define	FLOATVAL	298
#define	STRVAL	299


#line 236 "/usr/local/lib/bison.cc"
 /* #defines tokens */
#else
/* CLASS */
#ifndef YY_Parser_CLASS
#define YY_Parser_CLASS Parser
#endif
#ifndef YY_Parser_INHERIT
#define YY_Parser_INHERIT
#endif
#ifndef YY_Parser_MEMBERS
#define YY_Parser_MEMBERS 
#endif
#ifndef YY_Parser_LEX_BODY
#define YY_Parser_LEX_BODY  
#endif
#ifndef YY_Parser_ERROR_BODY
#define YY_Parser_ERROR_BODY  
#endif
#ifndef YY_Parser_CONSTRUCTOR_PARAM
#define YY_Parser_CONSTRUCTOR_PARAM
#endif
#ifndef YY_Parser_CONSTRUCTOR_CODE
#define YY_Parser_CONSTRUCTOR_CODE
#endif
#ifndef YY_Parser_CONSTRUCTOR_INIT
#define YY_Parser_CONSTRUCTOR_INIT
#endif
/* choose between enum and const */
#ifndef YY_Parser_USE_CONST_TOKEN
#define YY_Parser_USE_CONST_TOKEN 0
/* yes enum is more compatible with flex,  */
/* so by default we use it */ 
#endif
#if YY_Parser_USE_CONST_TOKEN != 0
#ifndef YY_Parser_ENUM_TOKEN
#define YY_Parser_ENUM_TOKEN yy_Parser_enum_token
#endif
#endif

class YY_Parser_CLASS YY_Parser_INHERIT
{
public: 
#if YY_Parser_USE_CONST_TOKEN != 0
/* static const int token ... */

/* #line 280 "/usr/local/lib/bison.cc" */
#line 433 "parser.cpp"
static const int PLUS;
static const int MINUS;
static const int MULTIPLY;
static const int DIVIDE;
static const int OR;
static const int AND;
static const int NOT;
static const int NEQ;
static const int EQ;
static const int GT;
static const int GTE;
static const int LT;
static const int LTE;
static const int SCAN;
static const int SELECT;
static const int PROJECT;
static const int SORT;
static const int RENAME;
static const int EXTEND;
static const int GROUPBY;
static const int PRODUCT;
static const int JOIN;
static const int SEMIJOIN;
static const int ANTIJOIN;
static const int OUTERJOIN;
static const int UNION;
static const int DIFF;
static const int INTERSECTION;
static const int MAX;
static const int MIN;
static const int COUNT;
static const int SUM;
static const int AVG;
static const int MAX_DISTINCT;
static const int MIN_DISTINCT;
static const int COUNT_DISTINCT;
static const int SUM_DISTINCT;
static const int AVG_DISTINCT;
static const int NAME;
static const int INTVAL;
static const int FLOATVAL;
static const int STRVAL;


#line 280 "/usr/local/lib/bison.cc"
 /* decl const */
#else
enum YY_Parser_ENUM_TOKEN { YY_Parser_NULL_TOKEN=0

/* #line 283 "/usr/local/lib/bison.cc" */
#line 484 "parser.cpp"
	,PLUS=258
	,MINUS=259
	,MULTIPLY=260
	,DIVIDE=261
	,OR=262
	,AND=263
	,NOT=264
	,NEQ=265
	,EQ=266
	,GT=267
	,GTE=268
	,LT=269
	,LTE=270
	,SCAN=271
	,SELECT=272
	,PROJECT=273
	,SORT=274
	,RENAME=275
	,EXTEND=276
	,GROUPBY=277
	,PRODUCT=278
	,JOIN=279
	,SEMIJOIN=280
	,ANTIJOIN=281
	,OUTERJOIN=282
	,UNION=283
	,DIFF=284
	,INTERSECTION=285
	,MAX=286
	,MIN=287
	,COUNT=288
	,SUM=289
	,AVG=290
	,MAX_DISTINCT=291
	,MIN_DISTINCT=292
	,COUNT_DISTINCT=293
	,SUM_DISTINCT=294
	,AVG_DISTINCT=295
	,NAME=296
	,INTVAL=297
	,FLOATVAL=298
	,STRVAL=299


#line 283 "/usr/local/lib/bison.cc"
 /* enum token */
     }; /* end of enum declaration */
#endif
public:
 int YY_Parser_PARSE (YY_Parser_PARSE_PARAM);
 virtual void YY_Parser_ERROR(const char *msg) YY_Parser_ERROR_BODY;
#ifdef YY_Parser_PURE
#ifdef YY_Parser_LSP_NEEDED
 virtual int  YY_Parser_LEX (YY_Parser_STYPE *YY_Parser_LVAL,YY_Parser_LTYPE *YY_Parser_LLOC) YY_Parser_LEX_BODY;
#else
 virtual int  YY_Parser_LEX (YY_Parser_STYPE *YY_Parser_LVAL) YY_Parser_LEX_BODY;
#endif
#else
 virtual int YY_Parser_LEX() YY_Parser_LEX_BODY;
 YY_Parser_STYPE YY_Parser_LVAL;
#ifdef YY_Parser_LSP_NEEDED
 YY_Parser_LTYPE YY_Parser_LLOC;
#endif
 int   YY_Parser_NERRS;
 int    YY_Parser_CHAR;
#endif
#if YY_Parser_DEBUG != 0
 int YY_Parser_DEBUG_FLAG;   /*  nonzero means print parse trace     */
#endif
public:
 YY_Parser_CLASS(YY_Parser_CONSTRUCTOR_PARAM);
public:
 YY_Parser_MEMBERS 
};
/* other declare folow */
#if YY_Parser_USE_CONST_TOKEN != 0

/* #line 314 "/usr/local/lib/bison.cc" */
#line 563 "parser.cpp"
const int YY_Parser_CLASS::PLUS=258;
const int YY_Parser_CLASS::MINUS=259;
const int YY_Parser_CLASS::MULTIPLY=260;
const int YY_Parser_CLASS::DIVIDE=261;
const int YY_Parser_CLASS::OR=262;
const int YY_Parser_CLASS::AND=263;
const int YY_Parser_CLASS::NOT=264;
const int YY_Parser_CLASS::NEQ=265;
const int YY_Parser_CLASS::EQ=266;
const int YY_Parser_CLASS::GT=267;
const int YY_Parser_CLASS::GTE=268;
const int YY_Parser_CLASS::LT=269;
const int YY_Parser_CLASS::LTE=270;
const int YY_Parser_CLASS::SCAN=271;
const int YY_Parser_CLASS::SELECT=272;
const int YY_Parser_CLASS::PROJECT=273;
const int YY_Parser_CLASS::SORT=274;
const int YY_Parser_CLASS::RENAME=275;
const int YY_Parser_CLASS::EXTEND=276;
const int YY_Parser_CLASS::GROUPBY=277;
const int YY_Parser_CLASS::PRODUCT=278;
const int YY_Parser_CLASS::JOIN=279;
const int YY_Parser_CLASS::SEMIJOIN=280;
const int YY_Parser_CLASS::ANTIJOIN=281;
const int YY_Parser_CLASS::OUTERJOIN=282;
const int YY_Parser_CLASS::UNION=283;
const int YY_Parser_CLASS::DIFF=284;
const int YY_Parser_CLASS::INTERSECTION=285;
const int YY_Parser_CLASS::MAX=286;
const int YY_Parser_CLASS::MIN=287;
const int YY_Parser_CLASS::COUNT=288;
const int YY_Parser_CLASS::SUM=289;
const int YY_Parser_CLASS::AVG=290;
const int YY_Parser_CLASS::MAX_DISTINCT=291;
const int YY_Parser_CLASS::MIN_DISTINCT=292;
const int YY_Parser_CLASS::COUNT_DISTINCT=293;
const int YY_Parser_CLASS::SUM_DISTINCT=294;
const int YY_Parser_CLASS::AVG_DISTINCT=295;
const int YY_Parser_CLASS::NAME=296;
const int YY_Parser_CLASS::INTVAL=297;
const int YY_Parser_CLASS::FLOATVAL=298;
const int YY_Parser_CLASS::STRVAL=299;


#line 314 "/usr/local/lib/bison.cc"
 /* const YY_Parser_CLASS::token */
#endif
/*apres const  */
YY_Parser_CLASS::YY_Parser_CLASS(YY_Parser_CONSTRUCTOR_PARAM) YY_Parser_CONSTRUCTOR_INIT
{
#if YY_Parser_DEBUG != 0
YY_Parser_DEBUG_FLAG=0;
#endif
YY_Parser_CONSTRUCTOR_CODE;
};
#endif

/* #line 325 "/usr/local/lib/bison.cc" */
#line 622 "parser.cpp"


#define	YYFINAL		230
#define	YYFLAG		-32768
#define	YYNTBASE	54

#define YYTRANSLATE(x) ((unsigned)(x) <= 299 ? yytranslate[x] : 68)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
    47,     2,     2,    48,     2,    53,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    45,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    51,     2,    52,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    49,     2,    50,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YY_Parser_DEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     6,    10,    12,    14,    18,    20,    31,
    38,    47,    56,    65,    74,    87,    99,   111,   118,   125,
   132,   139,   148,   157,   166,   175,   177,   179,   181,   183,
   187,   192,   197,   202,   207,   212,   217,   222,   227,   232,
   237,   239,   243,   245,   249,   253,   257,   260,   264,   266,
   270,   274,   278,   282,   286,   288,   290,   292,   294,   298,
   302,   306,   310,   314,   318
};

static const short yyrhs[] = {    55,
     0,     0,    56,    45,     0,    55,    56,    45,     0,    57,
     0,    58,     0,    46,    56,    47,     0,    67,     0,    16,
    46,    56,    48,    49,    62,    50,    48,    64,    47,     0,
    17,    46,    56,    48,    64,    47,     0,    18,    46,    56,
    48,    49,    62,    50,    47,     0,    19,    46,    56,    48,
    51,    62,    52,    47,     0,    20,    46,    56,    48,    41,
    48,    41,    47,     0,    21,    46,    56,    48,    59,    48,
    41,    47,     0,    22,    46,    56,    48,    49,    62,    50,
    48,    49,    60,    50,    47,     0,    22,    46,    56,    48,
    49,    50,    48,    49,    60,    50,    47,     0,    22,    46,
    56,    48,    49,    62,    50,    48,    49,    50,    47,     0,
    28,    46,    56,    48,    56,    47,     0,    29,    46,    56,
    48,    56,    47,     0,    23,    46,    56,    48,    56,    47,
     0,    30,    46,    56,    48,    56,    47,     0,    24,    46,
    56,    48,    56,    48,    64,    47,     0,    25,    46,    56,
    48,    56,    48,    64,    47,     0,    27,    46,    56,    48,
    56,    48,    64,    47,     0,    26,    46,    56,    48,    56,
    48,    64,    47,     0,    65,     0,    64,     0,    44,     0,
    61,     0,    60,    48,    61,     0,    31,    46,    63,    47,
     0,    32,    46,    63,    47,     0,    33,    46,    63,    47,
     0,    34,    46,    63,    47,     0,    35,    46,    63,    47,
     0,    36,    46,    63,    47,     0,    37,    46,    63,    47,
     0,    38,    46,    63,    47,     0,    39,    46,    63,    47,
     0,    40,    46,    63,    47,     0,    63,     0,    62,    48,
    63,     0,    41,     0,    41,    53,    41,     0,    64,     7,
    64,     0,    64,     8,    64,     0,     9,    64,     0,    46,
    64,    47,     0,    66,     0,    65,     3,    65,     0,    65,
     4,    65,     0,    65,     5,    65,     0,    65,     6,    65,
     0,    46,    65,    47,     0,    63,     0,    61,     0,    42,
     0,    43,     0,    65,    10,    65,     0,    65,    11,    65,
     0,    65,    12,    65,     0,    65,    13,    65,     0,    65,
    14,    65,     0,    65,    15,    65,     0,    41,     0
};

#endif

#if YY_Parser_DEBUG != 0
static const short yyrline[] = { 0,
    89,    91,    94,    96,    99,   101,   102,   103,   106,   108,
   109,   110,   111,   112,   113,   114,   115,   118,   120,   121,
   122,   123,   124,   125,   126,   129,   131,   132,   135,   137,
   140,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   153,   155,   158,   160,   163,   165,   166,   167,   168,   172,
   174,   175,   176,   177,   178,   179,   180,   181,   184,   186,
   187,   188,   189,   190,   193
};

static const char * const yytname[] = {   "$","error","$illegal.","PLUS","MINUS",
"MULTIPLY","DIVIDE","OR","AND","NOT","NEQ","EQ","GT","GTE","LT","LTE","SCAN",
"SELECT","PROJECT","SORT","RENAME","EXTEND","GROUPBY","PRODUCT","JOIN","SEMIJOIN",
"ANTIJOIN","OUTERJOIN","UNION","DIFF","INTERSECTION","MAX","MIN","COUNT","SUM",
"AVG","MAX_DISTINCT","MIN_DISTINCT","COUNT_DISTINCT","SUM_DISTINCT","AVG_DISTINCT",
"NAME","INTVAL","FLOATVAL","STRVAL","';'","'('","')'","','","'{'","'}'","'['",
"']'","'.'","Program","RelExprList","RelExpr","UnaryOp","BinaryOp","Expr","AggrList",
"AggrExpr","AttrList","Attribute","Predicate","MathExpr","Comparison","Relation",
""
};
#endif

static const short yyr1[] = {     0,
    54,    54,    55,    55,    56,    56,    56,    56,    57,    57,
    57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
    58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
    61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
    62,    62,    63,    63,    64,    64,    64,    64,    64,    65,
    65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
    66,    66,    66,    66,    67
};

static const short yyr2[] = {     0,
     1,     0,     2,     3,     1,     1,     3,     1,    10,     6,
     8,     8,     8,     8,    12,    11,    11,     6,     6,     6,
     6,     8,     8,     8,     8,     1,     1,     1,     1,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     1,     3,     1,     3,     3,     3,     2,     3,     1,     3,
     3,     3,     3,     3,     1,     1,     1,     1,     3,     3,
     3,     3,     3,     3,     1
};

static const short yydefact[] = {     2,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    65,     0,     1,     0,     5,
     6,     8,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     7,     4,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    43,    57,    58,     0,    56,    55,
     0,     0,    49,     0,     0,     0,    28,     0,    27,    26,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    41,    47,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    20,     0,     0,     0,     0,    18,
    19,    21,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    44,    48,    54,    45,    46,     0,
    50,    51,    52,    53,    59,    60,    61,    62,    63,    64,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    42,     0,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,     0,    11,    12,    13,    14,     0,     0,    22,
    23,    25,    24,     0,     0,    29,     0,     9,     0,     0,
     0,     0,    30,    16,    17,     0,    15,     0,     0,     0
};

static const short yydefgoto[] = {   228,
    18,    19,    20,    21,    98,   215,    89,   110,    90,    91,
    92,    93,    22
};

static const short yypact[] = {   170,
   -18,   -11,   -10,    -5,    16,    34,    35,    43,    68,    69,
    81,    85,    87,    88,    98,-32768,   170,   170,    13,-32768,
-32768,-32768,   170,   170,   170,   170,   170,   170,   170,   170,
   170,   170,   170,   170,   170,   170,   170,    31,    15,-32768,
    99,   101,   102,   103,   104,   120,   135,   136,   153,   154,
   155,   156,   157,   158,   159,-32768,-32768,    97,   139,   160,
   161,   167,   123,   164,   170,   170,   170,   170,   170,   170,
   170,   170,   169,   139,   168,   181,   182,   183,   184,   185,
   187,   188,   189,   204,   162,-32768,-32768,   139,-32768,-32768,
    10,   250,-32768,   169,   169,   203,-32768,   209,    47,   250,
   -34,   211,   228,   229,   230,   231,   212,   233,   234,   -42,
-32768,-32768,   169,   169,   169,   169,   169,   169,   169,   169,
   169,   169,   191,    12,   106,   139,   139,-32768,   206,   206,
   206,   206,   206,   206,   206,   206,   206,   206,   -21,   -43,
   241,   242,   236,    75,-32768,   139,   139,   139,   139,-32768,
-32768,-32768,   169,   237,   239,   240,   243,   244,   245,   246,
   247,   248,   249,   251,-32768,-32768,-32768,   280,-32768,   206,
    60,    60,-32768,-32768,    28,    28,    28,    28,    28,    28,
   252,   253,   254,   255,   256,   258,    14,    30,    32,    45,
-32768,   139,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,     9,-32768,-32768,-32768,-32768,   235,   259,-32768,
-32768,-32768,-32768,    83,    78,-32768,   186,-32768,   235,   257,
   260,    95,-32768,-32768,-32768,   262,-32768,   289,   297,-32768
};

static const short yypgoto[] = {-32768,
-32768,    70,-32768,-32768,-32768,    86,   -95,   -91,   -71,   -63,
   -62,-32768,-32768
};


#define	YYLAST		309


static const short yytable[] = {    99,
   100,   111,   139,   140,   153,   153,    85,   154,   182,   144,
   112,   129,   130,   131,   132,   143,   126,   127,   126,   127,
   126,   127,   111,   111,   124,   125,   153,    23,   181,   111,
   129,   130,   131,   132,    24,    25,   126,   127,   126,   127,
    26,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   126,   127,   126,   127,   167,   128,    40,   166,    57,
   210,    27,   168,   169,   131,   132,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   211,    56,   212,    28,
    29,   191,   187,   188,   189,   190,    38,    39,    30,   126,
   127,   213,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,   203,   129,   130,
   131,   132,   216,    31,    32,   133,   134,   135,   136,   137,
   138,   216,   153,   223,   186,   219,    33,   220,   214,   218,
    34,    74,    35,    36,   102,   103,   104,   105,   106,   107,
   108,   109,   219,    37,   226,    73,    58,    74,    59,    60,
    61,    62,   167,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    97,    63,    88,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    64,    65,    88,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    66,    67,    68,    69,    70,    71,    72,    96,    94,    85,
    16,    95,   101,   113,   123,    17,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,   114,   115,   116,   117,
   118,   165,   119,   120,   121,   221,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,   122,
   141,   170,   129,   130,   131,   132,   142,   145,   150,   133,
   134,   135,   136,   137,   138,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,   146,   147,   148,   149,   151,
   152,   183,   184,   185,   192,   193,   194,   127,   229,   195,
   196,   197,   198,   199,   200,   201,   230,   202,   204,   205,
   206,   207,   222,   224,   208,   209,   225,   217,   227
};

static const short yycheck[] = {    63,
    63,    73,    94,    95,    48,    48,    41,    50,    52,   101,
    74,     3,     4,     5,     6,    50,     7,     8,     7,     8,
     7,     8,    94,    95,    88,    88,    48,    46,    50,   101,
     3,     4,     5,     6,    46,    46,     7,     8,     7,     8,
    46,   113,   114,   115,   116,   117,   118,   119,   120,   121,
   122,     7,     8,     7,     8,    47,    47,    45,    47,    45,
    47,    46,   126,   127,     5,     6,   129,   130,   131,   132,
   133,   134,   135,   136,   137,   138,    47,    47,    47,    46,
    46,   153,   146,   147,   148,   149,    17,    18,    46,     7,
     8,    47,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,   170,     3,     4,
     5,     6,   208,    46,    46,    10,    11,    12,    13,    14,
    15,   217,    48,   219,    50,    48,    46,    50,   192,    47,
    46,     9,    46,    46,    65,    66,    67,    68,    69,    70,
    71,    72,    48,    46,    50,    49,    48,     9,    48,    48,
    48,    48,    47,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    48,    46,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    48,    48,    46,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    48,    48,    48,    48,    48,    48,    48,    41,    49,    41,
    41,    51,    49,    46,    53,    46,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    46,    46,    46,    46,
    46,    41,    46,    46,    46,    50,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    46,
    48,    46,     3,     4,     5,     6,    48,    47,    47,    10,
    11,    12,    13,    14,    15,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    48,    48,    48,    48,    47,
    47,    41,    41,    48,    48,    47,    47,     8,     0,    47,
    47,    47,    47,    47,    47,    47,     0,    47,    47,    47,
    47,    47,   217,    47,    49,    48,    47,    49,    47
};

#line 325 "/usr/local/lib/bison.cc"
 /* fattrs + tables */

/* parser code folow  */


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: dollar marks section change
   the next  is replaced by the list of actions, each action
   as one case of the switch.  */ 

#if YY_Parser_USE_GOTO != 0
/* 
 SUPRESSION OF GOTO : on some C++ compiler (sun c++)
  the goto is strictly forbidden if any constructor/destructor
  is used in the whole function (very stupid isn't it ?)
 so goto are to be replaced with a 'while/switch/case construct'
 here are the macro to keep some apparent compatibility
*/
#define YYGOTO(lb) {yy_gotostate=lb;continue;}
#define YYBEGINGOTO  enum yy_labels yy_gotostate=yygotostart; \
                     for(;;) switch(yy_gotostate) { case yygotostart: {
#define YYLABEL(lb) } case lb: {
#define YYENDGOTO } } 
#define YYBEGINDECLARELABEL enum yy_labels {yygotostart
#define YYDECLARELABEL(lb) ,lb
#define YYENDDECLARELABEL  };
#else
/* macro to keep goto */
#define YYGOTO(lb) goto lb
#define YYBEGINGOTO 
#define YYLABEL(lb) lb:
#define YYENDGOTO
#define YYBEGINDECLARELABEL 
#define YYDECLARELABEL(lb)
#define YYENDDECLARELABEL 
#endif
/* LABEL DECLARATION */
YYBEGINDECLARELABEL
  YYDECLARELABEL(yynewstate)
  YYDECLARELABEL(yybackup)
/* YYDECLARELABEL(yyresume) */
  YYDECLARELABEL(yydefault)
  YYDECLARELABEL(yyreduce)
  YYDECLARELABEL(yyerrlab)   /* here on detecting error */
  YYDECLARELABEL(yyerrlab1)   /* here on error raised explicitly by an action */
  YYDECLARELABEL(yyerrdefault)  /* current state does not do anything special for the error token. */
  YYDECLARELABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */
  YYDECLARELABEL(yyerrhandle)  
YYENDDECLARELABEL
/* ALLOCA SIMULATION */
/* __HAVE_NO_ALLOCA */
#ifdef __HAVE_NO_ALLOCA
int __alloca_free_ptr(char *ptr,char *ref)
{if(ptr!=ref) free(ptr);
 return 0;}

#define __ALLOCA_alloca(size) malloc(size)
#define __ALLOCA_free(ptr,ref) __alloca_free_ptr((char *)ptr,(char *)ref)

#ifdef YY_Parser_LSP_NEEDED
#define __ALLOCA_return(num) \
            return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		    __ALLOCA_free(yyls,yylsa)+\
		   (num))
#else
#define __ALLOCA_return(num) \
            return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		   (num))
#endif
#else
#define __ALLOCA_return(num) return(num)
#define __ALLOCA_alloca(size) alloca(size)
#define __ALLOCA_free(ptr,ref) 
#endif

/* ENDALLOCA SIMULATION */

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (YY_Parser_CHAR = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYACCEPT        __ALLOCA_return(0)
#define YYABORT         __ALLOCA_return(1)
#define YYERROR         YYGOTO(yyerrlab1)
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL          YYGOTO(yyerrlab)
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do                                                              \
  if (YY_Parser_CHAR == YYEMPTY && yylen == 1)                               \
    { YY_Parser_CHAR = (token), YY_Parser_LVAL = (value);                 \
      yychar1 = YYTRANSLATE (YY_Parser_CHAR);                                \
      YYPOPSTACK;                                               \
      YYGOTO(yybackup);                                            \
    }                                                           \
  else                                                          \
    { YY_Parser_ERROR ("syntax error: cannot back up"); YYERROR; }   \
while (0)

#define YYTERROR        1
#define YYERRCODE       256

#ifndef YY_Parser_PURE
/* UNPURE */
#define YYLEX           YY_Parser_LEX()
#ifndef YY_USE_CLASS
/* If nonreentrant, and not class , generate the variables here */
int     YY_Parser_CHAR;                      /*  the lookahead symbol        */
YY_Parser_STYPE      YY_Parser_LVAL;              /*  the semantic value of the */
				/*  lookahead symbol    */
int YY_Parser_NERRS;                 /*  number of parse errors so far */
#ifdef YY_Parser_LSP_NEEDED
YY_Parser_LTYPE YY_Parser_LLOC;   /*  location data for the lookahead     */
			/*  symbol                              */
#endif
#endif


#else
/* PURE */
#ifdef YY_Parser_LSP_NEEDED
#define YYLEX           YY_Parser_LEX(&YY_Parser_LVAL, &YY_Parser_LLOC)
#else
#define YYLEX           YY_Parser_LEX(&YY_Parser_LVAL)
#endif
#endif
#ifndef YY_USE_CLASS
#if YY_Parser_DEBUG != 0
int YY_Parser_DEBUG_FLAG;                    /*  nonzero means print parse trace     */
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif
#endif



/*  YYINITDEPTH indicates the initial size of the parser's stacks       */

#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif


#if __GNUC__ > 1                /* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)       __builtin_memcpy(TO,FROM,COUNT)
#else                           /* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */

#ifdef __cplusplus
static void __yy_bcopy (char *from, char *to, int count)
#else
#ifdef __STDC__
static void __yy_bcopy (char *from, char *to, int count)
#else
static void __yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
#endif
#endif
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}
#endif

int
#ifdef YY_USE_CLASS
 YY_Parser_CLASS::
#endif
     YY_Parser_PARSE(YY_Parser_PARSE_PARAM)
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
/* parameter definition without protypes */
YY_Parser_PARSE_PARAM_DEF
#endif
#endif
#endif
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YY_Parser_STYPE *yyvsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1=0;          /*  lookahead token as an internal (translated) token number */

  short yyssa[YYINITDEPTH];     /*  the state stack                     */
  YY_Parser_STYPE yyvsa[YYINITDEPTH];        /*  the semantic value stack            */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YY_Parser_STYPE *yyvs = yyvsa;     /*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YY_Parser_LSP_NEEDED
  YY_Parser_LTYPE yylsa[YYINITDEPTH];        /*  the location stack                  */
  YY_Parser_LTYPE *yyls = yylsa;
  YY_Parser_LTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YY_Parser_PURE
  int YY_Parser_CHAR;
  YY_Parser_STYPE YY_Parser_LVAL;
  int YY_Parser_NERRS;
#ifdef YY_Parser_LSP_NEEDED
  YY_Parser_LTYPE YY_Parser_LLOC;
#endif
#endif

  YY_Parser_STYPE yyval;             /*  the variable used to return         */
				/*  semantic values from the action     */
				/*  routines                            */

  int yylen;
/* start loop, in which YYGOTO may be used. */
YYBEGINGOTO

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    fprintf(stderr, "Starting parse\n");
#endif
  yystate = 0;
  yyerrstatus = 0;
  YY_Parser_NERRS = 0;
  YY_Parser_CHAR = YYEMPTY;          /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YY_Parser_LSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
YYLABEL(yynewstate)

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YY_Parser_STYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YY_Parser_LSP_NEEDED
      YY_Parser_LTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YY_Parser_LSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YY_Parser_LSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  YY_Parser_ERROR("parser stack overflow");
	  __ALLOCA_return(2);
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) __ALLOCA_alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      __ALLOCA_free(yyss1,yyssa);
      yyvs = (YY_Parser_STYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
      __ALLOCA_free(yyvs1,yyvsa);
#ifdef YY_Parser_LSP_NEEDED
      yyls = (YY_Parser_LTYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
      __ALLOCA_free(yyls1,yylsa);
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YY_Parser_LSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YY_Parser_DEBUG != 0
      if (YY_Parser_DEBUG_FLAG)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  YYGOTO(yybackup);
YYLABEL(yybackup)

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* YYLABEL(yyresume) */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yydefault);

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (YY_Parser_CHAR == YYEMPTY)
    {
#if YY_Parser_DEBUG != 0
      if (YY_Parser_DEBUG_FLAG)
	fprintf(stderr, "Reading a token: ");
#endif
      YY_Parser_CHAR = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (YY_Parser_CHAR <= 0)           /* This means end of input. */
    {
      yychar1 = 0;
      YY_Parser_CHAR = YYEOF;                /* Don't call YYLEX any more */

#if YY_Parser_DEBUG != 0
      if (YY_Parser_DEBUG_FLAG)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(YY_Parser_CHAR);

#if YY_Parser_DEBUG != 0
      if (YY_Parser_DEBUG_FLAG)
	{
	  fprintf (stderr, "Next token is %d (%s", YY_Parser_CHAR, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, YY_Parser_CHAR, YY_Parser_LVAL);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    YYGOTO(yydefault);

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrlab);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrlab);

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    fprintf(stderr, "Shifting token %d (%s), ", YY_Parser_CHAR, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (YY_Parser_CHAR != YYEOF)
    YY_Parser_CHAR = YYEMPTY;

  *++yyvsp = YY_Parser_LVAL;
#ifdef YY_Parser_LSP_NEEDED
  *++yylsp = YY_Parser_LLOC;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  YYGOTO(yynewstate);

/* Do the default action for the current state.  */
YYLABEL(yydefault)

  yyn = yydefact[yystate];
  if (yyn == 0)
    YYGOTO(yyerrlab);

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
YYLABEL(yyreduce)
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


/* #line 811 "/usr/local/lib/bison.cc" */
#line 1378 "parser.cpp"

  switch (yyn) {

case 1:
#line 90 "parser.y"
{ yyval = new Program((RelExprList*)yyvsp[0]); parseRoot = yyval; ;
    break;}
case 2:
#line 91 "parser.y"
{ yyval = 0; parseRoot = yyval; ;
    break;}
case 3:
#line 95 "parser.y"
{ yyval = new RelExprList((RelExpr*)yyvsp[-1]); ;
    break;}
case 4:
#line 96 "parser.y"
{ yyval = new RelExprList((RelExprList*)yyvsp[-2], (RelExpr*)yyvsp[-1]); ;
    break;}
case 5:
#line 100 "parser.y"
{ yyval = new RelExpr((UnaryOp*)yyvsp[0]); ;
    break;}
case 6:
#line 101 "parser.y"
{ yyval = new RelExpr((BinaryOp*)yyvsp[0]); ;
    break;}
case 7:
#line 102 "parser.y"
{ yyval = new RelExpr((RelExpr*)yyvsp[-2]); ;
    break;}
case 8:
#line 103 "parser.y"
{ yyval = new RelExpr((Relation*)yyvsp[0]); ;
    break;}
case 9:
#line 107 "parser.y"
{ yyval = new ScanOp((RelExpr*)yyvsp[-7], (AttrList*)yyvsp[-4], (Predicate*)yyvsp[-1]); ;
    break;}
case 10:
#line 108 "parser.y"
{ yyval = new SelectOp((RelExpr*)yyvsp[-3], (Predicate*)yyvsp[-1]); ;
    break;}
case 11:
#line 109 "parser.y"
{ yyval = new ProjectOp((RelExpr*)yyvsp[-5], (AttrList*)yyvsp[-2]); ;
    break;}
case 12:
#line 110 "parser.y"
{ yyval = new SortOp((RelExpr*)yyvsp[-5], (AttrList*)yyvsp[-2]); ;
    break;}
case 13:
#line 111 "parser.y"
{ assert(strData.size() == 2); yyval = new RenameOp((RelExpr*)yyvsp[-5], strData.front(), strData.back()); strData.pop_back(); strData.pop_back();;
    break;}
case 14:
#line 112 "parser.y"
{ yyval = new ExtendOp((RelExpr*)yyvsp[-5], (Expr*)yyvsp[-3], strData.back()); strData.pop_back();;
    break;}
case 15:
#line 113 "parser.y"
{ yyval = new GroupbyOp((RelExpr*)yyvsp[-9], (AttrList*)yyvsp[-6], (AggrList*)yyvsp[-2]); ;
    break;}
case 16:
#line 114 "parser.y"
{ yyval = new GroupbyOp((RelExpr*)yyvsp[-8], (AggrList*)yyvsp[-2]); ;
    break;}
case 17:
#line 115 "parser.y"
{ yyval = new GroupbyOp((RelExpr*)yyvsp[-8], (AttrList*)yyvsp[-5]); ;
    break;}
case 18:
#line 119 "parser.y"
{ yyval = new UnionOp((RelExpr*)yyvsp[-3], (RelExpr*)yyvsp[-1]); ;
    break;}
case 19:
#line 120 "parser.y"
{ yyval = new DiffOp((RelExpr*)yyvsp[-3], (RelExpr*)yyvsp[-1]); ;
    break;}
case 20:
#line 121 "parser.y"
{ yyval = new ProductOp((RelExpr*)yyvsp[-3], (RelExpr*)yyvsp[-1]); ;
    break;}
case 21:
#line 122 "parser.y"
{ yyval = new DiffOp((RelExpr*)yyvsp[-3], new DiffOp((RelExpr*)yyvsp[-3], (RelExpr*)yyvsp[-1])); ;
    break;}
case 22:
#line 123 "parser.y"
{ yyval = new JoinOp((RelExpr*)yyvsp[-5], (RelExpr*)yyvsp[-3], (Predicate*)yyvsp[-1]); ;
    break;}
case 23:
#line 124 "parser.y"
{ yyval = new SemijoinOp((RelExpr*)yyvsp[-5], (RelExpr*)yyvsp[-3], (Predicate*)yyvsp[-1]); ;
    break;}
case 24:
#line 125 "parser.y"
{ yyval = new OuterjoinOp((RelExpr*)yyvsp[-5], (RelExpr*)yyvsp[-3], (Predicate*)yyvsp[-1]); ;
    break;}
case 25:
#line 126 "parser.y"
{ yyval = new AntijoinOp((RelExpr*)yyvsp[-5], (RelExpr*)yyvsp[-3], (Predicate*)yyvsp[-1]); ;
    break;}
case 26:
#line 130 "parser.y"
{ yyval = new Expr((MathExpr*)yyvsp[0]); ;
    break;}
case 27:
#line 131 "parser.y"
{ yyval = new Expr((Predicate*)yyvsp[0]); ;
    break;}
case 28:
#line 132 "parser.y"
{ assert(strData.size() > 0); yyval = new Expr(strData.back()); strData.pop_back(); ;
    break;}
case 29:
#line 136 "parser.y"
{ yyval = new AggrList((AggrExpr*)yyvsp[0]); ;
    break;}
case 30:
#line 137 "parser.y"
{ yyval = new AggrList((AggrList*)yyvsp[-2], (AggrExpr*)yyvsp[0]); ;
    break;}
case 31:
#line 141 "parser.y"
{ yyval = new AggrExpr("MAX", (Attribute*)yyvsp[-1]); ;
    break;}
case 32:
#line 142 "parser.y"
{ yyval = new AggrExpr("MIN", (Attribute*)yyvsp[-1]); ;
    break;}
case 33:
#line 143 "parser.y"
{ yyval = new AggrExpr("COUNT", (Attribute*)yyvsp[-1]); ;
    break;}
case 34:
#line 144 "parser.y"
{ yyval = new AggrExpr("SUM", (Attribute*)yyvsp[-1]); ;
    break;}
case 35:
#line 145 "parser.y"
{ yyval = new AggrExpr("AVG", (Attribute*)yyvsp[-1]); ;
    break;}
case 36:
#line 146 "parser.y"
{ yyval = new AggrExpr("MAX_DISTINCT", (Attribute*)yyvsp[-1]); ;
    break;}
case 37:
#line 147 "parser.y"
{ yyval = new AggrExpr("MIN_DISTINCT", (Attribute*)yyvsp[-1]); ;
    break;}
case 38:
#line 148 "parser.y"
{ yyval = new AggrExpr("COUNT_DISTINCT", (Attribute*)yyvsp[-1]); ;
    break;}
case 39:
#line 149 "parser.y"
{ yyval = new AggrExpr("SUM_DISTINCT", (Attribute*)yyvsp[-1]); ;
    break;}
case 40:
#line 150 "parser.y"
{ yyval = new AggrExpr("AVG_DISTINCT", (Attribute*)yyvsp[-1]); ;
    break;}
case 41:
#line 154 "parser.y"
{ yyval = new AttrList((Attribute*)yyvsp[0]); ;
    break;}
case 42:
#line 155 "parser.y"
{ yyval = new AttrList((AttrList*)yyvsp[-2], (Attribute*)yyvsp[0]); ;
    break;}
case 43:
#line 159 "parser.y"
{ yyval = new Attribute(strData.back()); strData.pop_back(); ;
    break;}
case 44:
#line 160 "parser.y"
{ assert(strData.size() == 2); yyval = new Attribute(strData.front(), strData.back()); strData.pop_back(); strData.pop_back(); ;
    break;}
case 45:
#line 164 "parser.y"
{ yyval = new Predicate("OR", (Predicate*)yyvsp[-2], (Predicate*)yyvsp[0]); ;
    break;}
case 46:
#line 165 "parser.y"
{ yyval = new Predicate("AND", (Predicate*)yyvsp[-2], (Predicate*)yyvsp[0]); ;
    break;}
case 47:
#line 166 "parser.y"
{ yyval = new Predicate("NOT", (Predicate*)yyvsp[0]); ;
    break;}
case 48:
#line 167 "parser.y"
{ yyval = new Predicate((Predicate*)yyvsp[-1]); ;
    break;}
case 49:
#line 168 "parser.y"
{ yyval = new Predicate((Comparison*)yyvsp[0]); ;
    break;}
case 50:
#line 173 "parser.y"
{ yyval = new MathExpr(OP_ADD, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 51:
#line 174 "parser.y"
{ yyval = new MathExpr(OP_SUBTRACT, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 52:
#line 175 "parser.y"
{ yyval = new MathExpr(OP_MULTIPLY, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 53:
#line 176 "parser.y"
{ yyval = new MathExpr(OP_DIVIDE, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 54:
#line 177 "parser.y"
{ yyval = new MathExpr((MathExpr*)yyvsp[-1]); ;
    break;}
case 55:
#line 178 "parser.y"
{ yyval = new MathExpr((Attribute*)yyvsp[0]); ;
    break;}
case 56:
#line 179 "parser.y"
{ yyval = new MathExpr((AggrExpr*)yyvsp[0]); ;
    break;}
case 57:
#line 180 "parser.y"
{ yyval = new MathExpr((int)intData.back()); intData.pop_back(); ;
    break;}
case 58:
#line 181 "parser.y"
{ yyval = new MathExpr((float)realData.back()); realData.pop_back(); ;
    break;}
case 59:
#line 185 "parser.y"
{ yyval = new Comparison(OP_NEQ, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 60:
#line 186 "parser.y"
{ yyval = new Comparison(OP_EQ, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 61:
#line 187 "parser.y"
{ yyval = new Comparison(OP_GT, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 62:
#line 188 "parser.y"
{ yyval = new Comparison(OP_GTE, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 63:
#line 189 "parser.y"
{ yyval = new Comparison(OP_LT, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 64:
#line 190 "parser.y"
{ yyval = new Comparison(OP_LTE, (MathExpr*)yyvsp[-2], (MathExpr*)yyvsp[0]); ;
    break;}
case 65:
#line 194 "parser.y"
{ yyval = new Relation(strData.back()); strData.pop_back(); ;
    break;}
}

#line 811 "/usr/local/lib/bison.cc"
   /* the action file gets copied in in place of this dollarsign  */
  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YY_Parser_LSP_NEEDED
  yylsp -= yylen;
#endif

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YY_Parser_LSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = YY_Parser_LLOC.first_line;
      yylsp->first_column = YY_Parser_LLOC.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  YYGOTO(yynewstate);

YYLABEL(yyerrlab)   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++YY_Parser_NERRS;

#ifdef YY_Parser_ERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      YY_Parser_ERROR(msg);
	      free(msg);
	    }
	  else
	    YY_Parser_ERROR ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YY_Parser_ERROR_VERBOSE */
	YY_Parser_ERROR("parse error");
    }

  YYGOTO(yyerrlab1);
YYLABEL(yyerrlab1)   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (YY_Parser_CHAR == YYEOF)
	YYABORT;

#if YY_Parser_DEBUG != 0
      if (YY_Parser_DEBUG_FLAG)
	fprintf(stderr, "Discarding token %d (%s).\n", YY_Parser_CHAR, yytname[yychar1]);
#endif

      YY_Parser_CHAR = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  YYGOTO(yyerrhandle);

YYLABEL(yyerrdefault)  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) YYGOTO(yydefault);
#endif

YYLABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YY_Parser_LSP_NEEDED
  yylsp--;
#endif

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

YYLABEL(yyerrhandle)

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yyerrdefault);

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    YYGOTO(yyerrdefault);

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrpop);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrpop);

  if (yyn == YYFINAL)
    YYACCEPT;

#if YY_Parser_DEBUG != 0
  if (YY_Parser_DEBUG_FLAG)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = YY_Parser_LVAL;
#ifdef YY_Parser_LSP_NEEDED
  *++yylsp = YY_Parser_LLOC;
#endif

  yystate = yyn;
  YYGOTO(yynewstate);
/* end loop, in which YYGOTO may be used. */
  YYENDGOTO
}

/* END */

/* #line 1010 "/usr/local/lib/bison.cc" */
#line 1846 "parser.cpp"
#line 197 "parser.y"


/*
//RelAlgNode *parse_root = 0;

int main() {

	do {
    	string sql;
    	cout << "Enter RA statement: ";

    	getline(cin,sql);
    	if (sql == "q")
    		break;

    	RelAlgNode *parseRoot = 0;
    	string lastParsed;

		RAParser parser;
		parser.parse(sql, parseRoot, lastParsed);

		if (parseRoot != 0) cout << "ChunkKey Unicorns frolick!!\n";
		//QPTranslator qp;
    	//if (parseRoot != 0)
    	//    parseRoot->accept(qp); 
    } while (1);

	return 0;
}
*/

