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
     CLASS_NAME = 264,
     ENUM_NAME = 265,
     ELLIPSIS = 266,
     COLONCOLON = 267,
     DOTSTAR = 268,
     ADDEQ = 269,
     SUBEQ = 270,
     MULEQ = 271,
     DIVEQ = 272,
     MODEQ = 273,
     XOREQ = 274,
     ANDEQ = 275,
     OREQ = 276,
     SL = 277,
     SR = 278,
     SREQ = 279,
     SLEQ = 280,
     EQ = 281,
     NOTEQ = 282,
     LTEQ = 283,
     GTEQ = 284,
     ANDAND = 285,
     OROR = 286,
     PLUSPLUS = 287,
     MINUSMINUS = 288,
     ARROWSTAR = 289,
     ARROW = 290,
     ASM = 291,
     AUTO = 292,
     BOOL = 293,
     BREAK = 294,
     CASE = 295,
     CATCH = 296,
     CHAR = 297,
     CLASS = 298,
     CONST = 299,
     CONST_CAST = 300,
     CONTINUE = 301,
     DEFAULT = 302,
     DELETE = 303,
     DO = 304,
     DOUBLE = 305,
     DYNAMIC_CAST = 306,
     ELSE = 307,
     ENUM = 308,
     EXPLICIT = 309,
     EXPORT = 310,
     EXTERN = 311,
     FALSE = 312,
     FLOAT = 313,
     FOR = 314,
     FRIEND = 315,
     GOTO = 316,
     IF = 317,
     INLINE = 318,
     INT = 319,
     LONG = 320,
     MUTABLE = 321,
     NAMESPACE = 322,
     NEW = 323,
     OPERATOR = 324,
     PRIVATE = 325,
     PROTECTED = 326,
     PUBLIC = 327,
     REGISTER = 328,
     REINTERPRET_CAST = 329,
     RETURN = 330,
     SHORT = 331,
     SIGNED = 332,
     SIZEOF = 333,
     STATIC = 334,
     STATIC_CAST = 335,
     STRUCT = 336,
     SWITCH = 337,
     TEMPLATE = 338,
     THIS = 339,
     THROW = 340,
     TRUE = 341,
     TRY = 342,
     TYPEDEF = 343,
     TYPEID = 344,
     TYPENAME = 345,
     UNION = 346,
     UNSIGNED = 347,
     USING = 348,
     VIRTUAL = 349,
     VOID = 350,
     VOLATILE = 351,
     WCHAR_T = 352,
     WHILE = 353,
     NAMESPACE_NAME = 354,
     TEMPLATE_NAME = 355
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER 259
#define FLOATING 260
#define CHARACTER 261
#define STRING 262
#define TYPEDEF_NAME 263
#define CLASS_NAME 264
#define ENUM_NAME 265
#define ELLIPSIS 266
#define COLONCOLON 267
#define DOTSTAR 268
#define ADDEQ 269
#define SUBEQ 270
#define MULEQ 271
#define DIVEQ 272
#define MODEQ 273
#define XOREQ 274
#define ANDEQ 275
#define OREQ 276
#define SL 277
#define SR 278
#define SREQ 279
#define SLEQ 280
#define EQ 281
#define NOTEQ 282
#define LTEQ 283
#define GTEQ 284
#define ANDAND 285
#define OROR 286
#define PLUSPLUS 287
#define MINUSMINUS 288
#define ARROWSTAR 289
#define ARROW 290
#define ASM 291
#define AUTO 292
#define BOOL 293
#define BREAK 294
#define CASE 295
#define CATCH 296
#define CHAR 297
#define CLASS 298
#define CONST 299
#define CONST_CAST 300
#define CONTINUE 301
#define DEFAULT 302
#define DELETE 303
#define DO 304
#define DOUBLE 305
#define DYNAMIC_CAST 306
#define ELSE 307
#define ENUM 308
#define EXPLICIT 309
#define EXPORT 310
#define EXTERN 311
#define FALSE 312
#define FLOAT 313
#define FOR 314
#define FRIEND 315
#define GOTO 316
#define IF 317
#define INLINE 318
#define INT 319
#define LONG 320
#define MUTABLE 321
#define NAMESPACE 322
#define NEW 323
#define OPERATOR 324
#define PRIVATE 325
#define PROTECTED 326
#define PUBLIC 327
#define REGISTER 328
#define REINTERPRET_CAST 329
#define RETURN 330
#define SHORT 331
#define SIGNED 332
#define SIZEOF 333
#define STATIC 334
#define STATIC_CAST 335
#define STRUCT 336
#define SWITCH 337
#define TEMPLATE 338
#define THIS 339
#define THROW 340
#define TRUE 341
#define TRY 342
#define TYPEDEF 343
#define TYPEID 344
#define TYPENAME 345
#define UNION 346
#define UNSIGNED 347
#define USING 348
#define VIRTUAL 349
#define VOID 350
#define VOLATILE 351
#define WCHAR_T 352
#define WHILE 353
#define NAMESPACE_NAME 354
#define TEMPLATE_NAME 355




/* Copy the first part of user declarations.  */
#line 44 "120gram.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "120lex.h"
#include "token.h"
#include "tree.h"


#define YYDEBUG 1
extern int yylineno;
extern char *yytext;

/* extern in 120++.c 
 * Head pointer to start of program (translation unit).
 */
treeptr t_unit;

int yydebug=0;

