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
     REM = 258,
     STRING_LITERAL = 259,
     FLOAT = 260,
     INT = 261,
     SINGLE_UPPER = 262,
     UPPER_DIGIT = 263,
     STOP = 264,
     FOR = 265,
     TO = 266,
     STEP = 267,
     NEXT = 268,
     GOTO = 269,
     NOT = 270,
     AND = 271,
     OR = 272,
     XOR = 273,
     EQ = 274,
     NE = 275,
     LT = 276,
     GT = 277,
     LE = 278,
     GE = 279,
     DATA = 280,
     LET = 281,
     INPUT = 282,
     END = 283,
     DIM = 284,
     DEF = 285,
     FN = 286,
     IF = 287,
     THEN = 288,
     PRINT = 289,
     GOSUB = 290,
     RETURN = 291
   };
#endif
/* Tokens.  */
#define REM 258
#define STRING_LITERAL 259
#define FLOAT 260
#define INT 261
#define SINGLE_UPPER 262
#define UPPER_DIGIT 263
#define STOP 264
#define FOR 265
#define TO 266
#define STEP 267
#define NEXT 268
#define GOTO 269
#define NOT 270
#define AND 271
#define OR 272
#define XOR 273
#define EQ 274
#define NE 275
#define LT 276
#define GT 277
#define LE 278
#define GE 279
#define DATA 280
#define LET 281
#define INPUT 282
#define END 283
#define DIM 284
#define DEF 285
#define FN 286
#define IF 287
#define THEN 288
#define PRINT 289
#define GOSUB 290
#define RETURN 291




