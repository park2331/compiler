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
     INTEGER = 259,
     FLOATING = 260,
     CHARACTER = 261,
     STRING = 262,
     TYPEDEF_NAME = 263,
     NAMESPACE_NAME = 264,
     CLASS_NAME = 265,
     ENUM_NAME = 266,
     TEMPLATE_NAME = 267,
     ELLIPSIS = 268,
     COLONCOLON = 269,
     DOTSTAR = 270,
     ADDEQ = 271,
     SUBEQ = 272,
     MULEQ = 273,
     DIVEQ = 274,
     MODEQ = 275,
     XOREQ = 276,
     ANDEQ = 277,
     OREQ = 278,
     SL = 279,
     SR = 280,
     SREQ = 281,
     SLEQ = 282,
     EQ = 283,
     NOTEQ = 284,
     LTEQ = 285,
     GTEQ = 286,
     ANDAND = 287,
     OROR = 288,
     PLUSPLUS = 289,
     MINUSMINUS = 290,
     ARROWSTAR = 291,
     ARROW = 292,
     ASM = 293,
     AUTO = 294,
     BOOL = 295,
     BREAK = 296,
     CASE = 297,
     CATCH = 298,
     CHAR = 299,
     CLASS = 300,
     CONST = 301,
     CONST_CAST = 302,
     CONTINUE = 303,
     DEFAULT = 304,
     DELETE = 305,
     DO = 306,
     DOUBLE = 307,
     DYNAMIC_CAST = 308,
     ELSE = 309,
     ENUM = 310,
     EXPLICIT = 311,
     EXPORT = 312,
     EXTERN = 313,
     FALSE = 314,
     FLOAT = 315,
     FOR = 316,
     FRIEND = 317,
     GOTO = 318,
     IF = 319,
     INLINE = 320,
     INT = 321,
     LONG = 322,
     MUTABLE = 323,
     NAMESPACE = 324,
     NEW = 325,
     OPERATOR = 326,
     PRIVATE = 327,
     PROTECTED = 328,
     PUBLIC = 329,
     REGISTER = 330,
     REINTERPRET_CAST = 331,
     RETURN = 332,
     SHORT = 333,
     SIGNED = 334,
     SIZEOF = 335,
     STATIC = 336,
     STATIC_CAST = 337,
     STRUCT = 338,
     SWITCH = 339,
     TEMPLATE = 340,
     THIS = 341,
     THROW = 342,
     TRUE = 343,
     TRY = 344,
     TYPEDEF = 345,
     TYPEID = 346,
     TYPENAME = 347,
     UNION = 348,
     UNSIGNED = 349,
     USING = 350,
     VIRTUAL = 351,
     VOID = 352,
     VOLATILE = 353,
     WCHAR_T = 354,
     WHILE = 355
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER 259
#define FLOATING 260
#define CHARACTER 261
#define STRING 262
#define TYPEDEF_NAME 263
#define NAMESPACE_NAME 264
#define CLASS_NAME 265
#define ENUM_NAME 266
#define TEMPLATE_NAME 267
#define ELLIPSIS 268
#define COLONCOLON 269
#define DOTSTAR 270
#define ADDEQ 271
#define SUBEQ 272
#define MULEQ 273
#define DIVEQ 274
#define MODEQ 275
#define XOREQ 276
#define ANDEQ 277
#define OREQ 278
#define SL 279
#define SR 280
#define SREQ 281
#define SLEQ 282
#define EQ 283
#define NOTEQ 284
#define LTEQ 285
#define GTEQ 286
#define ANDAND 287
#define OROR 288
#define PLUSPLUS 289
#define MINUSMINUS 290
#define ARROWSTAR 291
#define ARROW 292
#define ASM 293
#define AUTO 294
#define BOOL 295
#define BREAK 296
#define CASE 297
#define CATCH 298
#define CHAR 299
#define CLASS 300
#define CONST 301
#define CONST_CAST 302
#define CONTINUE 303
#define DEFAULT 304
#define DELETE 305
#define DO 306
#define DOUBLE 307
#define DYNAMIC_CAST 308
#define ELSE 309
#define ENUM 310
#define EXPLICIT 311
#define EXPORT 312
#define EXTERN 313
#define FALSE 314
#define FLOAT 315
#define FOR 316
#define FRIEND 317
#define GOTO 318
#define IF 319
#define INLINE 320
#define INT 321
#define LONG 322
#define MUTABLE 323
#define NAMESPACE 324
#define NEW 325
#define OPERATOR 326
#define PRIVATE 327
#define PROTECTED 328
#define PUBLIC 329
#define REGISTER 330
#define REINTERPRET_CAST 331
#define RETURN 332
#define SHORT 333
#define SIGNED 334
#define SIZEOF 335
#define STATIC 336
#define STATIC_CAST 337
#define STRUCT 338
#define SWITCH 339
#define TEMPLATE 340
#define THIS 341
#define THROW 342
#define TRUE 343
#define TRY 344
#define TYPEDEF 345
#define TYPEID 346
#define TYPENAME 347
#define UNION 348
#define UNSIGNED 349
#define USING 350
#define VIRTUAL 351
#define VOID 352
#define VOLATILE 353
#define WCHAR_T 354
#define WHILE 355




/* Copy the first part of user declarations.  */
#line 44 "120gram.y"

#include <stdio.h>
#include <string.h>
#include "nonterm.h"
#include "tree.h"

extern int lineno;
extern char *yytext;
int yydebug=0;

static void yyerror(char *s);


/*
 * warning, this %union is not what you need, it is for demonstration purposes.
 */


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
typedef union YYSTYPE
#line 61 "120gram.y"
{
  char *text;
  nodeptr n;
  }