static void yyerror(char *s);



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
#line 70 "120gram.y"
{
  struct tree *tptr;
}
/* Line 193 of yacc.c.  */
#line 326 "120gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 339 "120gram.tab.c"

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
#define YYFINAL  177
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  505
/* YYNRULES -- Number of states.  */
#define YYNSTATES  855

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
       2,     2,     2,   121,     2,     2,     2,   115,   107,     2,
     100,   101,   116,   112,   102,   114,   108,   117,   124,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   123,    99,
     109,   113,   110,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   105,     2,   106,   120,   111,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,   118,   104,   122,     2,     2,     2,
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
      95,    96,    97,    98,   125,   126
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    51,    53,    55,    57,    59,
      61,    63,    66,    69,    73,    76,    78,    83,    88,    94,
      99,   104,   108,   114,   119,   124,   128,   131,   134,   142,
     150,   158,   166,   171,   176,   178,   182,   184,   187,   190,
     193,   196,   199,   202,   207,   209,   211,   213,   215,   217,
     219,   224,   230,   237,   245,   249,   252,   255,   257,   261,
     266,   270,   273,   277,   282,   288,   290,   295,   297,   301,
     305,   307,   311,   315,   319,   321,   325,   329,   331,   335,
     339,   341,   345,   349,   353,   357,   359,   363,   367,   369,
     373,   375,   379,   381,   385,   387,   391,   393,   397,   399,
     405,   407,   411,   413,   415,   417,   419,   421,   423,   425,
     427,   429,   431,   433,   435,   437,   441,   443,   445,   447,
     449,   451,   453,   455,   457,   459,   463,   468,   472,   475,
     479,   481,   484,   490,   498,   504,   506,   511,   517,   525,
     534,   536,   538,   541,   544,   548,   552,   554,   556,   559,
     561,   563,   565,   567,   569,   571,   573,   575,   577,   579,
     581,   583,   587,   590,   592,   594,   596,   598,   600,   602,
     605,   607,   609,   611,   613,   615,   617,   619,   621,   623,
     625,   627,   629,   631,   633,   636,   640,   642,   644,   646,
     648,   650,   652,   654,   656,   658,   660,   662,   664,   666,
     668,   673,   677,   682,   686,   690,   695,   703,   705,   711,
     713,   717,   719,   723,   725,   727,   729,   731,   733,   735,
     737,   739,   745,   751,   756,   758,   760,   766,   770,   773,
     776,   778,   785,   791,   797,   802,   807,   814,   820,   826,
     831,   837,   843,   847,   849,   853,   856,   858,   861,   863,
     870,   876,   882,   887,   892,   899,   906,   911,   915,   917,
     920,   922,   925,   929,   933,   938,   940,   943,   945,   947,
     949,   952,   956,   959,   962,   965,   968,   970,   977,   983,
     989,   994,   999,  1003,  1006,  1008,  1010,  1011,  1015,  1017,
    1021,  1024,  1029,  1032,  1037,  1041,  1046,  1049,  1053,  1055,
    1058,  1062,  1064,  1069,  1072,  1074,  1078,  1083,  1086,  1090,
    1094,  1099,  1101,  1103,  1105,  1108,  1112,  1116,  1119,  1122,
    1124,  1127,  1130,  1132,  1134,  1138,  1139,  1141,  1144,  1147,
    1151,  1154,  1157,  1160,  1162,  1166,  1170,  1173,  1176,  1178,
    1184,  1189,  1194,  1198,  1204,  1209,  1214,  1218,  1220,  1222,
    1224,  1227,  1230,  1233,  1236,  1238,  1242,  1247,  1251,  1254,
    1257,  1259,  1261,  1264,  1266,  1268,  1272,  1276,  1278,  1280,
    1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,  1298,  1300,
    1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,  1320,
    1322,  1324,  1326,  1328,  1330,  1332,  1334,  1336,  1338,  1340,
    1342,  1344,  1346,  1348,  1351,  1354,  1361,  1363,  1367,  1369,
    1371,  1374,  1379,  1382,  1387,  1394,  1403,  1408,  1410,  1414,
    1416,  1418,  1420,  1423,  1428,  1432,  1437,  1440,  1446,  1449,
    1452,  1454,  1456,  1459,  1464,  1466,  1470,  1471,  1473,  1474,
    1476,  1477,  1479,  1480,  1482,  1483,  1485,  1486,  1488,  1489,
    1491,  1492,  1494,  1495,  1497,  1498,  1500,  1501,  1503,  1504,
    1506,  1507,  1509,  1510,  1512,  1513,  1515,  1516,  1518,  1519,
    1521,  1522,  1524,  1525,  1527,  1528,  1530,  1531,  1533,  1534,
    1536,  1537,  1539,  1540,  1542,  1543
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,     8,    -1,   130,    -1,   125,    -1,     9,
      -1,   261,    -1,    10,    -1,   126,    -1,     3,    -1,   136,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,     4,
      -1,     6,    -1,     5,    -1,     7,    -1,    86,    -1,    57,
      -1,   274,    -1,   135,    -1,    84,    -1,   100,   173,   101,
      -1,   143,    -1,   144,    -1,   145,    -1,   134,    -1,   255,
      -1,   248,    -1,   122,   131,    -1,   146,   144,    -1,   131,
      12,   146,    -1,   131,    12,    -1,   142,    -1,   147,   105,
     173,   106,    -1,   147,   100,   276,   101,    -1,   147,   108,
      83,    12,   143,    -1,   147,   108,    83,   143,    -1,   147,
     108,    12,   143,    -1,   147,   108,   143,    -1,   147,    35,
      83,    12,   143,    -1,   147,    35,    83,   143,    -1,   147,
      35,    12,   143,    -1,   147,    35,   143,    -1,   147,    32,
      -1,   147,    33,    -1,    51,   109,   223,   110,   100,   173,
     101,    -1,    80,   109,   223,   110,   100,   173,   101,    -1,
      74,   109,   223,   110,   100,   173,   101,    -1,    45,   109,
     223,   110,   100,   173,   101,    -1,    89,   100,   173,   101,
      -1,    89,   100,   223,   101,    -1,   171,    -1,   148,   102,
     171,    -1,   147,    -1,    32,   158,    -1,    33,   158,    -1,
     116,   158,    -1,   107,   158,    -1,   150,   158,    -1,    78,
     149,    -1,    78,   100,   223,   101,    -1,   151,    -1,   157,
      -1,   112,    -1,   114,    -1,   121,    -1,   122,    -1,    68,
     278,   153,   279,    -1,    12,    68,   278,   153,   279,    -1,
      68,   278,   100,   223,   101,   279,    -1,    12,    68,   278,
     100,   223,   101,   279,    -1,   100,   148,   101,    -1,   224,
     280,    -1,   219,   280,    -1,   155,    -1,   105,   173,   106,
      -1,   155,   105,   174,   106,    -1,   100,   276,   101,    -1,
      48,   158,    -1,    12,    48,   158,    -1,    48,   105,   106,
     158,    -1,    12,    48,   105,   106,   158,    -1,   149,    -1,
     100,   223,   101,   158,    -1,   158,    -1,   159,    13,   158,
      -1,   159,    34,   158,    -1,   159,    -1,   160,   116,   159,
      -1,   160,   117,   159,    -1,   160,   115,   159,    -1,   160,
      -1,   161,   112,   160,    -1,   161,   114,   160,    -1,   161,
      -1,   162,    22,   161,    -1,   162,    23,   161,    -1,   162,
      -1,   163,   109,   162,    -1,   163,   110,   162,    -1,   163,
      28,   162,    -1,   163,    29,   162,    -1,   163,    -1,   164,
      26,   163,    -1,   164,    27,   163,    -1,   164,    -1,   165,
     107,   164,    -1,   165,    -1,   166,   120,   165,    -1,   166,
      -1,   167,   118,   166,    -1,   167,    -1,   168,    30,   167,
      -1,   168,    -1,   169,    31,   168,    -1,   169,    -1,   169,
     119,   173,   123,   171,    -1,   170,    -1,   169,   172,   171,
      -1,   271,    -1,   113,    -1,    16,    -1,    17,    -1,    18,
      -1,    14,    -1,    15,    -1,    24,    -1,    25,    -1,    20,
      -1,    19,    -1,    21,    -1,   171,    -1,   173,   102,   171,
      -1,   170,    -1,   176,    -1,   177,    -1,   178,    -1,   180,
      -1,   182,    -1,   184,    -1,   185,    -1,   266,    -1,   134,
     123,   175,    -1,    40,   174,   123,   175,    -1,    47,   123,
     175,    -1,   281,    99,    -1,   103,   282,   104,    -1,   175,
      -1,   179,   175,    -1,    62,   100,   181,   101,   175,    -1,
      62,   100,   181,   101,   175,    52,   175,    -1,    82,   100,
     181,   101,   175,    -1,   173,    -1,   224,   217,   113,   171,
      -1,    98,   100,   181,   101,   175,    -1,    49,   175,    98,
     100,   173,   101,    99,    -1,    59,   100,   183,   283,    99,
     281,   101,   175,    -1,   177,    -1,   189,    -1,    39,    99,
      -1,    46,    99,    -1,    75,   281,    99,    -1,    61,   134,
      99,    -1,   188,    -1,   187,    -1,   186,   187,    -1,   188,
      -1,   230,    -1,   257,    -1,   264,    -1,   265,    -1,   214,
      -1,   202,    -1,   189,    -1,   213,    -1,   209,    -1,   211,
      -1,   212,    -1,   191,   215,    99,    -1,   191,    99,    -1,
     192,    -1,   194,    -1,   193,    -1,    60,    -1,    88,    -1,
     190,    -1,   191,   190,    -1,    37,    -1,    73,    -1,    79,
      -1,    56,    -1,    66,    -1,    63,    -1,    94,    -1,    54,
      -1,   195,    -1,   235,    -1,   198,    -1,   197,    -1,   221,
      -1,   196,    -1,   146,   196,    -1,    12,   275,   196,    -1,
      42,    -1,    97,    -1,    38,    -1,    76,    -1,    64,    -1,
      65,    -1,    77,    -1,    92,    -1,    58,    -1,    50,    -1,
      95,    -1,   131,    -1,   132,    -1,   128,    -1,   237,    12,
     146,   134,    -1,   237,    12,   134,    -1,    53,    12,   146,
     134,    -1,    53,    12,   134,    -1,    53,   146,   134,    -1,
      90,   277,   146,   134,    -1,    90,   277,   146,   134,   109,
     262,   110,    -1,   134,    -1,    53,   134,   103,   284,   104,
      -1,   200,    -1,   199,   102,   200,    -1,   201,    -1,   201,
     113,   174,    -1,   134,    -1,   130,    -1,   208,    -1,   134,
      -1,   203,    -1,   206,    -1,   204,    -1,   205,    -1,    67,
     134,   103,   207,   104,    -1,    67,   130,   103,   207,   104,
      -1,    67,   103,   207,   104,    -1,   274,    -1,   134,    -1,
      67,   134,   113,   210,    99,    -1,    12,   146,   129,    -1,
      12,   129,    -1,   146,   129,    -1,   129,    -1,    93,    90,
      12,   146,   144,    99,    -1,    93,    90,   146,   144,    99,
      -1,    93,    12,   146,   144,    99,    -1,    93,   146,   144,
      99,    -1,    93,    12,   144,    99,    -1,    93,    67,    12,
     146,   129,    99,    -1,    93,    67,    12,   129,    99,    -1,
      93,    67,   146,   129,    99,    -1,    93,    67,   129,    99,
      -1,    36,   100,   139,   101,    99,    -1,    56,   139,   103,
     274,   104,    -1,    56,   139,   187,    -1,   216,    -1,   215,
     102,   216,    -1,   217,   285,    -1,   218,    -1,   219,   217,
      -1,   222,    -1,   218,   100,   227,   101,   220,   272,    -1,
     218,   100,   227,   101,   220,    -1,   218,   100,   227,   101,
     272,    -1,   218,   100,   227,   101,    -1,     9,   100,   227,
     101,    -1,     9,    12,   222,   100,   227,   101,    -1,     9,
      12,     9,   100,   227,   101,    -1,   218,   105,   286,   106,
      -1,   100,   217,   101,    -1,   116,    -1,   116,   220,    -1,
     107,    -1,   146,   116,    -1,   146,   116,   220,    -1,    12,
     146,   116,    -1,    12,   146,   116,   220,    -1,   221,    -1,
     221,   220,    -1,    44,    -1,    96,    -1,   143,    -1,    12,
     143,    -1,    12,   146,   196,    -1,    12,   196,    -1,   224,
     287,    -1,   194,   288,    -1,   219,   287,    -1,   226,    -1,
     289,   100,   227,   101,   220,   272,    -1,   289,   100,   227,
     101,   220,    -1,   289,   100,   227,   101,   272,    -1,   289,
     100,   227,   101,    -1,   289,   105,   286,   106,    -1,   100,
     225,   101,    -1,   228,    11,    -1,   228,    -1,    11,    -1,
      -1,   228,   102,    11,    -1,   229,    -1,   228,   102,   229,
      -1,   191,   217,    -1,   191,   217,   113,   171,    -1,   191,
     287,    -1,   191,   287,   113,   171,    -1,   217,   290,   231,
      -1,   191,   217,   290,   231,    -1,   217,   267,    -1,   191,
     217,   267,    -1,   178,    -1,   113,   233,    -1,   100,   148,
     101,    -1,   171,    -1,   103,   234,   291,   104,    -1,   103,
     104,    -1,   233,    -1,   234,   102,   233,    -1,   236,   103,
     292,   104,    -1,   237,   134,    -1,   237,   134,   244,    -1,
     237,   146,   134,    -1,   237,   146,   134,   244,    -1,    43,
      -1,    81,    -1,    91,    -1,   239,   292,    -1,   247,   123,
     292,    -1,   191,   240,    99,    -1,   191,    99,    -1,   240,
      99,    -1,    99,    -1,   230,   293,    -1,   145,    99,    -1,
     211,    -1,   241,    -1,   240,   102,   241,    -1,    -1,   217,
      -1,   217,   242,    -1,   217,   243,    -1,   134,   123,   174,
      -1,   113,   124,    -1,   113,   174,    -1,   123,   245,    -1,
     246,    -1,   245,   102,   246,    -1,    12,   146,   131,    -1,
      12,   131,    -1,   146,   131,    -1,   131,    -1,    94,   247,
      12,   275,   131,    -1,    94,   247,   275,   131,    -1,    94,
      12,   275,   131,    -1,    94,   275,   131,    -1,   247,    94,
      12,   275,   131,    -1,   247,    94,   275,   131,    -1,   247,
      12,   275,   131,    -1,   247,   275,   131,    -1,    70,    -1,
      71,    -1,    72,    -1,    69,   249,    -1,   224,   294,    -1,
     219,   294,    -1,   123,   252,    -1,   253,    -1,   253,   102,
     252,    -1,   254,   100,   276,   101,    -1,    12,   146,   131,
      -1,    12,   131,    -1,   146,   131,    -1,   131,    -1,   134,
      -1,    69,   256,    -1,    68,    -1,    48,    -1,    68,   105,
     106,    -1,    48,   105,   106,    -1,   112,    -1,   111,    -1,
     116,    -1,   117,    -1,   115,    -1,   120,    -1,   107,    -1,
     118,    -1,   122,    -1,   121,    -1,   113,    -1,   109,    -1,
     110,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,   102,    -1,    34,    -1,    35,    -1,   100,   101,
      -1,   105,   106,    -1,   295,    83,   109,   258,   110,   187,
      -1,   259,    -1,   258,   102,   259,    -1,   260,    -1,   229,
      -1,    43,   134,    -1,    43,   134,   113,   223,    -1,    90,
     134,    -1,    90,   134,   113,   223,    -1,    83,   109,   258,
     110,    43,   134,    -1,    83,   109,   258,   110,    43,   134,
     113,   133,    -1,   133,   109,   262,   110,    -1,   263,    -1,
     262,   102,   263,    -1,   171,    -1,   223,    -1,   133,    -1,
      83,   187,    -1,    83,   109,   110,   187,    -1,    87,   178,
     268,    -1,    87,   290,   231,   268,    -1,   269,   296,    -1,
      41,   100,   270,   101,   178,    -1,   224,   217,    -1,   224,
     225,    -1,   224,    -1,    11,    -1,    85,   297,    -1,    85,
     100,   298,   101,    -1,   223,    -1,   273,   102,   223,    -1,
      -1,   186,    -1,    -1,   146,    -1,    -1,   148,    -1,    -1,
      12,    -1,    -1,   152,    -1,    -1,   156,    -1,    -1,   154,
      -1,    -1,   173,    -1,    -1,   179,    -1,    -1,   181,    -1,
      -1,   199,    -1,    -1,   232,    -1,    -1,   174,    -1,    -1,
     225,    -1,    -1,   224,    -1,    -1,   226,    -1,    -1,   251,
      -1,    -1,   102,    -1,    -1,   238,    -1,    -1,    99,    -1,
      -1,   250,    -1,    -1,    55,    -1,    -1,   268,    -1,    -1,
     171,    -1,    -1,   273,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   160,   166,   172,   173,   178,   182,   191,
     195,   196,   197,   198,   199,   203,   207,   211,   215,   219,
     220,   228,   236,   237,   238,   239,   243,   244,   248,   249,
     250,   251,   255,   260,   261,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   287,   288,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   305,   306,   307,   308,
     312,   313,   314,   315,   319,   323,   327,   328,   332,   333,
     337,   341,   342,   343,   344,   348,   349,   353,   354,   355,
     359,   360,   361,   362,   366,   367,   368,   372,   373,   374,
     378,   379,   380,   381,   382,   386,   387,   388,   392,   393,
     397,   398,   402,   403,   407,   408,   412,   413,   417,   418,
     422,   423,   424,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   442,   443,   447,   455,   456,   457,
     458,   459,   460,   461,   462,   466,   467,   468,   472,   476,
     480,   481,   485,   486,   487,   491,   492,   496,   497,   498,
     502,   503,   507,   508,   509,   510,   514,   522,   523,   527,
     528,   529,   530,   531,   532,   533,   537,   538,   539,   540,
     541,   545,   546,   550,   551,   552,   553,   554,   558,   559,
     563,   564,   565,   566,   567,   571,   572,   573,   577,   578,
     579,   580,   581,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   602,   603,   604,
     608,   609,   610,   611,   612,   613,   614,   619,   624,   628,
     629,   633,   634,   638,   643,   644,   648,   653,   654,   658,
     659,   663,   667,   671,   675,   680,   685,   690,   691,   692,
     693,   697,   698,   699,   700,   701,   705,   706,   707,   708,
     713,   717,   718,   726,   727,   731,   735,   736,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   753,   754,
     755,   756,   757,   758,   759,   763,   764,   768,   769,   773,
     774,   775,   776,   780,   784,   788,   789,   793,   794,   795,
     796,   797,   798,   802,   803,   804,   805,   806,   810,   811,
     815,   816,   817,   818,   822,   823,   824,   825,   829,   833,
     834,   838,   839,   840,   844,   845,   853,   858,   859,   860,
     861,   865,   866,   867,   871,   872,   876,   877,   878,   879,
     880,   881,   882,   886,   887,   890,   891,   892,   893,   894,
     904,   908,   916,   920,   921,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   940,   941,   942,
     950,   954,   958,   962,   966,   967,   971,   975,   976,   977,
     978,   979,   987,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1040,  1044,  1045,  1049,  1050,
    1053,  1054,  1055,  1056,  1057,  1058,  1062,  1066,  1067,  1071,
    1072,  1073,  1077,  1081,  1089,  1093,  1097,  1101,  1105,  1106,
    1107,  1108,  1112,  1116,  1120,  1121,  1129,  1130,  1134,  1135,
    1139,  1140,  1144,  1145,  1149,  1150,  1154,  1155,  1159,  1160,
    1164,  1165,  1169,  1170,  1174,  1175,  1179,  1180,  1184,  1185,
    1189,  1190,  1194,  1195,  1199,  1200,  1204,  1205,  1209,  1210,
    1214,  1215,  1219,  1220,  1224,  1225,  1229,  1230,  1234,  1235,
    1239,  1240,  1244,  1245,  1249,  1250
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "FLOATING",
  "CHARACTER", "STRING", "TYPEDEF_NAME", "CLASS_NAME", "ENUM_NAME",
  "ELLIPSIS", "COLONCOLON", "DOTSTAR", "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ",
  "MODEQ", "XOREQ", "ANDEQ", "OREQ", "SL", "SR", "SREQ", "SLEQ", "EQ",
  "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "ARROWSTAR", "ARROW", "ASM", "AUTO", "BOOL", "BREAK", "CASE", "CATCH",
  "CHAR", "CLASS", "CONST", "CONST_CAST", "CONTINUE", "DEFAULT", "DELETE",
  "DO", "DOUBLE", "DYNAMIC_CAST", "ELSE", "ENUM", "EXPLICIT", "EXPORT",
  "EXTERN", "FALSE", "FLOAT", "FOR", "FRIEND", "GOTO", "IF", "INLINE",
  "INT", "LONG", "MUTABLE", "NAMESPACE", "NEW", "OPERATOR", "PRIVATE",
  "PROTECTED", "PUBLIC", "REGISTER", "REINTERPRET_CAST", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STATIC_CAST", "STRUCT", "SWITCH",
  "TEMPLATE", "THIS", "THROW", "TRUE", "TRY", "TYPEDEF", "TYPEID",
  "TYPENAME", "UNION", "UNSIGNED", "USING", "VIRTUAL", "VOID", "VOLATILE",
  "WCHAR_T", "WHILE", "';'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "'&'", "'.'", "'<'", "'>'", "'_'", "'+'", "'='", "'-'", "'%'",
  "'*'", "'/'", "'|'", "'?'", "'^'", "'!'", "'~'", "':'", "'0'",
  "NAMESPACE_NAME", "TEMPLATE_NAME", "$accept", "typedef_name",
  "namespace_name", "original_namespace_name", "class_name", "enum_name",
  "template_name", "identifier", "literal", "integer_literal",
  "character_literal", "floating_literal", "string_literal",
  "boolean_literal", "translation_unit", "primary_expression",
  "id_expression", "unqualified_id", "qualified_id",
  "nested_name_specifier", "postfix_expression", "expression_list",
  "unary_expression", "unary_operator", "new_expression", "new_placement",
  "new_type_id", "new_declarator", "direct_new_declarator",
  "new_initializer", "delete_expression", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
  "unnamed_namespace_definition", "namespace_body", "namespace_alias",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,    59,
      40,    41,    44,   123,   125,    91,    93,    38,    46,    60,
      62,    95,    43,    61,    45,    37,    42,    47,   124,    63,
      94,    33,   126,    58,    48,   354,   355
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   130,   131,   131,   132,   133,   134,
     135,   135,   135,   135,   135,   136,   137,   138,   139,   140,
     140,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   153,   154,   154,   155,   155,
     156,   157,   157,   157,   157,   158,   158,   159,   159,   159,
     160,   160,   160,   160,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   163,   164,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   171,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   176,   177,   178,
     179,   179,   180,   180,   180,   181,   181,   182,   182,   182,
     183,   183,   184,   184,   184,   184,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   188,
     188,   189,   189,   190,   190,   190,   190,   190,   191,   191,
     192,   192,   192,   192,   192,   193,   193,   193,   194,   194,
     194,   194,   194,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   196,   196,   196,
     197,   197,   197,   197,   197,   197,   197,   132,   198,   199,
     199,   200,   200,   201,   129,   129,   130,   202,   202,   203,
     203,   204,   205,   206,   207,   208,   209,   210,   210,   210,
     210,   211,   211,   211,   211,   211,   212,   212,   212,   212,
     213,   214,   214,   215,   215,   216,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   220,   220,   221,   221,   222,
     222,   222,   222,   223,   224,   225,   225,   226,   226,   226,
     226,   226,   226,   227,   227,   227,   227,   227,   228,   228,
     229,   229,   229,   229,   230,   230,   230,   230,   231,   232,
     232,   233,   233,   233,   234,   234,   235,   236,   236,   236,
     236,   237,   237,   237,   238,   238,   239,   239,   239,   239,
     239,   239,   239,   240,   240,   241,   241,   241,   241,   241,
     242,   243,   244,   245,   245,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   247,   247,   247,
     248,   249,   250,   251,   252,   252,   253,   254,   254,   254,
     254,   254,   255,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   257,   258,   258,   259,   259,
     260,   260,   260,   260,   260,   260,   261,   262,   262,   263,
     263,   263,   264,   265,   266,   267,   268,   269,   270,   270,
     270,   270,   271,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   279,   279,   280,   280,
     281,   281,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   295,   295,
     296,   296,   297,   297,   298,   298
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     2,     1,     4,     4,     5,     4,
       4,     3,     5,     4,     4,     3,     2,     2,     7,     7,
       7,     7,     4,     4,     1,     3,     1,     2,     2,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       4,     5,     6,     7,     3,     2,     2,     1,     3,     4,
       3,     2,     3,     4,     5,     1,     4,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     5,     7,     5,     1,     4,     5,     7,     8,
       1,     1,     2,     2,     3,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     3,     3,     4,     7,     1,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     4,     1,     1,     5,     3,     2,     2,
       1,     6,     5,     5,     4,     4,     6,     5,     5,     4,
       5,     5,     3,     1,     3,     2,     1,     2,     1,     6,
       5,     5,     4,     4,     6,     6,     4,     3,     1,     2,
       1,     2,     3,     3,     4,     1,     2,     1,     1,     1,
       2,     3,     2,     2,     2,     2,     1,     6,     5,     5,
       4,     4,     3,     2,     1,     1,     0,     3,     1,     3,
       2,     4,     2,     4,     3,     4,     2,     3,     1,     2,
       3,     1,     4,     2,     1,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     2,     3,     3,     2,     2,     1,
       2,     2,     1,     1,     3,     0,     1,     2,     2,     3,
       2,     2,     2,     1,     3,     3,     2,     2,     1,     5,
       4,     4,     3,     5,     4,     4,     3,     1,     1,     1,
       2,     2,     2,     2,     1,     3,     4,     3,     2,     2,
       1,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     6,     1,     3,     1,     1,
       2,     4,     2,     4,     6,     8,     4,     1,     3,     1,
       1,     1,     2,     4,     3,     4,     2,     5,     2,     2,
       1,     1,     2,     4,     1,     3,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     456,     9,     2,     5,     7,     0,     0,   190,   208,   206,
     331,   287,   215,     0,   197,   499,   193,   214,   186,   195,
     210,   211,   194,     0,     0,   191,   209,   212,   192,   332,
       0,   187,   462,   333,   213,     0,   196,   216,   288,   207,
       0,   280,   278,     0,     8,   219,   217,   218,     0,    28,
       0,   289,    26,    27,     0,   457,   167,   169,   176,   188,
       0,   183,   185,   184,   198,   203,   201,   200,   175,   237,
     239,   240,   238,   178,   179,   180,   177,   174,   488,   266,
       0,   202,   268,   170,   199,     0,     0,    30,    29,   171,
       6,   172,   173,    21,     0,     0,   306,     5,   290,     0,
     292,     0,     0,     0,     0,     0,     0,    18,     0,   456,
       4,     0,     0,   458,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   421,   422,   384,   383,     0,   420,
       0,   393,   398,   399,   388,   387,   397,   391,   389,   390,
     394,   392,   396,   395,   227,     0,   484,   496,   370,   382,
       0,   442,   463,     0,     0,     0,     0,     0,     0,    28,
       0,     0,   279,   285,    31,    34,     0,     1,   281,   217,
      32,   204,   168,   193,   182,   189,     0,   263,   478,   488,
       0,   489,   316,     0,   306,   480,   267,   345,     0,   327,
       0,     0,     5,     0,     0,     0,   305,   482,     0,   304,
     308,   283,   291,   205,     0,   223,     0,   476,   224,   456,
     262,     0,   244,   456,   456,     0,   459,     0,     0,   423,
     424,   485,   294,     0,     0,   496,   497,   371,     0,     0,
       0,     0,     0,     0,     3,   236,     0,   235,     0,     0,
       0,     0,   277,   286,    33,    15,    17,    16,   458,     0,
       0,     0,     0,     0,    20,   464,     0,     0,     0,    23,
     502,    19,     0,     0,     0,    66,    67,     0,    68,    69,
     441,    22,    10,    11,    12,    13,    14,    35,    25,     0,
      56,    85,     0,    64,    65,    87,    90,    94,    97,   100,
     105,   108,   110,   112,   114,   116,   118,   120,   439,   440,
     482,     0,   437,   122,   282,   181,     0,     0,     0,   479,
     317,   265,     0,     0,     0,   380,   381,     0,   373,   374,
       0,   470,   318,   314,     0,     0,   118,   136,   481,     0,
     367,   368,   369,     0,   339,   227,    27,   345,   342,   346,
     494,   493,   345,     0,   343,     0,     0,   221,     0,     0,
     328,   329,     0,   306,     0,   306,   486,   310,   482,   483,
     296,   312,     0,   273,   303,     0,   284,     0,   222,   233,
     477,   229,   231,     0,     0,   243,     0,     0,     0,   250,
       0,     0,   386,   385,     0,   372,   443,   225,   255,     0,
       0,     0,   259,     0,     0,     0,   254,     0,   464,    57,
      58,     0,     0,    81,     0,     0,   465,     0,     0,     0,
      62,     0,   503,   452,     0,   134,     0,     0,    60,    59,
      46,    47,     0,   460,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,   128,   124,   125,
     126,   132,   131,   133,   129,   130,     0,   123,     0,     0,
     486,   482,   293,     0,   436,   264,   478,     0,    54,     0,
     321,   319,   315,     0,   378,     0,   379,     0,   460,     0,
       0,     0,     0,   470,     0,     0,     0,     0,   470,     0,
       0,     0,    28,   471,   150,   137,   138,   139,   470,   140,
     141,   142,   143,   166,     0,   144,     0,     0,   272,   276,
       0,   341,   337,   346,     0,     0,   347,   348,   495,   340,
     334,   338,   345,   345,   326,   220,     0,     0,   358,     0,
     352,   353,     0,   330,   331,     0,   462,   429,     0,   426,
     428,     0,     0,     0,     0,   295,     0,   306,   480,   307,
     309,   260,     0,     0,   228,   261,   242,   241,   248,     0,
     249,   246,     0,   253,   257,     0,   258,     0,   252,     0,
      82,     0,     0,     0,     0,     0,     0,   466,   468,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    45,
     461,     0,     0,     0,     0,    41,    88,    89,    93,    91,
      92,    95,    96,    98,    99,   103,   104,   101,   102,   106,
     107,   109,   111,   113,   115,   117,     0,   121,   438,   320,
       0,   323,   324,   490,     0,   445,   500,   377,   375,     0,
     162,     0,   163,   470,     0,   470,     0,     0,     0,     0,
       0,     0,     0,   470,   151,   148,   149,     0,   270,   271,
     349,   336,   350,   351,    28,   346,   344,   335,   356,     0,
       0,     0,     0,   357,     0,     0,     0,     0,   430,     0,
     432,     0,     0,   275,   274,   302,   311,   313,     0,     0,
     230,   232,   247,     0,   256,   251,     0,     0,   466,     0,
      83,     0,    74,     0,   460,   467,    70,     0,   469,    77,
     468,    75,     0,    63,     0,    52,    53,   135,    86,    44,
       0,    43,    37,    36,    40,     0,    39,     0,    55,   491,
       0,     0,   501,   446,   376,   470,   147,     0,   160,   474,
     161,   165,   155,     0,     0,   164,     0,   444,     0,   145,
     504,   269,   355,     0,     0,     0,   362,   354,     0,     0,
       0,   366,     0,     0,     0,   427,   425,   300,   301,   226,
      84,     0,    71,     0,     0,   466,     0,     0,     0,    76,
       0,     0,    42,    38,   119,   325,   322,   451,   450,     0,
     146,     0,   475,     0,   470,     0,   470,   470,   454,   505,
       0,   361,     0,   360,   365,     0,   364,   431,     0,   433,
     298,   299,   466,     0,     0,    72,    80,    78,     0,     0,
       0,   448,   449,     0,     0,   470,   152,     0,   154,   157,
       0,   453,   359,   363,     0,   297,    73,    51,    48,    79,
      50,    49,   447,     0,     0,   470,   156,   455,   434,   158,
     470,   153,     0,   159,   435
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    45,   243,   244,   104,    47,    48,   169,   281,   282,
     283,   284,   285,   286,    50,   287,   288,    52,    53,   204,
     290,   600,   291,   292,   293,   416,   587,   708,   709,   705,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   425,   469,   503,   338,   504,   505,
     506,   507,   508,   509,   743,   510,   739,   511,   512,    55,
      56,   513,    58,    59,   514,    61,    62,    63,    64,    65,
      66,    67,   380,   381,   382,    68,    69,    70,    71,    72,
     221,   247,    73,   391,    74,    75,    76,    77,   186,   187,
      78,    79,    80,   172,    81,    82,   309,   310,   369,   370,
     208,   209,   210,    83,   333,   319,   481,   633,    84,    85,
      86,   351,   352,   353,   354,   526,   527,   360,   540,   541,
     355,    87,   158,   236,   191,   328,   329,   330,    88,   159,
      89,   548,   549,   550,    90,   311,   312,    91,    92,   515,
     192,   635,   636,   789,   313,   659,   799,   222,   101,   601,
     163,   417,   706,   711,   516,   517,   793,   383,   321,   339,
     555,   232,   372,   193,   730,   356,   529,   237,    94,   733,
     423,   800
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -630
static const yytype_int16 yypact[] =
{
    2722,  -630,  -630,    24,  -630,   492,   -59,  -630,  -630,  -630,
    -630,  -630,  -630,    34,  -630,  -630,    52,  -630,  -630,  -630,
    -630,  -630,  -630,    47,  2149,  -630,  -630,  -630,  -630,  -630,
    2493,  -630,    71,  -630,  -630,   700,  -630,  -630,  -630,  -630,
     731,  -630,     5,    66,  -630,  -630,    94,  -630,    70,  3099,
     226,  -630,  -630,  -630,   383,  2722,  -630,  -630,  -630,  -630,
    2799,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,   -35,   -47,
     731,  -630,  -630,  -630,  -630,    99,    73,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,   156,   469,  3174,  -630,  -630,   568,
    -630,    90,    52,    36,    94,   146,   248,  -630,  2570,  2722,
    -630,   160,   -11,    66,  -630,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,   171,   230,   241,  -630,
     238,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,    90,  4204,   513,  -630,  -630,
     239,  -630,  -630,    66,   124,   371,   135,   205,   492,  -630,
     214,   263,  -630,     5,  -630,    66,  2397,  -630,     5,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,   285,  -630,   416,   262,
     134,  -630,  -630,   302,  3174,  3869,  -630,  2647,    36,   299,
     248,   301,   327,   492,   205,   329,  -630,  2874,   342,    50,
    -630,     5,  -630,  -630,   368,  -630,   248,   248,  -630,  2722,
    -630,   380,  -630,  2722,  2722,   442,  -630,   392,   401,  -630,
    -630,  -630,  -630,    66,   361,   513,  -630,  -630,  2722,   248,
     395,   205,    60,   418,  -630,  -630,    28,  -630,    66,   205,
     427,   568,  -630,  -630,  -630,  -630,  -630,  -630,   121,  3869,
    3869,   419,  3521,   422,  -630,   465,   434,  3956,   470,  -630,
    3608,  -630,   485,  2397,  3869,  -630,  -630,  3869,  -630,    66,
      70,  -630,  -630,  -630,  -630,  -630,  -630,  -630,  -630,   492,
     415,  -630,  3869,  -630,  -630,  -630,    43,   359,     8,    72,
     224,   261,   445,   467,   481,   574,   913,  -630,  -630,  -630,
     699,   179,  -630,  -630,  -630,  -630,   731,  3608,  3434,  -630,
    -630,  -630,   302,   302,    66,    94,  -630,    66,  -630,   509,
     521,  1750,  -630,  -630,   523,    23,   183,  -630,  -630,   519,
    -630,  -630,  -630,   139,  -630,   803,   527,  2949,  -630,   443,
     529,  -630,  2647,   313,  -630,   511,   532,  -630,   248,   810,
    -630,   299,  3249,  3174,   492,  3174,   739,   528,   206,  -630,
      18,   531,   218,  -630,  -630,  3339,  -630,   541,  -630,  -630,
     552,  -630,   545,   555,   556,  -630,   559,   560,    60,  -630,
      28,   567,  -630,  -630,   551,  -630,  -630,   564,  -630,   570,
     584,    28,  -630,   588,   205,   590,  -630,  3695,   465,  -630,
    -630,  4204,   585,  -630,  4204,  3608,  -630,  4009,  4204,  2397,
    -630,  4204,  -630,  -630,  2397,  -630,   252,   591,  -630,  -630,
    -630,  -630,    45,  3608,  3608,   287,  -630,  3869,  3869,  3869,
    3869,  3869,  3869,  3869,  3869,  3869,  3869,  3869,  3869,  3869,
    3869,  3869,  3869,  3869,  3869,  3869,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,  -630,  -630,  -630,  3869,  -630,  3608,  3608,
     695,   699,  -630,  2397,  -630,  -630,   -16,   356,  -630,  1619,
    -630,  -630,  -630,   657,    94,    66,  -630,   134,  3608,   601,
    3869,   606,   583,  2034,   613,   248,   616,   248,  3608,   617,
     302,   618,  3024,   619,  -630,  -630,  -630,  -630,  1910,  -630,
    -630,  -630,  -630,  -630,  2799,  -630,   620,   621,   335,  -630,
    3869,  -630,  -630,   443,   336,  3782,  -630,  -630,  -630,  -630,
    -630,  -630,   731,  2647,  -630,  -630,    66,   512,    94,    66,
     622,  -630,   245,  -630,   248,   611,   274,  -630,   190,  -630,
    -630,   627,   635,   636,  3608,  -630,  3608,  3174,  3869,  -630,
    -630,  -630,   248,  3869,  -630,  -630,  -630,  -630,  -630,    28,
    -630,  -630,  2397,  -630,  -630,   624,  -630,   647,  -630,   643,
    -630,  4084,   642,  3869,   650,   365,  4204,   665,   656,   659,
     669,   666,   384,   676,  -630,  3608,  3869,   124,   479,  -630,
     655,   678,   126,   124,   501,  -630,  -630,  -630,    43,    43,
      43,   359,   359,     8,     8,    72,    72,    72,    72,   224,
     224,   261,   445,   467,   481,   574,   -36,  -630,  -630,  -630,
    3608,  -630,  -630,   664,   683,  -630,   657,  -630,  -630,   684,
    -630,   661,  -630,  2034,   688,  2273,   692,  2397,   674,   693,
    2397,   657,  2397,  2034,  -630,  -630,  -630,   698,   708,  -630,
    -630,  -630,  -630,  -630,   680,   694,  -630,  -630,    94,    66,
      66,   222,    66,  -630,   810,    66,   273,    66,   696,  3249,
     697,  3249,  2722,  -630,  -630,  -630,  -630,  -630,   704,   706,
    -630,  -630,  -630,   215,  -630,  -630,  3869,  4204,   665,   701,
    -630,   714,  -630,   716,  3608,  -630,  -630,  3608,  -630,   715,
     656,  -630,   723,  -630,   724,  -630,  -630,  -630,  -630,  -630,
     124,  -630,  -630,  -630,  -630,   124,  -630,  3608,  -630,  3434,
     725,  4144,  -630,  -630,  -630,  2034,  -630,   732,  -630,  2397,
    -630,  -630,   619,   733,   731,  -630,   734,  -630,   735,  -630,
    4204,  -630,  -630,    66,    66,    66,  -630,  -630,    66,    66,
      66,  -630,  4204,   279,  4204,  -630,  -630,   335,  -630,  -630,
    -630,   740,  -630,  3608,  3608,   665,   741,   202,  3869,  -630,
    3608,  3608,  -630,  -630,  -630,  -630,  -630,  -630,   206,   742,
    -630,  3608,  -630,   745,  2034,   720,  2034,  2034,  -630,   747,
     750,  -630,    66,  -630,  -630,    66,  -630,  -630,   809,  -630,
     708,  -630,   665,   388,   410,  -630,  -630,  -630,   748,   433,
     439,  -630,  -630,   302,   448,  3608,   806,  3608,  -630,  -630,
    4204,  -630,  -630,  -630,   248,  -630,  -630,  -630,  -630,  -630,
    -630,  -630,  -630,   760,   759,  2034,  -630,  -630,   751,  -630,
    2034,  -630,   737,  -630,  -630
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -630,  -630,  -110,   844,   919,  -630,  -166,   672,  -630,  -630,
    -630,  -630,    89,  -630,  -630,  -630,  1177,   452,  -178,     0,
    -630,  -228,   604,  -630,  -630,  -630,   292,  -630,  -630,  -630,
    -630,  -143,   119,   131,   145,    15,   143,   424,   421,   414,
     423,   411,  -130,  -117,  -112,  -630,   516,  -452,  -188,  -630,
     240,  -181,  -630,  -630,  -430,  -630,  -630,  -630,  -630,  -630,
     -27,    17,   242,   -46,    74,  -630,  -630,   -17,  -630,   324,
    -630,  -630,  -630,   321,  -630,  -630,  -630,  -630,  -630,  -630,
     373,  -630,  -630,  -630,  -175,  -630,  -630,  -630,  -630,   576,
      30,  -630,  -156,  -167,   -38,   789,  -152,    -1,  -358,  -630,
    -185,  -630,  -341,  -164,   280,  -630,  -459,  -630,  -630,  -630,
    -630,  -630,  -630,   539,   362,  -630,  -630,   537,  -630,   219,
    -333,  -630,  -630,  -630,  -630,   412,  -630,  -630,  -630,  -630,
    -630,   221,   220,  -630,  -630,   337,   440,  -630,  -630,  -630,
    -186,  -406,  -630,  -630,  -630,  -629,  -630,    25,  -475,  -461,
    -630,   499,  -591,   207,  -480,  -630,  -630,  -630,  -630,   354,
    -165,  -630,  -630,  -173,  -630,  -320,  -630,   685,  -630,  -630,
    -630,  -630
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -493
static const yytype_int16 yytable[] =
{
      54,   235,   320,   161,   173,    99,   253,   156,   553,   334,
     280,   314,   332,   106,   185,   322,   323,    57,   649,   346,
     632,   547,   348,   157,   155,    93,   542,   639,   182,   751,
      54,     1,   530,   350,   560,   167,    95,     1,   641,     1,
     170,   102,   371,    97,   376,    97,   103,    57,     1,    11,
       1,   368,   189,   194,    97,    54,   437,   597,   195,   107,
      54,   374,   672,     1,   308,   336,   595,   677,   660,    97,
     171,   407,    57,   663,    60,    97,     1,   438,   337,   235,
     170,   220,    97,   162,   317,   198,   200,   727,   190,   477,
     188,   408,   224,     1,   444,   445,   155,   318,     2,    97,
       4,    38,   225,   216,    60,   108,   175,   772,    54,    54,
     196,   691,   553,   226,    24,   389,   409,   410,  -487,   413,
     442,   427,   443,  -487,    96,    57,    57,     1,   598,    60,
      97,   428,   400,    97,   429,   173,   403,     1,   811,   156,
     173,   332,   332,    97,    97,   472,   324,   248,    97,   436,
     109,   164,   375,   110,   471,   231,   155,   234,   422,   156,
      44,   185,    44,   239,   241,   246,   249,    43,   251,   407,
     207,    44,   110,   173,   346,   254,   289,   348,   551,   176,
     552,   835,    60,    60,   815,   110,    44,   585,   350,   408,
     327,   214,    44,    24,   155,   753,   755,    54,   358,    44,
     758,   760,   197,   364,   671,   478,   480,    54,     1,     1,
     368,   396,   368,   667,   466,     3,    44,     1,   168,    54,
     746,   836,   748,    54,    54,   390,   177,   349,   595,   166,
     732,    97,   723,   394,   754,   234,    57,   367,    54,   201,
      57,    57,   401,   776,   384,   747,    43,    44,   404,   217,
      44,     1,   446,   447,    97,    57,   156,   675,   226,   582,
      44,    44,   584,   223,   580,    44,   589,   590,   207,   591,
     785,   347,   593,   289,    24,    24,   227,     1,   568,   802,
     570,   473,    97,    24,   805,   759,   162,   450,   451,   474,
       1,   575,   681,    60,   606,   607,    97,    60,    60,   603,
     682,   185,   468,   478,   595,   644,   366,   280,   817,   792,
     234,  -486,    60,    41,   471,   471,   170,   473,   557,   651,
     654,   478,    42,   558,   485,   769,   818,    43,    43,   100,
     178,   289,    44,   448,   449,   228,    43,   320,   547,   676,
     547,   542,   229,   167,   230,   844,   476,    54,    44,   238,
     322,   658,    54,   594,   595,   346,    24,   627,   348,   539,
     336,   308,   155,   155,   252,   155,   170,   480,   170,   350,
     604,    44,   688,   337,     1,   155,   478,   523,   181,    11,
      97,   681,   349,   242,   315,   190,     1,   316,   569,   808,
     336,     2,    97,     4,   156,   336,   171,   156,   196,    44,
     156,   156,   156,   337,   156,   331,   280,   156,   337,    43,
     362,   155,   531,    44,   155,   532,   588,   155,   155,   289,
     657,   155,   359,   212,   289,   213,   347,   363,   336,   365,
     822,    38,   710,   336,   703,   661,   207,   207,   532,   207,
     700,   337,   686,   373,   687,     1,   337,   430,   431,   207,
     432,    97,    24,   718,   388,   736,   156,   629,   630,   692,
     308,   615,   616,   617,   618,   749,   702,   630,   185,   377,
     234,   234,     1,   289,   439,   440,   441,   178,   202,   181,
     173,   203,     1,   717,   385,   715,   595,   327,    97,   837,
     595,   720,   100,   289,   398,     1,   110,    44,   392,   178,
       2,    97,     4,   189,     1,    43,   180,   393,   289,    44,
      97,   838,   595,   725,    54,   433,   317,   402,   728,  -488,
     434,    97,    97,   435,   670,   233,   406,   100,   411,   318,
     189,   414,   170,    54,   840,   595,   669,   226,    24,   190,
     841,   595,   226,   418,   476,   771,  -488,   790,    24,   843,
     595,   180,   452,   770,   710,   156,   525,   155,   608,   609,
     610,    24,   665,   349,   156,   415,   190,   110,    44,   156,
      24,     1,   289,   611,   612,   212,     2,    97,     4,   421,
     588,   155,   340,   341,   342,   424,   155,   453,   234,   613,
     614,    43,   478,   619,   620,    44,   386,   387,   798,   454,
     810,    43,   482,   483,   455,    44,   826,   347,   828,   829,
     807,   487,   809,   181,    43,   784,   240,   480,    44,   250,
      41,   488,   180,    43,   518,   519,   521,    44,   528,    42,
     156,   207,   368,   156,   533,   156,   534,    24,    44,    44,
     561,   554,   842,   289,   556,   289,   744,   289,   336,   744,
     289,   744,   289,   289,   562,   766,   180,   851,   563,   564,
     565,   337,   853,   566,   567,    97,   571,   211,   233,   573,
     226,   226,    49,   572,   539,   226,   226,    49,   847,   155,
     156,   155,    54,   574,   211,   105,   854,   576,   212,   578,
      43,   583,   596,   399,    44,   112,   154,   155,   634,    57,
     640,   405,    49,   180,    97,   642,   643,   233,    97,    97,
     234,   233,   164,   645,   156,   846,   647,   650,   652,   655,
     679,   595,   156,   694,   674,   656,    49,    49,   683,   173,
     788,   155,    49,   156,     1,   289,   684,   685,   744,   289,
       3,   180,     1,   168,   170,   156,   695,   156,     3,   696,
     155,   168,   699,   207,   226,   207,    60,   630,   199,   226,
     701,   707,   155,    41,   155,   704,   729,   165,   154,   712,
     713,    49,    42,   154,   795,   215,   714,   716,   218,   722,
      49,    49,    44,   731,   735,   734,   737,   225,   170,   426,
     166,   741,   745,   657,   289,   470,   289,   289,   750,   470,
      24,   773,    41,   520,  -486,   767,    41,   525,    24,   762,
     764,    42,   768,   156,   774,    42,   180,   775,   821,    97,
     778,    44,   536,   780,   781,    44,    44,   154,   154,   786,
     155,    40,   791,   827,   794,   796,   797,   245,    41,   366,
      49,   812,   816,   823,   825,   289,    41,    42,    49,   830,
     289,   831,   834,    43,   839,    42,   577,    44,   845,   849,
     850,    43,   326,    44,   852,    44,   154,   111,   623,   345,
     357,   420,   361,   698,   622,    49,   621,   625,   624,    49,
     340,   341,   342,   690,   205,   738,   524,   740,   378,   379,
     -28,    49,   475,   757,   666,    49,    49,   245,   543,   638,
     763,   765,   -28,   -28,   537,   -28,   -28,   581,   -28,   693,
      49,   397,   689,   628,   245,     0,   -28,   779,   245,    46,
     395,     0,     0,    49,    46,     0,   520,   456,   457,   458,
     459,   460,   461,   462,   463,   426,    44,   464,   465,     0,
     592,     0,     0,    46,   466,    49,     0,     0,     0,    46,
     602,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,   174,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,    46,     0,     0,     0,     0,    46,
       0,     0,     0,     0,   626,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,   179,   345,
     179,     0,     0,     0,   345,     0,   467,    46,    46,     0,
     535,     0,   468,     0,   154,   154,    49,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   179,    46,     0,     0,     0,     0,
       0,     0,     0,   154,     0,     0,   154,    46,     0,   154,
     154,    49,     0,   154,     0,    46,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   325,
       0,     0,     0,    46,     0,     0,    46,     0,     0,     0,
       0,     0,    46,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     0,    46,    46,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,   326,
       0,     0,     0,   742,     0,   502,   742,   646,   742,   648,
     179,     0,     0,     0,     0,     0,     0,    51,     0,     0,
     502,     0,    98,     0,     0,     0,    49,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,   664,   345,     0,    51,   179,     0,
       0,     0,     0,     0,     0,     0,   678,    51,   680,     0,
       0,     0,     0,   777,     0,     0,     0,     0,     0,   154,
       0,     0,    51,     0,   379,     0,     0,    51,     0,     0,
       0,   245,     0,   484,    49,     0,   486,     0,     0,     0,
      46,     0,     0,   154,     0,   742,     0,    51,   154,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,    46,    51,     0,     0,     0,     0,     0,   538,     0,
       0,    46,    46,   179,    46,    51,    51,     0,     0,   813,
     814,     0,     0,     0,    46,     0,   819,   820,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   824,     0,     0,
       0,     0,     0,     0,     0,   502,     0,    49,     0,    49,
       0,     0,    49,     0,    49,   502,     0,     0,     0,     0,
      46,     0,     0,    46,     0,     0,    46,    46,    46,     0,
      46,     0,     0,    46,     0,    98,     0,     0,     0,     0,
       0,   154,     0,   154,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   154,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      98,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,    51,     0,     0,     0,
      51,    51,     0,   154,   637,     0,   325,   502,     0,     0,
       0,    49,    46,     0,     0,    51,     0,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,    46,   154,     0,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,   668,     0,     0,   673,     0,
       0,     0,     0,     0,     0,     0,   502,     0,   502,   502,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    51,     0,     0,     0,     0,     0,     0,
      46,     0,   154,     0,     0,    46,   848,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   502,     0,     0,
       0,     0,   502,     0,    51,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,    46,     0,    46,     0,     0,    46,
       0,    46,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   752,     0,
       0,   756,     0,   538,     0,     0,   761,     0,    46,     0,
      46,    46,     0,     0,     0,     0,     0,     0,     0,   599,
       0,     0,   605,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     1,   255,   256,   257,   107,     0,    97,     0,
       0,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,   259,   260,     0,    46,     0,     0,     0,    46,     0,
       0,     0,     0,     0,   261,     0,     0,   262,     0,    46,
     263,     0,   801,     0,   803,     0,   264,   804,     0,   806,
       0,    46,     0,    46,     0,     0,     0,   265,    24,     0,
       0,    51,     0,   266,     0,     0,     0,   267,     0,   268,
       0,     0,     0,   269,   270,   271,     0,     0,   272,    51,
      51,     0,     0,    46,     0,    46,    46,     0,     0,   273,
       0,   832,   479,   631,   833,     0,   274,     0,     0,     0,
       0,   275,     0,   276,     0,   277,     0,     0,     0,     0,
     278,   279,     0,     0,     0,    44,     0,     0,     0,    46,
       0,     0,     0,     1,   255,   256,   257,   107,     2,    97,
       4,     0,   258,     0,    46,     0,     0,     0,     0,    46,
       0,     0,     0,     0,   719,   721,     0,     0,     0,     0,
     724,   726,   259,   260,     0,     0,     6,     7,     8,   489,
     490,     0,     9,    10,    11,   261,   491,   492,   262,   493,
      12,   263,     0,    13,    14,     0,   183,   264,    17,   494,
      18,   495,   496,    19,    20,    21,    22,   497,   265,    24,
       0,     0,     0,    25,   266,   498,    26,    27,   267,    28,
     268,    29,   499,     0,   269,   270,   271,   500,    31,   272,
      32,    33,    34,    35,    36,    37,    38,    39,   501,     0,
     273,     0,     0,   331,  -472,     0,     0,   274,     0,    51,
       0,     0,   275,     0,   276,     0,   277,     0,     0,     0,
       0,   278,   279,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   782,     0,     0,
       0,     0,   783,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   255,   256,   257,   107,     2,    97,
       4,    51,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,   260,     0,     0,     6,     7,     8,   489,
     490,     0,     9,    10,    11,   261,   491,   492,   262,   493,
      12,   263,     0,    13,    14,    51,   183,   264,    17,   494,
      18,   495,   496,    19,    20,    21,    22,   497,   265,    24,
       0,     0,     0,    25,   266,   498,    26,    27,   267,    28,
     268,    29,   499,     0,   269,   270,   271,   500,    31,   272,
      32,    33,    34,    35,    36,    37,    38,    39,   501,     0,
     273,     0,     0,   331,  -473,     0,     0,   274,     0,     0,
       0,     0,   275,     0,   276,     0,   277,     0,     0,     0,
       0,   278,   279,     0,     0,     0,    44,     1,   255,   256,
     257,   107,     2,    97,     4,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,   260,     0,     0,
       6,     7,     8,   489,   490,     0,     9,    10,    11,   261,
     491,   492,   262,   493,    12,   263,     0,    13,    14,     0,
     183,   264,    17,   494,    18,   495,   496,    19,    20,    21,
      22,   497,   265,    24,     0,     0,     0,    25,   266,   498,
      26,    27,   267,    28,   268,    29,   499,     0,   269,   270,
     271,   500,    31,   272,    32,    33,    34,    35,    36,    37,
      38,    39,   501,     0,   273,     0,     0,   331,     0,     0,
       0,   274,     0,     0,     0,     0,   275,     0,   276,     0,
     277,     0,     1,     0,     0,   278,   279,     2,    97,     4,
      44,   113,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,   136,     0,    12,
       0,     0,    13,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,    20,    21,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,    26,    27,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,     0,    37,    38,    39,     0,     0,   138,
       0,   139,     0,     0,   140,     0,   141,     0,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,   151,
     152,   153,     0,     0,     0,    44,     1,   255,   256,   257,
     107,     2,    97,     4,     0,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   259,   260,     0,     0,     0,
       7,     8,     0,     0,     0,     9,    10,    11,   261,     0,
       0,   262,     0,    12,   263,     0,    13,    14,     0,   183,
     264,    17,     0,    18,     0,     0,    19,    20,    21,    22,
       0,   265,    24,     0,     0,     0,    25,   266,     0,    26,
      27,   267,    28,   268,    29,     0,     0,   269,   270,   271,
       0,    31,   272,    32,    33,    34,     0,    36,    37,    38,
      39,     0,     0,   273,     0,     0,     0,     0,     0,     0,
     274,     0,     0,     0,     0,   275,     0,   276,     0,   277,
       0,     0,     0,     0,   278,   279,     0,     0,     0,    44,
       1,   255,   256,   257,   107,     2,    97,     4,     0,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     260,     0,     0,     0,     0,     8,     0,     0,     0,     9,
      10,    11,   261,     0,     0,   262,     0,    12,   263,     0,
      13,     0,     0,     0,   264,    17,     0,     0,     0,     0,
       0,    20,    21,     0,     0,   265,    24,     0,     0,     0,
       0,   266,     0,    26,    27,   267,     0,   268,    29,     0,
       0,   269,   270,   271,     0,     0,   272,    32,    33,    34,
       0,     0,    37,    38,    39,     0,     1,   273,     0,     0,
       0,     2,     3,     4,   274,     5,     0,     0,     0,   275,
       0,   276,     0,   277,     0,     0,     0,     0,   278,   279,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,    12,     0,     0,    13,    14,    15,    16,
       0,    17,     0,    18,     0,     0,    19,    20,    21,    22,
      23,     0,    24,     0,     0,     0,    25,     0,     0,    26,
      27,     0,    28,     1,    29,     0,    30,     0,     2,     3,
       4,    31,     5,    32,    33,    34,    35,    36,    37,    38,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,     0,   160,     0,     0,     0,     6,     7,     8,    42,
       0,     0,     9,    10,    11,    43,     0,     0,     0,    44,
      12,     0,     0,    13,    14,    15,    16,     0,    17,     0,
      18,     0,     0,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,     0,     0,    26,    27,     0,    28,
       1,    29,     0,    30,     0,     2,     3,     4,    31,     5,
      32,    33,    34,    35,    36,    37,    38,    39,     0,     0,
      40,     0,     0,   219,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     7,     8,    42,     0,     0,     9,
      10,    11,    43,     0,     0,     0,    44,    12,     0,     0,
      13,    14,     0,   183,     0,    17,     0,    18,     0,     0,
      19,    20,    21,    22,     0,     0,    24,   340,   341,   342,
      25,     0,     0,    26,    27,     1,    28,     0,    29,     0,
       2,     3,     4,     0,     5,    31,     0,    32,    33,    34,
     343,    36,    37,    38,    39,     0,   344,    40,     0,     0,
       0,  -492,     0,     0,    41,     0,     0,     0,     6,     7,
       8,     0,     0,    42,     9,    10,    11,     0,     0,    43,
       0,     0,    12,    44,     0,    13,    14,    15,    16,     0,
      17,     0,    18,     0,     0,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     1,    29,     0,    30,     0,     2,     3,     4,
      31,     5,    32,    33,    34,    35,    36,    37,    38,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     7,     8,    42,     0,
       0,     9,    10,    11,    43,     0,     0,     0,    44,    12,
       0,     0,    13,    14,     0,   183,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,    24,     0,
       0,     0,    25,     0,     0,    26,    27,     1,    28,     0,
      29,     0,     2,     3,     4,     0,     5,    31,     0,    32,
      33,    34,     0,    36,    37,    38,    39,     0,   184,    40,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     7,     8,     0,     0,    42,     9,    10,    11,     0,
       0,    43,     0,     0,    12,    44,     0,    13,    14,     0,
     183,     0,    17,     0,    18,     0,     0,    19,    20,    21,
      22,     0,     0,    24,     0,     0,     0,    25,     0,     0,
      26,    27,     1,    28,     0,    29,     0,     2,     3,     4,
       0,     5,    31,     0,    32,    33,    34,     0,    36,    37,
      38,    39,     0,     0,   366,     0,     0,     0,     0,  -486,
       0,    41,     0,     0,     0,     0,     7,     8,     0,     0,
      42,     9,    10,    11,     0,     0,    43,     0,     0,    12,
      44,     0,    13,    14,     0,   183,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,    24,     0,
       0,     0,    25,     0,     0,    26,    27,  -227,    28,     0,
      29,     0,  -227,  -227,  -227,     0,  -227,    31,     0,    32,
      33,    34,     0,    36,    37,    38,    39,     0,   522,    40,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,  -227,  -227,     0,     0,    42,  -227,  -227,  -227,     0,
       0,    43,     0,     0,  -227,    44,     0,  -227,  -227,     0,
    -227,     0,  -227,     0,  -227,     0,     0,  -227,  -227,  -227,
    -227,     0,     0,  -227,     0,     0,     0,  -227,     0,     0,
    -227,  -227,  -227,  -227,     0,  -227,     0,  -227,  -227,  -227,
       0,  -227,  -227,     0,  -227,  -227,  -227,     0,  -227,  -227,
    -227,  -227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -227,  -227,     0,     0,
       0,  -227,  -227,  -227,     0,     0,  -227,   653,     0,  -227,
    -227,     0,  -227,  -227,     0,  -227,     0,  -227,     0,  -227,
       0,     0,  -227,  -227,  -227,  -227,     0,     0,  -227,     0,
       0,     0,  -227,     0,     0,  -227,  -227,     1,  -227,     0,
    -227,     0,     2,    97,     4,   206,   113,  -227,     0,  -227,
    -227,  -227,     0,  -227,  -227,  -227,  -227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     0,     0,     9,    10,    11,     0,
       0,  -227,     0,     0,    12,  -227,     0,    13,    14,     0,
     183,     0,    17,     0,    18,     0,     0,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,    25,     0,     0,
      26,    27,     1,    28,     0,    29,     0,     2,    97,     4,
       0,   113,    31,     0,    32,    33,    34,     0,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,   544,    11,     0,     0,     0,     0,     0,    12,
      44,     0,    13,    14,     0,   183,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     0,
      29,     0,   545,     0,     0,     0,     0,    31,     0,   546,
      33,    34,     1,    36,    37,    38,    39,     2,    97,     4,
     559,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,     7,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,    13,    14,     0,   183,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     0,
      29,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,    36,    37,    38,    39,     1,   255,   256,
     257,   107,     0,    97,     0,     0,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,   259,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,     0,   262,     0,     0,   263,     0,     0,     0,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   265,    24,     0,     0,     0,     0,   266,     0,
       0,     0,   267,     0,   268,     0,     0,     0,   269,   270,
     271,     0,     0,   272,     1,   255,   256,   257,   107,     0,
      97,     0,     0,   335,   273,     0,     0,   479,     0,     0,
       0,   274,     0,     0,     0,     0,   275,     0,   276,     0,
     277,     0,     0,   259,   260,   278,   279,     0,     0,     0,
      44,     0,     0,     0,     0,     0,   261,     0,     0,   262,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
      24,     0,     0,     0,     0,   266,     0,     0,     0,   267,
       0,   268,     0,     0,     0,   269,     0,   271,     0,     0,
     272,     1,   255,   256,   257,   107,     0,    97,     0,     0,
     335,   273,     0,     0,     0,     0,   412,     0,   274,     0,
       0,     0,     0,   275,     0,   276,     0,   277,     0,     0,
     259,   260,   278,   279,     0,     0,     0,    44,     0,     0,
       0,     0,     0,   261,     0,     0,   262,     0,     0,   263,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   265,    24,     0,     0,
       0,     0,   266,     0,     0,     0,   267,     0,   268,     0,
       0,     0,   269,   270,   271,     0,     0,   272,     1,   255,
     256,   257,   107,     0,    97,     0,     0,   335,   273,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
     275,     0,   276,     0,   277,     0,     0,   259,   260,   278,
     279,     0,     0,     0,    44,     0,     0,     0,     0,     0,
     261,     0,     0,   262,     0,     0,   263,     0,     0,     0,
       0,     0,   264,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,    24,     0,     0,     0,     0,   266,
       0,     0,     0,   267,     0,   268,     0,     0,     0,   269,
       0,   271,     0,     0,   272,     1,   255,   256,   257,   107,
       0,    97,     0,     0,   335,   273,     0,     0,     0,     0,
     579,     0,   274,     0,     0,     0,     0,   275,     0,   276,
       0,   277,     0,     0,   259,   260,   278,   279,     0,     0,
       0,    44,     0,     0,     0,     0,     0,   261,     0,     0,
     262,     0,     0,   263,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,    24,     0,     0,     0,     0,   266,     0,     0,     0,
     267,     0,   268,     0,     0,     0,   269,     0,   271,     0,
       0,   272,     1,   255,   256,   257,   107,     0,    97,     0,
       0,   335,   273,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,   275,     0,   276,     0,   277,     0,
       0,   259,   260,   278,   279,     0,   662,     0,    44,     0,
       0,     0,     0,     0,   261,     0,     0,   262,     0,     0,
     263,     0,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   265,    24,     0,
       0,     0,     0,   266,     0,     0,     0,   267,     0,   268,
       0,     0,     0,   269,     0,   271,     0,     0,   272,     1,
     255,   256,   257,   107,     0,    97,     0,     0,   335,   273,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,   275,     0,   276,     0,   277,     0,     0,   259,   260,
     278,   279,     0,     0,     0,    44,     0,     0,     0,     0,
       0,   261,     0,     0,   262,     0,     0,   263,     0,     0,
       0,     0,     1,   264,     0,     0,     0,     2,    97,     4,
       0,   113,     0,     0,   265,    24,     0,     0,     0,     0,
     266,     0,     0,     0,   267,     0,   268,     0,     0,     0,
     269,     0,   271,     0,     0,   272,     0,     8,     0,     0,
       0,     9,    10,    11,     0,     0,   419,     0,     0,    12,
       0,     0,    13,   274,     0,     0,     0,    17,   275,     0,
     276,     0,   277,    20,    21,     0,     0,   278,   279,     0,
       0,     0,    44,     0,     0,    26,    27,     1,     0,     0,
      29,     0,     2,    97,     4,     0,   113,     0,     0,    32,
      33,    34,     0,     0,    37,    38,    39,     0,     0,   586,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,    44,     0,    13,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     1,    20,    21,
       0,     0,     2,    97,     4,   787,   113,     0,     0,     0,
      26,    27,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    37,
      38,    39,     8,     0,   697,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     1,    20,    21,
      44,     0,     2,    97,     4,     0,   113,     0,     0,     0,
      26,    27,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    37,
      38,    39,     8,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    20,    21,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44
};

static const yytype_int16 yycheck[] =
{
       0,   157,   188,    30,    42,     5,   173,    24,   366,   194,
     176,   178,   193,    13,    60,   188,   189,     0,   498,   197,
     479,   362,   197,    24,    24,     0,   359,   488,    55,   658,
      30,     3,   352,   197,   375,    35,    12,     3,   490,     3,
      40,   100,   207,     9,   211,     9,    12,    30,     3,    44,
       3,   207,    87,   100,     9,    55,    13,    12,   105,     7,
      60,    11,   537,     3,   176,   195,   102,   542,   520,     9,
      40,    48,    55,   525,     0,     9,     3,    34,   195,   235,
      80,   108,     9,    12,   100,    12,    86,   123,   123,   317,
      60,    68,   103,     3,    22,    23,    96,   113,     8,     9,
      10,    96,   113,   103,    30,    16,    12,   698,   108,   109,
      80,   563,   470,   113,    69,   225,   259,   260,   100,   262,
     112,   273,   114,   105,   100,   108,   109,     3,    83,    55,
       9,   274,   242,     9,   277,   173,   246,     3,   767,   156,
     178,   322,   323,     9,     9,   310,    12,    12,     9,   292,
     103,    12,   102,   125,   310,   156,   156,   157,   270,   176,
     126,   207,   126,   163,   164,   165,   166,   122,   168,    48,
      96,   126,   125,   211,   352,   175,   176,   352,   363,   109,
     365,   810,   108,   109,   775,   125,   126,   415,   352,    68,
     190,   102,   126,    69,   194,   670,   671,   197,   198,   126,
     675,   676,   103,   203,   537,   317,   318,   207,     3,     3,
     366,   238,   368,   533,    31,     9,   126,     3,    12,   219,
     650,   812,   652,   223,   224,   225,     0,   197,   102,    90,
     636,     9,   106,   233,    12,   235,   219,   207,   238,    83,
     223,   224,   242,   704,   219,   651,   122,   126,   248,   103,
     126,     3,    28,    29,     9,   238,   273,    12,   258,   411,
     126,   126,   414,   103,   407,   126,   418,   419,   194,   421,
     729,   197,   424,   273,    69,    69,   105,     3,   388,   754,
     390,   102,     9,    69,   759,    12,    12,    26,    27,   110,
       3,   401,   102,   219,   437,   438,     9,   223,   224,    12,
     110,   347,   119,   415,   102,   493,   100,   473,   106,   739,
     310,   105,   238,   107,   470,   471,   316,   102,   100,   500,
     508,   433,   116,   105,   324,   110,   778,   122,   122,     5,
     116,   331,   126,   109,   110,   105,   122,   523,   679,    94,
     681,   674,   101,   343,   106,   825,   316,   347,   126,   110,
     523,   518,   352,   101,   102,   533,    69,   469,   533,   359,
     490,   473,   362,   363,   101,   365,   366,   479,   368,   533,
      83,   126,   557,   490,     3,   375,   488,   347,    54,    44,
       9,   102,   352,    12,    99,   123,     3,   102,   388,   110,
     520,     8,     9,    10,   411,   525,   366,   414,   368,   126,
     417,   418,   419,   520,   421,   103,   572,   424,   525,   122,
     109,   411,    99,   126,   414,   102,   417,   417,   418,   419,
      85,   421,   123,    99,   424,   101,   352,   100,   558,   100,
     788,    96,   588,   563,   586,    99,   362,   363,   102,   365,
     583,   558,   554,   101,   556,     3,   563,    32,    33,   375,
      35,     9,    69,   596,    12,   643,   473,   101,   102,   569,
     572,   446,   447,   448,   449,   653,   101,   102,   514,   101,
     470,   471,     3,   473,   115,   116,   117,   116,     9,   155,
     518,    12,     3,   595,   104,   101,   102,   487,     9,   101,
     102,    12,   168,   493,    99,     3,   125,   126,   106,   116,
       8,     9,    10,    87,     3,   122,    54,   106,   508,   126,
       9,   101,   102,    12,   514,   100,   100,    99,   630,   103,
     105,     9,     9,   108,    12,    12,    99,   203,   109,   113,
      87,   109,   532,   533,   101,   102,   536,   537,    69,   123,
     101,   102,   542,   109,   514,   697,   103,   735,    69,   101,
     102,    99,   107,   696,   710,   572,   113,   557,   439,   440,
     441,    69,   532,   533,   581,   100,   123,   125,   126,   586,
      69,     3,   572,   442,   443,   251,     8,     9,    10,   109,
     581,   581,    70,    71,    72,   100,   586,   120,   588,   444,
     445,   122,   704,   450,   451,   126,   223,   224,   750,   118,
     767,   122,   322,   323,    30,   126,   794,   533,   796,   797,
     762,   102,   764,   289,   122,   727,   164,   729,   126,   167,
     107,   100,   170,   122,   101,   106,    99,   126,    99,   116,
     647,   557,   788,   650,   123,   652,   104,    69,   126,   126,
      99,   113,   823,   643,   113,   645,   647,   647,   778,   650,
     650,   652,   652,   653,   102,   682,   204,   845,   113,   104,
     104,   778,   850,   104,   104,     9,    99,   116,    12,    99,
     670,   671,     0,   109,   674,   675,   676,     5,   830,   679,
     697,   681,   682,    99,   116,    13,   852,    99,   364,    99,
     122,   106,   101,   241,   126,    23,    24,   697,    41,   682,
      99,   249,    30,   251,     9,    99,   123,    12,     9,     9,
     710,    12,    12,   100,   731,   827,   100,   100,   100,    99,
     109,   102,   739,    99,   102,   104,    54,    55,   101,   767,
     731,   731,    60,   750,     3,   735,   101,   101,   739,   739,
       9,   289,     3,    12,   744,   762,    99,   764,     9,   106,
     750,    12,   110,   679,   754,   681,   682,   102,    86,   759,
     110,   105,   762,   107,   764,   100,   102,    67,    96,   110,
     101,    99,   116,   101,   744,   103,   110,   101,   106,   101,
     108,   109,   126,   100,   123,   101,    98,   113,   788,   273,
      90,    99,    99,    85,   794,   100,   796,   797,   100,   100,
      69,   100,   107,   123,   105,   101,   107,   113,    69,   113,
     113,   116,   106,   830,   100,   116,   364,   101,   788,     9,
     105,   126,    12,   100,   100,   126,   126,   155,   156,   104,
     830,   100,   100,   113,   101,   101,   101,   165,   107,   100,
     168,   101,   101,   101,    99,   845,   107,   116,   176,   102,
     850,   101,    43,   122,   106,   116,   404,   126,    52,    99,
     101,   122,   190,   126,   113,   126,   194,    23,   454,   197,
     198,   267,   200,   581,   453,   203,   452,   466,   455,   207,
      70,    71,    72,   562,    95,   645,   347,   645,   216,   217,
      87,   219,   316,   674,   532,   223,   224,   225,   361,   487,
     679,   681,    99,   100,    94,   102,   103,   408,   105,   572,
     238,   239,   558,   473,   242,    -1,   113,   710,   246,     0,
     235,    -1,    -1,   251,     5,    -1,   123,    14,    15,    16,
      17,    18,    19,    20,    21,   419,   126,    24,    25,    -1,
     424,    -1,    -1,    24,    31,   273,    -1,    -1,    -1,    30,
     434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   289,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,   468,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,   347,
     101,    -1,    -1,    -1,   352,    -1,   113,   108,   109,    -1,
     358,    -1,   119,    -1,   362,   363,   364,   365,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     388,    -1,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   401,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   411,    -1,    -1,   414,   168,    -1,   417,
     418,   419,    -1,   421,    -1,   176,   424,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      -1,    -1,    -1,   194,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,   223,   224,    -1,   473,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,   487,
      -1,    -1,    -1,   647,    -1,   493,   650,   495,   652,   497,
     251,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,
     508,    -1,     5,    -1,    -1,    -1,   514,    -1,    -1,    -1,
      -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,   279,    -1,
      -1,    -1,    -1,    -1,   532,   533,    -1,    30,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   544,    40,   546,    -1,
      -1,    -1,    -1,   707,    -1,    -1,    -1,    -1,    -1,   557,
      -1,    -1,    55,    -1,   562,    -1,    -1,    60,    -1,    -1,
      -1,   569,    -1,   324,   572,    -1,   327,    -1,    -1,    -1,
     331,    -1,    -1,   581,    -1,   739,    -1,    80,   586,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,
      -1,   352,    95,    -1,    -1,    -1,    -1,    -1,   359,    -1,
      -1,   362,   363,   364,   365,   108,   109,    -1,    -1,   773,
     774,    -1,    -1,    -1,   375,    -1,   780,   781,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   791,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   643,    -1,   645,    -1,   647,
      -1,    -1,   650,    -1,   652,   653,    -1,    -1,    -1,    -1,
     411,    -1,    -1,   414,    -1,    -1,   417,   418,   419,    -1,
     421,    -1,    -1,   424,    -1,   168,    -1,    -1,    -1,    -1,
      -1,   679,    -1,   681,   682,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   697,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,   219,    -1,    -1,    -1,
     223,   224,    -1,   731,   485,    -1,   487,   735,    -1,    -1,
      -1,   739,   493,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,   750,    -1,    -1,    -1,    -1,   508,    -1,    -1,
      -1,    -1,    -1,   514,   762,    -1,   764,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   533,    -1,    -1,   536,    -1,    -1,   539,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   794,    -1,   796,   797,
      -1,    -1,    -1,    -1,    -1,    -1,   557,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   572,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,
     581,    -1,   830,    -1,    -1,   586,   834,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,
      -1,    -1,   850,    -1,   347,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   366,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   643,    -1,   645,    -1,   647,    -1,    -1,   650,
      -1,   652,   653,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   669,    -1,
      -1,   672,    -1,   674,    -1,    -1,   677,    -1,   679,    -1,
     681,   682,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,
      -1,    -1,   435,    -1,    -1,    -1,   697,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     731,    32,    33,    -1,   735,    -1,    -1,    -1,   739,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,   750,
      51,    -1,   753,    -1,   755,    -1,    57,   758,    -1,   760,
      -1,   762,    -1,   764,    -1,    -1,    -1,    68,    69,    -1,
      -1,   514,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    85,    86,    -1,    -1,    89,   532,
     533,    -1,    -1,   794,    -1,   796,   797,    -1,    -1,   100,
      -1,   802,   103,   104,   805,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,
     121,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,   830,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,   845,    -1,    -1,    -1,    -1,   850,
      -1,    -1,    -1,    -1,   597,   598,    -1,    -1,    -1,    -1,
     603,   604,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
     100,    -1,    -1,   103,   104,    -1,    -1,   107,    -1,   682,
      -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,    -1,
      -1,   121,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   720,    -1,    -1,
      -1,    -1,   725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,   744,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,   788,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
     100,    -1,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,
      -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,    -1,
      -1,   121,   122,    -1,    -1,    -1,   126,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,
     116,    -1,     3,    -1,    -1,   121,   122,     8,     9,    10,
     126,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    -1,    -1,   100,
      -1,   102,    -1,    -1,   105,    -1,   107,    -1,   109,   110,
     111,   112,   113,    -1,   115,   116,   117,   118,    -1,   120,
     121,   122,    -1,    -1,    -1,   126,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    -1,    53,    54,    -1,    56,
      57,    58,    -1,    60,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,    -1,    -1,   126,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    -1,    80,    81,    -1,
      -1,    84,    85,    86,    -1,    -1,    89,    90,    91,    92,
      -1,    -1,    95,    96,    97,    -1,     3,   100,    -1,    -1,
      -1,     8,     9,    10,   107,    12,    -1,    -1,    -1,   112,
      -1,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    53,    54,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,    66,
      67,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,
      77,    -1,    79,     3,    81,    -1,    83,    -1,     8,     9,
      10,    88,    12,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,    -1,    -1,    -1,    36,    37,    38,   116,
      -1,    -1,    42,    43,    44,   122,    -1,    -1,    -1,   126,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    63,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    -1,    73,    -1,    -1,    76,    77,    -1,    79,
       3,    81,    -1,    83,    -1,     8,     9,    10,    88,    12,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,   116,    -1,    -1,    42,
      43,    44,   122,    -1,    -1,    -1,   126,    50,    -1,    -1,
      53,    54,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    76,    77,     3,    79,    -1,    81,    -1,
       8,     9,    10,    -1,    12,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,   116,    42,    43,    44,    -1,    -1,   122,
      -1,    -1,    50,   126,    -1,    53,    54,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      -1,    79,     3,    81,    -1,    83,    -1,     8,     9,    10,
      88,    12,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,   116,    -1,
      -1,    42,    43,    44,   122,    -1,    -1,    -1,   126,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,   116,    42,    43,    44,    -1,
      -1,   122,    -1,    -1,    50,   126,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,     3,    79,    -1,    81,    -1,     8,     9,    10,
      -1,    12,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,
      -1,   107,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
     116,    42,    43,    44,    -1,    -1,   122,    -1,    -1,    50,
     126,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,   116,    42,    43,    44,    -1,
      -1,   122,    -1,    -1,    50,   126,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,     3,    79,    -1,    81,    -1,     8,     9,    10,
      -1,    12,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,   122,   123,    -1,    50,
     126,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    11,    12,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,   122,    -1,    -1,    50,   126,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,     3,    79,    -1,    81,    -1,     8,     9,    10,
      -1,    12,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
     126,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,     3,    94,    95,    96,    97,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    89,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    12,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,
     116,    -1,    -1,    32,    33,   121,   122,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    80,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      89,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
      12,   100,    -1,    -1,    -1,    -1,   105,    -1,   107,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,
      32,    33,   121,   122,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    89,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    12,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     112,    -1,   114,    -1,   116,    -1,    -1,    32,    33,   121,
     122,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    89,     3,     4,     5,     6,     7,
      -1,     9,    -1,    -1,    12,   100,    -1,    -1,    -1,    -1,
     105,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,   114,
      -1,   116,    -1,    -1,    32,    33,   121,   122,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    -1,    84,    -1,    86,    -1,
      -1,    89,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    12,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,
      -1,    32,    33,   121,   122,    -1,   124,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    89,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    32,    33,
     121,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,     3,    57,    -1,    -1,    -1,     8,     9,    10,
      -1,    12,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    86,    -1,    -1,    89,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,   100,    -1,    -1,    50,
      -1,    -1,    53,   107,    -1,    -1,    -1,    58,   112,    -1,
     114,    -1,   116,    64,    65,    -1,    -1,   121,   122,    -1,
      -1,    -1,   126,    -1,    -1,    76,    77,     3,    -1,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    -1,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,   126,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,     3,    64,    65,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    38,    -1,   100,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,     3,    64,    65,
     126,    -1,     8,     9,    10,    -1,    12,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     8,     9,    10,    12,    36,    37,    38,    42,
      43,    44,    50,    53,    54,    55,    56,    58,    60,    63,
      64,    65,    66,    67,    69,    73,    76,    77,    79,    81,
      83,    88,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   107,   116,   122,   126,   128,   131,   132,   133,   134,
     141,   143,   144,   145,   146,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   202,   203,
     204,   205,   206,   209,   211,   212,   213,   214,   217,   218,
     219,   221,   222,   230,   235,   236,   237,   248,   255,   257,
     261,   264,   265,   274,   295,    12,   100,     9,   143,   146,
     196,   275,   100,    12,   131,   134,   146,     7,   139,   103,
     125,   130,   134,    12,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    48,    68,   100,   102,
     105,   107,   109,   110,   111,   112,   113,   115,   116,   117,
     118,   120,   121,   122,   134,   146,   194,   224,   249,   256,
     109,   187,    12,   277,    12,    67,    90,   146,    12,   134,
     146,   217,   220,   221,   131,    12,   109,     0,   116,   131,
     144,   196,   187,    56,    99,   190,   215,   216,   217,    87,
     123,   251,   267,   290,   100,   105,   217,   103,    12,   134,
     146,    83,     9,    12,   146,   222,    11,   191,   227,   228,
     229,   116,   196,   196,   139,   134,   146,   103,   134,   103,
     187,   207,   274,   103,   103,   113,   146,   105,   105,   101,
     106,   224,   288,    12,   146,   219,   250,   294,   110,   146,
     144,   146,    12,   129,   130,   134,   146,   208,    12,   146,
     144,   146,   101,   220,   146,     4,     5,     6,    12,    32,
      33,    45,    48,    51,    57,    68,    74,    78,    80,    84,
      85,    86,    89,   100,   107,   112,   114,   116,   121,   122,
     133,   135,   136,   137,   138,   139,   140,   142,   143,   146,
     147,   149,   150,   151,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   223,
     224,   262,   263,   271,   220,    99,   102,   100,   113,   232,
     267,   285,   290,   290,    12,   131,   134,   146,   252,   253,
     254,   103,   178,   231,   227,    12,   169,   170,   174,   286,
      70,    71,    72,    93,    99,   134,   145,   191,   211,   217,
     230,   238,   239,   240,   241,   247,   292,   134,   146,   123,
     244,   134,   109,   100,   146,   100,   100,   217,   219,   225,
     226,   287,   289,   101,    11,   102,   220,   101,   134,   134,
     199,   200,   201,   284,   274,   104,   207,   207,    12,   129,
     146,   210,   106,   106,   146,   294,   187,   134,    99,   144,
     129,   146,    99,   129,   146,   144,    99,    48,    68,   158,
     158,   109,   105,   158,   109,   100,   152,   278,   109,   100,
     149,   109,   171,   297,   100,   171,   173,   223,   158,   158,
      32,    33,    35,   100,   105,   108,   158,    13,    34,   115,
     116,   117,   112,   114,    22,    23,    28,    29,   109,   110,
      26,    27,   107,   120,   118,    30,    14,    15,    16,    17,
      18,    19,    20,    21,    24,    25,    31,   113,   119,   172,
     100,   219,   287,   102,   110,   216,   217,   148,   171,   103,
     171,   233,   231,   231,   131,   146,   131,   102,   100,    39,
      40,    46,    47,    49,    59,    61,    62,    67,    75,    82,
      87,    98,   134,   173,   175,   176,   177,   178,   179,   180,
     182,   184,   185,   188,   191,   266,   281,   282,   101,   106,
     123,    99,    99,   217,   240,   113,   242,   243,    99,   293,
     292,    99,   102,   123,   104,   134,    12,    94,   131,   146,
     245,   246,   247,   244,    43,    83,    90,   229,   258,   259,
     260,   227,   227,   225,   113,   287,   113,   100,   105,    11,
     229,    99,   102,   113,   104,   104,   104,   104,   129,   146,
     129,    99,   109,    99,    99,   129,    99,   144,    99,   105,
     158,   278,   223,   106,   223,   148,   100,   153,   224,   223,
     223,   223,   173,   223,   101,   102,   101,    12,    83,   143,
     148,   276,   173,    12,    83,   143,   158,   158,   159,   159,
     159,   160,   160,   161,   161,   162,   162,   162,   162,   163,
     163,   164,   165,   166,   167,   168,   173,   171,   263,   101,
     102,   104,   233,   234,    41,   268,   269,   131,   252,   276,
      99,   174,    99,   123,   175,   100,   134,   100,   134,   281,
     100,   178,   100,   123,   175,    99,   104,    85,   220,   272,
     174,    99,   124,   174,   134,   217,   241,   292,   131,   146,
      12,   247,   275,   131,   102,    12,    94,   275,   134,   109,
     134,   102,   110,   101,   101,   101,   171,   171,   227,   286,
     200,   174,   129,   262,    99,    99,   106,   100,   153,   110,
     158,   110,   101,   223,   100,   156,   279,   105,   154,   155,
     219,   280,   110,   101,   110,   101,   101,   171,   158,   143,
      12,   143,   101,   106,   143,    12,   143,   123,   171,   102,
     291,   100,   268,   296,   101,   123,   175,    98,   177,   183,
     189,    99,   173,   181,   224,    99,   181,   268,   181,   175,
     100,   272,   131,   275,    12,   275,   131,   246,   275,    12,
     275,   131,   113,   258,   113,   259,   187,   101,   106,   110,
     158,   223,   279,   100,   100,   101,   276,   173,   105,   280,
     100,   100,   143,   143,   171,   233,   104,    11,   224,   270,
     175,   100,   181,   283,   101,   217,   101,   101,   223,   273,
     298,   131,   275,   131,   131,   275,   131,   223,   110,   223,
     220,   272,   101,   173,   173,   279,   101,   106,   174,   173,
     173,   217,   225,   101,   173,    99,   175,   113,   175,   175,
     102,   101,   131,   131,    43,   272,   279,   101,   101,   106,
     101,   101,   178,   101,   281,    52,   171,   223,   134,    99,
     101,   175,   113,   175,   133
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
#line 156 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 3:
#line 160 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 4:
#line 166 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 5:
#line 172 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 7:
#line 178 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 8:
#line 182 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 10:
#line 195 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 11:
#line 196 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 12:
#line 197 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 13:
#line 198 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 14:
#line 199 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 15:
#line 203 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 16:
#line 207 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 17:
#line 211 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 18:
#line 215 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 19:
#line 219 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 20:
#line 220 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 21:
#line 228 "120gram.y"
    {(yyval.tptr) = alctree("start", 212, 1, (yyvsp[(1) - (1)].tptr)); t_unit = (yyval.tptr);;}
    break;

  case 22:
#line 236 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 23:
#line 237 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 24:
#line 238 "120gram.y"
    {(yyval.tptr) = alctree("primary_expression_219", 216, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 25:
#line 239 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 26:
#line 243 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 27:
#line 244 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 28:
#line 248 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 29:
#line 249 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 30:
#line 250 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 31:
#line 251 "120gram.y"
    {(yyval.tptr) = alctree("unqualified_id_232", 228, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 32:
#line 255 "120gram.y"
    {(yyval.tptr) = alctree("qualified_id_236", 235, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 33:
#line 260 "120gram.y"
    {(yyval.tptr) = alctree("nested_name_specifier_241", 240, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 34:
#line 261 "120gram.y"
    {(yyval.tptr) = alctree("nested_name_specifier_242", 240, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 35:
#line 265 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 36:
#line 266 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_247", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 37:
#line 267 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_248", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 40:
#line 270 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_251", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 41:
#line 271 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_252", 245, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 44:
#line 274 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_255", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 45:
#line 275 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_256", 245, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 46:
#line 276 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_257", 245, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 47:
#line 277 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_258", 245, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 48:
#line 278 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_259", 245, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 49:
#line 279 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_260", 245, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 50:
#line 280 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_261", 245, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 51:
#line 281 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_262", 245, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 52:
#line 282 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_263", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 53:
#line 283 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_264", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 54:
#line 287 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 55:
#line 288 "120gram.y"
    {(yyval.tptr) = alctree("expression_list_269", 267, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 56:
#line 292 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 57:
#line 293 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_274", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 58:
#line 294 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_275", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 59:
#line 295 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_276", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 60:
#line 296 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_277", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 61:
#line 297 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_278", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 62:
#line 298 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_279", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 63:
#line 299 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_280", 272, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 64:
#line 300 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 65:
#line 301 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 66:
#line 305 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 67:
#line 306 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 68:
#line 307 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 69:
#line 308 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 70:
#line 312 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_293", 292, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 71:
#line 313 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_294", 292, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 72:
#line 314 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_295", 292, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 73:
#line 315 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_296", 292, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 74:
#line 319 "120gram.y"
    {(yyval.tptr) = alctree("new_placement_300", 299, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 75:
#line 323 "120gram.y"
    {(yyval.tptr) = alctree("new_type_id_304", 303, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 76:
#line 327 "120gram.y"
    {(yyval.tptr) = alctree("new_declarator_308", 307, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 77:
#line 328 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 78:
#line 332 "120gram.y"
    {(yyval.tptr) = alctree("direct_new_declarator_313", 312, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 79:
#line 333 "120gram.y"
    {(yyval.tptr) = alctree("direct_new_declarator_314", 312, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 80:
#line 337 "120gram.y"
    {(yyval.tptr) = alctree("new_initializer_318", 317, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 81:
#line 341 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_322", 321, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 82:
#line 342 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_323", 321, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 83:
#line 343 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_324", 321, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 84:
#line 344 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_325", 321, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 85:
#line 348 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 86:
#line 349 "120gram.y"
    {(yyval.tptr) = alctree("cast_expression_330", 328, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 87:
#line 353 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 88:
#line 354 "120gram.y"
    {(yyval.tptr) = alctree("pm_expression_335", 333, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 89:
#line 355 "120gram.y"
    {(yyval.tptr) = alctree("pm_expression_336", 333, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 90:
#line 359 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 91:
#line 360 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_341", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 92:
#line 361 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_342", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 93:
#line 362 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_343", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 94:
#line 366 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 95:
#line 367 "120gram.y"
    {(yyval.tptr) = alctree("additive_expression_348", 346, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 96:
#line 368 "120gram.y"
    {(yyval.tptr) = alctree("additive_expression_349", 346, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 97:
#line 372 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 98:
#line 373 "120gram.y"
    {(yyval.tptr) = alctree("shift_expression_354", 352, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 99:
#line 374 "120gram.y"
    {(yyval.tptr) = alctree("shift_expression_355", 352, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 100:
#line 378 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 101:
#line 379 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_360", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 102:
#line 380 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_361", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 103:
#line 381 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_362", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 104:
#line 382 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_363", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 105:
#line 386 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 106:
#line 387 "120gram.y"
    {(yyval.tptr) = alctree("equality_expression_368", 366, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 107:
#line 388 "120gram.y"
    {(yyval.tptr) = alctree("equality_expression_369", 366, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 108:
#line 392 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 109:
#line 393 "120gram.y"
    {(yyval.tptr) = alctree("and_expression_374", 372, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 110:
#line 397 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 111:
#line 398 "120gram.y"
    {(yyval.tptr) = alctree("exclusive_or_expression_379", 377, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 112:
#line 402 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 113:
#line 403 "120gram.y"
    {(yyval.tptr) = alctree("inclusive_or_expression_384", 382, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 114:
#line 407 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 115:
#line 408 "120gram.y"
    {(yyval.tptr) = alctree("logical_and_expression_389", 387, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 116:
#line 412 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 117:
#line 413 "120gram.y"
    {(yyval.tptr) = alctree("logical_or_expression_394", 392, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 118:
#line 417 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 119:
#line 418 "120gram.y"
    {(yyval.tptr) = alctree("conditional_expression_399", 397, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 120:
#line 422 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 121:
#line 423 "120gram.y"
    {(yyval.tptr) = alctree("assignment_expression_404", 402, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 122:
#line 424 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 123:
#line 428 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 124:
#line 429 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 125:
#line 430 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 126:
#line 431 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 127:
#line 432 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 128:
#line 433 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 129:
#line 434 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 130:
#line 435 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 131:
#line 436 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 132:
#line 437 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 133:
#line 438 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 134:
#line 442 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 135:
#line 443 "120gram.y"
    {(yyval.tptr) = alctree("expression_424", 422, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 136:
#line 447 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 137:
#line 455 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 138:
#line 456 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 139:
#line 457 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 140:
#line 458 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 141:
#line 459 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 142:
#line 460 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 143:
#line 461 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 144:
#line 462 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 145:
#line 466 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_447", 446, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 146:
#line 467 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_448", 446, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 147:
#line 468 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_449", 446, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 148:
#line 472 "120gram.y"
    {(yyval.tptr) = alctree("expression_statement_453", 452, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 149:
#line 476 "120gram.y"
    {(yyval.tptr) = alctree("compound_statement_457", 456, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 150:
#line 480 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 151:
#line 481 "120gram.y"
    {(yyval.tptr) = alctree("statement_seq_462", 460, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 152:
#line 485 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_466", 465, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 153:
#line 486 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_467", 465, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 154:
#line 487 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_468", 465, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 155:
#line 491 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 156:
#line 492 "120gram.y"
    {(yyval.tptr) = alctree("condition_473", 471, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 157:
#line 496 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_477", 476, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 158:
#line 497 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_478", 476, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 159:
#line 498 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_479", 476, 8, (yyvsp[(1) - (8)].tptr), (yyvsp[(2) - (8)].tptr), (yyvsp[(3) - (8)].tptr), (yyvsp[(4) - (8)].tptr), (yyvsp[(5) - (8)].tptr), (yyvsp[(6) - (8)].tptr), (yyvsp[(7) - (8)].tptr), (yyvsp[(8) - (8)].tptr));;}
    break;

  case 160:
#line 502 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 161:
#line 503 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 162:
#line 507 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_488", 487, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 163:
#line 508 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_489", 487, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 164:
#line 509 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_490", 487, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 165:
#line 510 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_491", 487, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 166:
#line 514 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 167:
#line 522 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 168:
#line 523 "120gram.y"
    {(yyval.tptr) = alctree("declaration_seq_504", 502, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 169:
#line 527 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 170:
#line 528 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 171:
#line 529 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 172:
#line 530 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 173:
#line 531 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 174:
#line 532 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 175:
#line 533 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 176:
#line 537 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr); ;}
    break;

  case 177:
#line 538 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 178:
#line 539 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 179:
#line 540 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 180:
#line 541 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 181:
#line 545 "120gram.y"
    {(yyval.tptr) = alctree("simple_declaration_526", 525, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 182:
#line 546 "120gram.y"
    {(yyval.tptr) = alctree("simple_declaration_527", 525, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 183:
#line 550 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 184:
#line 551 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 185:
#line 552 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 186:
#line 553 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 187:
#line 554 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 188:
#line 558 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 189:
#line 559 "120gram.y"
    {(yyval.tptr) = alctree("decl_specifier_seq_540", 538, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 190:
#line 563 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 191:
#line 564 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 192:
#line 565 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 193:
#line 566 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 194:
#line 567 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 195:
#line 571 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 196:
#line 572 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 197:
#line 573 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 198:
#line 577 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 199:
#line 578 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 200:
#line 579 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 201:
#line 580 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 202:
#line 581 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 203:
#line 585 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 204:
#line 586 "120gram.y"
    {(yyval.tptr) = alctree("simple_type_specifier_567", 565, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 205:
#line 587 "120gram.y"
    {(yyval.tptr) = alctree("simple_type_specifier_568", 565, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 206:
#line 588 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 207:
#line 589 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 208:
#line 590 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 209:
#line 591 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 211:
#line 593 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 212:
#line 594 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 213:
#line 595 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 214:
#line 596 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 215:
#line 597 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 216:
#line 598 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 217:
#line 602 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 218:
#line 603 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 219:
#line 604 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 220:
#line 608 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_589", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 221:
#line 609 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_590", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 222:
#line 610 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_591", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 223:
#line 611 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_592", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 224:
#line 612 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_593", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 225:
#line 613 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_594", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 226:
#line 614 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_595", 588, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 227:
#line 619 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 228:
#line 624 "120gram.y"
    {(yyval.tptr) = alctree("enum_specifier_605", 604, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 229:
#line 628 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 230:
#line 629 "120gram.y"
    {(yyval.tptr) = alctree("enumerator_list_610", 608, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 231:
#line 633 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 232:
#line 634 "120gram.y"
    {(yyval.tptr) = alctree("enumerator_definition_615", 613, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 233:
#line 638 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 234:
#line 643 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 235:
#line 644 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 236:
#line 648 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 237:
#line 653 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 238:
#line 654 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 239:
#line 658 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 240:
#line 659 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 241:
#line 663 "120gram.y"
    {(yyval.tptr) = alctree("original_namespace_definition_644", 643, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 242:
#line 667 "120gram.y"
    {(yyval.tptr) = alctree("extension_namespace_definition_648", 647, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 243:
#line 671 "120gram.y"
    {(yyval.tptr) = alctree("unnamed_namespace_definition_652", 651, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 244:
#line 675 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 245:
#line 680 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 246:
#line 685 "120gram.y"
    {(yyval.tptr) = alctree("namespace_alias_definition_666", 665, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 247:
#line 690 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_671", 670, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 248:
#line 691 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_672", 670, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 249:
#line 692 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_673", 670, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 250:
#line 693 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 251:
#line 697 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_678", 677, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 252:
#line 698 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_679", 677, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 253:
#line 699 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_680", 677, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 254:
#line 700 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_681", 677, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 255:
#line 701 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_682", 677, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 256:
#line 705 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_686", 685, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 257:
#line 706 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_687", 685, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 258:
#line 707 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_688", 685, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 259:
#line 708 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_689", 685, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 260:
#line 713 "120gram.y"
    {(yyval.tptr) = alctree("asm_definition_694", 693, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 261:
#line 717 "120gram.y"
    {(yyval.tptr) = alctree("linkage_specification_698", 697, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 262:
#line 718 "120gram.y"
    {(yyval.tptr) = alctree("linkage_specification_699", 697, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 263:
#line 726 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 264:
#line 727 "120gram.y"
    {(yyval.tptr) = alctree("init_declarator_list_708", 706, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 265:
#line 731 "120gram.y"
    {(yyval.tptr) = alctree("init_declarator_712", 711, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 266:
#line 735 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 267:
#line 736 "120gram.y"
    {(yyval.tptr) = alctree("declarator_717", 715, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 268:
#line 740 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 269:
#line 741 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_722", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 270:
#line 742 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_723", 720, 4, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr));;}
    break;

  case 271:
#line 743 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_724", 720, 4, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr));;}
    break;

  case 272:
#line 744 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_725", 720, 3, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));;}
    break;

  case 273:
#line 745 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_726", 720, 3, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));;}
    break;

  case 274:
#line 746 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_727", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 275:
#line 747 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_728", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 276:
#line 748 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_729", 720, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 277:
#line 749 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_730", 720, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 278:
#line 753 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 279:
#line 754 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_735", 733, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 280:
#line 755 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 281:
#line 756 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_737", 733, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 282:
#line 757 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_738", 733, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 283:
#line 758 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_739", 733, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 284:
#line 759 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_740", 733, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 285:
#line 763 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 286:
#line 764 "120gram.y"
    {(yyval.tptr) = alctree("cv_qualifier_seq_745", 743, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 287:
#line 768 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 288:
#line 769 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 289:
#line 773 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 290:
#line 774 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_755", 753, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 291:
#line 775 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_756", 753, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 292:
#line 776 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_757", 753, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 293:
#line 780 "120gram.y"
    {(yyval.tptr) = alctree("type_id_761", 760, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 294:
#line 784 "120gram.y"
    {(yyval.tptr) = alctree("type_specifier_seq_765", 764, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 295:
#line 788 "120gram.y"
    {(yyval.tptr) = alctree("abstract_declarator_769", 768, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 296:
#line 789 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 297:
#line 793 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_774", 773, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 298:
#line 794 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_775", 773, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 299:
#line 795 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_776", 773, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 300:
#line 796 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_777", 773, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 301:
#line 797 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_778", 773, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 302:
#line 798 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_779", 773, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 303:
#line 802 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_clause_783", 782, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 304:
#line 803 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 305:
#line 804 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 306:
#line 805 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 307:
#line 806 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_clause_787", 782, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 308:
#line 810 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 309:
#line 811 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_list_792", 790, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 310:
#line 815 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_796", 795, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 311:
#line 816 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_797", 795, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 312:
#line 817 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_798", 795, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 313:
#line 818 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_799", 795, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 314:
#line 822 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_803", 802, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 315:
#line 823 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_804", 802, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 316:
#line 824 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_805", 802, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 317:
#line 825 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_806", 802, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 318:
#line 829 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 319:
#line 833 "120gram.y"
    {(yyval.tptr) = alctree("initializer_814", 813, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 320:
#line 834 "120gram.y"
    {(yyval.tptr) = alctree("initializer_815", 813, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 321:
#line 838 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 322:
#line 839 "120gram.y"
    {(yyval.tptr) = alctree("initializer_clause_820", 818, 3, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));;}
    break;

  case 323:
#line 840 "120gram.y"
    {(yyval.tptr) = alctree("initializer_clause_821", 818, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 324:
#line 844 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 325:
#line 845 "120gram.y"
    {(yyval.tptr) = alctree("initializer_list_826", 824, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 327:
#line 858 "120gram.y"
    { typenametable_insert((yyvsp[(2) - (2)].tptr), CLASS_NAME); /*printf("%s\n", ($2)->name);*/ ;}
    break;

  case 328:
#line 859 "120gram.y"
    {(yyval.tptr) = alctree("class_head_839", 837, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 329:
#line 860 "120gram.y"
    {(yyval.tptr) = alctree("class_head_840", 837, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 330:
#line 861 "120gram.y"
    {(yyval.tptr) = alctree("class_head_841", 837, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 331:
#line 865 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 332:
#line 866 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 333:
#line 867 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 334:
#line 871 "120gram.y"
    {(yyval.tptr) = alctree("member_specification_851", 850, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 335:
#line 872 "120gram.y"
    {(yyval.tptr) = alctree("member_specification_852", 850, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 336:
#line 876 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_856", 855, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 337:
#line 877 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_857", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 338:
#line 878 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_858", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 339:
#line 879 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 340:
#line 880 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_860", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 341:
#line 881 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_861", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 343:
#line 886 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 344:
#line 887 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_list_867", 865, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 346:
#line 891 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 347:
#line 892 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_872", 870, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 348:
#line 893 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_873", 870, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 349:
#line 894 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_874", 870, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 350:
#line 904 "120gram.y"
    {(yyval.tptr) = alctree("pure_specifier_883", 882, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 351:
#line 908 "120gram.y"
    {(yyval.tptr) = alctree("constant_initializer_887", 886, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 352:
#line 916 "120gram.y"
    {(yyval.tptr) = alctree("base_clause_895", 894, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 353:
#line 920 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 354:
#line 921 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_list_900", 898, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 355:
#line 925 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_904", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 356:
#line 926 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_905", 903, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 357:
#line 927 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_906", 903, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 358:
#line 928 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 359:
#line 929 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_908", 903, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 360:
#line 930 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_909", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 361:
#line 931 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_910", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 362:
#line 932 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_911", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 363:
#line 933 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_912", 903, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 364:
#line 934 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_913", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 365:
#line 935 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_914", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 366:
#line 936 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_915", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 367:
#line 940 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 368:
#line 941 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 369:
#line 942 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 370:
#line 950 "120gram.y"
    {(yyval.tptr) = alctree("conversion_function_id_929", 928, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 371:
#line 954 "120gram.y"
    {(yyval.tptr) = alctree("conversion_type_id_933", 932, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 372:
#line 958 "120gram.y"
    {(yyval.tptr) = alctree("conversion_declarator_937", 936, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 373:
#line 962 "120gram.y"
    {(yyval.tptr) = alctree("ctor_initializer_941", 940, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 374:
#line 966 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 375:
#line 967 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_list_946", 944, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 376:
#line 971 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_950", 949, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 377:
#line 975 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_954", 953, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 378:
#line 976 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_955", 953, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 379:
#line 977 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_956", 953, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 380:
#line 978 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 381:
#line 979 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 382:
#line 987 "120gram.y"
    {(yyval.tptr) = alctree("operator_function_id_966", 965, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 383:
#line 991 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 384:
#line 992 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 385:
#line 993 "120gram.y"
    {(yyval.tptr) = alctree("operator_972", 969, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 386:
#line 994 "120gram.y"
    {(yyval.tptr) = alctree("operator_973", 969, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 387:
#line 995 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 388:
#line 996 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 389:
#line 997 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 390:
#line 998 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 391:
#line 999 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 392:
#line 1000 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 393:
#line 1001 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 394:
#line 1002 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 395:
#line 1003 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 396:
#line 1004 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 397:
#line 1005 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 398:
#line 1006 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 399:
#line 1007 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 400:
#line 1008 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 401:
#line 1009 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 402:
#line 1010 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 403:
#line 1011 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 404:
#line 1012 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 405:
#line 1013 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 406:
#line 1014 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 407:
#line 1015 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 408:
#line 1016 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 409:
#line 1017 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 410:
#line 1018 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 411:
#line 1019 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 412:
#line 1020 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 413:
#line 1021 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 414:
#line 1022 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 415:
#line 1023 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 416:
#line 1024 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 417:
#line 1025 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 418:
#line 1026 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 419:
#line 1027 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 420:
#line 1028 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 421:
#line 1029 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 422:
#line 1030 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 423:
#line 1031 "120gram.y"
    {(yyval.tptr) = alctree("operator_1010", 969, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 424:
#line 1032 "120gram.y"
    {(yyval.tptr) = alctree("operator_1011", 969, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 425:
#line 1040 "120gram.y"
    {(yyval.tptr) = alctree("template_declaration_1019", 1018, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 426:
#line 1044 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 427:
#line 1045 "120gram.y"
    {(yyval.tptr) = alctree("template_parameter_list_1024", 1022, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 428:
#line 1049 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 429:
#line 1050 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 430:
#line 1053 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1032", 1031, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 431:
#line 1054 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1033", 1031, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 432:
#line 1055 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1034", 1031, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 433:
#line 1056 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1035", 1031, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 434:
#line 1057 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1036", 1031, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 435:
#line 1058 "120gram.y"
    {(yyval.tptr) = alctree("type_parameter_1037", 1031, 8, (yyvsp[(1) - (8)].tptr), (yyvsp[(2) - (8)].tptr), (yyvsp[(3) - (8)].tptr), (yyvsp[(4) - (8)].tptr), (yyvsp[(5) - (8)].tptr), (yyvsp[(6) - (8)].tptr), (yyvsp[(7) - (8)].tptr), (yyvsp[(8) - (8)].tptr));;}
    break;

  case 436:
#line 1062 "120gram.y"
    {(yyval.tptr) = alctree("template_id_1041", 1040, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 437:
#line 1066 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 438:
#line 1067 "120gram.y"
    {(yyval.tptr) = alctree("template_argument_list_1046", 1044, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 439:
#line 1071 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 440:
#line 1072 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 441:
#line 1073 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 442:
#line 1077 "120gram.y"
    {(yyval.tptr) = alctree("explicit_instantiation_1056", 1055, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 443:
#line 1081 "120gram.y"
    {(yyval.tptr) = alctree("explicit_specialization_1060", 1059, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 444:
#line 1089 "120gram.y"
    {(yyval.tptr) = alctree("try_block_1068", 1067, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 445:
#line 1093 "120gram.y"
    {(yyval.tptr) = alctree("function_try_block_1072", 1071, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 446:
#line 1097 "120gram.y"
    {(yyval.tptr) = alctree("handler_seq_1076", 1075, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 447:
#line 1101 "120gram.y"
    {(yyval.tptr) = alctree("handler_1080", 1079, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 448:
#line 1105 "120gram.y"
    {(yyval.tptr) = alctree("exception_declaration_1084", 1083, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 449:
#line 1106 "120gram.y"
    {(yyval.tptr) = alctree("exception_declaration_1085", 1083, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 450:
#line 1107 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 451:
#line 1108 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 452:
#line 1112 "120gram.y"
    {(yyval.tptr) = alctree("throw_expression_1091", 1090, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 453:
#line 1116 "120gram.y"
    {(yyval.tptr) = alctree("exception_specification_1095", 1094, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 454:
#line 1120 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 455:
#line 1121 "120gram.y"
    {(yyval.tptr) = alctree("type_id_list_1100", 1098, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 456:
#line 1129 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 457:
#line 1130 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 458:
#line 1134 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 459:
#line 1135 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 460:
#line 1139 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 461:
#line 1140 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 462:
#line 1144 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 463:
#line 1145 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 464:
#line 1149 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 465:
#line 1150 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 466:
#line 1154 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 467:
#line 1155 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 468:
#line 1159 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 469:
#line 1160 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 470:
#line 1164 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 471:
#line 1165 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 472:
#line 1169 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 473:
#line 1170 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 474:
#line 1174 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 475:
#line 1175 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 476:
#line 1179 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 477:
#line 1180 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 478:
#line 1184 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 479:
#line 1185 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 480:
#line 1189 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 481:
#line 1190 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 482:
#line 1194 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 483:
#line 1195 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 484:
#line 1199 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 485:
#line 1200 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 486:
#line 1204 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 487:
#line 1205 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 488:
#line 1209 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 489:
#line 1210 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 490:
#line 1214 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 491:
#line 1215 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 492:
#line 1219 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 493:
#line 1220 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 494:
#line 1224 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 495:
#line 1225 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 496:
#line 1229 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 497:
#line 1230 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 498:
#line 1234 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 499:
#line 1235 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 500:
#line 1239 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 501:
#line 1240 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 502:
#line 1244 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 503:
#line 1245 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 504:
#line 1249 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 505:
#line 1250 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;


/* Line 1267 of yacc.c.  */
#line 5591 "120gram.tab.c"
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


#line 1253 "120gram.y"


static void yyerror(char *s) {
	fprintf(stderr, "line %d: %s\n", yylineno, s);
}