/* Copy the first part of user declarations.  */
#line 1 "b--.y"

    int yylex(void);
    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(char *);
    extern int yylineno;     
    extern char *yytext;
    extern FILE *yyin;
    int *lineNums; 
    char loop_var[50];
    int* retLineNums, *gosubLineNums;
    int retInd = 0, gosubInd = 0;
    int status=0;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 193 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,    49,    43,     2,     2,
      47,    48,    37,    39,    42,    40,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    13,    16,    20,    23,    25,
      27,    29,    31,    33,    35,    37,    39,    41,    43,    45,
      47,    49,    51,    54,    58,    62,    64,    66,    68,    70,
      73,    78,    80,    84,    86,    90,    94,    98,   100,   102,
     104,   106,   108,   110,   112,   114,   117,   120,   122,   125,
     135,   143,   147,   152,   155,   158,   159,   161,   163,   165,
     168,   172,   176,   179,   180,   183,   187,   189,   191,   193,
     195,   197,   199,   200,   202,   207,   215,   218,   220,   223,
     227,   229,   234,   241,   245,   247,   249,   251,   253,   255,
     257,   259,   261,   263,   265,   268,   271,   274,   278,   281,
     284,   288,   291,   294,   298,   301,   304,   308,   314,   316,
     318,   320,   323,   327,   331,   335,   337,   341,   345,   349,
     353,   357,   361,   363,   367,   371,   375,   379,   382,   384,
     388,   392,   394,   396,   398,   400
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    55,    28,    41,    -1,    53,    55,
      28,    -1,    -1,    53,    54,    -1,    55,    56,    41,    -1,
       1,    41,    -1,     6,    -1,    57,    -1,    60,    -1,    86,
      -1,     3,    -1,    83,    -1,    61,    -1,    77,    -1,    75,
      -1,    70,    -1,    67,    -1,    68,    -1,     9,    -1,    69,
      -1,    25,    58,    -1,    59,    42,    58,    -1,     4,    42,
      58,    -1,    59,    -1,     4,    -1,     5,    -1,     6,    -1,
      27,    89,    -1,    32,    62,    33,     6,    -1,    63,    -1,
     100,    66,   100,    -1,    64,    -1,    64,    66,    64,    -1,
      65,    19,    65,    -1,    65,    20,    65,    -1,    95,    -1,
       4,    -1,    19,    -1,    20,    -1,    22,    -1,    24,    -1,
      21,    -1,    23,    -1,    14,    55,    -1,    35,    55,    -1,
      36,    -1,    71,    72,    -1,    10,    73,    19,   100,    11,
     100,    12,   100,    41,    -1,    10,    73,    19,   100,    11,
     100,    41,    -1,    10,     1,    41,    -1,    53,    55,    13,
      73,    -1,     7,    74,    -1,     8,    74,    -1,    -1,    43,
      -1,    44,    -1,    45,    -1,    26,    76,    -1,    95,    19,
       4,    -1,    91,    19,    98,    -1,    34,    78,    -1,    -1,
      79,    82,    -1,    79,    80,    81,    -1,    81,    -1,    46,
      -1,    42,    -1,     4,    -1,    95,    -1,    98,    -1,    -1,
      80,    -1,    30,    84,    19,    98,    -1,    30,    84,    47,
      85,    48,    19,    98,    -1,    31,     7,    -1,    90,    -1,
      29,    87,    -1,    87,    42,    88,    -1,    88,    -1,     7,
      47,     6,    48,    -1,     7,    47,     6,    42,     6,    48,
      -1,    89,    42,    90,    -1,    90,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    92,    -1,    93,    -1,    94,
      -1,     7,    -1,     8,    -1,     7,    43,    -1,     8,    43,
      -1,     7,    96,    -1,     7,    96,    43,    -1,     7,    44,
      -1,     8,    44,    -1,     7,    96,    44,    -1,     7,    45,
      -1,     8,    45,    -1,     7,    96,    45,    -1,     7,    49,
      -1,     8,    49,    -1,    47,    97,    48,    -1,    47,    97,
      42,    97,    48,    -1,     6,    -1,    92,    -1,    99,    -1,
      15,    98,    -1,    98,    16,    98,    -1,    98,    18,    98,
      -1,    98,    17,    98,    -1,   100,    -1,    99,    24,    99,
      -1,    99,    22,    99,    -1,    99,    23,    99,    -1,    99,
      21,    99,    -1,    99,    19,    99,    -1,    99,    20,    99,
      -1,   101,    -1,   100,    37,   100,    -1,   100,    38,   100,
      -1,   100,    39,   100,    -1,   100,    40,   100,    -1,    40,
     101,    -1,   102,    -1,   102,    50,   102,    -1,    47,    98,
      48,    -1,    92,    -1,    93,    -1,    94,    -1,     5,    -1,
       6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    35,    37,    38,    41,    42,    43,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    60,    63,    64,    65,    66,    68,    68,    71,
      75,    79,    82,    83,    87,    88,    89,    92,    93,    96,
      97,    98,    99,   100,   101,   105,   108,   111,   114,   121,
     122,   123,   126,   129,   130,   133,   134,   135,   136,   140,
     143,   144,   148,   150,   151,   154,   155,   158,   159,   162,
     163,   164,   166,   167,   171,   172,   175,   178,   182,   185,
     186,   189,   190,   193,   194,   197,   198,   199,   200,   203,
     204,   205,   208,   209,   210,   211,   212,   213,   217,   218,
     219,   223,   224,   225,   228,   229,   232,   233,   236,   237,
     241,   242,   243,   244,   245,   248,   249,   250,   251,   252,
     253,   254,   258,   259,   260,   261,   262,   265,   266,   269,
     270,   271,   272,   273,   274,   275
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REM", "STRING_LITERAL", "FLOAT", "INT",
  "SINGLE_UPPER", "UPPER_DIGIT", "STOP", "FOR", "TO", "STEP", "NEXT",
  "GOTO", "NOT", "AND", "OR", "XOR", "EQ", "NE", "LT", "GT", "LE", "GE",
  "DATA", "LET", "INPUT", "END", "DIM", "DEF", "FN", "IF", "THEN", "PRINT",
  "GOSUB", "RETURN", "'*'", "'/'", "'+'", "'-'", "'\\n'", "','", "'%'",
  "'!'", "'#'", "';'", "'('", "')'", "'$'", "'^'", "$accept", "program",
  "stmts", "stmt", "LINE_NO", "INST", "data_inst", "const_list",
  "numeric_constant", "input_inst", "if_stmt", "condition", "boolean_expr",
  "str_bool_expr", "string_op", "relop", "goto_stmt", "gosub_stmt",
  "return_stmt", "for_stmt", "header", "body", "for_var",
  "possible_datatype", "let_stmt", "assignment", "print_stmt",
  "print_args", "print_expresion_list", "delimiter", "print_expression",
  "print_if_end_delimiter", "function_def", "function_name", "param",
  "dim_inst", "dim_list", "array_decl", "scalar_var_list",
  "scalar_variable", "numeric_var", "int_var", "single_pre_var",
  "double_pre_var", "string_var", "access_list", "int_var_const",
  "logic_expr", "relational_expr", "arithmetic_expr", "term1", "term2", 0
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
     285,   286,   287,   288,   289,   290,   291,    42,    47,    43,
      45,    10,    44,    37,    33,    35,    59,    40,    41,    36,
      94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    58,    58,    58,    58,    59,    59,    60,
      61,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    68,    69,    70,    71,
      71,    71,    72,    73,    73,    74,    74,    74,    74,    75,
      76,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    82,    83,    83,    84,    85,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   102,   102,   102,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     0,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     1,     1,     1,     2,
       4,     1,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     9,
       7,     3,     4,     2,     2,     0,     1,     1,     1,     2,
       3,     3,     2,     0,     2,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     4,     7,     2,     1,     2,     3,
       1,     4,     6,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     2,
       3,     2,     2,     3,     2,     2,     3,     5,     1,     1,
       1,     2,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     2,     1,     3,
       3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     8,     5,     0,     7,    12,
      20,     0,     0,     0,     0,     0,     3,     0,     0,     0,
      63,     0,    47,     0,     9,    10,    14,    18,    19,    21,
      17,     4,    16,    15,    13,    11,     0,    55,    55,     0,
      45,    26,    27,    28,    22,    25,    92,    93,    59,     0,
      89,    90,    91,     0,    29,    84,    85,    86,    87,    88,
       2,     0,    78,    80,     0,     0,    38,   134,   135,     0,
       0,     0,    31,    33,     0,   131,   132,   133,    37,     0,
     122,   128,    69,     0,    62,    72,    66,    70,    71,   110,
     115,    46,     6,     0,    48,    51,    56,    57,    58,    53,
      54,     0,     0,     0,    94,    98,   101,     0,   104,    96,
      95,    99,   102,   105,     0,     0,     0,     0,     0,    76,
       0,     0,    92,    93,   127,     0,     0,    39,    40,    43,
      41,    44,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,    68,    67,    73,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    23,
     108,    92,    93,   109,     0,    97,   100,   103,    61,    60,
      83,     0,    79,    74,     0,    77,   130,    30,     0,     0,
      34,    35,    36,   123,   124,   125,   126,    32,   129,    65,
     112,   114,   113,   120,   121,   119,   117,   118,   116,     0,
       0,    96,     0,   106,     0,    81,     0,    52,     0,     0,
       0,     0,     0,    50,   107,    82,    75,     0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    23,    24,    44,    45,    25,
      26,    71,    72,    73,    74,   133,    27,    28,    29,    30,
      31,    94,    39,    99,    32,    48,    33,    84,    85,   145,
      86,   146,    34,    65,   174,    35,    62,    63,    54,    55,
      49,    75,    76,    77,    78,   109,   164,    88,    89,    90,
      80,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
     -65,    22,    62,   -65,   -36,   -65,   -65,   123,   -65,   -65,
     -65,    40,    34,    87,   116,   116,    39,    44,    35,    25,
      20,    34,   -65,    63,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,    66,   101,   101,    54,
     -65,    74,   -65,   -65,   -65,    94,    32,    57,   -65,   111,
     -65,   -65,   -65,   135,   114,   -65,   -65,   -65,   -65,   -65,
     -65,   133,   140,   -65,   189,    15,   -65,   -65,   -65,     5,
      31,   216,   -65,   119,   147,   -65,   -65,   -65,   -65,   183,
     -65,   148,   -65,    31,   -65,    12,   -65,   -65,   201,   141,
     176,   -65,   -65,    62,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     5,    87,    87,   -65,   -65,   -65,   222,   -65,   188,
     -65,   -65,   -65,   -65,    31,   244,   116,   245,    44,   -65,
      31,   116,    68,   191,   -65,    26,   246,   -65,   -65,   -65,
     -65,   -65,   -65,   121,   121,   121,     5,     5,     5,     5,
       5,    10,   -65,   -65,   -65,    20,   -65,    31,    31,    31,
       5,     5,     5,     5,     5,     5,   165,    59,   -65,   -65,
     -65,    88,   207,   -65,     7,   -65,   -65,   -65,   201,   -65,
     -65,    11,   -65,   201,   205,   -65,   -65,   -65,   206,   208,
     119,   -65,   -65,   137,   137,   -65,   -65,   176,   148,   -65,
     -65,   238,   238,   149,   203,   215,   217,   232,   -65,   235,
       5,   218,   222,   -65,   252,   -65,   240,   -65,    49,   212,
     214,    31,     5,   -65,   -65,   -65,   201,   171,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   233,   -65,     2,   -65,   -65,   142,   -65,   -65,
     -65,   -65,   -65,   130,   112,   186,   -65,   -65,   -65,   -65,
     -65,   -65,    67,   229,   -65,   -65,   -65,   -65,   -65,   -65,
     124,   -65,   -65,   -65,   -65,   -65,   -65,   150,   -65,   -52,
     -65,   -13,    -7,     6,   -11,   109,    69,   -64,    33,   -19,
     204,   131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      79,    50,    56,    53,    59,     8,   125,    51,    57,    87,
      67,    68,   122,   123,    40,    67,    68,   122,   123,   142,
      52,    58,     3,    91,    82,    67,    68,    46,    47,    66,
      67,    68,    46,    47,   120,    83,    67,    68,   122,   123,
       5,    36,   147,   148,   149,    69,    83,    37,    38,   202,
     168,    61,    70,   204,   143,   203,   173,    70,   144,   205,
      69,   212,   121,     4,   170,    69,    64,    70,     5,   175,
     200,    69,    70,   101,   176,   104,   105,   106,    70,   107,
      60,   108,   157,   190,   191,   192,   136,   137,   138,   139,
     213,    41,    42,    43,   163,   156,   136,   137,   138,   139,
     110,   111,   112,    56,    92,    59,   113,    95,    56,    57,
      59,   104,   105,   106,    57,   107,   102,   183,   184,   185,
     186,   187,    58,    46,    47,    66,     9,    58,   178,   179,
     114,   104,    10,    11,    87,   107,   103,    12,   127,   128,
     129,   130,   131,   132,    96,    97,    98,   216,    13,    14,
      15,    16,    17,    18,   115,    19,   116,    20,    21,    22,
     150,   151,   152,   153,   154,   155,   134,   135,     9,   151,
     152,   153,   154,   155,    10,    11,   138,   139,   199,    12,
     117,   208,   118,   193,   194,   195,   196,   197,   198,   163,
      13,    14,    15,   217,    17,    18,   119,    19,   141,    20,
      21,    22,   127,   128,   129,   130,   131,   132,   136,   137,
     138,   139,   218,   136,   137,   138,   139,   147,   148,   149,
     136,   137,   138,   139,   152,   153,   154,   155,   160,   161,
     162,   165,   166,   167,   110,   111,   112,   153,   154,   155,
     154,   155,    37,    38,   158,   159,   181,   182,   169,   126,
     110,   171,   177,   206,   147,   108,   155,   113,   210,   211,
     214,   165,   215,   180,    93,   140,   207,   100,   172,   189,
     201,   209,   188,   124
};

