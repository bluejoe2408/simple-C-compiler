/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     CONSTANT_INT = 262,
     CONSTANT_DOUBLE = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPE_NAME = 285,
     CHAR = 286,
     INT = 287,
     DOUBLE = 288,
     VOID = 289,
     BOOL = 290,
     CASE = 291,
     IF = 292,
     ELSE = 293,
     SWITCH = 294,
     WHILE = 295,
     DO = 296,
     FOR = 297,
     GOTO = 298,
     CONTINUE = 299,
     BREAK = 300,
     RETURN = 301,
     TRUE = 302,
     FALSE = 303,
     LOWER_THAN_ELSE = 304
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define CHAR 286
#define INT 287
#define DOUBLE 288
#define VOID 289
#define BOOL 290
#define CASE 291
#define IF 292
#define ELSE 293
#define SWITCH 294
#define WHILE 295
#define DO 296
#define FOR 297
#define GOTO 298
#define CONTINUE 299
#define BREAK 300
#define RETURN 301
#define TRUE 302
#define FALSE 303
#define LOWER_THAN_ELSE 304




/* Copy the first part of user declarations.  */
#line 1 "compiler.y"

#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"
#include "block.h"
#include "Praser.h"
using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*); 


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "compiler.y"
{
	struct gramTree* gt;
}
/* Line 193 of yacc.c.  */
#line 217 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 230 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   686

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  268

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    38,    41,    43,    47,    49,    52,
      55,    58,    60,    62,    64,    66,    68,    72,    76,    80,
      82,    86,    90,    92,    96,   100,   102,   106,   110,   114,
     118,   120,   124,   128,   130,   134,   136,   140,   142,   146,
     148,   152,   154,   158,   160,   164,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   192,   196,
     198,   202,   204,   208,   210,   212,   214,   216,   218,   220,
     224,   229,   234,   238,   243,   248,   252,   254,   258,   261,
     264,   266,   268,   272,   276,   279,   283,   287,   292,   296,
     301,   304,   308,   312,   317,   319,   323,   328,   330,   333,
     337,   342,   345,   347,   350,   354,   357,   359,   361,   363,
     365,   367,   369,   373,   378,   381,   385,   387,   390,   392,
     394,   396,   399,   405,   413,   419,   425,   433,   440,   448,
     455,   463,   467,   470,   473,   476,   480,   482,   485,   487,
     489,   494,   498,   500
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,   117,    -1,     3,    -1,    47,    -1,    48,
      -1,     7,    -1,     8,    -1,    71,    93,    72,    -1,    76,
      -1,    77,    53,    93,    54,    -1,    77,    71,    72,    -1,
      77,    71,    78,    72,    -1,    77,    10,    -1,    77,    11,
      -1,    91,    -1,    78,    50,    91,    -1,    77,    -1,    10,
      79,    -1,    11,    79,    -1,    80,    79,    -1,    60,    -1,
      59,    -1,    58,    -1,    57,    -1,    79,    -1,    81,    61,
      79,    -1,    81,    62,    79,    -1,    81,    63,    79,    -1,
      81,    -1,    82,    60,    81,    -1,    82,    59,    81,    -1,
      82,    -1,    83,    12,    82,    -1,    83,    13,    82,    -1,
      83,    -1,    84,    64,    83,    -1,    84,    65,    83,    -1,
      84,    14,    83,    -1,    84,    15,    83,    -1,    84,    -1,
      85,    16,    84,    -1,    85,    17,    84,    -1,    85,    -1,
      86,    56,    85,    -1,    86,    -1,    87,    66,    86,    -1,
      87,    -1,    88,    67,    87,    -1,    88,    -1,    89,    18,
      88,    -1,    89,    -1,    90,    19,    89,    -1,    90,    -1,
      79,    92,    91,    -1,    52,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    91,    -1,    93,    50,
      91,    -1,    97,    95,    49,    -1,    96,    -1,    95,    50,
      96,    -1,    98,    -1,    98,    52,   103,    -1,    34,    -1,
      31,    -1,    32,    -1,    33,    -1,    35,    -1,     3,    -1,
      71,    98,    72,    -1,    98,    53,    91,    54,    -1,    98,
      53,    61,    54,    -1,    98,    53,    54,    -1,    98,    71,
      99,    72,    -1,    98,    71,   101,    72,    -1,    98,    71,
      72,    -1,   100,    -1,    99,    50,   100,    -1,    97,    98,
      -1,    97,   102,    -1,    97,    -1,     3,    -1,   101,    50,
       3,    -1,    71,   102,    72,    -1,    53,    54,    -1,    53,
      91,    54,    -1,   102,    53,    54,    -1,   102,    53,    91,
      54,    -1,    53,    61,    54,    -1,   102,    53,    61,    54,
      -1,    71,    72,    -1,    71,    99,    72,    -1,   102,    71,
      72,    -1,   102,    71,    99,    72,    -1,    91,    -1,    69,
     104,    70,    -1,    69,   104,    50,    70,    -1,   103,    -1,
     105,   103,    -1,   104,    50,   103,    -1,   104,    50,   105,
     103,    -1,   106,    52,    -1,   107,    -1,   106,   107,    -1,
      53,    90,    54,    -1,    55,     3,    -1,   109,    -1,   110,
      -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,     3,
      51,   108,    -1,    36,    90,    51,   108,    -1,    69,    70,
      -1,    69,   111,    70,    -1,   112,    -1,   111,   112,    -1,
      94,    -1,   108,    -1,    49,    -1,    93,    49,    -1,    37,
      71,    93,    72,   108,    -1,    37,    71,    93,    72,   108,
      38,   108,    -1,    39,    71,    93,    72,   108,    -1,    40,
      71,    93,    72,   108,    -1,    41,   108,    40,    71,    93,
      72,    49,    -1,    42,    71,   113,   113,    72,   108,    -1,
      42,    71,   113,   113,    93,    72,   108,    -1,    42,    71,
      94,   113,    72,   108,    -1,    42,    71,    94,   113,    93,
      72,   108,    -1,    43,     3,    49,    -1,    44,    49,    -1,
      45,    49,    -1,    46,    49,    -1,    46,    93,    49,    -1,
     118,    -1,   117,   118,    -1,   119,    -1,    94,    -1,    97,
      98,   120,   110,    -1,    97,    98,   110,    -1,    94,    -1,
     120,    94,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    58,    61,    64,    67,    70,    73,    80,
      83,    87,    91,    95,    99,   106,   109,   116,   119,   123,
     127,   134,   137,   140,   143,   150,   153,   156,   159,   166,
     169,   172,   179,   182,   186,   194,   197,   200,   203,   207,
     215,   218,   222,   229,   232,   239,   242,   249,   252,   259,
     262,   270,   273,   281,   285,   292,   295,   299,   303,   307,
     311,   315,   319,   323,   327,   331,   339,   343,   351,   358,
     361,   367,   370,   378,   381,   384,   387,   390,   398,   402,
     405,   409,   412,   416,   420,   424,   433,   436,   442,   445,
     448,   454,   457,   463,   466,   469,   472,   475,   478,   481,
     484,   487,   490,   493,   500,   503,   507,   514,   517,   520,
     523,   529,   535,   538,   544,   547,   554,   557,   560,   563,
     566,   569,   576,   579,   586,   589,   595,   598,   604,   607,
     613,   616,   623,   626,   629,   636,   639,   642,   645,   648,
     651,   658,   661,   664,   667,   670,   676,   679,   685,   689,
     696,   699,   705,   708
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "LOWER_THAN_ELSE", "$accept", "Program", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   104,   104,   104,
     104,   105,   106,   106,   107,   107,   108,   108,   108,   108,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3,     4,     4,     3,     1,     3,     2,     2,
       1,     1,     3,     3,     2,     3,     3,     4,     3,     4,
       2,     3,     3,     4,     1,     3,     4,     1,     2,     3,
       4,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     2,     3,     1,     2,     1,     1,
       1,     2,     5,     7,     5,     5,     7,     6,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    74,    75,    76,    73,    77,     0,   149,     0,     2,
     146,   148,     1,    78,     0,     0,    69,    71,   147,     0,
      68,     0,     0,     0,     0,     0,   152,     0,   151,     0,
      79,    70,    71,     3,     6,     7,     0,     0,     4,     5,
      24,    23,    22,    21,     0,     0,     9,    17,    25,     0,
      29,    32,    35,    40,    43,    45,    47,    49,    51,    53,
     104,    72,    82,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   124,    66,     0,
     128,   129,   116,   117,     0,   126,   118,   119,   120,   121,
      91,    85,    90,     0,    86,     0,   153,   150,    18,    19,
       0,     0,   107,     0,     0,     0,   112,     0,    13,    14,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    55,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    80,     0,    25,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,     0,   131,     0,
     125,   127,     0,     0,    88,    89,     0,    83,     0,    84,
       0,   115,     0,   105,   108,   111,   113,     8,     0,    11,
       0,    15,    54,    26,    27,    28,    31,    30,    33,    34,
      38,    39,    36,    37,    41,    42,    44,    46,    48,    50,
      52,   122,     0,     0,     0,     0,     0,     0,     0,   141,
     145,    67,    94,     0,     0,   100,     0,     0,     0,     0,
      87,    92,   114,   106,   109,     0,    10,     0,    12,   123,
       0,     0,     0,     0,     0,     0,    98,    95,   101,    93,
      96,     0,     0,   102,     0,   110,    16,   132,   134,   135,
       0,     0,     0,     0,     0,    99,    97,   103,     0,     0,
     139,     0,   137,     0,   133,   136,   140,   138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    46,    47,   180,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    78,   123,    79,
       7,    15,    16,    27,    19,    93,    94,    95,   165,    61,
     103,   104,   105,   106,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     9,    10,    11,    29
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
     233,  -158,  -158,  -158,  -158,  -158,    35,  -158,    23,   233,
    -158,  -158,  -158,  -158,    23,    55,  -158,   403,  -158,   225,
    -158,    23,   544,   455,   213,    12,  -158,    23,  -158,   113,
    -158,  -158,   222,  -158,  -158,  -158,   615,   615,  -158,  -158,
    -158,  -158,  -158,  -158,   439,   615,  -158,     8,   211,   615,
     243,   150,   146,    27,   291,   -48,   -39,   -38,    20,    48,
    -158,  -158,  -158,    15,    26,    24,   615,    58,    85,   108,
     343,   116,    95,   121,   135,   284,  -158,  -158,  -158,   279,
    -158,  -158,  -158,  -158,   278,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,    10,   -19,  -158,    -2,  -158,  -158,  -158,  -158,
     615,   186,  -158,     4,   544,   224,  -158,    21,  -158,  -158,
     615,    29,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,   615,  -158,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,  -158,  -158,   343,  -158,     1,   615,   615,
     615,   156,   362,   158,  -158,  -158,  -158,   290,  -158,   615,
    -158,  -158,   514,    25,     2,    89,   233,  -158,   196,  -158,
      -5,  -158,   420,  -158,  -158,  -158,  -158,  -158,    49,  -158,
      59,  -158,  -158,  -158,  -158,  -158,   243,   243,   150,   150,
     146,   146,   146,   146,    27,    27,   291,   -48,   -39,   -38,
      20,  -158,   343,    78,    80,    99,   132,   609,   609,  -158,
    -158,  -158,  -158,   161,   189,  -158,   103,   227,   529,   102,
    -158,  -158,  -158,  -158,  -158,   544,  -158,   615,  -158,  -158,
     343,   343,   343,   615,   154,   170,  -158,  -158,  -158,  -158,
    -158,   197,   215,  -158,   104,  -158,  -158,   184,  -158,  -158,
     122,   343,   133,   343,   136,  -158,  -158,  -158,   343,   241,
    -158,   343,  -158,   343,  -158,  -158,  -158,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,  -158,  -158,   -15,  -158,   228,   229,   168,
     226,   178,   191,   194,   204,   210,   -50,   -21,  -158,   -42,
     -12,  -158,   337,     0,     3,  -157,   195,  -158,   201,   -40,
    -158,   199,  -158,   261,   -63,  -158,   126,  -158,   283,  -142,
    -158,  -158,  -158,  -158,   359,  -158,  -158
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       8,    60,    64,   107,   102,    26,   216,   151,   138,     8,
     208,    17,    80,    13,   142,    90,   147,    96,   108,   109,
     142,    98,    99,    60,    32,    92,    13,   139,    13,   140,
      32,   166,    33,   157,   124,    12,    34,    35,   141,    36,
      37,   132,   133,     1,     2,     3,     4,     5,   168,   222,
     170,   146,   202,   167,   172,    23,     1,     2,     3,     4,
       5,   110,   244,   162,   174,   234,   235,   142,   178,   143,
     169,   159,    80,    25,   173,   145,    38,    39,   162,   111,
     144,   163,   201,    60,    91,   146,    40,    41,    42,    43,
     181,   134,   135,   177,    14,   164,   163,   215,   153,   159,
      45,   179,   182,   226,    20,    21,   203,   204,   205,   227,
     183,   184,   185,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   159,   148,
     159,   228,   224,     1,     2,     3,     4,     5,   211,   229,
     207,   214,   218,    28,     1,     2,     3,     4,     5,   159,
     230,    60,   231,   166,   166,    97,   149,    33,   130,   131,
     219,    34,    35,    92,    36,    37,    92,   247,   248,   249,
     154,   232,   159,    33,   243,   238,   257,    34,    35,   150,
      36,    37,    24,   159,   155,   245,   159,   152,   260,   171,
     262,   250,   252,   254,   259,   264,   206,   242,   266,   221,
     267,    38,    39,   233,    60,   261,   246,   209,   263,   128,
     129,    40,    41,    42,    43,   236,    65,    38,    39,    92,
      34,    35,   258,    36,    37,    45,   251,    40,    41,    42,
      43,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    45,   253,   237,     1,     2,     3,     4,     5,    66,
      67,   255,    68,    69,    70,    71,    72,    73,    74,    75,
      38,    39,    76,   122,     1,     2,     3,     4,     5,   256,
      40,    41,    42,    43,    22,    23,   175,   100,    23,   101,
     218,    65,    24,    77,    45,    34,    35,    33,    36,    37,
     265,    34,    35,    25,    36,    37,    25,    30,   219,   239,
     190,   191,   192,   193,   125,   126,   127,   136,   137,     1,
       2,     3,     4,     5,    66,    67,   196,    68,    69,    70,
      71,    72,    73,    74,    75,    38,    39,    76,   158,   159,
     197,    38,    39,   156,   198,    40,    41,    42,    43,   210,
     159,    40,    41,    42,    43,   199,    65,    24,   160,    45,
      34,    35,   200,    36,    37,    45,   186,   187,    31,   188,
     189,   220,   194,   195,   217,    33,   176,   161,    18,    34,
      35,   225,    36,    37,     0,     0,     0,     0,     0,    66,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      38,    39,    76,     1,     2,     3,     4,     5,     0,     0,
      40,    41,    42,    43,     0,     0,     0,     0,     0,    38,
      39,    76,    24,     0,    45,     0,     0,     0,     0,    40,
      41,    42,    43,    33,     0,     0,     0,    34,    35,     0,
      36,    37,     0,    45,     1,     2,     3,     4,     5,     0,
       0,     0,    33,     0,     0,     0,    34,    35,     0,    36,
      37,     0,     0,     0,     0,    22,    23,     0,    33,     0,
       0,     0,    34,    35,     0,    36,    37,    38,    39,     0,
       0,     0,    24,   100,    25,   101,     0,    40,    41,    42,
      43,     0,     0,     0,     0,     0,    38,    39,     0,    44,
     223,    45,   100,     0,   101,     0,    40,    41,    42,    43,
       0,     0,    38,    39,     0,     0,     0,     0,    44,    62,
      45,     0,    40,    41,    42,    43,    63,    33,     0,     0,
       0,    34,    35,     0,    36,    37,    45,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    34,    35,     0,    36,
      37,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    34,    35,     0,    36,    37,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,   212,     0,
       0,    40,    41,    42,    43,   213,    38,    39,     0,     0,
       0,     0,     0,   240,     0,    45,    40,    41,    42,    43,
     241,    38,    39,     0,     0,     0,     0,     0,     0,     0,
      45,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    33,    44,     0,    45,    34,    35,    33,    36,
      37,     0,    34,    35,     0,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    39,    76,     0,
       0,     0,    38,    39,     0,     0,    40,    41,    42,    43,
       0,     0,    40,    41,    42,    43,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
       0,    22,    23,    45,    44,    17,   163,    70,    56,     9,
     152,     8,    24,     3,    19,     3,    66,    29,    10,    11,
      19,    36,    37,    44,    21,    25,     3,    66,     3,    67,
      27,    50,     3,    75,    49,     0,     7,     8,    18,    10,
      11,    14,    15,    31,    32,    33,    34,    35,    50,    54,
     100,    66,    51,    72,    50,    53,    31,    32,    33,    34,
      35,    53,   219,    53,   104,   207,   208,    19,   110,    54,
      72,    50,    84,    71,    70,    51,    47,    48,    53,    71,
      54,    71,   145,   104,    72,   100,    57,    58,    59,    60,
     111,    64,    65,    72,    71,    92,    71,    72,     3,    50,
      71,    72,   123,    54,    49,    50,   148,   149,   150,    50,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    50,    71,
      50,    72,   172,    31,    32,    33,    34,    35,   159,   202,
     152,   162,    53,    17,    31,    32,    33,    34,    35,    50,
      72,   172,    72,    50,    50,    29,    71,     3,    12,    13,
      71,     7,     8,   163,    10,    11,   166,   230,   231,   232,
      49,    72,    50,     3,    72,    72,    72,     7,     8,    71,
      10,    11,    69,    50,    49,   225,    50,    71,   251,     3,
     253,   233,   234,   235,    72,   258,    40,   218,   261,     3,
     263,    47,    48,    71,   225,    72,   227,    49,    72,    59,
      60,    57,    58,    59,    60,    54,     3,    47,    48,   219,
       7,     8,    38,    10,    11,    71,    72,    57,    58,    59,
      60,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    71,    72,    54,    31,    32,    33,    34,    35,    36,
      37,    54,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    52,    31,    32,    33,    34,    35,    54,
      57,    58,    59,    60,    52,    53,    52,    53,    53,    55,
      53,     3,    69,    70,    71,     7,     8,     3,    10,    11,
      49,     7,     8,    71,    10,    11,    71,    72,    71,    72,
     132,   133,   134,   135,    61,    62,    63,    16,    17,    31,
      32,    33,    34,    35,    36,    37,   138,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    49,    50,
     139,    47,    48,    49,   140,    57,    58,    59,    60,    49,
      50,    57,    58,    59,    60,   141,     3,    69,    70,    71,
       7,     8,   142,    10,    11,    71,   128,   129,    21,   130,
     131,   166,   136,   137,   163,     3,   105,    84,     9,     7,
       8,   172,    10,    11,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    31,    32,    33,    34,    35,    -1,    -1,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    69,    -1,    71,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,     3,    -1,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    71,    31,    32,    33,    34,    35,    -1,
      -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    52,    53,    -1,     3,    -1,
      -1,    -1,     7,     8,    -1,    10,    11,    47,    48,    -1,
      -1,    -1,    69,    53,    71,    55,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    69,
      70,    71,    53,    -1,    55,    -1,    57,    58,    59,    60,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    69,    54,
      71,    -1,    57,    58,    59,    60,    61,     3,    -1,    -1,
      -1,     7,     8,    -1,    10,    11,    71,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,    60,    61,    47,    48,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    71,    57,    58,    59,    60,
      61,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    69,    -1,    71,     7,     8,     3,    10,
      11,    -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    47,    48,    -1,    -1,    57,    58,    59,    60,
      -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    33,    34,    35,    75,    94,    97,   117,
     118,   119,     0,     3,    71,    95,    96,    98,   118,    98,
      49,    50,    52,    53,    69,    71,    94,    97,   110,   120,
      72,    96,    98,     3,     7,     8,    10,    11,    47,    48,
      57,    58,    59,    60,    69,    71,    76,    77,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   103,    54,    61,    91,     3,    36,    37,    39,    40,
      41,    42,    43,    44,    45,    46,    49,    70,    91,    93,
      94,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       3,    72,    97,    99,   100,   101,    94,   110,    79,    79,
      53,    55,   103,   104,   105,   106,   107,    93,    10,    11,
      53,    71,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    52,    92,    79,    61,    62,    63,    59,    60,
      12,    13,    14,    15,    64,    65,    16,    17,    56,    66,
      67,    18,    19,    54,    54,    51,    79,    90,    71,    71,
      71,   108,    71,     3,    49,    49,    49,    93,    49,    50,
      70,   112,    53,    71,    98,   102,    50,    72,    50,    72,
      90,     3,    50,    70,   103,    52,   107,    72,    93,    72,
      78,    91,    91,    79,    79,    79,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    86,    87,    88,
      89,   108,    51,    93,    93,    93,    40,    94,   113,    49,
      49,    91,    54,    61,    91,    72,    99,   102,    53,    71,
     100,     3,    54,    70,   103,   105,    54,    50,    72,   108,
      72,    72,    72,    71,   113,   113,    54,    54,    72,    72,
      54,    61,    91,    72,    99,   103,    91,   108,   108,   108,
      93,    72,    93,    72,    93,    54,    54,    72,    38,    72,
     108,    72,   108,    72,   108,    49,   108,   108
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 51 "compiler.y"
    {
		root = create_tree("Program",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 3:
#line 58 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 4:
#line 61 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 5:
#line 64 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 6:
#line 67 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 7:
#line 70 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 8:
#line 73 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 9:
#line 80 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 10:
#line 83 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//数组调用
	}
    break;

  case 11:
#line 87 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
		//函数调用
	}
    break;

  case 12:
