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
#include "hasht.h"


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
#line 71 "120gram.y"
{
  struct tree *tptr;
}
/* Line 193 of yacc.c.  */
#line 327 "120gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 340 "120gram.tab.c"

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
#define YYFINAL  164
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  461
/* YYNRULES -- Number of states.  */
#define YYNSTATES  759

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
     100,   101,   116,   112,   102,   114,   108,   117,   126,     2,
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
      95,    96,    97,    98,   124,   125
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    47,    49,    51,    53,    55,    57,    59,
      62,    65,    69,    73,    77,    80,    82,    87,    92,    97,
     101,   106,   110,   113,   116,   118,   122,   124,   127,   130,
     133,   136,   139,   142,   147,   149,   151,   153,   155,   157,
     159,   164,   170,   177,   185,   189,   192,   195,   197,   201,
     206,   210,   213,   217,   222,   228,   230,   235,   237,   241,
     245,   247,   251,   255,   259,   261,   265,   269,   271,   275,
     279,   281,   285,   289,   293,   297,   299,   303,   307,   309,
     313,   315,   319,   321,   325,   327,   331,   333,   337,   339,
     345,   347,   351,   353,   355,   357,   359,   361,   363,   365,
     367,   369,   371,   373,   375,   377,   381,   383,   385,   387,
     389,   391,   393,   395,   397,   399,   403,   408,   412,   415,
     419,   421,   424,   430,   438,   444,   446,   451,   457,   465,
     474,   476,   478,   481,   484,   488,   492,   494,   496,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   521,
     524,   526,   528,   530,   532,   534,   536,   539,   541,   543,
     545,   547,   549,   551,   553,   555,   557,   559,   561,   563,
     565,   567,   570,   574,   576,   578,   580,   582,   584,   586,
     588,   590,   592,   594,   596,   598,   600,   602,   607,   611,
     616,   620,   624,   629,   635,   637,   641,   643,   647,   649,
     651,   653,   655,   657,   663,   669,   674,   676,   682,   686,
     689,   692,   694,   701,   707,   713,   718,   723,   730,   736,
     742,   747,   753,   759,   763,   765,   769,   772,   774,   777,
     779,   786,   792,   798,   803,   808,   815,   822,   827,   831,
     833,   835,   838,   842,   844,   847,   849,   851,   853,   856,
     860,   863,   866,   869,   872,   874,   881,   887,   893,   898,
     903,   907,   909,   912,   914,   918,   919,   921,   925,   928,
     933,   936,   941,   945,   950,   953,   957,   959,   962,   966,
     968,   973,   976,   978,   982,   987,   990,   994,   998,  1003,
    1005,  1007,  1009,  1012,  1016,  1020,  1023,  1026,  1028,  1031,
    1034,  1036,  1038,  1042,  1044,  1047,  1050,  1054,  1057,  1060,
    1063,  1065,  1069,  1073,  1076,  1079,  1081,  1087,  1092,  1097,
    1101,  1107,  1112,  1117,  1121,  1123,  1125,  1127,  1130,  1133,
    1136,  1139,  1141,  1145,  1150,  1154,  1157,  1160,  1162,  1164,
    1167,  1169,  1171,  1175,  1179,  1181,  1183,  1185,  1187,  1189,
    1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,
    1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,  1229,
    1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,  1247,  1249,
    1251,  1254,  1257,  1261,  1266,  1269,  1275,  1278,  1281,  1283,
    1285,  1288,  1293,  1295,  1299,  1300,  1302,  1303,  1305,  1306,
    1308,  1309,  1311,  1312,  1314,  1315,  1317,  1318,  1320,  1321,
    1323,  1324,  1326,  1327,  1329,  1330,  1332,  1333,  1335,  1336,
    1338,  1339,  1341,  1342,  1344,  1345,  1347,  1348,  1350,  1351,
    1353,  1354,  1356,  1357,  1359,  1360,  1362,  1363,  1365,  1366,
    1368,  1369
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,     8,    -1,   130,    -1,   124,    -1,     9,
      -1,    10,    -1,     3,    -1,   135,    -1,   136,    -1,   137,
      -1,   138,    -1,   139,    -1,     4,    -1,     6,    -1,     5,
      -1,     7,    -1,    86,    -1,    57,    -1,   263,    -1,   134,
      -1,    84,    -1,   100,   172,   101,    -1,   142,    -1,   143,
      -1,   144,    -1,   133,    -1,   253,    -1,   246,    -1,   122,
     131,    -1,   145,   143,    -1,   145,    83,   143,    -1,   131,
      12,   145,    -1,   129,    12,   145,    -1,   131,    12,    -1,
     141,    -1,   146,   105,   172,   106,    -1,   146,   100,   265,
     101,    -1,   146,   108,    12,   142,    -1,   146,   108,   142,
      -1,   146,    35,    12,   142,    -1,   146,    35,   142,    -1,
     146,    32,    -1,   146,    33,    -1,   170,    -1,   147,   102,
     170,    -1,   146,    -1,    32,   157,    -1,    33,   157,    -1,
     116,   157,    -1,   107,   157,    -1,   149,   157,    -1,    78,
     148,    -1,    78,   100,   221,   101,    -1,   150,    -1,   156,
      -1,   112,    -1,   114,    -1,   121,    -1,   122,    -1,    68,
     267,   152,   268,    -1,    12,    68,   267,   152,   268,    -1,
      68,   267,   100,   221,   101,   268,    -1,    12,    68,   267,
     100,   221,   101,   268,    -1,   100,   147,   101,    -1,   222,
     269,    -1,   217,   269,    -1,   154,    -1,   105,   172,   106,
      -1,   154,   105,   173,   106,    -1,   100,   265,   101,    -1,
      48,   157,    -1,    12,    48,   157,    -1,    48,   105,   106,
     157,    -1,    12,    48,   105,   106,   157,    -1,   148,    -1,
     100,   221,   101,   157,    -1,   157,    -1,   158,    13,   157,
      -1,   158,    34,   157,    -1,   158,    -1,   159,   116,   158,
      -1,   159,   117,   158,    -1,   159,   115,   158,    -1,   159,
      -1,   160,   112,   159,    -1,   160,   114,   159,    -1,   160,
      -1,   161,    22,   160,    -1,   161,    23,   160,    -1,   161,
      -1,   162,   109,   161,    -1,   162,   110,   161,    -1,   162,
      28,   161,    -1,   162,    29,   161,    -1,   162,    -1,   163,
      26,   162,    -1,   163,    27,   162,    -1,   163,    -1,   164,
     107,   163,    -1,   164,    -1,   165,   120,   164,    -1,   165,
      -1,   166,   118,   165,    -1,   166,    -1,   167,    30,   166,
      -1,   167,    -1,   168,    31,   167,    -1,   168,    -1,   168,
     119,   172,   123,   170,    -1,   169,    -1,   168,   171,   170,
      -1,   260,    -1,   113,    -1,    16,    -1,    17,    -1,    18,
      -1,    14,    -1,    15,    -1,    24,    -1,    25,    -1,    20,
      -1,    19,    -1,    21,    -1,   170,    -1,   172,   102,   170,
      -1,   169,    -1,   175,    -1,   176,    -1,   177,    -1,   179,
      -1,   181,    -1,   183,    -1,   184,    -1,   255,    -1,   133,
     123,   174,    -1,    40,   173,   123,   174,    -1,    47,   123,
     174,    -1,   270,    99,    -1,   103,   271,   104,    -1,   174,
      -1,   178,   174,    -1,    62,   100,   180,   101,   174,    -1,
      62,   100,   180,   101,   174,    52,   174,    -1,    82,   100,
     180,   101,   174,    -1,   172,    -1,   222,   215,   113,   170,
      -1,    98,   100,   180,   101,   174,    -1,    49,   174,    98,
     100,   172,   101,    99,    -1,    59,   100,   182,   272,    99,
     270,   101,   174,    -1,   176,    -1,   188,    -1,    39,    99,
      -1,    46,    99,    -1,    75,   270,    99,    -1,    61,   133,
      99,    -1,   187,    -1,   186,    -1,   185,   186,    -1,   187,
      -1,   228,    -1,   212,    -1,   201,    -1,   188,    -1,   211,
      -1,   207,    -1,   209,    -1,   210,    -1,   190,   213,    99,
      -1,   190,    99,    -1,   191,    -1,   193,    -1,   192,    -1,
      60,    -1,    88,    -1,   189,    -1,   190,   189,    -1,    37,
      -1,    73,    -1,    79,    -1,    56,    -1,    66,    -1,    63,
      -1,    94,    -1,    54,    -1,   194,    -1,   233,    -1,   197,
      -1,   196,    -1,   219,    -1,   195,    -1,   145,   195,    -1,
      12,   264,   195,    -1,    42,    -1,    97,    -1,    38,    -1,
      76,    -1,    64,    -1,    65,    -1,    77,    -1,    92,    -1,
      58,    -1,    50,    -1,    95,    -1,   131,    -1,   132,    -1,
     128,    -1,   235,    12,   145,   133,    -1,   235,    12,   133,
      -1,    53,    12,   145,   133,    -1,    53,    12,   133,    -1,
      53,   145,   133,    -1,    90,   266,   145,   133,    -1,    53,
     133,   103,   273,   104,    -1,   199,    -1,   198,   102,   199,
      -1,   200,    -1,   200,   113,   173,    -1,   133,    -1,   202,
      -1,   205,    -1,   203,    -1,   204,    -1,    67,   133,   103,
     206,   104,    -1,    67,   130,   103,   206,   104,    -1,    67,
     103,   206,   104,    -1,   263,    -1,    67,   133,   113,   208,
      99,    -1,    12,   145,   129,    -1,    12,   129,    -1,   145,
     129,    -1,   129,    -1,    93,    90,    12,   145,   143,    99,
      -1,    93,    90,   145,   143,    99,    -1,    93,    12,   145,
     143,    99,    -1,    93,   145,   143,    99,    -1,    93,    12,
     143,    99,    -1,    93,    67,    12,   145,   129,    99,    -1,
      93,    67,    12,   129,    99,    -1,    93,    67,   145,   129,
      99,    -1,    93,    67,   129,    99,    -1,    36,   100,   138,
     101,    99,    -1,    56,   138,   103,   263,   104,    -1,    56,
     138,   186,    -1,   214,    -1,   213,   102,   214,    -1,   215,
     274,    -1,   216,    -1,   217,   215,    -1,   220,    -1,   216,
     100,   225,   101,   218,   261,    -1,   216,   100,   225,   101,
     218,    -1,   216,   100,   225,   101,   261,    -1,   216,   100,
     225,   101,    -1,     9,   100,   225,   101,    -1,     9,    12,
     220,   100,   225,   101,    -1,     9,    12,     9,   100,   225,
     101,    -1,   216,   105,   275,   106,    -1,   100,   215,   101,
      -1,   116,    -1,   107,    -1,   145,   116,    -1,    12,   145,
     116,    -1,   219,    -1,   219,   218,    -1,    44,    -1,    96,
      -1,   142,    -1,    12,   142,    -1,    12,   145,   195,    -1,
      12,   195,    -1,   222,   276,    -1,   193,   277,    -1,   217,
     276,    -1,   224,    -1,   278,   100,   225,   101,   218,   261,
      -1,   278,   100,   225,   101,   218,    -1,   278,   100,   225,
     101,   261,    -1,   278,   100,   225,   101,    -1,   278,   105,
     275,   106,    -1,   100,   223,   101,    -1,   226,    -1,   226,
      11,    -1,    11,    -1,   226,   102,    11,    -1,    -1,   227,
      -1,   226,   102,   227,    -1,   190,   215,    -1,   190,   215,
     113,   170,    -1,   190,   276,    -1,   190,   276,   113,   170,
      -1,   215,   279,   229,    -1,   190,   215,   279,   229,    -1,
     215,   256,    -1,   190,   215,   256,    -1,   177,    -1,   113,
     231,    -1,   100,   147,   101,    -1,   170,    -1,   103,   232,
     280,   104,    -1,   103,   104,    -1,   231,    -1,   232,   102,
     231,    -1,   234,   103,   281,   104,    -1,   235,   133,    -1,
     235,   133,   242,    -1,   235,   145,   133,    -1,   235,   145,
     133,   242,    -1,    43,    -1,    81,    -1,    91,    -1,   237,
     281,    -1,   245,   123,   281,    -1,   190,   238,    99,    -1,
     190,    99,    -1,   238,    99,    -1,    99,    -1,   228,   282,
      -1,   144,    99,    -1,   209,    -1,   239,    -1,   238,   102,
     239,    -1,   215,    -1,   215,   240,    -1,   215,   241,    -1,
     133,   123,   173,    -1,   113,   126,    -1,   113,   173,    -1,
     123,   243,    -1,   244,    -1,   243,   102,   244,    -1,    12,
     145,   131,    -1,    12,   131,    -1,   145,   131,    -1,   131,
      -1,    94,   245,    12,   264,   131,    -1,    94,   245,   264,
     131,    -1,    94,    12,   264,   131,    -1,    94,   264,   131,
      -1,   245,    94,    12,   264,   131,    -1,   245,    94,   264,
     131,    -1,   245,    12,   264,   131,    -1,   245,   264,   131,
      -1,    70,    -1,    71,    -1,    72,    -1,    69,   247,    -1,
     222,   283,    -1,   217,   283,    -1,   123,   250,    -1,   251,
      -1,   251,   102,   250,    -1,   252,   100,   265,   101,    -1,
      12,   145,   131,    -1,    12,   131,    -1,   145,   131,    -1,
     131,    -1,   133,    -1,    69,   254,    -1,    68,    -1,    48,
      -1,    68,   105,   106,    -1,    48,   105,   106,    -1,   112,
      -1,   111,    -1,   116,    -1,   117,    -1,   115,    -1,   120,
      -1,   107,    -1,   118,    -1,   122,    -1,   121,    -1,   113,
      -1,   109,    -1,   110,    -1,    14,    -1,    15,    -1,    16,
      -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,   102,    -1,    34,    -1,    35,
      -1,   100,   101,    -1,   105,   106,    -1,    87,   177,   257,
      -1,    87,   279,   229,   257,    -1,   258,   284,    -1,    41,
     100,   259,   101,   177,    -1,   222,   215,    -1,   222,   223,
      -1,   222,    -1,    11,    -1,    85,   285,    -1,    85,   100,
     286,   101,    -1,   221,    -1,   262,   102,   221,    -1,    -1,
     185,    -1,    -1,   145,    -1,    -1,   147,    -1,    -1,    12,
      -1,    -1,   151,    -1,    -1,   155,    -1,    -1,   153,    -1,
      -1,   172,    -1,    -1,   178,    -1,    -1,   180,    -1,    -1,
     198,    -1,    -1,   230,    -1,    -1,   173,    -1,    -1,   223,
      -1,    -1,   222,    -1,    -1,   224,    -1,    -1,   249,    -1,
      -1,   102,    -1,    -1,   236,    -1,    -1,    99,    -1,    -1,
     248,    -1,    -1,   257,    -1,    -1,   170,    -1,    -1,   262,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   161,   161,   165,   170,   175,   180,   193,   197,   198,
     199,   200,   201,   205,   209,   213,   217,   221,   222,   230,
     238,   239,   240,   241,   245,   246,   250,   251,   252,   253,
     257,   258,   262,   263,   264,   268,   269,   270,   275,   276,
     281,   282,   283,   284,   296,   297,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   314,   315,   316,   317,
     321,   322,   323,   324,   328,   332,   336,   337,   341,   342,
     346,   350,   351,   352,   353,   357,   358,   362,   363,   364,
     368,   369,   370,   371,   375,   376,   377,   381,   382,   383,
     387,   388,   389,   390,   391,   395,   396,   397,   401,   402,
     406,   407,   411,   412,   416,   417,   421,   422,   426,   427,
     431,   432,   433,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   451,   452,   456,   464,   465,   466,
     467,   468,   469,   470,   471,   475,   476,   477,   481,   485,
     489,   490,   494,   495,   496,   500,   501,   505,   506,   507,
     511,   512,   516,   517,   518,   519,   523,   531,   532,   536,
     537,   541,   542,   546,   547,   548,   549,   550,   554,   555,
     559,   560,   561,   562,   563,   567,   568,   572,   573,   574,
     575,   576,   580,   581,   582,   586,   587,   588,   589,   590,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   611,   612,   613,   617,   618,   619,
     620,   621,   622,   633,   637,   638,   642,   643,   647,   662,
     663,   667,   668,   672,   676,   680,   684,   694,   699,   700,
     701,   702,   706,   707,   708,   709,   710,   714,   715,   716,
     717,   722,   726,   727,   735,   736,   740,   744,   745,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   758,   762,
     764,   765,   767,   772,   773,   777,   778,   782,   783,   784,
     785,   789,   793,   797,   798,   802,   803,   804,   805,   806,
     807,   811,   812,   813,   814,   815,   819,   820,   824,   825,
     826,   827,   831,   832,   833,   834,   838,   842,   843,   847,
     848,   849,   853,   854,   862,   868,   869,   870,   871,   875,
     876,   877,   881,   882,   886,   887,   888,   889,   890,   891,
     892,   896,   897,   901,   902,   903,   904,   915,   919,   927,
     931,   932,   936,   937,   938,   939,   940,   941,   942,   943,
     944,   945,   946,   947,   951,   952,   953,   961,   965,   969,
     973,   977,   978,   982,   986,   987,   988,   989,   990,   998,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1100,  1104,  1108,  1112,  1116,  1117,  1118,  1119,
    1123,  1127,  1131,  1132,  1140,  1141,  1145,  1146,  1150,  1151,
    1155,  1156,  1160,  1161,  1165,  1166,  1170,  1171,  1175,  1176,
    1180,  1181,  1185,  1186,  1190,  1191,  1195,  1196,  1200,  1201,
    1205,  1206,  1210,  1211,  1215,  1216,  1220,  1221,  1225,  1226,
    1230,  1231,  1235,  1236,  1240,  1241,  1251,  1252,  1256,  1257,
    1261,  1262
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
  "'*'", "'/'", "'|'", "'?'", "'^'", "'!'", "'~'", "':'", "NAMESPACE_NAME",
  "TEMPLATE_NAME", "'0'", "$accept", "typedef_name", "namespace_name",
  "original_namespace_name", "class_name", "enum_name", "identifier",
  "literal", "integer_literal", "character_literal", "floating_literal",
  "string_literal", "boolean_literal", "translation_unit",
  "primary_expression", "id_expression", "unqualified_id", "qualified_id",
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
  "mem_initializer_id", "operator_function_id", "operator", "try_block",
  "function_try_block", "handler_seq", "handler", "exception_declaration",
  "throw_expression", "exception_specification", "type_id_list",
  "declaration_seq_opt", "nested_name_specifier_opt",
  "expression_list_opt", "COLONCOLON_opt", "new_placement_opt",
  "new_initializer_opt", "new_declarator_opt", "expression_opt",
  "statement_seq_opt", "condition_opt", "enumerator_list_opt",
  "initializer_opt", "constant_expression_opt", "abstract_declarator_opt",
  "type_specifier_seq_opt", "direct_abstract_declarator_opt",
  "ctor_initializer_opt", "COMMA_opt", "member_specification_opt",
  "SEMICOLON_opt", "conversion_declarator_opt", "handler_seq_opt",
  "assignment_expression_opt", "type_id_list_opt", 0
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
      94,    33,   126,    58,   354,   355,    48
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   130,   131,   132,   133,   134,   134,
     134,   134,   134,   135,   136,   137,   138,   139,   139,   140,
     141,   141,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   144,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   149,   149,
     150,   150,   150,   150,   151,   152,   153,   153,   154,   154,
     155,   156,   156,   156,   156,   157,   157,   158,   158,   158,
     159,   159,   159,   159,   160,   160,   160,   161,   161,   161,
     162,   162,   162,   162,   162,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   176,   177,
     178,   178,   179,   179,   179,   180,   180,   181,   181,   181,
     182,   182,   183,   183,   183,   183,   184,   185,   185,   186,
     186,   186,   186,   187,   187,   187,   187,   187,   188,   188,
     189,   189,   189,   189,   189,   190,   190,   191,   191,   191,
     191,   191,   192,   192,   192,   193,   193,   193,   193,   193,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   195,   196,   196,   196,
     196,   196,   196,   197,   198,   198,   199,   199,   200,   201,
     201,   202,   202,   203,   204,   205,   206,   207,   208,   208,
     208,   208,   209,   209,   209,   209,   209,   210,   210,   210,
     210,   211,   212,   212,   213,   213,   214,   215,   215,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
     217,   217,   217,   218,   218,   219,   219,   220,   220,   220,
     220,   221,   222,   223,   223,   224,   224,   224,   224,   224,
     224,   225,   225,   225,   225,   225,   226,   226,   227,   227,
     227,   227,   228,   228,   228,   228,   229,   230,   230,   231,
     231,   231,   232,   232,   233,   234,   234,   234,   234,   235,
     235,   235,   236,   236,   237,   237,   237,   237,   237,   237,
     237,   238,   238,   239,   239,   239,   239,   240,   241,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   245,   245,   245,   246,   247,   248,
     249,   250,   250,   251,   252,   252,   252,   252,   252,   253,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   255,   256,   257,   258,   259,   259,   259,   259,
     260,   261,   262,   262,   263,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   278,   279,   279,   280,   280,
     281,   281,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   286
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     3,     2,     1,     4,     4,     4,     3,
       4,     3,     2,     2,     1,     3,     1,     2,     2,     2,
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
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     3,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     5,     5,     4,     1,     5,     3,     2,
       2,     1,     6,     5,     5,     4,     4,     6,     5,     5,
       4,     5,     5,     3,     1,     3,     2,     1,     2,     1,
       6,     5,     5,     4,     4,     6,     6,     4,     3,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     2,     3,
       2,     2,     2,     2,     1,     6,     5,     5,     4,     4,
       3,     1,     2,     1,     3,     0,     1,     3,     2,     4,
       2,     4,     3,     4,     2,     3,     1,     2,     3,     1,
       4,     2,     1,     3,     4,     2,     3,     3,     4,     1,
       1,     1,     2,     3,     3,     2,     2,     1,     2,     2,
       1,     1,     3,     1,     2,     2,     3,     2,     2,     2,
       1,     3,     3,     2,     2,     1,     5,     4,     4,     3,
       5,     4,     4,     3,     1,     1,     1,     2,     2,     2,
       2,     1,     3,     4,     3,     2,     2,     1,     1,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     4,     2,     5,     2,     2,     1,     1,
       2,     4,     1,     3,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     414,     7,     2,     5,     6,     0,     0,   177,   195,   193,
     309,   265,   202,     0,   184,   180,   201,   173,   182,   197,
     198,   181,     0,     0,   178,   196,   199,   179,   310,   174,
     420,   311,   200,     0,   183,   203,   266,   194,     0,   260,
     259,     0,     4,   206,     0,     3,   204,   205,    26,     0,
     267,    24,    25,     0,   415,   157,   159,   163,   175,     0,
     170,   172,   171,   185,   190,   188,   187,   162,   219,   221,
     222,   220,   165,   166,   167,   164,   161,   446,   247,     0,
     189,   249,   160,   186,     0,     0,    28,    27,    19,     0,
     285,     5,   268,     0,   270,     0,     0,     0,     0,     0,
       0,    16,     0,   414,     0,     0,   416,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   398,   399,   361,
     360,     0,   397,     0,   370,   375,   376,   365,   364,   374,
     368,   366,   367,   371,   369,   373,   372,     0,   442,   454,
     347,   359,   421,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    34,     1,     0,   261,   204,    30,   191,
     158,   180,   169,   176,     0,   244,   436,   446,     0,   447,
     294,     0,   285,   438,   248,   450,     0,   305,     0,     5,
       0,     0,     0,   283,   440,     0,   281,   286,   262,   269,
     192,     0,   210,     0,   434,   211,   414,   243,     0,   226,
     414,   414,     0,   417,     0,     0,   400,   401,   443,   272,
       0,     0,   454,   455,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,    33,    32,    31,   168,
       0,     0,     0,   437,   295,   246,     0,     0,     0,   357,
     358,     0,   350,   351,     0,   428,   296,   292,     0,    13,
      15,    14,     0,     0,     0,     0,    18,   422,     0,    21,
      17,     0,     0,    56,    57,     0,    58,    59,    20,     8,
       9,    10,    11,    12,    35,    23,    46,    75,     0,    54,
      55,    77,    80,    84,    87,    90,    95,    98,   100,   102,
     104,   106,   108,   126,   439,     0,   344,   345,   346,     0,
     317,    26,    25,     0,   320,   323,   452,   451,   450,     0,
     321,     0,     0,   208,     0,     0,   306,   307,   285,     0,
     285,   444,   288,   440,   441,   274,   290,     0,   254,   282,
       0,     0,   209,   218,   435,   214,   216,     0,     0,   225,
       0,     0,     0,   231,     0,     0,   363,   362,     0,   349,
     212,   236,     0,     0,     0,   240,     0,     0,     0,   235,
     245,   436,   458,     0,   108,   110,    44,   112,     0,   299,
     297,   293,     0,   355,     0,   356,     0,   418,   416,     0,
       0,     0,     0,   428,     0,     0,     0,     0,   428,     0,
       0,     0,    26,     0,   124,   429,   140,   127,   128,   129,
     428,   130,   131,   132,   133,   156,     0,   134,     0,     0,
     253,     0,   422,    47,    48,     0,    71,     0,   423,     0,
       0,    52,     0,     0,   440,    50,    49,    42,    43,     0,
     418,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,   319,   315,   323,
       0,     0,   324,   325,   453,   318,   312,   316,     0,   450,
     304,   207,     0,     0,   335,     0,   329,   330,     0,   308,
       0,     0,     0,     0,   273,     0,   285,   438,   284,   287,
     241,     0,     0,   213,   242,   224,   223,   229,     0,   230,
     227,   234,   238,     0,   239,     0,   233,   459,   410,   298,
       0,   117,   118,   114,   115,   116,   122,   121,   123,   119,
     120,   113,     0,   301,   302,   448,     0,   403,   456,   354,
     352,   419,     0,   152,     0,   153,   428,     0,   428,     0,
       0,     0,     0,     0,     0,     0,   428,     0,   141,   138,
     139,     0,   251,   263,   252,     0,    72,     0,     0,     0,
       0,   424,   426,     0,    22,     0,   444,   440,   271,     0,
      41,     0,     0,     0,    39,    78,    79,    83,    81,    82,
      85,    86,    88,    89,    93,    94,    91,    92,    96,    97,
      99,   101,   103,   105,   107,     0,   326,   314,   327,   328,
     323,   322,   313,   333,     0,     0,     0,     0,   334,     0,
       0,     0,     0,   256,   255,   280,   289,   291,     0,     0,
     215,   217,   228,   237,   232,    45,   111,   449,     0,     0,
     457,   404,   353,   428,   137,     0,   150,   432,   151,   155,
     145,     0,     0,   154,     0,   402,     0,   135,   125,   460,
     250,   264,     0,     0,   424,    73,    64,     0,   418,   425,
      60,     0,   427,    67,   426,    65,    53,    76,    40,    37,
      36,    38,     0,   332,     0,     0,     0,   339,   331,     0,
       0,     0,   343,   278,   279,   303,   300,   409,   408,     0,
     136,     0,   433,     0,   428,     0,   428,   428,   412,   461,
       0,    74,     0,    61,   424,     0,     0,     0,    66,   109,
     338,     0,   337,   342,     0,   341,   276,   277,   406,   407,
       0,     0,   428,   142,     0,   144,   147,     0,   411,   424,
      62,    70,    68,     0,   336,   340,   275,   405,     0,     0,
     428,   146,   413,    63,    69,   148,   428,   143,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    43,    44,    45,    98,    47,    48,   278,   279,   280,
     281,   282,   283,    49,   284,   285,    51,    52,   191,   286,
     541,   287,   288,   289,   428,   571,   672,   673,   669,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   374,   375,   404,   532,   405,   304,   406,   407,   408,
     409,   410,   411,   651,   412,   647,   413,   414,    54,    55,
     415,    57,    58,   416,    60,    61,    62,    63,    64,    65,
      66,   344,   345,   346,    67,    68,    69,    70,    71,   208,
      72,   355,    73,    74,    75,    76,   174,   175,    77,    78,
      79,   562,    80,    81,   433,   434,   334,   335,   195,   196,
     197,    82,   257,   243,   380,   535,    83,    84,    85,   317,
     318,   319,   320,   472,   473,   326,   486,   487,   321,    86,
     150,   223,   179,   252,   253,   254,    87,   151,   417,   180,
     537,   538,   699,   377,   564,   709,   209,    95,   542,   153,
     429,   670,   675,   418,   419,   703,   347,   245,   305,   494,
     219,   337,   181,   638,   322,   475,   224,   641,   518,   710
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -616
static const yytype_int16 yypact[] =
{
    1909,  -616,  -616,    17,  -616,   627,   -61,  -616,  -616,  -616,
    -616,  -616,  -616,    49,  -616,   101,  -616,  -616,  -616,  -616,
    -616,  -616,    81,  2738,  -616,  -616,  -616,  -616,  -616,  -616,
     113,  -616,  -616,   129,  -616,  -616,  -616,  -616,   518,  -616,
    -616,   122,  -616,  -616,   148,  -616,   155,  -616,  -616,   188,
    -616,  -616,  -616,   340,  1909,  -616,  -616,  -616,  -616,  1984,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,   -41,   139,   518,
    -616,  -616,  -616,  -616,    39,    59,  -616,  -616,  -616,   589,
    2855,  -616,  -616,   775,  -616,   457,   101,    63,   155,   115,
     192,  -616,  1834,  1909,   140,    -3,    28,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   163,
     173,   181,  -616,   199,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,   457,  3175,   648,
    -616,  -616,  -616,    28,   350,   106,   117,    47,   627,   253,
     210,  -616,    28,    28,  -616,    47,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,   184,  -616,   618,   200,   110,  -616,
    -616,   235,  2855,  2536,  -616,  1759,    63,   224,   192,   257,
     627,    29,   270,  -616,  2059,   276,    32,  -616,  -616,  -616,
    -616,   282,  -616,   192,   192,  -616,  1909,  -616,   294,  -616,
    1909,  1909,   135,  -616,   297,   314,  -616,  -616,  -616,  -616,
      28,   284,   648,  -616,  -616,   192,   336,    47,    28,    36,
     313,    28,    47,   345,   775,  -616,  -616,  -616,  -616,  -616,
     518,  2388,  2266,  -616,  -616,  -616,   235,   235,    28,   155,
    -616,   122,  -616,   351,   347,  1175,  -616,  -616,   354,  -616,
    -616,  -616,   269,  2536,  2536,  2401,  -616,   357,  2621,  -616,
    -616,  1663,  2536,  -616,  -616,  2536,  -616,   122,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,   691,  -616,  2536,  -616,
    -616,  -616,    40,   382,   112,    66,   423,   365,   366,   341,
     359,   433,    11,  -616,  -616,   375,  -616,  -616,  -616,   283,
    -616,   361,   387,  2134,  -616,   625,   396,  -616,  1759,   256,
    -616,   369,   397,  -616,   192,   434,  -616,   224,  2855,   779,
    2855,   522,   390,    92,  -616,   142,   405,   251,  -616,  -616,
    2930,   412,  -616,  -616,   413,  -616,   416,   422,   435,  -616,
     441,   445,    28,   148,   313,   438,  -616,  -616,   444,  -616,
    -616,  -616,   452,    51,   313,  -616,   464,    47,   469,  -616,
    -616,   -30,  2388,   293,   890,  -616,  -616,  -616,  2233,  -616,
    -616,  -616,   543,   155,   122,  -616,   110,  2388,   356,   490,
    2536,   497,   477,  1419,   506,   192,   510,   192,  2388,   514,
     235,   526,   508,   779,  -616,   539,  -616,  -616,  -616,  -616,
    1297,  -616,  -616,  -616,  -616,  -616,  1984,  -616,   546,   549,
     208,  2487,   357,  -616,  -616,   550,  -616,  2388,  -616,  2992,
    1663,  -616,   311,   560,   573,  -616,  -616,  -616,  -616,   683,
    2388,  2388,   707,  -616,  2536,  2536,  2536,  2536,  2536,  2536,
    2536,  2536,  2536,  2536,  2536,  2536,  2536,  2536,  2536,  2536,
    2536,  2536,  2536,  2536,  2388,  -616,  2536,  -616,  -616,   625,
     264,   993,  -616,  -616,  -616,  -616,  -616,  -616,   518,  1759,
    -616,  -616,    28,   378,   155,   122,   568,  -616,   393,  -616,
     574,   575,   581,  2388,  -616,  2388,  2855,  2536,  -616,  -616,
    -616,   192,  2536,  -616,  -616,  -616,  -616,   148,   313,  -616,
    -616,  -616,  -616,   584,  -616,   588,  -616,  -616,  -616,  -616,
    2388,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  2388,  -616,  -616,   591,   599,  -616,   543,  -616,
    -616,   598,   602,  -616,   585,  -616,  1419,   611,  1541,   621,
    1663,   604,   626,  1663,   543,  1663,  1419,  2388,  -616,  -616,
    -616,   629,   642,    -9,  -616,   628,  -616,  3053,  2536,   331,
    3175,   633,   191,   635,  -616,  2536,   481,   573,  -616,   350,
    -616,   638,   -55,   350,  -616,  -616,  -616,    40,    40,    40,
     382,   382,   112,   112,    66,    66,    66,    66,   423,   423,
     365,   366,   341,   359,   433,   -29,  -616,  -616,  -616,  -616,
     630,  -616,  -616,   155,   122,    28,   258,   122,  -616,   434,
      28,   260,   122,  -616,  -616,  -616,  -616,  -616,   639,   652,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  2266,   640,  3114,
    -616,  -616,  -616,  1419,  -616,   654,  -616,  1663,  -616,  -616,
     539,   658,   518,  -616,   659,  -616,   661,  -616,  -616,  3175,
    -616,  -616,  2536,  3175,   633,  -616,  -616,   664,  2388,  -616,
    -616,  2388,  -616,   662,   191,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  2388,  -616,   122,    28,   122,  -616,  -616,   122,
      28,   122,  -616,   208,  -616,  -616,  -616,  -616,    92,   668,
    -616,  2388,  -616,   672,  1419,   666,  1419,  1419,  -616,   673,
     679,  -616,   680,  -616,   633,   685,   -25,  2536,  -616,  -616,
    -616,   122,  -616,  -616,   122,  -616,   642,  -616,  -616,  -616,
     235,   440,  2388,   738,  2388,  -616,  -616,  3175,  -616,   633,
    -616,  -616,  -616,   686,  -616,  -616,  -616,  -616,   694,   693,
    1419,  -616,  -616,  -616,  -616,  -616,  1419,  -616,  -616
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -616,  -616,  -119,   773,   417,  -616,   176,  -616,  -616,  -616,
    -616,   178,  -616,  -616,  -616,   612,   609,  -182,     0,  -616,
    -220,   530,  -616,  -616,  -616,   237,  -616,  -616,  -616,  -616,
    -208,    76,   130,   152,   -28,   136,   349,   352,   348,   353,
     358,  -181,  -163,  -121,  -616,  -226,  -375,  -265,  -616,   263,
    -171,  -616,  -616,  -209,  -616,  -616,  -616,  -616,  -616,   -10,
      69,   265,   -48,    78,  -616,  -616,   114,  -616,    12,  -616,
    -616,  -616,   315,  -616,  -616,  -616,  -616,  -616,  -616,   398,
    -616,  -616,  -179,  -616,  -616,  -616,  -616,   577,   -19,  -616,
    -108,  -529,  -406,   725,  -405,   -15,  -327,  -616,  -151,  -616,
     484,  -178,   402,  -616,  -360,  -616,  -616,  -616,  -616,  -616,
    -616,   512,   360,  -616,  -616,   499,  -616,   209,  -309,  -616,
    -616,  -616,  -616,   446,  -616,  -616,  -616,  -616,  -616,  -167,
    -337,  -616,  -616,  -616,  -550,  -616,    26,  -107,  -418,  -616,
     408,  -615,   160,  -397,  -616,  -616,  -616,  -616,   338,  -170,
    -616,  -616,  -149,  -616,  -288,  -616,   615,  -616,  -616,  -616
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -447
static const yytype_int16 yytable[] =
{
      53,   552,   302,   312,   492,    93,   314,   316,   149,   244,
     256,   173,   660,   100,   563,   544,   488,    94,   534,   160,
     303,   373,   581,   147,   336,   573,    88,   246,   247,    89,
     476,   258,     1,   157,   661,    11,   229,    91,   159,    96,
     176,   222,   463,   339,   170,   432,   177,   557,   162,   713,
       1,   680,     1,   444,    53,   423,   424,   426,    91,    53,
     184,    97,     1,   162,   435,   169,     1,   436,    91,    56,
     241,   186,    91,   557,   445,   256,   256,   557,    59,   159,
     443,   742,   178,   242,     1,   188,   333,    36,   451,   452,
     147,   606,   207,   353,   682,     1,   609,   203,    23,   740,
     211,     3,    53,    53,   158,   199,   213,   200,   101,   363,
     212,   366,   165,     1,   222,    91,    23,    90,   228,    91,
     376,   379,   248,    56,   753,   152,    91,   631,   547,   231,
     464,    91,    59,   218,   340,   365,   312,   148,    91,   314,
     316,   154,   185,   727,    91,   558,   173,   352,   147,   221,
     512,    41,    42,   225,   227,   230,   232,   563,   234,   169,
     162,    23,   236,   237,   726,   667,   315,   163,   194,    41,
      94,    56,    56,    42,   616,   332,   746,   490,   251,   491,
      59,    59,   147,    42,   103,    53,   324,    42,   164,    99,
     329,   612,   331,   102,    53,     1,   155,  -444,   105,    39,
      91,   640,    94,   220,   432,    42,    53,   569,    40,   302,
      53,    53,   354,   566,    41,   582,    42,   655,   204,   156,
     358,   371,   221,   333,   449,   333,   450,   303,   364,   554,
      42,   367,   348,   507,    42,   509,   585,   586,   605,   182,
     159,    42,  -445,   210,   183,   513,   199,  -445,   384,   492,
     715,   517,    11,    42,   708,   403,     1,   379,   712,    42,
     194,   187,   148,   313,   578,   173,   376,    91,   214,    91,
     685,   403,   690,   202,   201,    56,   205,   695,   215,    56,
      56,   644,   216,   239,    59,   302,   240,   563,    59,    59,
     302,   657,    91,   561,   469,   154,   671,   312,    39,   315,
     314,   316,   244,   303,    36,   217,   376,    40,   303,   157,
     488,   235,   160,    53,   184,    42,   302,   421,    53,   376,
     246,   302,    23,   178,   650,   485,   577,   650,   147,   650,
     147,   159,   752,   159,   303,   749,   165,   422,   255,   303,
     147,   199,   743,     1,   654,   628,   656,   325,     2,    91,
       4,   496,   508,     1,   250,   477,   497,   328,   478,    91,
     665,   311,   323,   607,   327,    91,   478,   677,   173,   166,
     330,   729,   626,   156,   627,    41,   617,   338,   700,   342,
     343,   622,    42,   341,    42,   148,   251,    91,   213,   632,
     615,   457,   458,   403,   519,   520,   313,   371,   349,   635,
     166,   360,    91,   356,   421,   620,   194,    42,   194,    23,
     403,   636,   574,   557,   572,   169,    53,    46,   194,    23,
     357,   650,    46,   165,   422,   594,   595,   596,   597,   147,
     403,   402,   666,   520,   221,   361,   658,    42,   702,   733,
      46,   735,   736,    91,   369,   716,   482,   387,   306,   307,
     308,   453,   454,   386,   711,   420,   166,   427,   161,   610,
     315,   460,    41,   462,   674,     2,    91,     4,   577,   577,
     167,    46,    41,   459,    42,   731,    46,   461,   159,    53,
      42,   465,   614,   213,   466,   757,   467,   621,   213,   311,
      91,   758,   479,   220,   311,   474,   147,   446,   447,   448,
     481,   480,    42,   493,   306,   307,   308,    46,   684,   686,
     167,   500,   167,   689,   691,   501,   379,    42,   495,    46,
      46,     1,   587,   588,   589,     1,   503,     3,   483,   502,
     158,     3,   455,   456,   158,   652,   302,   510,   652,   504,
     652,   748,   557,   148,   148,   505,   403,   376,   403,   506,
     403,   511,   572,   403,   303,   403,   403,   313,    42,   747,
     198,   719,   250,   514,   167,    46,   674,   147,   516,   402,
     147,   549,   221,   551,   194,    46,   221,   221,   721,   590,
     591,   576,    91,   724,   536,   220,   402,    23,    39,   543,
     333,    23,     1,   598,   599,   249,   545,    40,   189,    46,
     546,   190,    46,   592,   593,    42,   548,    46,   350,   351,
     550,    46,    50,   751,   553,   213,   213,    92,    38,   485,
     213,   213,   331,    46,   698,    39,   555,    46,    46,    39,
       1,   556,   652,   705,    40,     2,    91,     4,    40,   147,
      41,   557,    42,   403,    41,   559,    42,   403,   381,   382,
      50,   167,   159,   560,   311,   311,   568,    91,    23,   147,
     220,   575,   168,   147,   148,   383,    50,   148,   385,   148,
     619,    50,    46,   576,   221,   623,   624,   343,  -444,   728,
      39,   148,   625,   633,   148,   213,     1,   634,    46,    40,
     213,    50,    91,   637,   161,   579,    23,    42,   159,   639,
     520,    50,   168,   642,   403,   177,   403,   403,   643,   645,
       1,    41,   177,    42,    50,    50,    91,   212,   241,   583,
     649,  -446,   402,   437,   438,   653,   439,   561,  -446,   659,
      46,   242,   402,   668,   662,    46,   676,   147,   471,   679,
     693,   178,   484,   471,   696,    46,   167,    46,   178,    41,
     403,    42,    23,   148,   701,    39,   403,    46,   694,   704,
     706,   148,   707,   226,    40,   714,   233,   717,   168,   730,
      92,   732,    42,   148,   238,   737,    23,   148,     1,   734,
     738,   739,     1,     2,    91,     4,   741,     2,    91,     4,
     750,   440,   754,   755,   756,   104,   441,    50,   431,   442,
     168,   539,    92,   249,   664,    41,    50,    42,   600,   602,
      46,   646,   601,   648,   192,   603,   630,   370,    50,   402,
     167,   604,    50,    50,   499,   470,   489,    46,   688,    41,
     567,    42,   540,    46,   718,   629,   362,   359,   611,     0,
       0,   368,     0,   168,    23,     0,    46,    46,    23,     0,
       0,   148,    50,     0,     0,     0,     0,     0,   165,     0,
       0,     0,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,     0,   402,   402,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,    46,    41,     0,   613,
       0,    41,   618,     0,   521,   522,   523,   524,   525,   526,
     527,   528,     0,    46,   529,   530,     0,     0,     0,     0,
       0,   463,     0,     0,     0,    50,   402,     0,     0,     0,
      50,     0,   402,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,    50,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    46,     0,    46,     0,     0,
      46,     0,    46,    46,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   259,   260,   261,
     101,     0,    91,   531,     0,   262,     0,     0,     0,   464,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,   264,     0,    50,     0,
       0,   683,     0,     0,   687,     0,   484,     0,     0,   692,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
     266,   580,     0,     0,   584,     0,    46,     0,     0,     0,
      46,   267,    23,     0,    46,     0,     0,     0,     0,     0,
       0,   268,     0,     0,     0,     0,    46,   269,     0,   270,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    50,     0,   271,     0,     0,     0,     0,     0,     0,
     272,   720,     0,   722,     0,   273,   723,   274,   725,   275,
       0,     0,     0,     0,   276,   277,     0,    42,     0,   608,
       0,    46,     0,    46,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   744,     0,
       0,   745,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     1,   259,
     260,   261,   101,     2,    91,     4,     0,   388,     0,     0,
       0,   678,     0,     0,     0,   681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   263,   264,     0,
       0,     6,     7,     8,   389,   390,     0,     9,    10,    11,
       0,   391,   392,   265,   393,    12,     0,     0,    13,    14,
       0,   171,   266,    16,   394,    17,   395,   396,    18,    19,
      20,    21,   397,   267,    23,     0,     0,     0,    24,     0,
     398,    25,    26,   268,    27,     0,    28,   399,     0,   269,
     372,   270,   400,    29,    50,    30,    31,    32,    33,    34,
      35,    36,    37,   401,     0,   271,     0,     0,   255,  -430,
       0,     0,   272,     0,     0,     0,     0,   273,     0,   274,
       0,   275,     0,     0,     0,     0,   276,   277,     0,    42,
       1,   259,   260,   261,   101,     2,    91,     4,     0,   388,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
     264,     0,     0,     6,     7,     8,   389,   390,     0,     9,
      10,    11,     0,   391,   392,   265,   393,    12,     0,     0,
      13,    14,     0,   171,   266,    16,   394,    17,   395,   396,
      18,    19,    20,    21,   397,   267,    23,     0,     0,     0,
      24,     0,   398,    25,    26,   268,    27,     0,    28,   399,
       0,   269,   372,   270,   400,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,   401,     0,   271,     0,     0,
     255,  -431,     0,     0,   272,     0,     0,     0,     0,   273,
       0,   274,     0,   275,     0,     0,     0,     0,   276,   277,
       0,    42,     1,   259,   260,   261,   101,     2,    91,     4,
       0,   388,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   263,   264,     0,     0,     6,     7,     8,   389,   390,
       0,     9,    10,    11,     0,   391,   392,   265,   393,    12,
       0,     0,    13,    14,     0,   171,   266,    16,   394,    17,
     395,   396,    18,    19,    20,    21,   397,   267,    23,     0,
       0,     0,    24,     0,   398,    25,    26,   268,    27,     0,
      28,   399,     0,   269,   372,   270,   400,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,   401,     0,   271,
       0,     0,   255,     0,     0,     0,   272,     0,     0,     0,
       0,   273,     0,   274,     0,   275,     0,     0,     0,     0,
     276,   277,     0,    42,     1,   259,   260,   261,   101,     2,
      91,     4,     0,   388,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,   264,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    10,    11,     0,     0,     0,   265,
       0,    12,     0,     0,    13,    14,     0,   171,   266,    16,
       0,    17,     0,     0,    18,    19,    20,    21,     0,   267,
      23,     0,     0,     0,    24,     0,     0,    25,    26,   268,
      27,     0,    28,     0,     0,   269,   372,   270,     0,    29,
       0,    30,    31,    32,     0,    34,    35,    36,    37,     0,
       0,   271,     0,     0,     0,     0,     0,     0,   272,     0,
       0,     0,     0,   273,     0,   274,     0,   275,     0,     0,
       0,     0,   276,   277,     0,    42,     1,   259,   260,   261,
     101,     2,    91,     4,     0,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,   264,     0,     0,     0,
       0,     8,     0,     0,     0,     9,    10,    11,     0,     0,
       0,   265,     0,    12,     0,     0,    13,     0,     0,     0,
     266,    16,     0,     0,     0,     0,     0,    19,    20,     0,
       0,   267,    23,     0,     0,     0,     0,     0,     0,    25,
      26,   268,     0,     0,    28,     0,     0,   269,   372,   270,
       0,     0,     0,    30,    31,    32,     0,     0,    35,    36,
      37,     0,     1,   271,     0,     0,     0,     2,     3,     4,
     272,     5,     0,     0,     0,   273,     0,   274,     0,   275,
       0,     0,     0,     0,   276,   277,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,    13,    14,     0,   171,     0,    16,     0,    17,
       0,     0,    18,    19,    20,    21,     0,     0,    23,   306,
     307,   308,    24,     0,     0,    25,    26,     1,    27,     0,
      28,     0,     2,     3,     4,     0,     5,    29,     0,    30,
      31,    32,   309,    34,    35,    36,    37,     0,   310,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       6,     7,     8,     0,     0,    40,     9,    10,    11,     0,
       0,    41,     0,    42,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,    23,     0,     0,     0,    24,     0,     0,
      25,    26,     1,    27,     0,    28,     0,     2,     3,     4,
       0,     5,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,     0,     0,    38,     0,     0,   206,     0,     0,
       0,    39,     0,     0,     0,     6,     7,     8,     0,     0,
      40,     9,    10,    11,     0,     0,    41,     0,    42,    12,
       0,     0,    13,    14,     0,    15,     0,    16,     0,    17,
       0,     0,    18,    19,    20,    21,    22,     0,    23,     0,
       0,     0,    24,     0,     0,    25,    26,     1,    27,     0,
      28,     0,     2,     3,     4,     0,     5,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     7,     8,     0,     0,    40,     9,    10,    11,     0,
       0,    41,     0,    42,    12,     0,     0,    13,    14,     0,
     171,     0,    16,     0,    17,     0,     0,    18,    19,    20,
      21,     0,     0,    23,     0,     0,     0,    24,     0,     0,
      25,    26,     1,    27,     0,    28,     0,     2,     3,     4,
       0,     5,    29,     0,    30,    31,    32,     0,    34,    35,
      36,    37,     0,   172,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     7,     8,     0,     0,
      40,     9,    10,    11,     0,     0,    41,     0,    42,    12,
       0,     0,    13,    14,     0,   171,     0,    16,     0,    17,
       0,     0,    18,    19,    20,    21,     0,     0,    23,     0,
       0,     0,    24,     0,     0,    25,    26,     1,    27,     0,
      28,     0,     2,     3,     4,     0,     5,    29,     0,    30,
      31,    32,     0,    34,    35,    36,    37,     0,     0,   331,
       0,     0,     0,     0,  -444,     0,    39,     0,     0,     0,
       0,     7,     8,     0,     0,    40,     9,    10,    11,     0,
       0,    41,     0,    42,    12,     0,     0,    13,    14,     0,
     171,     0,    16,     0,    17,     0,     0,    18,    19,    20,
      21,     0,     0,    23,     0,     0,     0,    24,     0,     0,
      25,    26,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,    29,     0,    30,    31,    32,     0,    34,    35,
      36,    37,     0,   468,    38,     0,     1,   259,   260,   261,
     101,    39,    91,     0,     0,   262,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,    41,     0,    42,     0,
       0,     0,     0,     0,     0,   263,   264,     0,     0,     1,
     259,   260,   261,   101,     0,    91,     0,     0,   262,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,     0,     0,     0,     0,   263,   264,
       0,   267,    23,     0,     0,     0,     0,     0,     0,     0,
       0,   268,     0,     0,   265,     0,     0,   269,   372,   270,
       0,     0,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   271,   267,    23,   378,   533,     0,     0,
     272,     0,     0,     0,   268,   273,     0,   274,     0,   275,
     269,   372,   270,     0,   276,   277,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,   271,     0,     0,   378,
       0,     0,     0,   272,     0,     0,     0,     0,   273,     0,
     274,     0,   275,     0,     0,     0,     0,   276,   277,     0,
      42,     1,   259,   260,   261,   101,     0,    91,     0,     0,
     262,     0,     0,     0,     1,   259,   260,   261,   101,     0,
      91,     0,     0,   262,     0,     0,     0,     0,     0,     0,
     263,   264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,   264,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,   266,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,   267,    23,   266,     0,
       0,     0,     0,     0,     0,     0,   268,     0,     0,   267,
      23,     0,   269,   372,   270,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,   269,     0,   270,   271,     0,
       1,   259,   260,   261,   101,   272,    91,     0,     0,   262,
     273,   271,   274,     0,   275,     0,   425,     0,   272,   276,
     277,     0,    42,   273,     0,   274,     0,   275,     0,   263,
     264,     0,   276,   277,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   265,     0,     0,     0,     1,
     259,   260,   261,   101,   266,    91,     0,     0,   262,     0,
       0,     0,     0,     0,     0,   267,    23,     0,     0,     0,
       0,     0,     0,     0,     0,   268,     0,     0,   263,   264,
       0,   269,     0,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,   271,     0,     0,
       0,     0,   565,   266,   272,     0,     0,     0,     0,   273,
       0,   274,     0,   275,   267,    23,     0,     0,   276,   277,
       0,    42,     0,     0,   268,     0,     0,     0,     0,     0,
     269,     0,   270,     0,     1,   259,   260,   261,   101,     0,
      91,     0,     0,   262,     0,     0,   271,     0,     0,     0,
       0,     0,     0,   272,     0,     0,     0,     0,   273,     0,
     274,     0,   275,   263,   264,     0,     0,   276,   277,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
      23,     0,     0,     0,     0,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,   269,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   430,     0,     0,     0,     0,     0,     0,   272,     0,
       0,     0,     0,   273,     0,   274,     0,   275,     0,     0,
       0,     0,   276,   277,     0,    42,     2,    91,     4,     0,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,     8,     0,     0,     0,
       9,    10,    11,     0,     0,     0,   129,     0,    12,     0,
       0,    13,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,    19,    20,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,     0,    35,    36,    37,     0,     0,   131,     0,
     132,     0,     0,   133,     0,   134,     0,   135,   136,   137,
     138,   139,     0,   140,   141,   142,   143,     0,   144,   145,
     146,     0,    42,     2,    91,     4,   193,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,    13,    14,
       0,   171,     0,    16,     0,    17,     0,     0,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,    24,     0,
       0,    25,    26,     0,    27,     0,    28,     0,     2,    91,
       4,   498,   106,    29,     0,    30,    31,    32,     0,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,    42,
      12,     0,     0,    13,    14,     0,   171,     0,    16,     0,
      17,     0,     0,    18,    19,    20,    21,     0,     0,     0,
       2,    91,     4,    24,   106,     0,    25,    26,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,    29,     0,
      30,    31,    32,     0,    34,    35,    36,    37,     0,     0,
       8,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,    13,     0,     0,     0,     0,
      16,     0,     0,     0,    42,     0,    19,    20,     0,     0,
       0,     2,    91,     4,     0,   106,     0,     0,    25,    26,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,     0,     0,    35,    36,    37,
       0,     8,   570,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,    12,     0,     0,    13,     0,     0,     0,
       0,    16,     0,     0,     0,     0,    42,    19,    20,     0,
       0,     0,     2,    91,     4,   697,   106,     0,     0,    25,
      26,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,     0,    35,    36,
      37,     0,     8,   663,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    16,     0,     0,     0,     0,    42,    19,    20,
       0,     0,     0,     2,    91,     4,     0,   106,     0,     0,
      25,    26,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,     0,     0,    35,
      36,    37,     0,     8,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,    13,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    42,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42
};

static const yytype_int16 yycheck[] =
{
       0,   398,   183,   185,   331,     5,   185,   185,    23,   176,
     181,    59,   562,    13,   420,   390,   325,     5,   378,    38,
     183,   241,   440,    23,   194,   430,     0,   176,   177,    12,
     318,   182,     3,    33,   563,    44,   155,     9,    38,   100,
      59,   149,    31,    11,    54,   271,    87,   102,    12,   664,
       3,   106,     3,    13,    54,   263,   264,   265,     9,    59,
      79,    12,     3,    12,   272,    53,     3,   275,     9,     0,
     100,    12,     9,   102,    34,   246,   247,   102,     0,    79,
     288,   106,   123,   113,     3,    85,   194,    96,    22,    23,
      90,   466,   102,   212,   123,     3,   471,    97,    69,   714,
     103,     9,   102,   103,    12,    93,   106,    95,     7,   228,
     113,   230,    83,     3,   222,     9,    69,   100,    12,     9,
     241,   242,    12,    54,   739,    12,     9,   502,   393,    12,
     119,     9,    54,   148,   102,    99,   318,    23,     9,   318,
     318,    12,   103,   693,     9,   410,   194,    12,   148,   149,
      99,   122,   124,   153,   154,   155,   156,   563,   158,   147,
      12,    69,   162,   163,   693,   570,   185,    12,    90,   122,
     158,   102,   103,   124,   483,   194,   726,   328,   178,   330,
     102,   103,   182,   124,   103,   185,   186,   124,     0,    13,
     190,   479,   100,    15,   194,     3,    67,   105,    22,   107,
       9,   538,   190,    12,   430,   124,   206,   427,   116,   390,
     210,   211,   212,   421,   122,   441,   124,   554,   103,    90,
     220,   240,   222,   331,   112,   333,   114,   390,   228,   400,
     124,   231,   206,   352,   124,   354,   444,   445,   464,   100,
     240,   124,   100,   103,   105,   364,   234,   105,   248,   576,
     668,   372,    44,   124,   659,   255,     3,   378,   663,   124,
     182,    85,   148,   185,   434,   313,   387,     9,   105,     9,
      12,   271,    12,    97,    96,   206,   100,   637,   105,   210,
     211,   546,   101,    99,   206,   466,   102,   693,   210,   211,
     471,   556,     9,    85,   313,    12,   105,   479,   107,   318,
     479,   479,   469,   466,    96,   106,   427,   116,   471,   309,
     619,   101,   331,   313,   333,   124,   497,    48,   318,   440,
     469,   502,    69,   123,   550,   325,   434,   553,   328,   555,
     330,   331,   737,   333,   497,   732,    83,    68,   103,   502,
     340,   329,   717,     3,   553,   496,   555,   123,     8,     9,
      10,   100,   352,     3,   178,    99,   105,   100,   102,     9,
     568,   185,   186,    99,   188,     9,   102,   575,   416,   116,
     100,   698,   493,    90,   495,   122,   483,   101,   643,   203,
     204,   488,   124,   101,   124,   271,   386,     9,   388,   508,
      12,    26,    27,   393,   101,   102,   318,   416,   104,   520,
     116,   225,     9,   106,    48,    12,   328,   124,   330,    69,
     410,   532,   101,   102,   429,   403,   416,     0,   340,    69,
     106,   647,     5,    83,    68,   453,   454,   455,   456,   429,
     430,   255,   101,   102,   434,    99,   557,   124,   647,   704,
      23,   706,   707,     9,    99,   671,    12,   100,    70,    71,
      72,    28,    29,   102,   662,   101,   116,   100,    41,   478,
     479,   120,   122,    30,   572,     8,     9,    10,   576,   577,
      53,    54,   122,   107,   124,   701,    59,   118,   478,   479,
     124,   106,   482,   483,   123,   750,    99,    94,   488,   313,
       9,   756,   123,    12,   318,    99,   496,   115,   116,   117,
     324,   104,   124,   113,    70,    71,    72,    90,   615,   616,
      93,    99,    95,   620,   621,   102,   637,   124,   113,   102,
     103,     3,   446,   447,   448,     3,   104,     9,    94,   113,
      12,     9,   109,   110,    12,   550,   717,    99,   553,   104,
     555,   101,   102,   429,   430,   104,   546,   668,   548,   104,
     550,    99,   567,   553,   717,   555,   556,   479,   124,   730,
     116,   682,   386,    99,   147,   148,   674,   567,    99,   393,
     570,   395,   572,   397,   496,   158,   576,   577,   685,   449,
     450,   100,     9,   690,    41,    12,   410,    69,   107,    99,
     698,    69,     3,   457,   458,   178,    99,   116,     9,   182,
     123,    12,   185,   451,   452,   124,   100,   190,   210,   211,
     100,   194,     0,   734,   100,   615,   616,     5,   100,   619,
     620,   621,   100,   206,   639,   107,   100,   210,   211,   107,
       3,   123,   647,   652,   116,     8,     9,    10,   116,   639,
     122,   102,   124,   643,   122,    99,   124,   647,   246,   247,
      38,   234,   652,   104,   478,   479,   106,     9,    69,   659,
      12,   101,    53,   663,   550,   248,    54,   553,   251,   555,
     102,    59,   255,   100,   674,   101,   101,   501,   105,   698,
     107,   567,   101,    99,   570,   685,     3,    99,   271,   116,
     690,    79,     9,   102,   277,    12,    69,   124,   698,   100,
     102,    89,    93,   101,   704,    87,   706,   707,   123,    98,
       3,   122,    87,   124,   102,   103,     9,   113,   100,    12,
      99,   103,   546,    32,    33,    99,    35,    85,   103,   100,
     313,   113,   556,   100,   106,   318,   101,   737,   113,   101,
     101,   123,   325,   113,   104,   328,   329,   330,   123,   122,
     750,   124,    69,   639,   100,   107,   756,   340,   106,   101,
     101,   647,   101,   154,   116,   101,   157,   105,   159,   101,
     158,    99,   124,   659,   165,   102,    69,   663,     3,   113,
     101,   101,     3,     8,     9,    10,   101,     8,     9,    10,
      52,   100,   106,    99,   101,    22,   105,   185,   268,   108,
     191,   384,   190,   386,   567,   122,   194,   124,   459,   461,
     393,   548,   460,   548,    89,   462,   501,   240,   206,   643,
     403,   463,   210,   211,   340,   313,   327,   410,   619,   122,
     422,   124,   386,   416,   674,   497,   227,   222,   478,    -1,
      -1,   232,    -1,   234,    69,    -1,   429,   430,    69,    -1,
      -1,   737,   240,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     704,    -1,   706,   707,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,   479,   122,    -1,   482,
      -1,   122,   485,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,   496,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,   313,   750,    -1,    -1,    -1,
     318,    -1,   756,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,    -1,    -1,   331,    -1,   333,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   546,    -1,   548,    -1,   550,    -1,    -1,
     553,    -1,   555,   556,    -1,    -1,   367,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   567,    -1,    -1,   570,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,   113,    -1,    12,    -1,    -1,    -1,   119,
      -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,   416,    -1,
      -1,   614,    -1,    -1,   617,    -1,   619,    -1,    -1,   622,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,   439,    -1,    -1,   442,    -1,   639,    -1,    -1,    -1,
     643,    68,    69,    -1,   647,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,   659,    84,    -1,    86,
     663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     478,   479,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,   684,    -1,   686,    -1,   112,   689,   114,   691,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,   126,
      -1,   704,    -1,   706,   707,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   721,    -1,
      -1,   724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   737,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   750,    -1,    -1,
      -1,    -1,    -1,   756,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,   579,    -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    79,    -1,    81,    82,    -1,    84,
      85,    86,    87,    88,   652,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,   100,    -1,    -1,   103,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,   114,
      -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
     698,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      73,    -1,    75,    76,    77,    78,    79,    -1,    81,    82,
      -1,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,    -1,    -1,
     103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,
      -1,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,
      -1,   124,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    78,    79,    -1,
      81,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,
     121,   122,    -1,   124,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    48,
      -1,    50,    -1,    -1,    53,    54,    -1,    56,    57,    58,
      -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,
      -1,    -1,   121,   122,    -1,   124,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    48,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    -1,     3,   100,    -1,    -1,    -1,     8,     9,    10,
     107,    12,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      36,    37,    38,    -1,    -1,   116,    42,    43,    44,    -1,
      -1,   122,    -1,   124,    50,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    67,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,     3,    79,    -1,    81,    -1,     8,     9,    10,
      -1,    12,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    36,    37,    38,    -1,    -1,
     116,    42,    43,    44,    -1,    -1,   122,    -1,   124,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,   116,    42,    43,    44,    -1,
      -1,   122,    -1,   124,    50,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,     3,    79,    -1,    81,    -1,     8,     9,    10,
      -1,    12,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
     116,    42,    43,    44,    -1,    -1,   122,    -1,   124,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,     3,    79,    -1,
      81,    -1,     8,     9,    10,    -1,    12,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,   116,    42,    43,    44,    -1,
      -1,   122,    -1,   124,    50,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,     3,     4,     5,     6,
       7,   107,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    48,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    68,    69,   103,   104,    -1,    -1,
     107,    -1,    -1,    -1,    78,   112,    -1,   114,    -1,   116,
      84,    85,    86,    -1,   121,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,
     114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,
     124,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    68,
      69,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,   100,    -1,
       3,     4,     5,     6,     7,   107,     9,    -1,    -1,    12,
     112,   100,   114,    -1,   116,    -1,   105,    -1,   107,   121,
     122,    -1,   124,   112,    -1,   114,    -1,   116,    -1,    32,
      33,    -1,   121,   122,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    57,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    32,    33,
      -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   105,    57,   107,    -1,    -1,    -1,    -1,   112,
      -1,   114,    -1,   116,    68,    69,    -1,    -1,   121,   122,
      -1,   124,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    -1,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    12,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,
     114,    -1,   116,    32,    33,    -1,    -1,   121,   122,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,
      -1,    -1,   121,   122,    -1,   124,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    -1,    -1,   100,    -1,
     102,    -1,    -1,   105,    -1,   107,    -1,   109,   110,   111,
     112,   113,    -1,   115,   116,   117,   118,    -1,   120,   121,
     122,    -1,   124,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    54,
      -1,    56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    76,    77,    -1,    79,    -1,    81,    -1,     8,     9,
      10,    11,    12,    88,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,   124,
      50,    -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,
      60,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
       8,     9,    10,    73,    12,    -1,    76,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,   124,    -1,    64,    65,    -1,    -1,
      -1,     8,     9,    10,    -1,    12,    -1,    -1,    76,    77,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      -1,    38,   100,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,   124,    64,    65,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    -1,    38,   100,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,   124,    64,    65,
      -1,    -1,    -1,     8,     9,    10,    -1,    12,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,   124,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     8,     9,    10,    12,    36,    37,    38,    42,
      43,    44,    50,    53,    54,    56,    58,    60,    63,    64,
      65,    66,    67,    69,    73,    76,    77,    79,    81,    88,
      90,    91,    92,    93,    94,    95,    96,    97,   100,   107,
     116,   122,   124,   128,   129,   130,   131,   132,   133,   140,
     142,   143,   144,   145,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   201,   202,   203,
     204,   205,   207,   209,   210,   211,   212,   215,   216,   217,
     219,   220,   228,   233,   234,   235,   246,   253,   263,    12,
     100,     9,   142,   145,   195,   264,   100,    12,   131,   133,
     145,     7,   138,   103,   130,   133,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    48,
      68,   100,   102,   105,   107,   109,   110,   111,   112,   113,
     115,   116,   117,   118,   120,   121,   122,   145,   193,   222,
     247,   254,    12,   266,    12,    67,    90,   145,    12,   145,
     215,   131,    12,    12,     0,    83,   116,   131,   143,   195,
     186,    56,    99,   189,   213,   214,   215,    87,   123,   249,
     256,   279,   100,   105,   215,   103,    12,   133,   145,     9,
      12,   145,   220,    11,   190,   225,   226,   227,   116,   195,
     195,   138,   133,   145,   103,   133,   103,   186,   206,   263,
     103,   103,   113,   145,   105,   105,   101,   106,   222,   277,
      12,   145,   217,   248,   283,   145,   143,   145,    12,   129,
     145,    12,   145,   143,   145,   101,   145,   145,   143,    99,
     102,   100,   113,   230,   256,   274,   279,   279,    12,   131,
     133,   145,   250,   251,   252,   103,   177,   229,   225,     4,
       5,     6,    12,    32,    33,    48,    57,    68,    78,    84,
      86,   100,   107,   112,   114,   116,   121,   122,   134,   135,
     136,   137,   138,   139,   141,   142,   146,   148,   149,   150,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   173,   275,    70,    71,    72,    93,
      99,   133,   144,   190,   209,   215,   228,   236,   237,   238,
     239,   245,   281,   133,   145,   123,   242,   133,   100,   145,
     100,   100,   215,   217,   223,   224,   276,   278,   101,    11,
     102,   101,   133,   133,   198,   199,   200,   273,   263,   104,
     206,   206,    12,   129,   145,   208,   106,   106,   145,   283,
     133,    99,   143,   129,   145,    99,   129,   145,   143,    99,
     214,   215,    85,   147,   168,   169,   170,   260,   103,   170,
     231,   229,   229,   131,   145,   131,   102,   100,    12,    39,
      40,    46,    47,    49,    59,    61,    62,    67,    75,    82,
      87,    98,   133,   145,   170,   172,   174,   175,   176,   177,
     178,   179,   181,   183,   184,   187,   190,   255,   270,   271,
     101,    48,    68,   157,   157,   105,   157,   100,   151,   267,
     100,   148,   172,   221,   222,   157,   157,    32,    33,    35,
     100,   105,   108,   157,    13,    34,   115,   116,   117,   112,
     114,    22,    23,    28,    29,   109,   110,    26,    27,   107,
     120,   118,    30,    31,   119,   106,   123,    99,    99,   215,
     238,   113,   240,   241,    99,   282,   281,    99,   102,   123,
     104,   133,    12,    94,   131,   145,   243,   244,   245,   242,
     225,   225,   223,   113,   276,   113,   100,   105,    11,   227,
      99,   102,   113,   104,   104,   104,   104,   129,   145,   129,
      99,    99,    99,   129,    99,   143,    99,   170,   285,   101,
     102,    14,    15,    16,    17,    18,    19,    20,    21,    24,
      25,   113,   171,   104,   231,   232,    41,   257,   258,   131,
     250,   147,   265,    99,   173,    99,   123,   174,   100,   133,
     100,   133,   270,   100,   177,   100,   123,   102,   174,    99,
     104,    85,   218,   219,   261,   105,   157,   267,   106,   147,
     100,   152,   222,   221,   101,   101,   100,   217,   276,    12,
     142,   265,   172,    12,   142,   157,   157,   158,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   162,   162,
     163,   164,   165,   166,   167,   172,   173,    99,   126,   173,
     215,   239,   281,   131,   145,    12,   245,   264,   131,   102,
      12,    94,   264,   101,   101,   101,   170,   170,   225,   275,
     199,   173,   129,    99,    99,   170,   170,   102,   280,   100,
     257,   284,   101,   123,   174,    98,   176,   182,   188,    99,
     172,   180,   222,    99,   180,   257,   180,   174,   170,   100,
     261,   218,   106,   100,   152,   157,   101,   221,   100,   155,
     268,   105,   153,   154,   217,   269,   101,   157,   142,   101,
     106,   142,   123,   131,   264,    12,   264,   131,   244,   264,
      12,   264,   131,   101,   106,   231,   104,    11,   222,   259,
     174,   100,   180,   272,   101,   215,   101,   101,   221,   262,
     286,   157,   221,   268,   101,   265,   172,   105,   269,   170,
     131,   264,   131,   131,   264,   131,   218,   261,   215,   223,
     101,   172,    99,   174,   113,   174,   174,   102,   101,   101,
     268,   101,   106,   173,   131,   131,   261,   177,   101,   270,
      52,   170,   221,   268,   106,    99,   101,   174,   174
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
#line 161 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 3:
#line 165 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 4:
#line 170 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 5:
#line 175 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 6:
#line 180 "120gram.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); ;}
    break;

  case 7:
#line 193 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 8:
#line 197 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 9:
#line 198 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 10:
#line 199 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 11:
#line 200 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 12:
#line 201 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 13:
#line 205 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 14:
#line 209 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 15:
#line 213 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 16:
#line 217 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 17:
#line 221 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 18:
#line 222 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 19:
#line 230 "120gram.y"
    {(yyval.tptr) = alctree("start", 212, 1, (yyvsp[(1) - (1)].tptr)); t_unit = (yyval.tptr);;}
    break;

  case 20:
#line 238 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 21:
#line 239 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 22:
#line 240 "120gram.y"
    {(yyval.tptr) = alctree("primary_expression_219", 216, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 23:
#line 241 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 24:
#line 245 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 25:
#line 246 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 26:
#line 250 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 27:
#line 251 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 28:
#line 252 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 29:
#line 253 "120gram.y"
    {(yyval.tptr) = alctree("unqualified_id_232", 228, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 30:
#line 257 "120gram.y"
    {(yyval.tptr) = alctree("qualified_id_236", 235, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 31:
#line 258 "120gram.y"
    {(yyval.tptr) = alctree("qualified_id_237", 235, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 32:
#line 262 "120gram.y"
    {(yyval.tptr) = alctree("nested_name_specifier_241", 240, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 33:
#line 263 "120gram.y"
    {(yyval.tptr) = alctree("nested_name_specifier_242", 240, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 34:
#line 264 "120gram.y"
    {(yyval.tptr) = alctree("nested_name_specifier_243", 240, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 35:
#line 268 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 36:
#line 269 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_247", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 37:
#line 270 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_248", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 38:
#line 275 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_251", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 39:
#line 276 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_252", 245, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 40:
#line 281 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_255", 245, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 41:
#line 282 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_256", 245, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 42:
#line 283 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_257", 245, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 43:
#line 284 "120gram.y"
    {(yyval.tptr) = alctree("postfix_expression_258", 245, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 44:
#line 296 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 45:
#line 297 "120gram.y"
    {(yyval.tptr) = alctree("expression_list_269", 267, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); ;}
    break;

  case 46:
#line 301 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 47:
#line 302 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_274", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 48:
#line 303 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_275", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 49:
#line 304 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_276", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 50:
#line 305 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_277", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 51:
#line 306 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_278", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 52:
#line 307 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_279", 272, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 53:
#line 308 "120gram.y"
    {(yyval.tptr) = alctree("unary_expression_280", 272, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 54:
#line 309 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 55:
#line 310 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 56:
#line 314 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 57:
#line 315 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 58:
#line 316 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 59:
#line 317 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 60:
#line 321 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_293", 292, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 61:
#line 322 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_294", 292, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 62:
#line 323 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_295", 292, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 63:
#line 324 "120gram.y"
    {(yyval.tptr) = alctree("new_expression_296", 292, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 64:
#line 328 "120gram.y"
    {(yyval.tptr) = alctree("new_placement_300", 299, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 65:
#line 332 "120gram.y"
    {(yyval.tptr) = alctree("new_type_id_304", 303, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 66:
#line 336 "120gram.y"
    {(yyval.tptr) = alctree("new_declarator_308", 307, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 67:
#line 337 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 68:
#line 341 "120gram.y"
    {(yyval.tptr) = alctree("direct_new_declarator_313", 312, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 69:
#line 342 "120gram.y"
    {(yyval.tptr) = alctree("direct_new_declarator_314", 312, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 70:
#line 346 "120gram.y"
    {(yyval.tptr) = alctree("new_initializer_318", 317, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 71:
#line 350 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_322", 321, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 72:
#line 351 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_323", 321, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 73:
#line 352 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_324", 321, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 74:
#line 353 "120gram.y"
    {(yyval.tptr) = alctree("delete_expression_325", 321, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 75:
#line 357 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 76:
#line 358 "120gram.y"
    {(yyval.tptr) = alctree("cast_expression_330", 328, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 77:
#line 362 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 78:
#line 363 "120gram.y"
    {(yyval.tptr) = alctree("pm_expression_335", 333, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 79:
#line 364 "120gram.y"
    {(yyval.tptr) = alctree("pm_expression_336", 333, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 80:
#line 368 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 81:
#line 369 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_341", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 82:
#line 370 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_342", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 83:
#line 371 "120gram.y"
    {(yyval.tptr) = alctree("multiplicative_expression_343", 339, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 84:
#line 375 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 85:
#line 376 "120gram.y"
    {(yyval.tptr) = alctree("additive_expression_348", 346, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 86:
#line 377 "120gram.y"
    {(yyval.tptr) = alctree("additive_expression_349", 346, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 87:
#line 381 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 88:
#line 382 "120gram.y"
    {(yyval.tptr) = alctree("shift_expression_354", 352, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 89:
#line 383 "120gram.y"
    {(yyval.tptr) = alctree("shift_expression_355", 352, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 90:
#line 387 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 91:
#line 388 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_360", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 92:
#line 389 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_361", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 93:
#line 390 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_362", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 94:
#line 391 "120gram.y"
    {(yyval.tptr) = alctree("relational_expression_363", 358, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 95:
#line 395 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 96:
#line 396 "120gram.y"
    {(yyval.tptr) = alctree("equality_expression_368", 366, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 97:
#line 397 "120gram.y"
    {(yyval.tptr) = alctree("equality_expression_369", 366, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 98:
#line 401 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 99:
#line 402 "120gram.y"
    {(yyval.tptr) = alctree("and_expression_374", 372, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 100:
#line 406 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 101:
#line 407 "120gram.y"
    {(yyval.tptr) = alctree("exclusive_or_expression_379", 377, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 102:
#line 411 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 103:
#line 412 "120gram.y"
    {(yyval.tptr) = alctree("inclusive_or_expression_384", 382, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 104:
#line 416 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 105:
#line 417 "120gram.y"
    {(yyval.tptr) = alctree("logical_and_expression_389", 387, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 106:
#line 421 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 107:
#line 422 "120gram.y"
    {(yyval.tptr) = alctree("logical_or_expression_394", 392, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 108:
#line 426 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 109:
#line 427 "120gram.y"
    {(yyval.tptr) = alctree("conditional_expression_399", 397, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 110:
#line 431 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 111:
#line 432 "120gram.y"
    {(yyval.tptr) = alctree("assignment_expression_404", 402, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 112:
#line 433 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 113:
#line 437 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 114:
#line 438 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 115:
#line 439 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 116:
#line 440 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 117:
#line 441 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 118:
#line 442 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 119:
#line 443 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 120:
#line 444 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 121:
#line 445 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 122:
#line 446 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 123:
#line 447 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 124:
#line 451 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 125:
#line 452 "120gram.y"
    {(yyval.tptr) = alctree("expression_424", 422, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 126:
#line 456 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 127:
#line 464 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 128:
#line 465 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 129:
#line 466 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 130:
#line 467 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 131:
#line 468 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 132:
#line 469 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 133:
#line 470 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 134:
#line 471 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 135:
#line 475 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_447", 446, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 136:
#line 476 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_448", 446, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 137:
#line 477 "120gram.y"
    {(yyval.tptr) = alctree("labeled_statement_449", 446, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 138:
#line 481 "120gram.y"
    {(yyval.tptr) = alctree("expression_statement_453", 452, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 139:
#line 485 "120gram.y"
    {(yyval.tptr) = alctree("compound_statement_457", 456, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 140:
#line 489 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 141:
#line 490 "120gram.y"
    {(yyval.tptr) = alctree("statement_seq_462", 460, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 142:
#line 494 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_466", 465, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 143:
#line 495 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_467", 465, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 144:
#line 496 "120gram.y"
    {(yyval.tptr) = alctree("selection_statement_468", 465, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 145:
#line 500 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 146:
#line 501 "120gram.y"
    {(yyval.tptr) = alctree("condition_473", 471, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 147:
#line 505 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_477", 476, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 148:
#line 506 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_478", 476, 7, (yyvsp[(1) - (7)].tptr), (yyvsp[(2) - (7)].tptr), (yyvsp[(3) - (7)].tptr), (yyvsp[(4) - (7)].tptr), (yyvsp[(5) - (7)].tptr), (yyvsp[(6) - (7)].tptr), (yyvsp[(7) - (7)].tptr));;}
    break;

  case 149:
#line 507 "120gram.y"
    {(yyval.tptr) = alctree("iteration_statement_479", 476, 8, (yyvsp[(1) - (8)].tptr), (yyvsp[(2) - (8)].tptr), (yyvsp[(3) - (8)].tptr), (yyvsp[(4) - (8)].tptr), (yyvsp[(5) - (8)].tptr), (yyvsp[(6) - (8)].tptr), (yyvsp[(7) - (8)].tptr), (yyvsp[(8) - (8)].tptr));;}
    break;

  case 150:
#line 511 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 151:
#line 512 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 152:
#line 516 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_488", 487, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 153:
#line 517 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_489", 487, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 154:
#line 518 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_490", 487, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 155:
#line 519 "120gram.y"
    {(yyval.tptr) = alctree("jump_statement_491", 487, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 156:
#line 523 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 157:
#line 531 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 158:
#line 532 "120gram.y"
    {(yyval.tptr) = alctree("declaration_seq_504", 502, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 159:
#line 536 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 160:
#line 537 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 161:
#line 541 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 162:
#line 542 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 163:
#line 546 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr); ;}
    break;

  case 164:
#line 547 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 165:
#line 548 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 166:
#line 549 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 167:
#line 550 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 168:
#line 554 "120gram.y"
    {(yyval.tptr) = alctree("simple_declaration_526", 525, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 169:
#line 555 "120gram.y"
    {(yyval.tptr) = alctree("simple_declaration_527", 525, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 170:
#line 559 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 171:
#line 560 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 172:
#line 561 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 173:
#line 562 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 174:
#line 563 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 175:
#line 567 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 176:
#line 568 "120gram.y"
    {(yyval.tptr) = alctree("decl_specifier_seq_540", 538, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 177:
#line 572 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 178:
#line 573 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 179:
#line 574 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 180:
#line 575 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 181:
#line 576 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 182:
#line 580 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 183:
#line 581 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 184:
#line 582 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 185:
#line 586 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 186:
#line 587 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 187:
#line 588 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 188:
#line 589 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 189:
#line 590 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 190:
#line 594 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 191:
#line 595 "120gram.y"
    {(yyval.tptr) = alctree("simple_type_specifier_567", 565, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 192:
#line 596 "120gram.y"
    {(yyval.tptr) = alctree("simple_type_specifier_568", 565, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 193:
#line 597 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 194:
#line 598 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 195:
#line 599 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 196:
#line 600 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 197:
#line 601 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 198:
#line 602 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 199:
#line 603 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 200:
#line 604 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 201:
#line 605 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 202:
#line 606 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 203:
#line 607 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 204:
#line 611 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 205:
#line 612 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 206:
#line 613 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 207:
#line 617 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_589", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 208:
#line 618 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_590", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 209:
#line 619 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_591", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 210:
#line 620 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_592", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 211:
#line 621 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_593", 588, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 212:
#line 622 "120gram.y"
    {(yyval.tptr) = alctree("elaborated_type_specifier_594", 588, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 213:
#line 633 "120gram.y"
    {(yyval.tptr) = alctree("enum_specifier_605", 604, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 214:
#line 637 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 215:
#line 638 "120gram.y"
    {(yyval.tptr) = alctree("enumerator_list_610", 608, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 216:
#line 642 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 217:
#line 643 "120gram.y"
    {(yyval.tptr) = alctree("enumerator_definition_615", 613, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 218:
#line 647 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 219:
#line 662 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 220:
#line 663 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 221:
#line 667 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 222:
#line 668 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 223:
#line 672 "120gram.y"
    {(yyval.tptr) = alctree("original_namespace_definition_644", 643, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 224:
#line 676 "120gram.y"
    {(yyval.tptr) = alctree("extension_namespace_definition_648", 647, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 225:
#line 680 "120gram.y"
    {(yyval.tptr) = alctree("unnamed_namespace_definition_652", 651, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 226:
#line 684 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 227:
#line 694 "120gram.y"
    {(yyval.tptr) = alctree("namespace_alias_definition_666", 665, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 228:
#line 699 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_671", 670, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 229:
#line 700 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_672", 670, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 230:
#line 701 "120gram.y"
    {(yyval.tptr) = alctree("qualified_namespace_specifier_673", 670, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 231:
#line 702 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 232:
#line 706 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_678", 677, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 233:
#line 707 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_679", 677, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 234:
#line 708 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_680", 677, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 235:
#line 709 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_681", 677, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 236:
#line 710 "120gram.y"
    {(yyval.tptr) = alctree("using_declaration_682", 677, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 237:
#line 714 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_686", 685, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 238:
#line 715 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_687", 685, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 239:
#line 716 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_688", 685, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 240:
#line 717 "120gram.y"
    {(yyval.tptr) = alctree("using_directive_689", 685, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 241:
#line 722 "120gram.y"
    {(yyval.tptr) = alctree("asm_definition_694", 693, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 242:
#line 726 "120gram.y"
    {(yyval.tptr) = alctree("linkage_specification_698", 697, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 243:
#line 727 "120gram.y"
    {(yyval.tptr) = alctree("linkage_specification_699", 697, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 244:
#line 735 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 245:
#line 736 "120gram.y"
    {(yyval.tptr) = alctree("init_declarator_list_708", 706, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 246:
#line 740 "120gram.y"
    {(yyval.tptr) = alctree("init_declarator_712", 711, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 247:
#line 744 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 248:
#line 745 "120gram.y"
    {(yyval.tptr) = alctree("declarator_717", 715, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 249:
#line 749 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 250:
#line 750 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_722", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 251:
#line 751 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_723", 720, 4, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr));;}
    break;

  case 252:
#line 752 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_724", 720, 4, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr));;}
    break;

  case 253:
#line 753 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_725", 720, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 254:
#line 754 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_726", 720, 3, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));;}
    break;

  case 255:
#line 755 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_727", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 256:
#line 756 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_728", 720, 5, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr));;}
    break;

  case 257:
#line 757 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_729", 720, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 258:
#line 758 "120gram.y"
    {(yyval.tptr) = alctree("direct_declarator_730", 720, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 259:
#line 762 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 260:
#line 764 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 261:
#line 765 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_737", 733, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 262:
#line 767 "120gram.y"
    {(yyval.tptr) = alctree("ptr_operator_739", 733, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 263:
#line 772 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 264:
#line 773 "120gram.y"
    {(yyval.tptr) = alctree("cv_qualifier_seq_745", 743, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 265:
#line 777 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 266:
#line 778 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 267:
#line 782 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 268:
#line 783 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_755", 753, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 269:
#line 784 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_756", 753, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 270:
#line 785 "120gram.y"
    {(yyval.tptr) = alctree("declarator_id_757", 753, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 271:
#line 789 "120gram.y"
    {(yyval.tptr) = alctree("type_id_761", 760, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 272:
#line 793 "120gram.y"
    {(yyval.tptr) = alctree("type_specifier_seq_765", 764, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 273:
#line 797 "120gram.y"
    {(yyval.tptr) = alctree("abstract_declarator_769", 768, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 274:
#line 798 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 275:
#line 802 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_774", 773, 6, (yyvsp[(1) - (6)].tptr), (yyvsp[(2) - (6)].tptr), (yyvsp[(3) - (6)].tptr), (yyvsp[(4) - (6)].tptr), (yyvsp[(5) - (6)].tptr), (yyvsp[(6) - (6)].tptr));;}
    break;

  case 276:
#line 803 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_775", 773, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 277:
#line 804 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_776", 773, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 278:
#line 805 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_777", 773, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 279:
#line 806 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_778", 773, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 280:
#line 807 "120gram.y"
    {(yyval.tptr) = alctree("direct_abstract_declarator_779", 773, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 281:
#line 811 "120gram.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); ;}
    break;

  case 282:
#line 812 "120gram.y"
    { (yyval.tptr) = NULL; ;}
    break;

  case 283:
#line 813 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 284:
#line 814 "120gram.y"
    { (yyval.tptr) = NULL; ;}
    break;

  case 285:
#line 815 "120gram.y"
    { (yyval.tptr) = NULL; ;}
    break;

  case 286:
#line 819 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 287:
#line 820 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_list_792", 790, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 288:
#line 824 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_796", 795, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 289:
#line 825 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_797", 795, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 290:
#line 826 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_798", 795, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 291:
#line 827 "120gram.y"
    {(yyval.tptr) = alctree("parameter_declaration_799", 795, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 292:
#line 831 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_803", 802, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 293:
#line 832 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_804", 802, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 294:
#line 833 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_805", 802, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 295:
#line 834 "120gram.y"
    {(yyval.tptr) = alctree("function_definition_806", 802, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 296:
#line 838 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 297:
#line 842 "120gram.y"
    {(yyval.tptr) = alctree("initializer_814", 813, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 298:
#line 843 "120gram.y"
    {(yyval.tptr) = alctree("initializer_815", 813, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 299:
#line 847 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 300:
#line 848 "120gram.y"
    {(yyval.tptr) = alctree("initializer_clause_820", 818, 3, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));;}
    break;

  case 301:
#line 849 "120gram.y"
    {(yyval.tptr) = alctree("initializer_clause_821", 818, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 302:
#line 853 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 303:
#line 854 "120gram.y"
    {(yyval.tptr) = alctree("initializer_list_826", 824, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 304:
#line 862 "120gram.y"
    { (yyval.tptr) = alctree("class_specifier_832", 831, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr)); ;}
    break;

  case 305:
#line 868 "120gram.y"
    { (yyval.tptr) = alctree("class_head_836", 837, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); ;}
    break;

  case 306:
#line 869 "120gram.y"
    {(yyval.tptr) = alctree("class_head_839", 837, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 307:
#line 870 "120gram.y"
    {(yyval.tptr) = alctree("class_head_840", 837, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 308:
#line 871 "120gram.y"
    {(yyval.tptr) = alctree("class_head_841", 837, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 309:
#line 875 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 310:
#line 876 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 311:
#line 877 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 312:
#line 881 "120gram.y"
    {(yyval.tptr) = alctree("member_specification_851", 850, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 313:
#line 882 "120gram.y"
    {(yyval.tptr) = alctree("member_specification_852", 850, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 314:
#line 886 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_856", 855, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 315:
#line 887 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_857", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 316:
#line 888 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_858", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 317:
#line 889 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 318:
#line 890 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_860", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 319:
#line 891 "120gram.y"
    {(yyval.tptr) = alctree("member_declaration_861", 855, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 321:
#line 896 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 322:
#line 897 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_list_867", 865, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 323:
#line 901 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 324:
#line 902 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_872", 870, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 325:
#line 903 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_873", 870, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 326:
#line 904 "120gram.y"
    {(yyval.tptr) = alctree("member_declarator_874", 870, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 327:
#line 915 "120gram.y"
    {(yyval.tptr) = NULL; ;}
    break;

  case 328:
#line 919 "120gram.y"
    {(yyval.tptr) = alctree("constant_initializer_887", 886, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 329:
#line 927 "120gram.y"
    {(yyval.tptr) = alctree("base_clause_895", 894, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 330:
#line 931 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 331:
#line 932 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_list_900", 898, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 332:
#line 936 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_904", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 333:
#line 937 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_905", 903, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 334:
#line 938 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_906", 903, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 335:
#line 939 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 336:
#line 940 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_908", 903, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 337:
#line 941 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_909", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 338:
#line 942 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_910", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 339:
#line 943 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_911", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 340:
#line 944 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_912", 903, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 341:
#line 945 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_913", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 342:
#line 946 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_914", 903, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 343:
#line 947 "120gram.y"
    {(yyval.tptr) = alctree("base_specifier_915", 903, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 344:
#line 951 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 345:
#line 952 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 346:
#line 953 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 347:
#line 961 "120gram.y"
    {(yyval.tptr) = alctree("conversion_function_id_929", 928, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 348:
#line 965 "120gram.y"
    {(yyval.tptr) = alctree("conversion_type_id_933", 932, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 349:
#line 969 "120gram.y"
    {(yyval.tptr) = alctree("conversion_declarator_937", 936, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 350:
#line 973 "120gram.y"
    {(yyval.tptr) = alctree("ctor_initializer_941", 940, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 351:
#line 977 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 352:
#line 978 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_list_946", 944, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 353:
#line 982 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_950", 949, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 354:
#line 986 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_954", 953, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 355:
#line 987 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_955", 953, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 356:
#line 988 "120gram.y"
    {(yyval.tptr) = alctree("mem_initializer_id_956", 953, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 357:
#line 989 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 358:
#line 990 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 359:
#line 998 "120gram.y"
    {(yyval.tptr) = alctree("operator_function_id_966", 965, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 360:
#line 1002 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 361:
#line 1003 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 362:
#line 1004 "120gram.y"
    {(yyval.tptr) = alctree("operator_972", 969, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 363:
#line 1005 "120gram.y"
    {(yyval.tptr) = alctree("operator_973", 969, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 364:
#line 1006 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 365:
#line 1007 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 366:
#line 1008 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 367:
#line 1009 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 368:
#line 1010 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 369:
#line 1011 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 370:
#line 1012 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 371:
#line 1013 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 372:
#line 1014 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 373:
#line 1015 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 374:
#line 1016 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 375:
#line 1017 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 376:
#line 1018 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 377:
#line 1019 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 378:
#line 1020 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 379:
#line 1021 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 380:
#line 1022 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 381:
#line 1023 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 382:
#line 1024 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 383:
#line 1025 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 384:
#line 1026 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 385:
#line 1027 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 386:
#line 1028 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 387:
#line 1029 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 388:
#line 1030 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 389:
#line 1031 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 390:
#line 1032 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 391:
#line 1033 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 392:
#line 1034 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 393:
#line 1035 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 394:
#line 1036 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 395:
#line 1037 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 396:
#line 1038 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 397:
#line 1039 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 398:
#line 1040 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 399:
#line 1041 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 400:
#line 1042 "120gram.y"
    {(yyval.tptr) = alctree("operator_1010", 969, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 401:
#line 1043 "120gram.y"
    {(yyval.tptr) = alctree("operator_1011", 969, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 402:
#line 1100 "120gram.y"
    {(yyval.tptr) = alctree("try_block_1068", 1067, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 403:
#line 1104 "120gram.y"
    {(yyval.tptr) = alctree("function_try_block_1072", 1071, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 404:
#line 1108 "120gram.y"
    {(yyval.tptr) = alctree("handler_seq_1076", 1075, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 405:
#line 1112 "120gram.y"
    {(yyval.tptr) = alctree("handler_1080", 1079, 5, (yyvsp[(1) - (5)].tptr), (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr), (yyvsp[(5) - (5)].tptr));;}
    break;

  case 406:
#line 1116 "120gram.y"
    {(yyval.tptr) = alctree("exception_declaration_1084", 1083, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 407:
#line 1117 "120gram.y"
    {(yyval.tptr) = alctree("exception_declaration_1085", 1083, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 408:
#line 1118 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 409:
#line 1119 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 410:
#line 1123 "120gram.y"
    {(yyval.tptr) = alctree("throw_expression_1091", 1090, 2, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr));;}
    break;

  case 411:
#line 1127 "120gram.y"
    {(yyval.tptr) = alctree("exception_specification_1095", 1094, 4, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr), (yyvsp[(4) - (4)].tptr));;}
    break;

  case 412:
#line 1131 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 413:
#line 1132 "120gram.y"
    {(yyval.tptr) = alctree("type_id_list_1100", 1098, 3, (yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));;}
    break;

  case 414:
#line 1140 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 415:
#line 1141 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 416:
#line 1145 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 417:
#line 1146 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 418:
#line 1150 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 419:
#line 1151 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 420:
#line 1155 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 421:
#line 1156 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 422:
#line 1160 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 423:
#line 1161 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 424:
#line 1165 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 425:
#line 1166 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 426:
#line 1170 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 427:
#line 1171 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 428:
#line 1175 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 429:
#line 1176 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 430:
#line 1180 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 431:
#line 1181 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 432:
#line 1185 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 433:
#line 1186 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 434:
#line 1190 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 435:
#line 1191 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 436:
#line 1195 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 437:
#line 1196 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 438:
#line 1200 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 439:
#line 1201 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 440:
#line 1205 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 441:
#line 1206 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 442:
#line 1210 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 443:
#line 1211 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 444:
#line 1215 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 445:
#line 1216 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 446:
#line 1220 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 447:
#line 1221 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 448:
#line 1225 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 449:
#line 1226 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 450:
#line 1230 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 451:
#line 1231 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 452:
#line 1235 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 453:
#line 1236 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 454:
#line 1240 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 455:
#line 1241 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 456:
#line 1251 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 457:
#line 1252 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 458:
#line 1256 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 459:
#line 1257 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;

  case 460:
#line 1261 "120gram.y"
    {(yyval.tptr) = NULL;;}
    break;

  case 461:
#line 1262 "120gram.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);;}
    break;


/* Line 1267 of yacc.c.  */
#line 5138 "120gram.tab.c"
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


#line 1265 "120gram.y"


static void yyerror(char *s) {
	fprintf(stderr, "line %d: %s\n", yylineno, s);
}