static const yytype_uint8 yycheck[] =
{
      19,    14,    15,    14,    15,    41,    70,    14,    15,    20,
       5,     6,     7,     8,    12,     5,     6,     7,     8,    83,
      14,    15,     0,    21,     4,     5,     6,     7,     8,     4,
       5,     6,     7,     8,    19,    15,     5,     6,     7,     8,
       6,     1,    16,    17,    18,    40,    15,     7,     8,    42,
     114,     7,    47,    42,    42,    48,   120,    47,    46,    48,
      40,    12,    47,     1,   116,    40,    31,    47,     6,   121,
      11,    40,    47,    19,    48,    43,    44,    45,    47,    47,
      41,    49,   101,   147,   148,   149,    37,    38,    39,    40,
      41,     4,     5,     6,   107,    93,    37,    38,    39,    40,
      43,    44,    45,   116,    41,   116,    49,    41,   121,   116,
     121,    43,    44,    45,   121,    47,    42,   136,   137,   138,
     139,   140,   116,     7,     8,     4,     3,   121,     7,     8,
      19,    43,     9,    10,   145,    47,    42,    14,    19,    20,
      21,    22,    23,    24,    43,    44,    45,   211,    25,    26,
      27,    28,    29,    30,    19,    32,    42,    34,    35,    36,
      19,    20,    21,    22,    23,    24,    19,    20,     3,    20,
      21,    22,    23,    24,     9,    10,    39,    40,    13,    14,
      47,   200,    42,   150,   151,   152,   153,   154,   155,   202,
      25,    26,    27,   212,    29,    30,     7,    32,    50,    34,
      35,    36,    19,    20,    21,    22,    23,    24,    37,    38,
      39,    40,    41,    37,    38,    39,    40,    16,    17,    18,
      37,    38,    39,    40,    21,    22,    23,    24,     6,     7,
       8,    43,    44,    45,    43,    44,    45,    22,    23,    24,
      23,    24,     7,     8,   102,   103,   134,   135,     4,    33,
      43,     6,     6,    48,    16,    49,    24,    49,     6,    19,
      48,    43,    48,   133,    31,    79,   199,    38,   118,   145,
     161,   202,   141,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,     1,     6,    54,    55,    41,     3,
       9,    10,    14,    25,    26,    27,    28,    29,    30,    32,
      34,    35,    36,    56,    57,    60,    61,    67,    68,    69,
      70,    71,    75,    77,    83,    86,     1,     7,     8,    73,
      55,     4,     5,     6,    58,    59,     7,     8,    76,    91,
      92,    93,    94,    95,    89,    90,    92,    93,    94,    95,
      41,     7,    87,    88,    31,    84,     4,     5,     6,    40,
      47,    62,    63,    64,    65,    92,    93,    94,    95,   100,
     101,   102,     4,    15,    78,    79,    81,    95,    98,    99,
     100,    55,    41,    53,    72,    41,    43,    44,    45,    74,
      74,    19,    42,    42,    43,    44,    45,    47,    49,    96,
      43,    44,    45,    49,    19,    19,    42,    47,    42,     7,
      19,    47,     7,     8,   101,    98,    33,    19,    20,    21,
      22,    23,    24,    66,    19,    20,    37,    38,    39,    40,
      66,    50,    98,    42,    46,    80,    82,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    55,   100,    58,    58,
       6,     7,     8,    92,    97,    43,    44,    45,    98,     4,
      90,     6,    88,    98,    85,    90,    48,     6,     7,     8,
      64,    65,    65,   100,   100,   100,   100,   100,   102,    81,
      98,    98,    98,    99,    99,    99,    99,    99,    99,    13,
      11,    96,    42,    48,    42,    48,    48,    73,   100,    97,
       6,    19,    12,    41,    48,    48,    98,   100,    41
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
        case 6:
#line 41 "b--.y"
    {if((yyvsp[(2) - (3)])==1){retLineNums[retInd++] =(yyvsp[(1) - (3)]);}}
    break;

  case 9:
#line 46 "b--.y"
    {(yyval)=0;}
    break;

  case 10:
#line 47 "b--.y"
    {(yyval)=0;}
    break;

  case 11:
#line 48 "b--.y"
    {(yyval)=0;}
    break;

  case 12:
#line 49 "b--.y"
    {(yyval)=0;}
    break;

  case 13:
#line 50 "b--.y"
    {(yyval)=0;}
    break;

  case 14:
#line 51 "b--.y"
    {(yyval)=0;}
    break;

  case 15:
#line 52 "b--.y"
    {(yyval)=0;}
    break;

  case 16:
#line 53 "b--.y"
    {(yyval)=0;}
    break;

  case 17:
#line 54 "b--.y"
    {(yyval)=0;}
    break;

  case 18:
#line 55 "b--.y"
    {(yyval)=0;}
    break;

  case 19:
#line 56 "b--.y"
    {(yyval)=0;}
    break;

  case 20:
#line 57 "b--.y"
    {(yyval)=0;}
    break;

  case 21:
#line 58 "b--.y"
    {(yyval)=1;}
    break;

  case 30:
#line 75 "b--.y"
    {if(!lineNums[(yyvsp[(4) - (4)])]){yyerror("Line no. doesn't exist");}}
    break;

  case 45:
#line 105 "b--.y"
    {if(!lineNums[(yyvsp[(2) - (2)])]){yyerror("Line no. doesn't exist");}}
    break;

  case 46:
#line 108 "b--.y"
    {if(!lineNums[(yyvsp[(2) - (2)])]){yyerror("Line no. doesn't exist");}else{{gosubLineNums[gosubInd++] = (yyvsp[(2) - (2)]);}}}
    break;

  case 48:
#line 114 "b--.y"
    {
                        if((yyvsp[(1) - (2)])!=(yyvsp[(2) - (2)])){
                                yyerror("loop variable must be same at the beginning of for statement and at NEXT statement");
                        }
                        }
    break;

  case 49:
#line 121 "b--.y"
    {(yyval) = (yyvsp[(2) - (9)]);}
    break;

  case 50:
#line 122 "b--.y"
    {(yyval) = (yyvsp[(2) - (7)]);}
    break;

  case 51:
#line 123 "b--.y"
    {yyerror("error in FOR statement");}
    break;

  case 52:
#line 126 "b--.y"
    {(yyval)=(yyvsp[(4) - (4)]);}
    break;

  case 53:
#line 129 "b--.y"
    {(yyval)=(yyvsp[(1) - (2)]);}
    break;

  case 54:
#line 130 "b--.y"
    {(yyval)=(yyvsp[(1) - (2)]);}
    break;


/* Line 1267 of yacc.c.  */
#line 1739 "y.tab.c"
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


#line 277 "b--.y"


void yyerror(char *s) {
        status = 1;
    fprintf(stderr, "line %d: %s\n",yylineno,s);
}

//checkLinesOrder() checks if the program lines no. are in the ascending order.
int checkLinesOrder(FILE *fptr)
{
    if (fptr == NULL)
    {
        printf("Error reading file.\n");
        return 0;
    }
    int prevlineNo = 0, curLineNo = 0, totalLines = 0, maxLineNo = 1;

    while (!feof(fptr))
    {
        int scanned = fscanf(fptr, " %d", &curLineNo);
        if(!scanned)
        {
            printf("Error: Line should start with a no.!!\n");
            return 0;   
        }
        if (curLineNo >= 10000)
        {
            printf("Error: File too long!!\n");
            return 0;
        }
        // printf("%d\n", curLineNo);
        if (curLineNo <= prevlineNo)
        {
            printf("Error: Invalid Line no. at line %d!!\n", curLineNo);
            return 0;
        }
        prevlineNo = curLineNo;
        maxLineNo = curLineNo;
        lineNums[curLineNo] = 1;        //increasing the lineNo frequency to 1
        
        char ch;
        fscanf(fptr, "%c", &ch);
        while(!feof(fptr) && ch != '\n')
        {
            // printf("%c", ch);           
            fscanf(fptr, "%c", &ch);
        }
        totalLines++;
        ch=fgetc(fptr);
        if(ch == EOF) break;
        ungetc(ch,fptr);
    }
    printf("Total no. of lines in the program: %d\n", totalLines);
        return 1;
}

int main(int argc, char *argv[]) {
        lineNums = (int*) calloc(10000, sizeof(int));
        gosubLineNums = (int*) calloc(10000, sizeof(int));
        retLineNums = (int*) calloc(10000, sizeof(int));
        yyin=fopen(argv[1],"r");
        if (!checkLinesOrder(yyin))
                return 0;
        fclose(yyin);
        yyin=fopen(argv[1],"r");
        yylineno=1;
        yyparse();
        int found = 0;
        if(retInd==0){
                found=1;
        }
        for(int j=0; j<gosubInd; j++)
        {
                if(retLineNums[0]>=gosubLineNums[j] && gosubLineNums[j]>0) found = 1;
        }
        if(!found) yyerror("FATAL ERROR: There is no corrrespoding GOSUB statement for the RETURN statemnt.");
        for(int i=0;i<retInd-1;i++)
        {
                found = 0;
                for(int j=0; j<gosubInd; j++)
                {
                        if(retLineNums[i]<gosubLineNums[j] && retLineNums[i+1]>=gosubLineNums[j] && gosubLineNums[j]>0) found = 1;
                }
                if(!found) yyerror("FATAL ERROR: There is no corrrespoding GOSUB statement for the RETURN statemnt.");
        }
        if(!status) printf("\n=================================PROGRAM PARSED SUCCESSFULLY.===================================\n");
    return 0;
}