#line 91 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//函数调用
	}
    break;

  case 13:
#line 95 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 14:
#line 99 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 15:
#line 106 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 16:
#line 109 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 17:
#line 116 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 18:
#line 119 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 19:
#line 123 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 20:
#line 127 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 21:
#line 134 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 22:
#line 137 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 23:
#line 140 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 24:
#line 143 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 25:
#line 150 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 26:
#line 153 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 27:
#line 156 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 28:
#line 159 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 29:
#line 166 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 30:
#line 169 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 31:
#line 172 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 32:
#line 179 "compiler.y"
    {
		(yyval.gt) = create_tree("shift_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 33:
#line 182 "compiler.y"
    {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 34:
#line 186 "compiler.y"
    {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 35:
#line 194 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 36:
#line 197 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 37:
#line 200 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 38:
#line 203 "compiler.y"
    {
		// <= 
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 39:
#line 207 "compiler.y"
    {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 40:
#line 215 "compiler.y"
    {
		(yyval.gt) = create_tree("equality_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 41:
#line 218 "compiler.y"
    {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 42:
#line 222 "compiler.y"
    {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 43:
#line 229 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 44:
#line 232 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 45:
#line 239 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 46:
#line 242 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 47:
#line 249 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 48:
#line 252 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 49:
#line 259 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 50:
#line 262 "compiler.y"
    {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 51:
#line 270 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 52:
#line 273 "compiler.y"
    {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 53:
#line 281 "compiler.y"
    {
		//条件表达式
		(yyval.gt) = create_tree("assignment_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 54:
#line 285 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 55:
#line 292 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 56:
#line 295 "compiler.y"
    {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 57:
#line 299 "compiler.y"
    {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 58:
#line 303 "compiler.y"
    {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 59:
#line 307 "compiler.y"
    {
		// += 
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 60:
#line 311 "compiler.y"
    {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 61:
#line 315 "compiler.y"
    {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 62:
#line 319 "compiler.y"
    {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 63:
#line 323 "compiler.y"
    {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 64:
#line 327 "compiler.y"
    {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 65:
#line 331 "compiler.y"
    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 66:
#line 339 "compiler.y"
    {
		//赋值表达式
		(yyval.gt) = create_tree("expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 67:
#line 343 "compiler.y"
    {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 68:
#line 351 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 69:
#line 358 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 70:
#line 361 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 71:
#line 367 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 72:
#line 370 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 73:
#line 378 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 74:
#line 381 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 75:
#line 384 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 76:
#line 387 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));	
	}
    break;

  case 77:
#line 390 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 78:
#line 398 "compiler.y"
    {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 79:
#line 402 "compiler.y"
    {
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 80:
#line 405 "compiler.y"
    {
		//数组
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 81:
#line 409 "compiler.y"
    {
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 82:
#line 412 "compiler.y"
    {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 83:
#line 416 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 84:
#line 420 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 85:
#line 424 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 86:
#line 433 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 87:
#line 436 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 88:
#line 442 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 89:
#line 445 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 90:
#line 448 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 91:
#line 454 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 92:
#line 457 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 93:
#line 463 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 94:
#line 466 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 95:
#line 469 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 96:
#line 472 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 97:
#line 475 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 98:
#line 478 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 99:
#line 481 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 100:
#line 484 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 101:
#line 487 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 102:
#line 490 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 103:
#line 493 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 104:
#line 500 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 105:
#line 503 "compiler.y"
    {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 106:
#line 507 "compiler.y"
    {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 107:
#line 514 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 108:
#line 517 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 109:
#line 520 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 110:
#line 523 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt));
	}
    break;

  case 111:
#line 529 "compiler.y"
    {
		(yyval.gt) = create_tree("designation",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 112:
#line 535 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 113:
#line 538 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 114:
#line 544 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 115:
#line 547 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 116:
#line 554 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 117:
#line 557 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 118:
#line 560 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 119:
#line 563 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 120:
#line 566 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 121:
#line 569 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 122:
#line 576 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 123:
#line 579 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 124:
#line 586 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 125:
#line 589 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 126:
#line 595 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 127:
#line 598 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 128:
#line 604 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 129:
#line 607 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 130:
#line 613 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 131:
#line 616 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 132:
#line 623 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 133:
#line 626 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 134:
#line 629 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 135:
#line 636 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 136:
#line 639 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 137:
#line 642 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 138:
#line 645 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 139:
#line 648 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 140:
#line 651 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 141:
#line 658 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt));
	}
    break;

  case 142:
#line 661 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 143:
#line 664 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 144:
#line 667 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 145:
#line 670 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 146:
#line 676 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 147:
#line 679 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 148:
#line 685 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//函数定义
	}
    break;

  case 149:
#line 689 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//变量声明
	}
    break;

  case 150:
#line 696 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 151:
#line 699 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 152:
#line 705 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 153:
#line 708 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 2879 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 713 "compiler.y"



void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {
	yyin = fopen(argv[1],"r");
	yyparse();
	printf("\n");
	eval(root,0);	//输出语法分析树
	Praser praser(root);
	freeGramTree(root);
	fclose(yyin);
	return 0;
}