/* Line 193 of yacc.c.  */
#line 319 "120gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 332 "120gram.tab.c"

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
#define YYFINAL  178
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  507
/* YYNRULES -- Number of states.  */
#define YYNSTATES  878

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,     2,     2,   116,   111,     2,
     101,   102,   110,   112,   109,   113,   106,   115,   125,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   122,
     107,   121,   108,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,   117,   126,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   123,   118,   124,   103,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    51,    53,    55,    57,    59,
      61,    63,    66,    69,    73,    80,    83,    86,    88,    93,
      98,   103,   108,   113,   118,   124,   129,   134,   138,   144,
     149,   154,   158,   161,   164,   172,   180,   188,   196,   201,
     206,   208,   212,   214,   217,   220,   223,   226,   229,   232,
     237,   239,   241,   243,   245,   247,   249,   254,   260,   267,
     275,   279,   282,   285,   287,   291,   296,   300,   303,   307,
     312,   318,   320,   325,   327,   331,   335,   337,   341,   345,
     349,   351,   355,   359,   361,   365,   369,   371,   375,   379,
     383,   387,   389,   393,   397,   399,   403,   405,   409,   411,
     415,   417,   421,   423,   427,   429,   435,   437,   441,   443,
     445,   447,   449,   451,   453,   455,   457,   459,   461,   463,
     465,   467,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   493,   498,   502,   505,   509,   511,   514,   520,
     528,   534,   536,   541,   547,   555,   564,   566,   568,   571,
     574,   578,   582,   584,   586,   589,   591,   593,   595,   597,
     599,   601,   603,   605,   607,   609,   611,   613,   617,   620,
     622,   624,   626,   628,   630,   632,   635,   637,   639,   641,
     643,   645,   647,   649,   651,   653,   655,   657,   659,   661,
     663,   666,   670,   672,   674,   676,   678,   680,   682,   684,
     686,   688,   690,   692,   694,   696,   698,   703,   707,   712,
     716,   720,   725,   733,   739,   741,   745,   747,   751,   753,
     755,   757,   759,   761,   767,   773,   778,   780,   786,   790,
     793,   796,   798,   805,   811,   817,   822,   827,   834,   840,
     846,   851,   857,   863,   867,   869,   873,   876,   878,   881,
     883,   890,   896,   902,   907,   912,   919,   926,   931,   935,
     937,   940,   942,   945,   949,   953,   958,   960,   963,   965,
     967,   969,   972,   976,   979,   982,   985,   988,   990,   997,
    1003,  1009,  1014,  1019,  1023,  1026,  1028,  1030,  1031,  1035,
    1037,  1041,  1044,  1049,  1052,  1057,  1061,  1066,  1069,  1073,
    1075,  1078,  1082,  1084,  1089,  1092,  1094,  1098,  1103,  1106,
    1110,  1114,  1119,  1121,  1123,  1125,  1128,  1132,  1136,  1139,
    1142,  1144,  1147,  1150,  1152,  1154,  1156,  1160,  1161,  1163,
    1166,  1169,  1173,  1176,  1179,  1182,  1184,  1188,  1192,  1195,
    1198,  1200,  1206,  1211,  1216,  1220,  1226,  1231,  1236,  1240,
    1242,  1244,  1246,  1249,  1252,  1255,  1258,  1260,  1264,  1269,
    1273,  1276,  1279,  1281,  1283,  1286,  1288,  1290,  1294,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1330,  1332,  1334,  1336,  1338,
    1340,  1342,  1344,  1346,  1348,  1350,  1352,  1354,  1356,  1358,
    1360,  1362,  1364,  1366,  1368,  1370,  1373,  1376,  1383,  1385,
    1389,  1391,  1393,  1396,  1401,  1404,  1409,  1416,  1425,  1430,
    1432,  1436,  1438,  1440,  1442,  1445,  1450,  1454,  1459,  1462,
    1468,  1471,  1474,  1476,  1478,  1481,  1486,  1488,  1492,  1493,
    1495,  1496,  1498,  1499,  1501,  1502,  1504,  1505,  1507,  1508,
    1510,  1511,  1513,  1514,  1516,  1517,  1519,  1520,  1522,  1523,
    1525,  1526,  1528,  1529,  1531,  1532,  1534,  1535,  1537,  1538,
    1540,  1541,  1543,  1544,  1546,  1547,  1549,  1550,  1552,  1553,
    1555,  1556,  1558,  1559,  1561,  1562,  1564,  1565
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,     8,    -1,   130,    -1,     9,    -1,    10,
      -1,   260,    -1,    11,    -1,    12,    -1,     3,    -1,   136,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,     4,
      -1,     6,    -1,     5,    -1,     7,    -1,    88,    -1,    59,
      -1,   273,    -1,   135,    -1,    86,    -1,   101,   173,   102,
      -1,   143,    -1,   144,    -1,   145,    -1,   134,    -1,   254,
      -1,   247,    -1,   103,   131,    -1,   146,   144,    -1,   146,
      85,   144,    -1,   131,    14,   146,   129,    14,   146,    -1,
     131,    14,    -1,   129,    14,    -1,   142,    -1,   147,   104,
     173,   105,    -1,   147,   101,   275,   102,    -1,    52,   101,
     275,   102,    -1,    66,   101,   275,   102,    -1,    44,   101,
     275,   102,    -1,    40,   101,   275,   102,    -1,   147,   106,
      85,    14,   143,    -1,   147,   106,    85,   143,    -1,   147,
     106,    14,   143,    -1,   147,   106,   143,    -1,   147,    37,
      85,    14,   143,    -1,   147,    37,    85,   143,    -1,   147,
      37,    14,   143,    -1,   147,    37,   143,    -1,   147,    34,
      -1,   147,    35,    -1,    53,   107,   222,   108,   101,   173,
     102,    -1,    82,   107,   222,   108,   101,   173,   102,    -1,
      76,   107,   222,   108,   101,   173,   102,    -1,    47,   107,
     222,   108,   101,   173,   102,    -1,    91,   101,   173,   102,
      -1,    91,   101,   222,   102,    -1,   171,    -1,   148,   109,
     171,    -1,   147,    -1,    34,   158,    -1,    35,   158,    -1,
     110,   158,    -1,   111,   158,    -1,   150,   158,    -1,    80,
     149,    -1,    80,   101,   222,   102,    -1,   151,    -1,   157,
      -1,   112,    -1,   113,    -1,   114,    -1,   103,    -1,    70,
     277,   153,   278,    -1,    14,    70,   277,   153,   278,    -1,
      70,   277,   101,   222,   102,   278,    -1,    14,    70,   277,
     101,   222,   102,   278,    -1,   101,   148,   102,    -1,   223,
     279,    -1,   218,   279,    -1,   155,    -1,   104,   173,   105,
      -1,   155,   104,   174,   105,    -1,   101,   275,   102,    -1,
      50,   158,    -1,    14,    50,   158,    -1,    50,   104,   105,
     158,    -1,    14,    50,   104,   105,   158,    -1,   149,    -1,
     101,   222,   102,   158,    -1,   158,    -1,   159,    15,   158,
      -1,   159,    36,   158,    -1,   159,    -1,   160,   110,   159,
      -1,   160,   115,   159,    -1,   160,   116,   159,    -1,   160,
      -1,   161,   112,   160,    -1,   161,   113,   160,    -1,   161,
      -1,   162,    24,   161,    -1,   162,    25,   161,    -1,   162,
      -1,   163,   107,   162,    -1,   163,   108,   162,    -1,   163,
      30,   162,    -1,   163,    31,   162,    -1,   163,    -1,   164,
      28,   163,    -1,   164,    29,   163,    -1,   164,    -1,   165,
     111,   164,    -1,   165,    -1,   166,   117,   165,    -1,   166,
      -1,   167,   118,   166,    -1,   167,    -1,   168,    32,   167,
      -1,   168,    -1,   169,    33,   168,    -1,   169,    -1,   169,
     119,   173,   120,   171,    -1,   170,    -1,   169,   172,   171,
      -1,   270,    -1,   121,    -1,    18,    -1,    19,    -1,    20,
      -1,    16,    -1,    17,    -1,    26,    -1,    27,    -1,    22,
      -1,    21,    -1,    23,    -1,   171,    -1,   173,   109,   171,
      -1,   170,    -1,   176,    -1,   177,    -1,   178,    -1,   180,
      -1,   182,    -1,   184,    -1,   185,    -1,   265,    -1,   134,
     120,   175,    -1,    42,   174,   120,   175,    -1,    49,   120,
     175,    -1,   280,   122,    -1,   123,   281,   124,    -1,   175,
      -1,   179,   175,    -1,    64,   101,   181,   102,   175,    -1,
      64,   101,   181,   102,   175,    54,   175,    -1,    84,   101,
     181,   102,   175,    -1,   173,    -1,   223,   216,   121,   171,
      -1,   100,   101,   181,   102,   175,    -1,    51,   175,   100,
     101,   173,   102,   122,    -1,    61,   101,   183,   282,   122,
     280,   102,   175,    -1,   177,    -1,   189,    -1,    41,   122,
      -1,    48,   122,    -1,    77,   280,   122,    -1,    63,   134,
     122,    -1,   188,    -1,   187,    -1,   186,   187,    -1,   188,
      -1,   229,    -1,   256,    -1,   263,    -1,   264,    -1,   213,
      -1,   202,    -1,   189,    -1,   212,    -1,   208,    -1,   210,
      -1,   211,    -1,   191,   214,   122,    -1,   191,   122,    -1,
     192,    -1,   194,    -1,   193,    -1,    62,    -1,    90,    -1,
     190,    -1,   191,   190,    -1,    39,    -1,    75,    -1,    81,
      -1,    58,    -1,    68,    -1,    65,    -1,    96,    -1,    56,
      -1,   195,    -1,   234,    -1,   198,    -1,   197,    -1,   220,
      -1,   196,    -1,   146,   196,    -1,    14,   274,   196,    -1,
      44,    -1,    99,    -1,    40,    -1,    78,    -1,    66,    -1,
      67,    -1,    79,    -1,    94,    -1,    60,    -1,    52,    -1,
      97,    -1,   131,    -1,   132,    -1,   128,    -1,   236,    14,
     146,   134,    -1,   236,    14,   134,    -1,    55,    14,   146,
     134,    -1,    55,    14,   134,    -1,    55,   146,   134,    -1,
      92,   276,   146,   134,    -1,    92,   276,   146,   134,   107,
     261,   108,    -1,    55,   134,   123,   283,   124,    -1,   200,
      -1,   199,   109,   200,    -1,   201,    -1,   201,   121,   174,
      -1,   134,    -1,   203,    -1,   206,    -1,   204,    -1,   205,
      -1,    69,   134,   123,   207,   124,    -1,    69,   130,   123,
     207,   124,    -1,    69,   123,   207,   124,    -1,   273,    -1,
      69,   134,   121,   209,   122,    -1,    14,   146,   129,    -1,
      14,   129,    -1,   146,   129,    -1,   129,    -1,    95,    92,
      14,   146,   144,   122,    -1,    95,    92,   146,   144,   122,
      -1,    95,    14,   146,   144,   122,    -1,    95,   146,   144,
     122,    -1,    95,    14,   144,   122,    -1,    95,    69,    14,
     146,   129,   122,    -1,    95,    69,    14,   129,   122,    -1,
      95,    69,   146,   129,   122,    -1,    95,    69,   129,   122,
      -1,    38,   101,   139,   102,   122,    -1,    58,   139,   123,
     273,   124,    -1,    58,   139,   187,    -1,   215,    -1,   214,
     109,   215,    -1,   216,   284,    -1,   217,    -1,   218,   216,
      -1,   221,    -1,   217,   101,   226,   102,   219,   271,    -1,
     217,   101,   226,   102,   219,    -1,   217,   101,   226,   102,
     271,    -1,   217,   101,   226,   102,    -1,    10,   101,   226,
     102,    -1,    10,    14,   221,   101,   226,   102,    -1,    10,
      14,    10,   101,   226,   102,    -1,   217,   104,   285,   105,
      -1,   101,   216,   102,    -1,   110,    -1,   110,   219,    -1,
     111,    -1,   146,   110,    -1,   146,   110,   219,    -1,    14,
     146,   110,    -1,    14,   146,   110,   219,    -1,   220,    -1,
     220,   219,    -1,    46,    -1,    98,    -1,   143,    -1,    14,
     143,    -1,    14,   146,   196,    -1,    14,   196,    -1,   223,
     286,    -1,   194,   287,    -1,   218,   286,    -1,   225,    -1,
     288,   101,   226,   102,   219,   271,    -1,   288,   101,   226,
     102,   219,    -1,   288,   101,   226,   102,   271,    -1,   288,
     101,   226,   102,    -1,   288,   104,   285,   105,    -1,   101,
     224,   102,    -1,   227,    13,    -1,   227,    -1,    13,    -1,
      -1,   227,   109,    13,    -1,   228,    -1,   227,   109,   228,
      -1,   191,   216,    -1,   191,   216,   121,   171,    -1,   191,
     286,    -1,   191,   286,   121,   171,    -1,   216,   289,   230,
      -1,   191,   216,   289,   230,    -1,   216,   266,    -1,   191,
     216,   266,    -1,   178,    -1,   121,   232,    -1,   101,   148,
     102,    -1,   171,    -1,   123,   233,   290,   124,    -1,   123,
     124,    -1,   232,    -1,   233,   109,   232,    -1,   235,   123,
     291,   124,    -1,   236,   134,    -1,   236,   134,   243,    -1,
     236,   146,   134,    -1,   236,   146,   134,   243,    -1,    45,
      -1,    83,    -1,    93,    -1,   238,   291,    -1,   246,   120,
     291,    -1,   191,   239,   122,    -1,   191,   122,    -1,   239,
     122,    -1,   122,    -1,   229,   292,    -1,   145,   122,    -1,
     210,    -1,   256,    -1,   240,    -1,   239,   109,   240,    -1,
      -1,   216,    -1,   216,   241,    -1,   216,   242,    -1,   134,
     120,   174,    -1,   121,   125,    -1,   121,   174,    -1,   120,
     244,    -1,   245,    -1,   244,   109,   245,    -1,    14,   146,
     131,    -1,    14,   131,    -1,   146,   131,    -1,   131,    -1,
      96,   246,    14,   274,   131,    -1,    96,   246,   274,   131,
      -1,    96,    14,   274,   131,    -1,    96,   274,   131,    -1,
     246,    96,    14,   274,   131,    -1,   246,    96,   274,   131,
      -1,   246,    14,   274,   131,    -1,   246,   274,   131,    -1,
      72,    -1,    73,    -1,    74,    -1,    71,   248,    -1,   223,
     293,    -1,   218,   293,    -1,   120,   251,    -1,   252,    -1,
     252,   109,   251,    -1,   253,   101,   275,   102,    -1,    14,
     146,   131,    -1,    14,   131,    -1,   146,   131,    -1,   131,
      -1,   134,    -1,    71,   255,    -1,    70,    -1,    50,    -1,
      70,   104,   105,    -1,    50,   104,   105,    -1,   112,    -1,
     126,    -1,   110,    -1,   115,    -1,   116,    -1,   117,    -1,
     111,    -1,   118,    -1,   103,    -1,   114,    -1,   121,    -1,
     107,    -1,   108,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    35,    -1,   109,    -1,    36,    -1,    37,    -1,
     101,   102,    -1,   104,   105,    -1,   294,    85,   107,   257,
     108,   187,    -1,   258,    -1,   257,   109,   258,    -1,   259,
      -1,   228,    -1,    45,   134,    -1,    45,   134,   121,   222,
      -1,    92,   134,    -1,    92,   134,   121,   222,    -1,    85,
     107,   257,   108,    45,   134,    -1,    85,   107,   257,   108,
      45,   134,   121,   133,    -1,   133,   107,   261,   108,    -1,
     262,    -1,   261,   109,   262,    -1,   171,    -1,   222,    -1,
     133,    -1,    85,   187,    -1,    85,   107,   108,   187,    -1,
      89,   178,   267,    -1,    89,   289,   230,   267,    -1,   268,
     295,    -1,    43,   101,   269,   102,   178,    -1,   223,   216,
      -1,   223,   224,    -1,   223,    -1,    13,    -1,    87,   296,
      -1,    87,   101,   297,   102,    -1,   222,    -1,   272,   109,
     222,    -1,    -1,   186,    -1,    -1,   146,    -1,    -1,   148,
      -1,    -1,    14,    -1,    -1,   152,    -1,    -1,   156,    -1,
      -1,   154,    -1,    -1,   173,    -1,    -1,   179,    -1,    -1,
     181,    -1,    -1,   199,    -1,    -1,   231,    -1,    -1,   174,
      -1,    -1,   224,    -1,    -1,   223,    -1,    -1,   225,    -1,
      -1,   250,    -1,    -1,   109,    -1,    -1,   237,    -1,    -1,
     122,    -1,    -1,   249,    -1,    -1,    57,    -1,    -1,   267,
      -1,    -1,   171,    -1,    -1,   272,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   102,   107,   112,   113,   118,   123,   131,
     135,   136,   137,   138,   139,   143,   147,   151,   155,   159,
     160,   168,   176,   177,   178,   179,   183,   184,   188,   189,
     190,   191,   195,   196,   200,   202,   203,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     233,   234,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   251,   252,   253,   254,   258,   259,   260,   261,
     265,   269,   273,   274,   278,   279,   283,   287,   288,   289,
     290,   294,   295,   299,   300,   301,   305,   306,   307,   308,
     312,   313,   314,   318,   319,   320,   324,   325,   326,   327,
     328,   332,   333,   334,   338,   339,   343,   344,   348,   349,
     353,   354,   358,   359,   363,   364,   368,   369,   370,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     388,   389,   393,   401,   402,   403,   404,   405,   406,   407,
     408,   412,   413,   414,   418,   422,   426,   427,   431,   432,
     433,   437,   438,   442,   443,   444,   448,   449,   453,   454,
     455,   456,   460,   468,   469,   473,   474,   475,   476,   477,
     478,   479,   483,   484,   485,   486,   487,   491,   492,   496,
     497,   498,   499,   500,   504,   505,   509,   510,   511,   512,
     513,   517,   518,   519,   523,   524,   525,   526,   527,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   548,   549,   550,   554,   555,   556,   557,
     558,   559,   560,   570,   574,   575,   579,   580,   584,   599,
     600,   604,   605,   609,   613,   617,   621,   631,   635,   636,
     637,   638,   642,   643,   644,   645,   646,   650,   651,   652,
     653,   657,   661,   662,   670,   671,   675,   679,   680,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   697,
     698,   699,   700,   701,   702,   703,   707,   708,   712,   713,
     717,   718,   719,   720,   724,   728,   732,   733,   737,   738,
     739,   740,   741,   742,   746,   747,   748,   749,   750,   754,
     755,   759,   760,   761,   762,   766,   767,   768,   769,   773,
     777,   778,   782,   783,   784,   788,   789,   797,   801,   802,
     803,   804,   808,   809,   810,   814,   815,   819,   820,   821,
     822,   823,   824,   825,   826,   830,   831,   834,   835,   836,
     837,   838,   847,   851,   859,   863,   864,   868,   869,   870,
     871,   872,   873,   874,   875,   876,   877,   878,   879,   883,
     884,   885,   893,   897,   901,   905,   909,   910,   914,   918,
     919,   920,   921,   922,   930,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   983,   987,   988,
     992,   993,   997,   998,   999,  1000,  1001,  1002,  1006,  1010,
    1011,  1015,  1016,  1017,  1021,  1025,  1033,  1037,  1041,  1045,
    1049,  1050,  1051,  1052,  1056,  1060,  1064,  1065,  1072,  1074,
    1077,  1079,  1082,  1084,  1087,  1089,  1092,  1094,  1097,  1099,
    1102,  1104,  1107,  1109,  1112,  1114,  1117,  1119,  1122,  1124,
    1127,  1129,  1132,  1134,  1137,  1139,  1142,  1144,  1147,  1149,
    1152,  1154,  1157,  1159,  1162,  1164,  1167,  1169,  1172,  1174,
    1177,  1179,  1182,  1184,  1187,  1189,  1192,  1194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "FLOATING",
  "CHARACTER", "STRING", "TYPEDEF_NAME", "NAMESPACE_NAME", "CLASS_NAME",
  "ENUM_NAME", "TEMPLATE_NAME", "ELLIPSIS", "COLONCOLON", "DOTSTAR",
  "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ",
  "SL", "SR", "SREQ", "SLEQ", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND",
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROWSTAR", "ARROW", "ASM", "AUTO",
  "BOOL", "BREAK", "CASE", "CATCH", "CHAR", "CLASS", "CONST", "CONST_CAST",
  "CONTINUE", "DEFAULT", "DELETE", "DO", "DOUBLE", "DYNAMIC_CAST", "ELSE",
  "ENUM", "EXPLICIT", "EXPORT", "EXTERN", "FALSE", "FLOAT", "FOR",
  "FRIEND", "GOTO", "IF", "INLINE", "INT", "LONG", "MUTABLE", "NAMESPACE",
  "NEW", "OPERATOR", "PRIVATE", "PROTECTED", "PUBLIC", "REGISTER",
  "REINTERPRET_CAST", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STATIC_CAST", "STRUCT", "SWITCH", "TEMPLATE", "THIS", "THROW", "TRUE",
  "TRY", "TYPEDEF", "TYPEID", "TYPENAME", "UNION", "UNSIGNED", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WCHAR_T", "WHILE", "'('", "')'", "'~'",
  "'['", "']'", "'.'", "'<'", "'>'", "','", "'*'", "'&'", "'+'", "'-'",
  "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "'0'", "'_'", "$accept", "typedef_name", "namespace_name",
  "original_namespace_name", "class_name", "enum_name", "template_name",
  "identifier", "literal", "integer_literal", "character_literal",
  "floating_literal", "string_literal", "boolean_literal",
  "translation_unit", "primary_expression", "id_expression",
  "unqualified_id", "qualified_id", "nested_name_specifier",
  "postfix_expression", "expression_list", "unary_expression",
  "unary_operator", "new_expression", "new_placement", "new_type_id",
  "new_declarator", "direct_new_declarator", "new_initializer",
  "delete_expression", "cast_expression", "pm_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "simple_type_specifier", "type_name", "elaborated_type_specifier",
  "enum_specifier", "enumerator_list", "enumerator_definition",
  "enumerator", "namespace_definition", "named_namespace_definition",
  "original_namespace_definition", "extension_namespace_definition",
  "unnamed_namespace_definition", "namespace_body",
  "namespace_alias_definition", "qualified_namespace_specifier",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "ptr_operator", "cv_qualifier_seq",
  "cv_qualifier", "declarator_id", "type_id", "type_specifier_seq",
  "abstract_declarator", "direct_abstract_declarator",
  "parameter_declaration_clause", "parameter_declaration_list",
  "parameter_declaration", "function_definition", "function_body",
  "initializer", "initializer_clause", "initializer_list",
  "class_specifier", "class_head", "class_key", "member_specification",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "constant_initializer", "base_clause",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "conversion_declarator",
  "ctor_initializer", "mem_initializer_list", "mem_initializer",
  "mem_initializer_id", "operator_function_id", "operator",
  "template_declaration", "template_parameter_list", "template_parameter",
  "type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_instantiation", "explicit_specialization",
  "try_block", "function_try_block", "handler_seq", "handler",
  "exception_declaration", "throw_expression", "exception_specification",
  "type_id_list", "declaration_seq_opt", "nested_name_specifier_opt",
  "expression_list_opt", "COLONCOLON_opt", "new_placement_opt",
  "new_initializer_opt", "new_declarator_opt", "expression_opt",
  "statement_seq_opt", "condition_opt", "enumerator_list_opt",
  "initializer_opt", "constant_expression_opt", "abstract_declarator_opt",
  "type_specifier_seq_opt", "direct_abstract_declarator_opt",
  "ctor_initializer_opt", "COMMA_opt", "member_specification_opt",
  "SEMICOLON_opt", "conversion_declarator_opt", "EXPORT_opt",
  "handler_seq_opt", "assignment_expression_opt", "type_id_list_opt", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    40,    41,   126,    91,    93,    46,    60,    62,    44,
      42,    38,    43,    45,    33,    47,    37,    94,   124,    63,
      58,    61,    59,   123,   125,    48,    95
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   130,   131,   131,   132,   133,   134,
     135,   135,   135,   135,   135,   136,   137,   138,   139,   140,
     140,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   151,   151,
     152,   153,   154,   154,   155,   155,   156,   157,   157,   157,
     157,   158,   158,   159,   159,   159,   160,   160,   160,   160,
     161,   161,   161,   162,   162,   162,   163,   163,   163,   163,
     163,   164,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     173,   173,   174,   175,   175,   175,   175,   175,   175,   175,
     175,   176,   176,   176,   177,   178,   179,   179,   180,   180,
     180,   181,   181,   182,   182,   182,   183,   183,   184,   184,
     184,   184,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   188,   188,   188,   188,   188,   189,   189,   190,
     190,   190,   190,   190,   191,   191,   192,   192,   192,   192,
     192,   193,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   196,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   198,   199,   199,   200,   200,   201,   202,
     202,   203,   203,   204,   205,   206,   207,   208,   209,   209,
     209,   209,   210,   210,   210,   210,   210,   211,   211,   211,
     211,   212,   213,   213,   214,   214,   215,   216,   216,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   218,   218,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   221,   221,   222,   223,   224,   224,   225,   225,
     225,   225,   225,   225,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   228,   228,   229,   229,   229,   229,   230,
     231,   231,   232,   232,   232,   233,   233,   234,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   238,
     238,   238,   238,   238,   238,   239,   239,   240,   240,   240,
     240,   240,   241,   242,   243,   244,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   246,
     246,   246,   247,   248,   249,   250,   251,   251,   252,   253,
     253,   253,   253,   253,   254,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   256,   257,   257,
     258,   258,   259,   259,   259,   259,   259,   259,   260,   261,
     261,   262,   262,   262,   263,   264,   265,   266,   267,   268,
     269,   269,   269,   269,   270,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     279,   279,   280,   280,   281,   281,   282,   282,   283,   283,
     284,   284,   285,   285,   286,   286,   287,   287,   288,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   294,   295,   295,   296,   296,   297,   297
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     6,     2,     2,     1,     4,     4,
       4,     4,     4,     4,     5,     4,     4,     3,     5,     4,
       4,     3,     2,     2,     7,     7,     7,     7,     4,     4,
       1,     3,     1,     2,     2,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     4,     5,     6,     7,
       3,     2,     2,     1,     3,     4,     3,     2,     3,     4,
       5,     1,     4,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     5,     7,
       5,     1,     4,     5,     7,     8,     1,     1,     2,     2,
       3,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     3,
       3,     4,     7,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     5,     5,     4,     1,     5,     3,     2,
       2,     1,     6,     5,     5,     4,     4,     6,     5,     5,
       4,     5,     5,     3,     1,     3,     2,     1,     2,     1,
       6,     5,     5,     4,     4,     6,     6,     4,     3,     1,
       2,     1,     2,     3,     3,     4,     1,     2,     1,     1,
       1,     2,     3,     2,     2,     2,     2,     1,     6,     5,
       5,     4,     4,     3,     2,     1,     1,     0,     3,     1,
       3,     2,     4,     2,     4,     3,     4,     2,     3,     1,
       2,     3,     1,     4,     2,     1,     3,     4,     2,     3,
       3,     4,     1,     1,     1,     2,     3,     3,     2,     2,
       1,     2,     2,     1,     1,     1,     3,     0,     1,     2,
       2,     3,     2,     2,     2,     1,     3,     3,     2,     2,
       1,     5,     4,     4,     3,     5,     4,     4,     3,     1,
       1,     1,     2,     2,     2,     2,     1,     3,     4,     3,
       2,     2,     1,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     6,     1,     3,
       1,     1,     2,     4,     2,     4,     6,     8,     4,     1,
       3,     1,     1,     1,     2,     4,     3,     4,     2,     5,
       2,     2,     1,     1,     2,     4,     1,     3,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     458,     9,     2,     4,     5,     7,     8,     0,     0,   196,
     214,   212,   332,   288,   221,     0,   203,   501,   199,   220,
     192,   201,   216,   217,   200,     0,     0,   197,   215,   218,
     198,   333,     0,   193,   464,   334,   219,     0,   202,   222,
     289,   213,     0,     0,   279,   281,   225,     0,     3,   223,
     224,     0,    28,     0,   290,    26,    27,     0,   459,   173,
     175,   182,   194,     0,   189,   191,   190,   204,   209,   207,
     206,   181,   239,   241,   242,   240,   184,   185,   186,   183,
     180,   490,   267,     0,   208,   269,   176,   205,     0,     0,
      30,    29,   177,     6,   178,   179,    21,     0,     0,   307,
       5,   291,     0,   293,     0,     0,     0,     0,     0,     0,
      18,     0,   458,     0,     0,   460,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   423,   424,   386,   385,
       0,   397,     0,   400,   401,   422,   391,   395,   389,   398,
     392,   393,   394,   396,   399,   390,     0,   486,   498,   372,
     384,     0,   444,   465,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   280,   286,    36,    35,     0,     1,     0,
     282,   223,    32,   210,   174,   199,   188,   195,     0,   264,
     480,   490,     0,   491,   317,     0,   307,   482,   268,   347,
       0,   328,     0,     0,     5,     0,     0,     0,   306,   484,
       0,   305,   309,   284,   292,   211,     0,   229,     0,   478,
     230,   458,   263,     0,   246,   458,     0,   458,   461,     0,
       0,   425,   426,   487,   295,     0,     0,   498,   499,   373,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,   287,     0,    15,    17,    16,   460,     0,     0,
     214,   212,     0,     0,   221,     0,    20,   216,   466,     0,
       0,     0,    23,   504,    19,     0,     0,    75,     0,     0,
      72,    73,    74,   443,    22,    10,    11,    12,    13,    14,
      37,    25,     0,    62,    91,     0,    70,    71,    93,    96,
     100,   103,   106,   111,   114,   116,   118,   120,   122,   124,
     126,   441,   442,   484,     0,   439,   128,    33,   283,     0,
     187,     0,     0,   481,   318,   266,     0,     0,     0,   382,
     383,     0,   375,   376,     0,   472,   319,   315,     0,     0,
       0,     0,     0,     0,   124,   142,   483,     0,   369,   370,
     371,     0,   340,    28,    27,   347,   343,   348,   496,   495,
     347,     0,   345,     0,   344,     0,   227,     0,     0,   329,
     330,     0,   307,     0,   307,   488,   311,   484,   485,   297,
     313,     0,   274,   304,     0,   285,     0,   228,   238,   479,
     234,   236,     0,     0,   245,     0,     0,   251,     0,     0,
       0,   388,   387,     0,   374,   445,   231,   256,     0,     0,
       0,   260,     0,     0,     0,   255,     0,     0,   466,    63,
      64,   462,   462,     0,     0,    87,   462,     0,   462,     0,
     467,     0,     0,     0,    68,     0,   505,   454,     0,   140,
       0,     0,    65,    66,    52,    53,     0,   462,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   130,   131,   132,   138,   137,   139,   135,   136,
       0,     0,   129,     0,   488,   484,   294,   438,     0,   265,
     480,     0,    60,     0,   322,   320,   316,     0,   380,     0,
     381,     0,   462,     0,     0,     0,     0,   472,     0,     0,
       0,     0,   472,     0,     0,     0,    28,   473,   156,   143,
     144,   145,   472,   146,   147,   148,   149,   172,     0,   150,
       0,     0,   273,   277,     0,   342,   338,   348,     0,     0,
     349,   350,   497,   341,   335,   347,   339,   347,   327,   226,
       0,     0,   360,     0,   354,   355,     0,   331,   332,     0,
     464,   431,     0,   428,   430,     0,     0,     0,     0,   296,
       0,   307,   482,   308,   310,   261,     0,     0,   233,   262,
     244,   249,     0,   250,   247,   243,     0,   254,   258,     0,
     259,     0,   253,     0,     0,    88,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,   470,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    47,    94,    95,    97,    98,    99,
     101,   102,   104,   105,   109,   110,   107,   108,   112,   113,
     115,   117,   119,   121,   123,     0,   127,   440,   321,     0,
     324,   325,   492,     0,   447,   502,   379,   377,     0,   168,
       0,   169,   472,     0,   472,     0,     0,     0,     0,     0,
       0,     0,   472,   157,   154,   155,     0,   271,   272,   351,
     337,   352,   353,   348,   346,   336,   358,     0,     0,     0,
       0,   359,     0,     0,     0,     0,   432,     0,   434,     0,
       0,   276,   275,   303,   312,   314,     0,     0,   235,   237,
     248,     0,   257,   252,    34,     0,     0,   468,    43,    42,
       0,    89,    40,     0,    41,    80,     0,   462,   469,    76,
       0,   471,    83,   470,    81,     0,    69,     0,    58,    59,
     141,    92,    50,     0,    49,    39,    38,    46,     0,    45,
       0,    61,   493,     0,     0,   503,   448,   378,   472,   153,
       0,   166,   476,   167,   171,   161,     0,     0,   170,     0,
     446,     0,   151,   506,   270,   357,     0,     0,     0,   364,
     356,     0,     0,     0,   368,     0,     0,     0,   427,   429,
     301,   302,   232,    90,     0,    77,     0,     0,   468,     0,
       0,     0,    82,     0,     0,    48,    44,   125,   326,   323,
     453,   452,     0,   152,     0,   477,     0,   472,     0,   472,
     472,   456,   507,     0,   363,     0,   362,   367,     0,   366,
     433,     0,   435,   299,   300,   468,     0,     0,    78,    86,
      84,     0,     0,     0,   450,   451,     0,     0,   472,   158,
       0,   160,   163,     0,   455,   361,   365,     0,   298,    79,
      57,    54,    85,    56,    55,   449,     0,     0,   472,   162,
     457,   436,   164,   472,   159,     0,   165,   437
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,   107,    50,    51,    52,   284,   285,
     286,   287,   288,   289,    53,   290,   291,    55,    56,   206,
     293,   597,   294,   295,   296,   430,   607,   731,   732,   728,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   439,   483,   517,   346,   518,   519,
     520,   521,   522,   523,   766,   524,   762,   525,   526,    58,
      59,   527,    61,    62,   528,    64,    65,    66,    67,    68,
      69,    70,   389,   390,   391,    71,    72,    73,    74,    75,
     223,    76,   399,    77,    78,    79,    80,   188,   189,    81,
      82,    83,   173,    84,    85,   312,   313,   378,   379,   210,
     211,   212,    86,   337,   323,   495,   652,    87,    88,    89,
     359,   360,   361,   362,   540,   541,   369,   554,   555,   363,
      90,   159,   238,   193,   332,   333,   334,    91,   160,    92,
     562,   563,   564,    93,   314,   315,    94,    95,   529,   194,
     654,   655,   812,   316,   678,   822,   224,   104,   598,   164,
     431,   729,   734,   530,   531,   816,   392,   325,   347,   569,
     234,   381,   195,   753,   365,   543,   239,    97,   756,   437,
     823
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -673
static const yytype_int16 yypact[] =
{
    3541,  -673,  -673,  -673,    38,  -673,  -673,   488,    22,  -673,
    -673,  -673,  -673,  -673,  -673,   703,  -673,  -673,   124,  -673,
    -673,  -673,  -673,  -673,  -673,    30,  2600,  -673,  -673,  -673,
    -673,  -673,  3436,  -673,   126,  -673,  -673,    59,  -673,  -673,
    -673,  -673,   431,    92,    15,  -673,  -673,   138,  -673,   175,
    -673,    61,  -673,   197,  -673,  -673,  -673,   909,  3541,  -673,
    -673,  -673,  -673,  2389,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,   -15,   165,   431,  -673,  -673,  -673,  -673,    84,   747,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,   148,   115,  3845,
    -673,  -673,   932,  -673,   505,   124,   624,   175,   118,   252,
    -673,  2193,  3541,   128,   269,   567,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,   171,   201,
     212,  -673,   191,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,   505,  4061,   297,  -673,
    -673,   217,  -673,  -673,   567,   528,   468,   511,   192,   488,
      45,   227,  -673,  -673,    15,  -673,   567,  2836,  -673,   192,
      15,  -673,  -673,  -673,  -673,  -673,  -673,  -673,   -30,  -673,
     489,   214,   835,  -673,  -673,   224,  3845,  3262,  -673,  1846,
     624,   232,   252,   230,   272,   488,   188,   281,  -673,  3645,
     283,    71,  -673,    15,  -673,  -673,   304,  -673,   252,   252,
    -673,  3541,  -673,   292,  -673,  3541,   782,  3541,  -673,   334,
     337,  -673,  -673,  -673,  -673,   567,   346,   297,  -673,  -673,
    3541,   252,   322,   192,   567,    40,   451,   567,   192,   348,
     932,  -673,  -673,   451,  -673,  -673,  -673,   585,  3262,  3262,
     364,   375,   374,  2948,   382,   379,  -673,   394,   409,   436,
    3352,   446,  -673,  3060,  -673,   459,  2836,    92,  3262,  3262,
    -673,  -673,  -673,    61,  -673,  -673,  -673,  -673,  -673,  -673,
    -673,  -673,   402,   520,  -673,  3262,  -673,  -673,  -673,    55,
     287,   317,   423,   350,   475,   455,   456,   457,   553,  1039,
    -673,  -673,  -673,   173,   343,  -673,  -673,  -673,  -673,   431,
    -673,  3060,  2303,  -673,  -673,  -673,   224,   224,   567,   175,
    -673,    92,  -673,   483,   510,  1607,  -673,  -673,   515,    47,
     364,   375,   382,   394,    62,  -673,  -673,   508,  -673,  -673,
    -673,   452,  -673,   530,   518,  2493,  -673,   525,   532,  -673,
    1846,   -13,  -673,   539,  -673,   536,  -673,   252,   258,  -673,
     232,  3907,  3845,   402,  3845,   821,   531,   408,  -673,   181,
     542,   196,  -673,  -673,  3999,  -673,   543,  -673,  -673,   559,
    -673,   546,   549,   550,  -673,   554,   567,   138,   451,   562,
     566,  -673,  -673,   576,  -673,  -673,   584,  -673,   579,    51,
     451,  -673,   587,   192,   588,  -673,   684,  3150,   409,  -673,
    -673,  3060,  3060,  4061,   606,  -673,  3060,  4061,  3060,  3060,
    -673,  3722,  4061,  2836,  -673,  4061,  -673,  -673,  2836,  -673,
      41,   612,  -673,  -673,  -673,  -673,   904,  3060,  3060,   938,
    -673,  3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,
    3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,
    -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,  -673,
    3262,  3060,  -673,  3060,   278,   173,  -673,  -673,  2836,  -673,
      13,   122,  -673,  1955,  -673,  -673,  -673,   677,   175,    92,
    -673,   835,  3060,   599,  3262,   601,   604,  2077,   625,   252,
     626,   252,  3060,   629,   224,   633,   622,   634,  -673,  -673,
    -673,  -673,  1729,  -673,  -673,  -673,  -673,  -673,  2389,  -673,
     623,   620,     3,  -673,  3262,  -673,  -673,   525,    37,  1377,
    -673,  -673,  -673,  -673,  -673,   431,  -673,  1846,  -673,  -673,
     567,   727,   175,    92,   637,  -673,   332,  -673,   252,   642,
      72,  -673,   421,  -673,  -673,   653,   658,   661,  3060,  -673,
    3060,  3845,  3262,  -673,  -673,  -673,   252,  3262,  -673,  -673,
    -673,   138,   451,  -673,  -673,  -673,  2836,  -673,  -673,   643,
    -673,   646,  -673,   567,   659,  -673,  3782,   660,   669,   672,
     671,  3262,   673,   675,   678,   152,  4061,   680,   135,   676,
     687,   685,   169,   693,  -673,  3060,  3262,   528,   558,  -673,
     704,    97,   528,   667,  -673,  -673,  -673,    55,    55,    55,
     287,   287,   317,   317,   423,   423,   423,   423,   350,   350,
     475,   455,   456,   457,   553,   103,  -673,  -673,  -673,  3060,
    -673,  -673,   696,   706,  -673,   677,  -673,  -673,   710,  -673,
     688,  -673,  2077,   686,  2724,   691,  2836,   694,   692,  2836,
     677,  2836,  2077,  -673,  -673,  -673,   715,   735,  -673,  -673,
    -673,  -673,  -673,   705,  -673,  -673,   175,    92,   567,   853,
      92,  -673,   258,   567,   873,    92,   707,  3907,   711,  3541,
    3907,  -673,  -673,  -673,  -673,  -673,   723,   722,  -673,  -673,
    -673,   427,  -673,  -673,  -673,  3262,  4061,   680,  -673,  -673,
     733,  -673,  -673,   736,  -673,  -673,   734,  3060,  -673,  -673,
    3060,  -673,   737,   135,  -673,   739,  -673,   741,  -673,  -673,
    -673,  -673,  -673,   528,  -673,  -673,  -673,  -673,   528,  -673,
    3060,  -673,  2303,   724,  1463,  -673,  -673,  -673,  2077,  -673,
     745,  -673,  2836,  -673,  -673,   634,   749,   431,  -673,   754,
    -673,   756,  -673,  4061,  -673,  -673,    92,   567,    92,  -673,
    -673,    92,   567,    92,  -673,  4061,   440,  4061,  -673,  -673,
       3,  -673,  -673,  -673,   757,  -673,  3060,  3060,   680,   762,
     133,  3262,  -673,  3060,  3060,  -673,  -673,  -673,  -673,  -673,
    -673,   408,   764,  -673,  3060,  -673,   748,  2077,   750,  2077,
    2077,  -673,   765,   773,  -673,    92,  -673,  -673,    92,  -673,
    -673,   831,  -673,   735,  -673,   680,   177,   213,  -673,  -673,
    -673,   772,   218,   231,  -673,  -673,   224,   248,  3060,   824,
    3060,  -673,  -673,  4061,  -673,  -673,  -673,   252,  -673,  -673,
    -673,  -673,  -673,  -673,  -673,  -673,   766,   788,  2077,  -673,
    -673,   770,  -673,  2077,  -673,   872,  -673,  -673
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -673,  -673,  -146,   868,   526,  -673,  -171,   763,  -673,  -673,
    -673,  -673,    67,  -673,  -673,  -673,   797,   437,  -185,     0,
    -673,  -255,   631,  -673,  -673,  -673,   300,  -673,  -673,  -673,
    -673,  -223,   -29,   144,   145,   102,   155,   438,   435,   447,
     434,   425,  -186,  -178,   666,  -673,  -216,  -458,  -419,  -673,
     242,  -190,  -673,  -673,  -468,  -673,  -673,  -673,  -673,  -673,
     -24,     9,   259,   -53,   879,  -673,  -673,    36,  -673,   154,
    -673,  -673,  -673,   349,  -673,  -673,  -673,  -673,  -673,  -673,
     194,  -673,  -673,  -182,  -673,  -673,  -673,  -673,   607,   -39,
    -673,  -115,  -149,   -42,   829,  -134,   -22,  -374,  -673,  -184,
    -673,  -333,  -181,   331,  -673,  -471,  -673,  -673,  -673,  -673,
    -673,  -673,   573,   384,  -673,  -673,   560,  -673,   241,  -347,
    -673,  -673,  -673,  -673,   433,  -673,  -673,  -673,  -673,  -152,
     239,   238,  -673,  -673,   359,   458,  -673,  -673,  -673,  -174,
    -562,  -673,  -673,  -673,  -649,  -673,    27,  -474,  -369,  -673,
     533,  -672,   221,  -499,  -673,  -673,  -673,  -673,   388,  -159,
    -673,  -673,  -161,  -673,  -337,  -673,   719,  -673,  -673,  -673,
    -673
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -501
static const yytype_int16 yytable[] =
{
      57,   567,   174,   171,   158,   336,   283,   102,   162,    60,
     187,   344,   338,   668,   354,   109,   324,   356,   358,   345,
     245,   556,   651,   544,   190,   252,   156,    96,   774,   326,
     327,   318,    57,     1,   184,   419,   420,   168,   561,     3,
     425,    60,   170,   237,   198,   795,   660,   364,     1,    13,
     380,   574,    98,   599,   175,   442,   443,   602,    57,   604,
     440,    13,   157,    57,   385,   175,   491,    60,     3,   100,
     451,     6,   450,   165,   191,     1,   679,   690,   620,   319,
     397,   682,   695,   170,   383,   111,   163,   222,   663,   202,
     676,   452,   320,   755,   377,   480,   545,   417,   409,   156,
     412,    40,   100,   673,     6,   192,   218,   416,   770,   546,
     567,    57,    57,    40,   321,   228,    26,   418,     1,   709,
      60,    60,   237,   105,     3,   204,   838,     6,   166,   205,
     179,   110,   174,   658,   322,   233,   336,   336,   174,    99,
     163,   834,   441,   614,     3,   100,   545,     6,    43,   235,
     615,   167,   175,   112,   486,   180,   187,   156,   236,   680,
     357,   103,   411,   859,   241,   243,   246,   248,   177,   250,
     376,   174,   216,   588,   605,   354,   253,   292,   356,   358,
     384,   481,     3,   100,   858,     6,    26,   235,   565,   176,
     566,     1,   331,   157,   595,     1,   156,   178,   485,    57,
     367,   769,   746,   771,   689,   373,   615,   199,   364,    57,
     685,   183,   615,   157,   776,   778,   405,   440,    43,   781,
     783,    57,   612,   750,   648,    57,   398,    57,   625,   626,
      60,   649,   621,   203,    60,   403,    60,   236,   840,   730,
      57,   219,   615,   759,   410,    44,    45,   413,   393,    60,
     581,   225,   583,   772,   725,     1,   214,   228,   215,    26,
     377,   649,   377,    26,   589,   645,   196,     3,   100,   197,
       6,   738,   550,   179,   484,   229,   292,  -488,   615,   860,
     490,   808,  -489,    44,    45,  -489,   615,     3,   100,   600,
       6,    43,   235,   603,   815,    43,   232,   571,   609,   610,
     572,   611,   187,   825,   613,   230,     3,   100,   828,     6,
     183,   235,   157,   236,   231,   861,   537,   283,   344,   170,
     863,   357,   615,   103,   670,   240,   345,   615,   499,   251,
     348,   349,   350,   864,   192,   292,   171,   371,   198,   813,
     615,     3,   100,   841,     6,   556,   693,   335,   344,   867,
     866,   168,   368,   344,   551,    57,   345,   615,   799,   103,
      57,   345,   354,   324,   561,   356,   358,   561,   553,   485,
     485,   156,   156,   372,   156,   170,   326,   170,   721,   484,
     460,   461,   374,   677,   156,   382,   344,   706,    44,    45,
     226,   344,   227,   741,   345,   364,   582,   453,   849,   345,
     851,   852,   454,   455,   214,     1,   386,    44,    45,   608,
       2,     1,   100,     5,     6,   283,   394,     3,     4,   395,
       6,   400,   169,   156,   627,   628,   629,   156,   694,   456,
     457,   156,   156,   292,     1,   156,   710,   845,   292,   401,
       3,     4,   402,     6,   407,   169,   183,   458,   459,   874,
     765,   487,   488,   765,   876,   765,   180,   462,   463,   157,
       3,     3,   100,   157,     6,   421,   165,   157,   157,   157,
     415,   157,   726,    26,   157,   187,   422,     3,   100,    26,
       6,   423,   244,   426,   236,   236,   427,   179,   292,   490,
     174,     1,   793,   733,   182,   428,     2,     3,   100,     5,
       6,   331,    26,   464,   465,    43,   683,   292,   357,   375,
     429,    43,  -488,     2,   800,   100,     5,     6,    44,    45,
       3,   100,   292,     6,   157,   247,    49,   214,    57,   699,
     700,     1,    42,    49,    43,   792,   488,     3,   100,   182,
       6,    44,    45,   432,   167,   170,   765,    57,   831,   700,
     687,   228,    49,   435,   444,   445,   228,   446,    49,    26,
     438,     1,   634,   635,   636,   637,   466,     3,   100,   172,
       6,   156,   743,   467,   608,   468,     3,   100,   191,     6,
     836,   837,   794,   181,    49,   469,   292,   842,   843,    49,
     321,    43,   501,   714,     3,   100,   156,     6,   847,    26,
     630,   631,   242,   632,   633,   249,   156,   182,   236,   192,
     322,   502,  -490,   533,   191,   344,   317,   532,   733,   638,
     639,   447,   157,   345,   448,    49,   449,     1,   181,    26,
     181,    43,   157,     3,   100,   417,     6,    49,    49,   821,
     535,   833,   157,   182,   767,   192,   539,   767,  -490,   767,
     534,   830,   568,   832,   542,   418,   865,   496,   497,   547,
     548,    43,   292,   570,   292,   575,   292,   577,   576,   292,
       1,   292,   292,   578,   579,   788,     3,   100,   580,     6,
     408,   748,   181,    49,   584,   414,   213,   182,   228,   228,
     585,   586,   553,   228,   228,    49,   377,   156,   593,    57,
     156,   587,   157,    49,   877,   157,     1,   157,    60,   590,
     592,   601,     3,   100,   616,     6,   156,   106,   329,   870,
     653,   659,    49,   661,   662,    49,   664,   666,   818,   182,
     669,    49,   811,   236,   671,    49,     3,   100,    26,     6,
     767,   688,   672,   615,   675,   674,   692,    49,   174,   697,
       1,    49,   157,    49,   156,   701,     3,   100,   292,     6,
     702,   200,   292,   703,   715,   712,    49,   170,   713,   649,
      43,   718,   844,   156,   719,   722,   181,   228,   108,   720,
     724,   727,   228,   723,   735,   156,   760,   156,   114,   736,
     157,     3,   100,   737,     6,   739,   396,    54,   157,   348,
     349,   350,    49,   172,   101,   752,   745,   754,   758,   157,
     182,   170,   757,   764,   768,   226,   773,   292,   181,   292,
     292,   157,   676,   157,     1,   790,   539,   791,   785,    54,
       3,     4,   787,     6,   796,   169,   798,   797,     1,    54,
     803,   801,   804,   311,     3,   100,   814,     6,   809,   328,
     591,   817,   201,   156,   498,    54,   819,   500,   820,   835,
      54,    49,     3,   100,   839,     6,   846,   777,   292,   217,
     848,   850,   220,   292,   853,   854,   857,   862,   868,    63,
      54,    49,     3,   100,     6,     6,    49,   782,   872,   157,
     873,   875,    26,   113,   552,    54,   717,    49,    49,   181,
      49,   434,   641,   643,   640,   644,   761,     1,    54,    54,
      49,    63,     1,     3,   100,   642,     6,     2,   617,   100,
       5,     6,   375,   763,    43,   708,   489,   207,   538,   684,
     557,    44,    45,   780,   657,     1,   786,    63,   789,   436,
       2,     1,   100,     5,     6,   711,   647,     3,   100,    49,
       6,   596,   622,    49,   802,   330,   404,    49,    49,    49,
     707,    49,   353,   366,    49,   370,   101,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,   209,     0,
      26,   387,   388,     0,     0,     0,     0,   492,   494,   618,
      63,    63,     0,     0,   179,     0,    54,     0,     0,     0,
       0,     0,   101,    26,   406,     0,    54,    43,     0,    26,
       0,     0,    43,     0,    49,     0,     0,   179,    54,   180,
       0,     0,    54,   623,    54,   656,     0,   329,     0,     0,
       0,     0,     0,    49,     0,    43,     0,    54,     0,     0,
       0,    43,   213,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,    49,   470,   471,   472,   473,   474,
     475,   476,   477,     0,     0,   478,   479,     0,     0,     0,
       0,     0,   480,    49,     0,   209,   686,     0,   355,   691,
       0,     0,     0,     0,     0,     0,     0,   492,   492,     0,
       0,     0,   492,     0,   492,   492,     0,    49,   516,     0,
      63,     0,     0,     0,    63,     0,    63,     0,     0,     0,
       0,     0,    49,   492,     0,     0,    54,     0,   353,    63,
       0,     0,    49,   353,     0,     0,     0,     0,     0,     0,
     549,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   646,
       0,     0,    54,     0,   311,     0,     0,    54,   481,   494,
     482,     0,     0,     0,     0,     0,     0,     0,   492,     0,
       0,     0,    54,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      49,     0,    49,     0,     0,    49,     0,    49,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   775,     0,     0,   779,     0,   552,     0,
       0,   784,     0,    49,     0,    49,    49,     0,     0,     0,
       0,     0,     0,     0,   704,     0,   705,     0,     0,   355,
       0,     0,    49,   619,     0,     0,   624,     0,     0,     0,
     209,   209,   311,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   209,   330,     0,     0,     0,     0,     0,
     516,     0,   665,     0,   667,     0,     0,     0,     0,     0,
      49,   740,     0,     0,    49,   516,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,   824,     0,   826,     0,     0,   827,   353,   829,
     353,    49,     0,    49,     0,   751,     0,     0,     0,     0,
       0,   696,     0,   698,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   388,
       0,     0,    54,    49,    54,    49,    49,     0,     0,     0,
       0,   855,     0,     0,   856,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       1,   254,   255,   256,   110,     0,     3,   100,     0,     6,
       0,   339,     0,   492,    49,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   259,     0,   742,   744,   807,   340,   494,   747,
     749,   341,     0,     0,   262,   516,   355,   263,     0,   342,
     265,     0,     0,     0,     0,   516,   266,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,   268,    26,     0,
     209,     0,     0,   269,     0,     0,     0,   270,     0,   271,
       0,     0,     0,   272,     0,   274,     0,     0,   275,     0,
       0,     2,     3,   100,     5,     6,   810,   115,   276,     0,
     277,     0,     0,     0,     0,     0,     0,   278,   279,   280,
     281,   282,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,   681,    10,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,    14,   869,     0,    15,     0,
       0,   516,     0,    19,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     805,    28,    29,     0,     0,   806,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,     0,     0,
      39,    40,    41,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,    63,   209,
     516,     0,   516,   516,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       1,   254,   255,   256,   110,     2,     3,   100,     5,     6,
     871,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   516,     0,     0,     0,     0,   516,     0,     0,     0,
       0,   258,   259,     0,     0,     8,     9,   260,   503,   504,
       0,   261,    12,    13,   262,   505,   506,   263,   507,   264,
     265,     0,    15,    16,     0,   185,   266,    19,   508,    20,
     509,   510,    21,   267,    23,    24,   511,   268,    26,     0,
       0,     0,    27,   269,   512,    28,    29,   270,    30,   271,
      31,   513,     0,   272,   273,   274,   514,    33,   275,    34,
      35,    36,    37,    38,    39,    40,    41,   515,   276,     0,
     277,     0,     0,     0,     0,     0,     0,   278,   279,   280,
     281,   282,     0,     0,     0,     0,     0,     0,     0,     0,
     335,  -474,     1,   254,   255,   256,   110,     2,     3,   100,
       5,     6,     0,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   259,     0,     0,     8,     9,   260,
     503,   504,     0,   261,    12,    13,   262,   505,   506,   263,
     507,   264,   265,     0,    15,    16,     0,   185,   266,    19,
     508,    20,   509,   510,    21,   267,    23,    24,   511,   268,
      26,     0,     0,     0,    27,   269,   512,    28,    29,   270,
      30,   271,    31,   513,     0,   272,   273,   274,   514,    33,
     275,    34,    35,    36,    37,    38,    39,    40,    41,   515,
     276,     0,   277,     0,     0,     0,     0,     0,     0,   278,
     279,   280,   281,   282,     0,     0,     0,     0,     0,     1,
       0,     0,   335,  -475,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,    17,   185,     0,    19,     0,    20,     0,
       0,    21,    22,    23,    24,     0,     0,    26,   348,   349,
     350,    27,     0,     0,    28,    29,     0,    30,     0,    31,
       0,  -500,     0,     0,     0,     0,    33,     0,    34,    35,
      36,   351,    38,    39,    40,    41,     0,    42,     0,    43,
       0,     0,     0,     0,     0,     0,    44,    45,     1,   254,
     255,   256,   110,     0,     3,   100,     0,     6,   352,   339,
    -494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   258,
     259,     0,     0,     0,     0,   340,     0,     0,     0,   341,
       0,     0,   262,     0,     0,   263,     0,   342,   265,     0,
       0,     0,     0,     0,   266,     0,     0,     0,     0,     0,
       0,   343,     0,     0,     0,   268,    26,     0,     0,     0,
       0,   269,     0,     0,     0,   270,     0,   271,     0,     0,
       0,   272,   273,   274,     0,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   277,     0,
       0,     0,     0,     0,     0,   278,   279,   280,   281,   282,
       0,     0,     0,     0,     0,     0,     0,     0,   493,   650,
       1,   254,   255,   256,   110,     2,     3,   100,     5,     6,
       0,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   259,     0,     0,     8,     9,   260,   503,   504,
       0,   261,    12,    13,   262,   505,   506,   263,   507,   264,
     265,     0,    15,    16,     0,   185,   266,    19,   508,    20,
     509,   510,    21,   267,    23,    24,   511,   268,    26,     0,
       0,     0,    27,   269,   512,    28,    29,   270,    30,   271,
      31,   513,     0,   272,   273,   274,   514,    33,   275,    34,
      35,    36,    37,    38,    39,    40,    41,   515,   276,     0,
     277,     0,     0,     0,     0,     0,     0,   278,   279,   280,
     281,   282,     0,     0,     0,     0,     1,     0,     0,     0,
     335,     2,     3,     4,     5,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,    14,     0,     0,    15,    16,
      17,    18,     0,    19,     0,    20,     0,     0,    21,    22,
      23,    24,    25,     0,    26,     0,     0,     0,    27,     0,
       0,    28,    29,     0,    30,     0,    31,     0,    32,     0,
       0,     0,     0,    33,     0,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    42,     0,    43,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     1,   254,   255,   256,
     110,     0,     3,   100,     0,     6,   221,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   258,   259,     0,
       0,     0,     0,   340,     0,     0,     0,   341,     0,     0,
     262,     0,     0,   263,     0,   342,   265,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,   268,    26,     0,     0,     0,     0,   269,
       0,     0,     0,   270,     0,   271,     0,     0,     0,   272,
     273,   274,     1,     0,   275,     0,     0,     2,     3,     4,
       5,     6,     0,     7,   276,     0,   277,     0,     0,     0,
       0,     0,     0,   278,   279,   280,   281,   282,     0,     0,
       0,     0,     0,     0,     0,     0,   493,     0,     9,    10,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,    14,     0,     0,    15,    16,     0,   185,     0,    19,
       0,    20,     0,     0,    21,    22,    23,    24,     0,     0,
      26,     0,     0,     0,    27,     0,     0,    28,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,     0,    33,
       0,    34,    35,    36,     0,    38,    39,    40,    41,     0,
      42,     0,    43,     0,     0,     0,     1,     0,     0,    44,
      45,     2,     3,     4,     5,     6,     0,     7,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,    14,     0,     0,    15,    16,
       0,   185,     0,    19,     0,    20,     0,     0,    21,    22,
      23,    24,     0,     0,    26,     0,     0,     0,    27,     0,
       0,    28,    29,     0,    30,     0,    31,     0,     0,     0,
       0,     0,     0,    33,     0,    34,    35,    36,     0,    38,
      39,    40,    41,     0,    42,     0,    43,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     2,     3,
     100,     5,     6,     0,   115,   536,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,     0,
      10,     0,     0,     0,    11,    12,    13,     0,     0,     0,
     138,     0,    14,     0,     0,    15,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,    22,    23,     0,     0,
     139,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    36,     0,     0,    39,    40,    41,
       0,   140,     0,   141,   142,     0,     0,   143,   144,   145,
     146,   147,   148,     0,   149,   150,   151,   152,   153,     0,
       0,   154,     0,     0,     0,     0,   155,     1,   254,   255,
     256,   110,     2,     3,   100,     5,     6,     0,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   259,
       0,     0,     0,     9,   260,     0,     0,     0,   261,    12,
      13,   262,     0,     0,   263,     0,   264,   265,     0,    15,
      16,     0,   185,   266,    19,     0,    20,     0,     0,    21,
     267,    23,    24,     0,   268,    26,     0,     0,     0,    27,
     269,     0,    28,    29,   270,    30,   271,    31,     0,     0,
     272,   273,   274,     0,    33,   275,    34,    35,    36,     0,
      38,    39,    40,    41,     0,   276,     0,   277,     0,     0,
       0,     0,     0,     0,   278,   279,   280,   281,   282,     1,
     254,   255,   256,   110,     2,     3,   100,     5,     6,     0,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     258,   259,     0,     0,     0,     0,   260,     0,     0,     0,
     261,    12,    13,   262,     0,     0,   263,     0,   264,   265,
       0,    15,     0,     0,     0,   266,    19,     0,     0,     0,
       0,     0,   267,    23,     0,     0,   268,    26,     0,     0,
       0,     0,   269,     0,    28,    29,   270,     0,   271,    31,
       0,     0,   272,   273,   274,     0,     0,   275,    34,    35,
      36,     0,     0,    39,    40,    41,     0,   276,     0,   277,
       0,     0,     0,     0,     0,     0,   278,   279,   280,   281,
     282,     1,   254,   255,   256,   110,     0,     3,   100,     0,
       6,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,   259,     0,     0,     0,     0,   340,     0,
       0,     0,   341,     0,     0,   262,     0,     0,   263,     0,
     342,   265,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,   268,    26,
       0,     0,     0,     0,   269,     0,     0,     0,   270,     0,
     271,     0,     0,     0,   272,     0,   274,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,   277,   424,     0,     0,     0,     0,     0,   278,   279,
     280,   281,   282,     1,   254,   255,   256,   110,     0,     3,
     100,     0,     6,     0,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   259,     0,     0,     0,     0,
     340,     0,     0,     0,   341,     0,     0,   262,     0,     0,
     263,     0,   342,   265,     0,     0,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
     268,    26,     0,     0,     0,     0,   269,     0,     0,     0,
     270,     0,   271,     0,     0,     0,   272,   273,   274,     0,
       0,   275,     0,     1,   254,   255,   256,   110,     0,     3,
     100,   276,     6,   277,   339,     0,     0,     0,     0,     0,
     278,   279,   280,   281,   282,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   259,     0,     0,     0,     0,
     340,     0,     0,     0,   341,     0,     0,   262,     0,     0,
     263,     0,   342,   265,     0,     0,     0,     0,     0,   266,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
     268,    26,     0,     0,     0,     0,   269,     0,     0,     0,
     270,     0,   271,     0,     0,     0,   272,     0,   274,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,   277,   594,     0,     0,     0,     0,     0,
     278,   279,   280,   281,   282,     1,   254,   255,   256,   110,
       0,     3,   100,     0,     6,     0,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   259,     0,     0,
       0,     0,   340,     0,     0,     0,   341,     0,     0,   262,
       0,     0,   263,     0,   342,   265,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,   268,    26,     0,     0,     0,     0,   269,     0,
       0,     0,   270,     0,   271,     0,     0,     0,   272,     0,
     274,     0,     0,   275,     0,     1,   254,   255,   256,   110,
       0,     3,   100,   276,     6,   277,   339,     0,     0,     0,
       0,     0,   278,   279,   280,   281,   282,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   259,     0,     0,
       0,     0,   340,     0,     0,     0,   341,     0,     0,   262,
       0,     0,   263,     0,   342,   265,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,   343,     0,
       0,     0,   268,    26,     0,     0,     0,     0,   269,     0,
       0,     0,   270,     0,   271,     0,     0,     0,   272,     1,
     274,     0,     0,   275,     2,     3,     4,     5,     6,     0,
       7,     0,     0,   433,     0,   277,     0,     0,     0,     0,
       0,     0,   278,   279,   280,   281,   282,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,    17,    18,     0,    19,     0,    20,     0,
       0,    21,    22,    23,    24,    25,     0,    26,     0,     0,
       0,    27,     0,     0,    28,    29,     0,    30,     0,    31,
       0,    32,     0,     0,     0,     0,    33,     0,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,     0,    43,
       0,     0,     0,   161,     1,     0,    44,    45,     0,     2,
       3,     4,     5,     6,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,    14,     0,     0,    15,    16,    17,    18,
       0,    19,     0,    20,     0,     0,    21,    22,    23,    24,
      25,     0,    26,     0,     0,     0,    27,     0,     0,    28,
      29,     0,    30,     0,    31,     0,    32,     0,     0,     0,
       0,    33,     0,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    42,     0,    43,     0,     0,     0,     1,     0,
       0,    44,    45,     2,     3,     4,     5,     6,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,    14,     0,     0,
      15,    16,     0,   185,     0,    19,     0,    20,     0,     0,
      21,    22,    23,    24,     0,     0,    26,     0,     0,     0,
      27,     0,     0,    28,    29,     0,    30,     0,    31,     0,
       2,     3,   100,     5,     6,    33,   115,    34,    35,    36,
       0,    38,    39,    40,    41,     0,   375,     0,    43,  -488,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    22,    23,
       2,     3,   100,     5,     6,     0,   115,     0,     0,     0,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,    39,
      40,    41,    10,   606,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     2,     3,   100,     5,     6,   208,   115,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,    39,
      40,    41,     0,   716,     9,    10,     0,     0,     0,    11,
      12,    13,     0,     0,     0,     0,     0,    14,     0,     0,
      15,    16,     0,   185,     0,    19,     0,    20,     0,     0,
      21,    22,    23,    24,     0,     2,     3,   100,     5,     6,
      27,   115,     0,    28,    29,     0,    30,     0,    31,     0,
       0,     0,     0,     0,     0,    33,     0,    34,    35,    36,
       0,    38,    39,    40,    41,     0,     9,    10,     0,     0,
       0,    11,   558,    13,     0,     0,     0,     0,     0,    14,
       0,     0,    15,    16,     0,   185,     0,    19,     0,    20,
       0,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,     0,    30,     0,
      31,     0,   559,     0,     0,     0,     0,    33,     0,   560,
      35,    36,     0,    38,    39,    40,    41,     2,     3,   100,
       5,     6,   573,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,    14,     0,     0,    15,    16,     0,   185,     0,    19,
       0,    20,     0,     0,    21,    22,    23,    24,     0,     2,
       3,   100,     5,     6,    27,   115,     0,    28,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,     0,    33,
       0,    34,    35,    36,     0,    38,    39,    40,    41,     0,
       0,    10,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,    14,     0,     0,    15,     0,     0,     0,
       0,    19,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,     0,     0,    39,    40,
      41
};

static const yytype_int16 yycheck[] =
{
       0,   375,    44,    42,    26,   195,   177,     7,    32,     0,
      63,   197,   196,   512,   199,    15,   190,   199,   199,   197,
     166,   368,   493,   360,    63,   174,    26,     0,   677,   190,
     191,   180,    32,     3,    58,   258,   259,    37,   371,     9,
     263,    32,    42,   158,    83,   717,   504,   199,     3,    46,
     209,   384,    14,   422,    14,   278,   279,   426,    58,   428,
     276,    46,    26,    63,   213,    14,   321,    58,     9,    10,
      15,    12,   295,    14,    89,     3,   534,   551,   447,   109,
     226,   539,   556,    83,    13,    18,    14,   111,   507,    89,
      87,    36,   122,   655,   209,    33,   109,    50,   244,    99,
     246,    98,    10,   522,    12,   120,   106,   253,   670,   122,
     484,   111,   112,    98,   101,   115,    71,    70,     3,   577,
     111,   112,   237,   101,     9,    10,   798,    12,    69,    14,
      85,     7,   174,   502,   121,   157,   326,   327,   180,   101,
      14,   790,   276,   102,     9,    10,   109,    12,   103,    14,
     109,    92,    14,   123,   313,   110,   209,   157,   158,   122,
     199,     7,   122,   835,   164,   165,   166,   167,   107,   169,
     209,   213,   105,   122,   429,   360,   176,   177,   360,   360,
     109,   119,     9,    10,   833,    12,    71,    14,   372,    14,
     374,     3,   192,   157,   417,     3,   196,     0,   313,   199,
     200,   669,   105,   671,   551,   205,   109,   123,   360,   209,
     547,    57,   109,   177,   688,   689,   240,   433,   103,   693,
     694,   221,   438,   120,   102,   225,   226,   227,   451,   452,
     221,   109,   448,    85,   225,   235,   227,   237,   105,   104,
     240,   123,   109,   662,   244,   110,   111,   247,   221,   240,
     396,   123,   398,   672,   102,     3,   102,   257,   104,    71,
     375,   109,   377,    71,   410,   481,   101,     9,    10,   104,
      12,   102,    14,    85,   101,   104,   276,   104,   109,   102,
     319,   752,   101,   110,   111,   104,   109,     9,    10,   423,
      12,   103,    14,   427,   762,   103,   105,   101,   432,   433,
     104,   435,   355,   777,   438,   104,     9,    10,   782,    12,
     156,    14,   276,   313,   102,   102,   355,   488,   504,   319,
     102,   360,   109,   169,   514,   108,   504,   109,   328,   102,
      72,    73,    74,   102,   120,   335,   375,   107,   377,   758,
     109,     9,    10,   801,    12,   692,    14,   123,   534,   848,
     102,   351,   120,   539,    96,   355,   534,   109,   727,   205,
     360,   539,   547,   537,   697,   547,   547,   700,   368,   484,
     485,   371,   372,   101,   374,   375,   537,   377,   601,   101,
      30,    31,   101,   532,   384,   102,   572,   571,   110,   111,
     121,   577,   123,   616,   572,   547,   396,   110,   817,   577,
     819,   820,   115,   116,   250,     3,   102,   110,   111,   431,
       8,     3,    10,    11,    12,   586,   124,     9,    10,   225,
      12,   227,    14,   423,   453,   454,   455,   427,    96,   112,
     113,   431,   432,   433,     3,   435,   582,   811,   438,   105,
       9,    10,   105,    12,   122,    14,   292,    24,    25,   868,
     666,   108,   109,   669,   873,   671,   110,   107,   108,   423,
       9,     9,    10,   427,    12,   101,    14,   431,   432,   433,
     122,   435,   606,    71,   438,   528,   101,     9,    10,    71,
      12,   107,    14,   101,   484,   485,   107,    85,   488,   528,
     532,     3,   715,   608,    57,   101,     8,     9,    10,    11,
      12,   501,    71,    28,    29,   103,   545,   507,   547,   101,
     101,   103,   104,     8,   730,    10,    11,    12,   110,   111,
       9,    10,   522,    12,   488,    14,     0,   373,   528,   108,
     109,     3,   101,     7,   103,   108,   109,     9,    10,   102,
      12,   110,   111,   107,    92,   545,   762,   547,   108,   109,
     550,   551,    26,   107,    34,    35,   556,    37,    32,    71,
     101,     3,   460,   461,   462,   463,   111,     9,    10,    43,
      12,   571,    14,   117,   596,   118,     9,    10,    89,    12,
     796,   797,   716,    57,    58,    32,   586,   803,   804,    63,
     101,   103,   109,   593,     9,    10,   596,    12,   814,    71,
     456,   457,   165,   458,   459,   168,   606,   170,   608,   120,
     121,   101,   123,   105,    89,   801,   179,   102,   733,   464,
     465,   101,   586,   801,   104,    99,   106,     3,   102,    71,
     104,   103,   596,     9,    10,    50,    12,   111,   112,   773,
     122,   790,   606,   206,   666,   120,   121,   669,   123,   671,
     120,   785,   121,   787,   122,    70,   846,   326,   327,   120,
     124,   103,   662,   121,   664,   122,   666,   121,   109,   669,
       3,   671,   672,   124,   124,   699,     9,    10,   124,    12,
     243,    14,   156,   157,   122,   248,   110,   250,   688,   689,
     124,   107,   692,   693,   694,   169,   811,   697,    14,   699,
     700,   122,   666,   177,   875,   669,     3,   671,   699,   122,
     122,   105,     9,    10,   102,    12,   716,    14,   192,   853,
      43,   122,   196,   122,   120,   199,   101,   101,   767,   292,
     101,   205,   754,   733,   101,   209,     9,    10,    71,    12,
     762,    14,   120,   109,   124,   122,   109,   221,   790,   107,
       3,   225,   716,   227,   754,   102,     9,    10,   758,    12,
     102,    14,   762,   102,   105,   122,   240,   767,   122,   109,
     103,   102,   811,   773,   102,   102,   250,   777,    15,   108,
     102,   101,   782,   108,   108,   785,   100,   787,    25,   102,
     754,     9,    10,   108,    12,   102,    14,     0,   762,    72,
      73,    74,   276,   277,     7,   109,   102,   101,   120,   773,
     373,   811,   102,   122,   122,   121,   101,   817,   292,   819,
     820,   785,    87,   787,     3,   102,   121,   105,   121,    32,
       9,    10,   121,    12,   101,    14,   102,   101,     3,    42,
     101,   104,   101,   177,     9,    10,   101,    12,   124,    14,
     413,   102,    89,   853,   328,    58,   102,   331,   102,   102,
      63,   335,     9,    10,   102,    12,   102,    14,   868,   106,
     122,   121,   109,   873,   109,   102,    45,   105,    54,     0,
      83,   355,     9,    10,    12,    12,   360,    14,   122,   853,
     102,   121,    71,    25,   368,    98,   596,   371,   372,   373,
     374,   270,   467,   469,   466,   480,   664,     3,   111,   112,
     384,    32,     3,     9,    10,   468,    12,     8,    14,    10,
      11,    12,   101,   664,   103,   576,   319,    98,   355,   545,
     370,   110,   111,   692,   501,     3,   697,    58,   700,   273,
       8,     3,    10,    11,    12,   586,   488,     9,    10,   423,
      12,   418,    14,   427,   733,   192,   237,   431,   432,   433,
     572,   435,   199,   200,   438,   202,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    99,    -1,
      71,   218,   219,    -1,    -1,    -1,    -1,   321,   322,    85,
     111,   112,    -1,    -1,    85,    -1,   199,    -1,    -1,    -1,
      -1,    -1,   205,    71,   241,    -1,   209,   103,    -1,    71,
      -1,    -1,   103,    -1,   488,    -1,    -1,    85,   221,   110,
      -1,    -1,   225,    85,   227,   499,    -1,   501,    -1,    -1,
      -1,    -1,    -1,   507,    -1,   103,    -1,   240,    -1,    -1,
      -1,   103,   110,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      -1,    -1,    -1,    -1,   528,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,   547,    -1,   196,   550,    -1,   199,   553,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,   422,    -1,
      -1,    -1,   426,    -1,   428,   429,    -1,   571,   335,    -1,
     221,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,    -1,
      -1,    -1,   586,   447,    -1,    -1,   319,    -1,   355,   240,
      -1,    -1,   596,   360,    -1,    -1,    -1,    -1,    -1,    -1,
     367,    -1,   606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,
      -1,    -1,   355,    -1,   488,    -1,    -1,   360,   119,   493,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,   375,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   662,    -1,
     664,    -1,   666,    -1,    -1,   669,    -1,   671,   672,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   687,    -1,    -1,   690,    -1,   692,    -1,
      -1,   695,    -1,   697,    -1,   699,   700,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   568,    -1,   570,    -1,    -1,   360,
      -1,    -1,   716,   446,    -1,    -1,   449,    -1,    -1,    -1,
     371,   372,   586,   374,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,   501,    -1,    -1,    -1,    -1,    -1,
     507,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,    -1,
     754,   615,    -1,    -1,   758,   522,    -1,    -1,   762,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,
      -1,    -1,   776,    -1,   778,    -1,    -1,   781,   545,   783,
     547,   785,    -1,   787,    -1,   649,    -1,    -1,    -1,    -1,
      -1,   558,    -1,   560,    -1,   528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   576,
      -1,    -1,   545,   817,   547,   819,   820,    -1,    -1,    -1,
      -1,   825,    -1,    -1,   828,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   853,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,   727,   868,    -1,    -1,    -1,    -1,   873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,   617,   618,   750,    40,   752,   622,
     623,    44,    -1,    -1,    47,   662,   547,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,   672,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
     571,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,   699,    -1,    -1,    -1,
      -1,    -1,   125,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,   850,    -1,    55,    -1,
      -1,   758,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     743,    78,    79,    -1,    -1,   748,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
      97,    98,    99,    -1,   767,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   697,    -1,   699,   700,
     817,    -1,   819,   820,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   811,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     857,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   868,    -1,    -1,    -1,    -1,   873,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,   123,   124,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,   122,    14,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
     123,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    12,   123,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,     3,    -1,    91,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    14,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      71,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    92,    93,    94,    -1,    96,    97,    98,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,     3,    -1,    -1,   110,
     111,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,
      97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    14,   122,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    -1,    -1,    97,    98,    99,
      -1,   101,    -1,   103,   104,    -1,    -1,   107,   108,   109,
     110,   111,   112,    -1,   114,   115,   116,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,    -1,   126,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    -1,    -1,    50,    -1,    52,    53,    -1,    55,
      56,    -1,    58,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    -1,    70,    71,    -1,    -1,    -1,    75,
      76,    -1,    78,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    -1,
      96,    97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    45,    46,    47,    -1,    -1,    50,    -1,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    78,    79,    80,    -1,    82,    83,
      -1,    -1,    86,    87,    88,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
     114,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,   103,   104,    -1,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,   114,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,   101,    12,   103,    14,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,   104,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,   101,    12,   103,    14,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    86,     3,
      88,    -1,    -1,    91,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,     3,    -1,   110,   111,    -1,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,     3,    -1,
      -1,   110,   111,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,    -1,
       8,     9,    10,    11,    12,    90,    14,    92,    93,    94,
      -1,    96,    97,    98,    99,    -1,   101,    -1,   103,   104,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,    40,   101,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,    -1,   101,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,     8,     9,    10,    11,    12,
      75,    14,    -1,    78,    79,    -1,    81,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,    94,
      -1,    96,    97,    98,    99,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    92,
      93,    94,    -1,    96,    97,    98,    99,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    -1,     8,
       9,    10,    11,    12,    75,    14,    -1,    78,    79,    -1,
      81,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    92,    93,    94,    -1,    96,    97,    98,    99,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,    98,
      99
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     8,     9,    10,    11,    12,    14,    38,    39,
      40,    44,    45,    46,    52,    55,    56,    57,    58,    60,
      62,    65,    66,    67,    68,    69,    71,    75,    78,    79,
      81,    83,    85,    90,    92,    93,    94,    95,    96,    97,
      98,    99,   101,   103,   110,   111,   128,   129,   130,   131,
     132,   133,   134,   141,   143,   144,   145,   146,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   202,   203,   204,   205,   206,   208,   210,   211,   212,
     213,   216,   217,   218,   220,   221,   229,   234,   235,   236,
     247,   254,   256,   260,   263,   264,   273,   294,    14,   101,
      10,   143,   146,   196,   274,   101,    14,   131,   134,   146,
       7,   139,   123,   130,   134,    14,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    50,    70,
     101,   103,   104,   107,   108,   109,   110,   111,   112,   114,
     115,   116,   117,   118,   121,   126,   146,   194,   223,   248,
     255,   107,   187,    14,   276,    14,    69,    92,   146,    14,
     146,   216,   131,   219,   220,    14,    14,   107,     0,    85,
     110,   131,   144,   196,   187,    58,   122,   190,   214,   215,
     216,    89,   120,   250,   266,   289,   101,   104,   216,   123,
      14,   134,   146,    85,    10,    14,   146,   221,    13,   191,
     226,   227,   228,   110,   196,   196,   139,   134,   146,   123,
     134,   123,   187,   207,   273,   123,   121,   123,   146,   104,
     104,   102,   105,   223,   287,    14,   146,   218,   249,   293,
     108,   146,   144,   146,    14,   129,   146,    14,   146,   144,
     146,   102,   219,   146,     4,     5,     6,    14,    34,    35,
      40,    44,    47,    50,    52,    53,    59,    66,    70,    76,
      80,    82,    86,    87,    88,    91,   101,   103,   110,   111,
     112,   113,   114,   133,   135,   136,   137,   138,   139,   140,
     142,   143,   146,   147,   149,   150,   151,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   222,   223,   261,   262,   270,   144,   219,   109,
     122,   101,   121,   231,   266,   284,   289,   289,    14,   131,
     134,   146,   251,   252,   253,   123,   178,   230,   226,    14,
      40,    44,    52,    66,   169,   170,   174,   285,    72,    73,
      74,    95,   122,   134,   145,   191,   210,   216,   229,   237,
     238,   239,   240,   246,   256,   291,   134,   146,   120,   243,
     134,   107,   101,   146,   101,   101,   216,   218,   224,   225,
     286,   288,   102,    13,   109,   219,   102,   134,   134,   199,
     200,   201,   283,   273,   124,   207,    14,   129,   146,   209,
     207,   105,   105,   146,   293,   187,   134,   122,   144,   129,
     146,   122,   129,   146,   144,   122,   129,    50,    70,   158,
     158,   101,   101,   107,   104,   158,   101,   107,   101,   101,
     152,   277,   107,   101,   149,   107,   171,   296,   101,   171,
     173,   222,   158,   158,    34,    35,    37,   101,   104,   106,
     158,    15,    36,   110,   115,   116,   112,   113,    24,    25,
      30,    31,   107,   108,    28,    29,   111,   117,   118,    32,
      16,    17,    18,    19,    20,    21,    22,    23,    26,    27,
      33,   119,   121,   172,   101,   218,   286,   108,   109,   215,
     216,   148,   171,   123,   171,   232,   230,   230,   131,   146,
     131,   109,   101,    41,    42,    48,    49,    51,    61,    63,
      64,    69,    77,    84,    89,   100,   134,   173,   175,   176,
     177,   178,   179,   180,   182,   184,   185,   188,   191,   265,
     280,   281,   102,   105,   120,   122,   122,   216,   239,   121,
     241,   242,   122,   292,   291,   109,   122,   120,   124,   134,
      14,    96,   131,   146,   244,   245,   246,   243,    45,    85,
      92,   228,   257,   258,   259,   226,   226,   224,   121,   286,
     121,   101,   104,    13,   228,   122,   109,   121,   124,   124,
     124,   129,   146,   129,   122,   124,   107,   122,   122,   129,
     122,   144,   122,    14,   104,   158,   277,   148,   275,   275,
     222,   105,   275,   222,   275,   148,   101,   153,   223,   222,
     222,   222,   173,   222,   102,   109,   102,    14,    85,   143,
     275,   173,    14,    85,   143,   158,   158,   159,   159,   159,
     160,   160,   161,   161,   162,   162,   162,   162,   163,   163,
     164,   165,   166,   167,   168,   173,   171,   262,   102,   109,
     124,   232,   233,    43,   267,   268,   131,   251,   275,   122,
     174,   122,   120,   175,   101,   134,   101,   134,   280,   101,
     178,   101,   120,   175,   122,   124,    87,   219,   271,   174,
     122,   125,   174,   216,   240,   291,   131,   146,    14,   246,
     274,   131,   109,    14,    96,   274,   134,   107,   134,   108,
     109,   102,   102,   102,   171,   171,   226,   285,   200,   174,
     129,   261,   122,   122,   146,   105,   101,   153,   102,   102,
     108,   158,   102,   108,   102,   102,   222,   101,   156,   278,
     104,   154,   155,   218,   279,   108,   102,   108,   102,   102,
     171,   158,   143,    14,   143,   102,   105,   143,    14,   143,
     120,   171,   109,   290,   101,   267,   295,   102,   120,   175,
     100,   177,   183,   189,   122,   173,   181,   223,   122,   181,
     267,   181,   175,   101,   271,   131,   274,    14,   274,   131,
     245,   274,    14,   274,   131,   121,   257,   121,   187,   258,
     102,   105,   108,   158,   222,   278,   101,   101,   102,   275,
     173,   104,   279,   101,   101,   143,   143,   171,   232,   124,
      13,   223,   269,   175,   101,   181,   282,   102,   216,   102,
     102,   222,   272,   297,   131,   274,   131,   131,   274,   131,
     222,   108,   222,   219,   271,   102,   173,   173,   278,   102,
     105,   174,   173,   173,   216,   224,   102,   173,   122,   175,
     121,   175,   175,   109,   102,   131,   131,    45,   271,   278,
     102,   102,   105,   102,   102,   178,   102,   280,    54,   171,
     222,   134,   122,   102,   175,   121,   175,   133
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
        case 9:
#line 131 "120gram.y"
    { (yyval. text ) = strdup(yytext); ;}
    break;

  case 191:
#line 498 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 192:
#line 499 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 193:
#line 500 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 196:
#line 509 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 197:
#line 510 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 198:
#line 511 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 199:
#line 512 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 200:
#line 513 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 205:
#line 524 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 206:
#line 525 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 207:
#line 526 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 208:
#line 527 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 209:
#line 531 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 210:
#line 532 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 211:
#line 533 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 212:
#line 534 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 213:
#line 535 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 214:
#line 536 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 215:
#line 537 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 216:
#line 538 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 217:
#line 539 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 218:
#line 540 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 219:
#line 541 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 220:
#line 542 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 221:
#line 543 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 222:
#line 544 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 269:
#line 684 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 270:
#line 685 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 271:
#line 686 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 272:
#line 687 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 273:
#line 688 "120gram.y"
    { (yyval. n ) = alctree(DIRECTDECLARATOR_5, 2, (yyvsp[(1) - (4)]. n ), (yyvsp[(3) - (4)]. n )); ;}
    break;

  case 274:
#line 689 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 275:
#line 690 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 276:
#line 691 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 277:
#line 692 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 278:
#line 693 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 279:
#line 697 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 280:
#line 698 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 281:
#line 699 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 282:
#line 700 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 283:
#line 701 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 284:
#line 702 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 285:
#line 703 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 304:
#line 746 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 306:
#line 748 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 307:
#line 749 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 308:
#line 750 "120gram.y"
    { (yyval. n ) = NULL; ;}
    break;

  case 328:
#line 801 "120gram.y"
    { typenametable_insert((yyvsp[(2) - (2)]. text ), CLASS_NAME); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3333 "120gram.tab.c"
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


#line 1197 "120gram.y"


static void
yyerror(char *s)
{
	fprintf(stderr, "%d: %s\n", lineno, s);
}

