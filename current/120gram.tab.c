/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 44 "120gram.y" /* yacc.c:339  */

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


#line 92 "120gram.tab.c" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "120gram.tab.h".  */
#ifndef YY_YY_120GRAM_TAB_H_INCLUDED
# define YY_YY_120GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 70 "120gram.y" /* yacc.c:355  */

  struct tree *tptr;

#line 237 "120gram.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "120gram.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  178
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  502
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  855

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   155,   155,   159,   164,   169,   170,   174,   178,   187,
     191,   192,   193,   194,   195,   199,   203,   207,   211,   215,
     216,   224,   232,   233,   234,   235,   239,   240,   244,   245,
     246,   247,   251,   252,   256,   257,   258,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   284,   285,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   302,   303,
     304,   305,   309,   310,   311,   312,   316,   320,   324,   325,
     329,   330,   334,   338,   339,   340,   341,   345,   346,   350,
     351,   352,   356,   357,   358,   359,   363,   364,   365,   369,
     370,   371,   375,   376,   377,   378,   379,   383,   384,   385,
     389,   390,   394,   395,   399,   400,   404,   405,   409,   410,
     414,   415,   419,   420,   421,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   439,   440,   444,   452,
     453,   454,   455,   456,   457,   458,   459,   463,   464,   465,
     469,   473,   477,   478,   482,   483,   484,   488,   489,   493,
     494,   495,   499,   500,   504,   505,   506,   507,   511,   519,
     520,   524,   525,   526,   527,   528,   529,   530,   534,   535,
     536,   537,   538,   542,   543,   547,   548,   549,   550,   551,
     555,   556,   560,   561,   562,   563,   564,   568,   569,   570,
     574,   575,   576,   577,   578,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   599,
     600,   601,   605,   606,   607,   608,   609,   610,   611,   621,
     625,   626,   630,   631,   635,   650,   651,   655,   656,   660,
     664,   668,   672,   682,   687,   688,   689,   690,   694,   695,
     696,   697,   698,   702,   703,   704,   705,   710,   714,   715,
     723,   724,   728,   732,   733,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   750,   751,   752,   753,   754,
     755,   756,   760,   761,   765,   766,   770,   771,   772,   773,
     777,   781,   785,   786,   790,   791,   792,   793,   794,   795,
     799,   800,   801,   802,   803,   807,   808,   812,   813,   814,
     815,   819,   820,   821,   822,   826,   830,   831,   835,   836,
     837,   841,   842,   850,   855,   856,   857,   858,   862,   863,
     864,   868,   869,   873,   874,   875,   876,   877,   878,   879,
     883,   884,   887,   888,   889,   890,   891,   902,   906,   914,
     918,   919,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   933,   934,   938,   939,   940,   948,   952,   956,
     960,   964,   965,   969,   973,   974,   975,   976,   977,   985,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1038,  1042,  1043,  1047,  1048,  1051,  1052,  1053,
    1054,  1055,  1056,  1060,  1064,  1065,  1069,  1070,  1071,  1075,
    1079,  1087,  1091,  1095,  1099,  1103,  1104,  1105,  1106,  1110,
    1114,  1118,  1119,  1127,  1128,  1132,  1133,  1137,  1138,  1142,
    1143,  1147,  1148,  1152,  1153,  1157,  1158,  1162,  1163,  1167,
    1168,  1172,  1173,  1177,  1178,  1182,  1183,  1187,  1188,  1192,
    1193,  1197,  1198,  1202,  1203,  1207,  1208,  1212,  1213,  1217,
    1218,  1222,  1223,  1227,  1228,  1232,  1233,  1237,  1238,  1242,
    1243,  1247,  1248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "handler_seq_opt", "assignment_expression_opt", "type_id_list_opt", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -631

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-631)))

#define YYTABLE_NINF -490

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2232,  -631,  -631,    93,  -631,   388,   -55,  -631,  -631,  -631,
    -631,  -631,  -631,    47,  -631,  -631,    55,  -631,  -631,  -631,
    -631,  -631,  -631,    71,  3144,  -631,  -631,  -631,  -631,  -631,
    2001,  -631,    67,  -631,  -631,   356,  -631,  -631,  -631,  -631,
     851,  -631,    13,    34,  -631,  -631,  -631,   124,  -631,   143,
    -631,    35,  -631,   203,  -631,  -631,  -631,   428,  2232,  -631,
    -631,  -631,  -631,  2309,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,   -27,    21,   851,  -631,  -631,  -631,  -631,    88,    58,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,   148,   589,  3262,
    -631,  -631,   979,  -631,    45,    55,    28,   143,   109,   236,
    -631,  2078,  2232,   146,    14,    95,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   194,   198,
     178,  -631,   200,  -631,  -631,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,    45,  3679,   981,  -631,
    -631,   233,  -631,  -631,    95,   153,    86,   280,    66,   388,
     205,   207,  -631,    13,  -631,    95,    95,  1905,  -631,    66,
      13,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   -12,  -631,
     -22,   223,   129,  -631,  -631,   211,  3262,  2939,  -631,  2155,
      28,   259,   236,   261,   278,   388,    25,   286,  -631,  2386,
     291,    23,  -631,    13,  -631,  -631,   293,  -631,   236,   236,
    -631,  2232,  -631,   303,  -631,  2232,  2232,   325,  -631,   304,
     310,  -631,  -631,  -631,  -631,    95,   305,   981,  -631,  -631,
    2232,   236,   331,    66,    95,    61,   300,    95,    66,   340,
     979,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   309,  2939,
    2939,   336,  2736,   342,  -631,   354,   357,  3026,   361,  -631,
    2794,  -631,   363,  1905,  2939,  -631,  -631,  2939,  -631,    34,
      35,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,   496,
    1002,  -631,  2939,  -631,  -631,  -631,    79,   285,   116,   243,
     195,   255,   366,   355,   364,   455,  1129,  -631,  -631,  -631,
     947,    44,  -631,  -631,  -631,  -631,  -631,   851,  2794,  2649,
    -631,  -631,  -631,   211,   211,    95,   143,  -631,    34,  -631,
     385,   395,  1377,  -631,  -631,   400,    54,    99,  -631,  -631,
     418,  -631,  -631,  -631,   204,  -631,   403,   430,  2463,  -631,
     662,   468,  -631,  2155,   191,  -631,   460,   482,  -631,   236,
     484,  -631,   259,  3339,  3262,   496,  3262,   855,   475,   423,
    -631,   150,   478,   180,  -631,  -631,  3429,  -631,   497,  -631,
    -631,   498,  -631,   491,   501,   503,  -631,   506,   507,    95,
     124,   300,   516,  -631,  -631,   504,  -631,  -631,   508,  -631,
     524,    64,   300,  -631,   534,    66,   535,  -631,  2881,   354,
    -631,  -631,  3679,   529,  -631,  3679,  2794,  -631,  3491,  3679,
    1905,  -631,  3679,  -631,  -631,  1905,  -631,   221,   539,  -631,
    -631,  -631,  -631,   700,  2794,  2794,   901,  -631,  2939,  2939,
    2939,  2939,  2939,  2939,  2939,  2939,  2939,  2939,  2939,  2939,
    2939,  2939,  2939,  2939,  2939,  2939,  2939,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  2939,  -631,  2794,
    2794,   712,   947,  -631,  1905,  -631,  -631,   132,   229,  -631,
    2562,  -631,  -631,  -631,   595,   143,    34,  -631,   129,  2794,
     542,  2939,   548,   526,  1659,   555,   236,   557,   236,  2794,
     561,   211,   563,   545,   571,  -631,  -631,  -631,  -631,  1536,
    -631,  -631,  -631,  -631,  -631,  2309,  -631,   578,   576,   202,
    -631,  2939,  -631,  -631,   662,   217,  1183,  -631,  -631,  -631,
    -631,  -631,  -631,   851,  2155,  -631,  -631,    95,   397,   143,
      34,   583,  -631,   452,  -631,   236,   577,    81,  -631,   154,
    -631,  -631,   594,   599,   601,  2794,  -631,  2794,  3262,  2939,
    -631,  -631,  -631,   236,  2939,  -631,  -631,  -631,  -631,   124,
     300,  -631,  -631,  1905,  -631,  -631,   607,  -631,   616,  -631,
     611,  -631,  3554,   608,  2939,   610,   238,  3679,   622,   716,
     623,   633,   628,   257,   639,  -631,  2794,  2939,   153,   689,
    -631,   640,   642,   161,   153,   951,  -631,  -631,  -631,    79,
      79,    79,   285,   285,   116,   116,   243,   243,   243,   243,
     195,   195,   255,   366,   355,   364,   455,    22,  -631,  -631,
    -631,  2794,  -631,  -631,   643,   641,  -631,   595,  -631,  -631,
     645,  -631,   637,  -631,  1659,   653,  1782,   664,  1905,   648,
     667,  1905,   595,  1905,  1659,  -631,  -631,  -631,   668,   685,
    -631,  -631,  -631,  -631,  -631,   661,  -631,  -631,   143,    34,
      95,   444,    34,  -631,   484,    95,   540,    34,   663,  3339,
     671,  3339,  2232,  -631,  -631,  -631,  -631,  -631,   680,   681,
    -631,  -631,  -631,   160,  -631,  -631,  2939,  3679,   622,   686,
    -631,   691,  -631,   688,  2794,  -631,  -631,  2794,  -631,   687,
     716,  -631,   695,  -631,   698,  -631,  -631,  -631,  -631,  -631,
     153,  -631,  -631,  -631,  -631,   153,  -631,  2794,  -631,  2649,
     697,  3617,  -631,  -631,  -631,  1659,  -631,   699,  -631,  1905,
    -631,  -631,   571,   704,   851,  -631,   706,  -631,   708,  -631,
    3679,  -631,  -631,    34,    95,    34,  -631,  -631,    34,    95,
      34,  -631,  3679,   174,  3679,  -631,  -631,   202,  -631,  -631,
    -631,   709,  -631,  2794,  2794,   622,   714,   189,  2939,  -631,
    2794,  2794,  -631,  -631,  -631,  -631,  -631,  -631,   423,   719,
    -631,  2794,  -631,   727,  1659,   722,  1659,  1659,  -631,   725,
     738,  -631,    34,  -631,  -631,    34,  -631,  -631,   799,  -631,
     685,  -631,   622,   327,   376,  -631,  -631,  -631,   740,   406,
     415,  -631,  -631,   211,   462,  2794,   792,  2794,  -631,  -631,
    3679,  -631,  -631,  -631,   236,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,   749,   748,  1659,  -631,  -631,   743,  -631,
    1659,  -631,   726,  -631,  -631
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     453,     9,     2,     5,     7,     0,     0,   192,   210,   208,
     328,   284,   217,     0,   199,   495,   195,   216,   188,   197,
     212,   213,   196,     0,     0,   193,   211,   214,   194,   329,
       0,   189,   459,   330,   215,     0,   198,   218,   285,   209,
       0,   277,   275,     0,     4,     8,   221,     0,     3,   219,
     220,     0,    28,     0,   286,    26,    27,     0,   454,   169,
     171,   178,   190,     0,   185,   187,   186,   200,   205,   203,
     202,   177,   235,   237,   238,   236,   180,   181,   182,   179,
     176,   485,   263,     0,   204,   265,   172,   201,     0,     0,
      30,    29,   173,     6,   174,   175,    21,     0,     0,   304,
       5,   287,     0,   289,     0,     0,     0,     0,     0,     0,
      18,     0,   453,     0,     0,   455,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   418,   419,   381,   380,
       0,   417,     0,   390,   395,   396,   385,   384,   394,   388,
     386,   387,   391,   389,   393,   392,     0,   481,   493,   367,
     379,     0,   439,   460,     0,     0,     0,     0,     0,     0,
       0,     0,   276,   282,    31,     0,    36,     0,     1,     0,
     278,   219,    32,   206,   170,   195,   184,   191,     0,   260,
     475,   485,     0,   486,   313,     0,   304,   477,   264,   342,
       0,   324,     0,     0,     5,     0,     0,     0,   302,   479,
       0,   300,   305,   280,   288,   207,     0,   225,     0,   473,
     226,   453,   259,     0,   242,   453,   453,     0,   456,     0,
       0,   420,   421,   482,   291,     0,     0,   493,   494,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   283,    35,    34,    15,    17,    16,   455,     0,
       0,     0,     0,     0,    20,   461,     0,     0,     0,    23,
     499,    19,     0,     0,     0,    68,    69,     0,    70,    71,
     438,    22,    10,    11,    12,    13,    14,    37,    25,     0,
      58,    87,     0,    66,    67,    89,    92,    96,    99,   102,
     107,   110,   112,   114,   116,   118,   120,   122,   436,   437,
     479,     0,   434,   124,    33,   279,   183,     0,     0,     0,
     476,   314,   262,     0,     0,     0,   377,   378,     0,   370,
     371,     0,   467,   315,   311,     0,     0,   120,   138,   478,
       0,   364,   365,   366,     0,   336,    28,    27,   342,   339,
     343,   491,   490,   342,     0,   340,     0,     0,   223,     0,
       0,   325,   326,     0,   304,     0,   304,   483,   307,   479,
     480,   293,   309,     0,   270,   301,     0,   281,     0,   224,
     234,   474,   230,   232,     0,     0,   241,     0,     0,     0,
     247,     0,     0,   383,   382,     0,   369,   440,   227,   252,
       0,     0,     0,   256,     0,     0,     0,   251,     0,   461,
      59,    60,     0,     0,    83,     0,     0,   462,     0,     0,
       0,    64,     0,   500,   449,     0,   136,     0,     0,    62,
      61,    48,    49,     0,   457,     0,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   126,
     127,   128,   134,   133,   135,   131,   132,     0,   125,     0,
       0,   483,   479,   290,     0,   433,   261,   475,     0,    56,
       0,   318,   316,   312,     0,   375,     0,   376,     0,   457,
       0,     0,     0,     0,   467,     0,     0,     0,     0,   467,
       0,     0,     0,    28,   468,   152,   139,   140,   141,   467,
     142,   143,   144,   145,   168,     0,   146,     0,     0,   269,
     273,     0,   338,   334,   343,     0,     0,   344,   345,   492,
     337,   331,   335,   342,   342,   323,   222,     0,     0,   355,
       0,   349,   350,     0,   327,   328,     0,   459,   426,     0,
     423,   425,     0,     0,     0,     0,   292,     0,   304,   477,
     303,   306,   257,     0,     0,   229,   258,   240,   239,   245,
       0,   246,   243,     0,   250,   254,     0,   255,     0,   249,
       0,    84,     0,     0,     0,     0,     0,     0,   463,   465,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
      47,   458,     0,     0,     0,     0,    43,    90,    91,    95,
      93,    94,    97,    98,   100,   101,   105,   106,   103,   104,
     108,   109,   111,   113,   115,   117,   119,     0,   123,   435,
     317,     0,   320,   321,   487,     0,   442,   497,   374,   372,
       0,   164,     0,   165,   467,     0,   467,     0,     0,     0,
       0,     0,     0,     0,   467,   153,   150,   151,     0,   267,
     268,   346,   333,   347,   348,   343,   341,   332,   353,     0,
       0,     0,     0,   354,     0,     0,     0,     0,   427,     0,
     429,     0,     0,   272,   271,   299,   308,   310,     0,     0,
     231,   233,   244,     0,   253,   248,     0,     0,   463,     0,
      85,     0,    76,     0,   457,   464,    72,     0,   466,    79,
     465,    77,     0,    65,     0,    54,    55,   137,    88,    46,
       0,    45,    39,    38,    42,     0,    41,     0,    57,   488,
       0,     0,   498,   443,   373,   467,   149,     0,   162,   471,
     163,   167,   157,     0,     0,   166,     0,   441,     0,   147,
     501,   266,   352,     0,     0,     0,   359,   351,     0,     0,
       0,   363,     0,     0,     0,   424,   422,   297,   298,   228,
      86,     0,    73,     0,     0,   463,     0,     0,     0,    78,
       0,     0,    44,    40,   121,   322,   319,   448,   447,     0,
     148,     0,   472,     0,   467,     0,   467,   467,   451,   502,
       0,   358,     0,   357,   362,     0,   361,   428,     0,   430,
     295,   296,   463,     0,     0,    74,    82,    80,     0,     0,
       0,   445,   446,     0,     0,   467,   154,     0,   156,   159,
       0,   450,   356,   360,     0,   294,    75,    53,    50,    81,
      52,    51,   444,     0,     0,   467,   158,   452,   431,   160,
     467,   155,     0,   161,   432
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -631,  -631,  -130,   834,   527,  -631,  -174,   284,  -631,  -631,
    -631,  -631,    26,  -631,  -631,  -631,   803,   876,  -172,     0,
    -631,  -277,   598,  -631,  -631,  -631,   287,  -631,  -631,  -631,
    -631,     9,   120,   128,   135,    -6,    38,   409,   414,   417,
     421,   407,  -179,  -176,   437,  -631,   225,  -403,   103,  -631,
     235,  -181,  -631,  -631,  -571,  -631,  -631,  -631,  -631,  -631,
     -26,    17,   237,   -24,     8,  -631,  -631,    40,  -631,    46,
    -631,  -631,  -631,   316,  -631,  -631,  -631,  -631,  -631,  -631,
     349,  -631,  -631,  -155,  -631,  -631,  -631,  -631,   565,   -15,
    -631,   -58,  -164,   -40,   786,   247,   -23,  -361,  -631,  -177,
    -631,  -330,  -147,   271,  -631,  -469,  -631,  -631,  -631,  -631,
    -631,  -631,   537,   362,  -631,  -631,   532,  -631,   214,  -348,
    -631,  -631,  -631,  -631,   401,  -631,  -631,  -631,  -631,  -631,
     219,   215,  -631,  -631,   329,   431,  -631,  -631,  -631,  -183,
    -566,  -631,  -631,  -631,  -630,  -631,    15,  -135,  -463,  -631,
     499,  -626,   196,  -489,  -631,  -631,  -631,  -631,   350,  -132,
    -631,  -631,  -168,  -631,  -333,  -631,   675,  -631,  -631,  -631,
    -631
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,   107,    50,    51,    52,   281,   282,
     283,   284,   285,   286,    53,   287,   288,    55,    56,   206,
     290,   601,   291,   292,   293,   417,   588,   708,   709,   705,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   426,   470,   504,   339,   505,   506,
     507,   508,   509,   510,   743,   511,   739,   512,   513,    58,
      59,   514,    61,    62,   515,    64,    65,    66,    67,    68,
      69,    70,   381,   382,   383,    71,    72,    73,    74,    75,
     223,    76,   392,    77,    78,    79,    80,   188,   189,    81,
      82,    83,   172,    84,    85,   309,   310,   370,   371,   210,
     211,   212,    86,   334,   320,   482,   634,    87,    88,    89,
     352,   353,   354,   355,   527,   528,   361,   541,   542,   356,
      90,   159,   238,   193,   329,   330,   331,    91,   160,    92,
     549,   550,   551,    93,   311,   312,    94,    95,   516,   194,
     636,   637,   789,   313,   660,   799,   224,   104,   602,   164,
     418,   706,   711,   517,   518,   793,   384,   322,   340,   556,
     234,   373,   195,   730,   357,   530,   239,    97,   733,   424,
     800
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   158,   173,   280,   162,   102,   554,   321,    63,   252,
     650,   633,   543,   109,   333,    96,   315,    60,   337,   335,
     531,   338,   323,   324,   156,   171,   640,   347,     1,   751,
      57,     1,   184,   548,   375,   168,   245,   100,    63,   187,
     170,   478,   111,   100,   349,   105,   561,    60,   190,   377,
       1,   103,   351,     2,   100,     4,   100,    11,    57,   106,
     191,     1,   110,    57,   157,   191,    63,   100,   198,     1,
     200,   732,   772,   175,     1,    60,   175,   372,   318,   163,
     746,  -485,   748,   170,     1,   222,   747,   316,   642,   202,
     317,   319,   438,   163,    24,   100,   192,   390,   244,   156,
     237,   192,   408,   183,   100,    98,   218,   209,   179,    38,
     554,    57,    57,   439,   401,   228,   404,   226,   661,    63,
      63,   196,   409,   664,   596,   376,   197,   227,    60,    60,
     467,   216,     1,   173,   233,    24,   175,   811,   100,   586,
     173,   325,   333,   333,   177,   727,   474,    43,   214,   815,
     215,   369,    44,    45,   475,   176,     1,   156,   236,    45,
     403,   691,   100,   575,   241,   243,   246,   248,   792,   250,
      45,    44,    45,   173,   112,   253,   254,   289,   473,   237,
     835,   347,    44,    45,   350,   187,   836,   552,    43,   553,
     671,   199,   328,    99,   368,    44,   156,   157,   349,    57,
     359,   667,   183,   178,   209,   365,   351,   348,     1,    57,
      44,    45,   219,   100,   397,   103,   165,   157,   469,    44,
      45,    57,    24,   447,   448,    57,    57,   391,   443,    63,
     444,   203,   318,    63,    63,   395,   385,   236,    60,     1,
      57,   776,    60,    60,   402,   319,    11,   405,    63,   225,
    -484,   103,   472,    44,    45,  -484,   681,    60,   228,   569,
     785,   571,   474,   596,   682,   445,   446,   723,   410,   411,
     769,   414,   576,   289,    24,    43,   681,    44,    45,   231,
     558,   451,   452,   429,   808,   559,   430,   658,   179,   100,
     532,   596,   247,   533,   167,   817,   214,   108,    38,   229,
     280,   437,   477,   230,   449,   450,   232,   114,   251,   369,
     236,   369,   337,   157,   332,   338,   662,   170,   100,   533,
     652,   180,   595,   596,   187,   486,   543,    43,    44,    45,
     630,   631,   289,   524,   100,   183,   844,   389,   350,   702,
     631,   321,   337,   240,   168,   338,   192,   337,    57,   548,
     338,   548,   171,    57,   198,   659,   323,   408,   715,   596,
     540,   348,   347,   156,   156,   100,   156,   170,   165,   170,
     363,   209,   209,   201,   209,   818,   156,   409,   364,   349,
     337,   688,   360,   338,   209,   337,   366,   351,   338,   570,
     217,     1,   374,   220,   378,   589,     2,   100,     4,   280,
     440,   441,   442,   672,    44,    45,   100,   386,   677,   670,
     393,   214,   156,   472,   472,   156,   394,   581,   156,   156,
     289,   180,   156,   166,    44,   289,     1,   822,   837,   596,
     399,     1,     3,    44,    45,   169,     2,   100,     4,   407,
     692,   616,   617,   618,   619,   412,   167,   607,   608,    44,
      45,   415,   157,   100,   416,   157,   754,    24,   157,   157,
     157,   100,   157,   425,   675,   157,   419,   341,   342,   343,
     422,   236,   236,   453,   289,   454,   327,   838,   596,   173,
      44,    45,   455,   346,   358,   456,   362,   488,   328,   620,
     621,   187,    24,   100,   289,   489,   537,    24,   427,     1,
     477,   519,   379,   380,     2,   100,     4,   840,   596,   289,
      43,   179,    44,    45,   157,    57,   841,   596,   665,   350,
     428,    44,    45,   367,   520,   398,   521,    49,  -483,   522,
      41,   710,    49,   170,    57,   753,   755,   669,   228,    42,
     758,   760,   348,   228,   180,    43,   676,    44,    45,   100,
      43,    49,   759,    45,   341,   342,   343,    49,   156,   589,
     609,   610,   611,   843,   596,    24,   209,   529,    44,    45,
     174,   612,   613,   289,   387,   388,    44,    45,   538,   179,
     614,   615,   156,   534,   181,    49,   535,   156,   555,   236,
      49,   557,     1,   700,   483,   484,   562,   645,   204,   337,
     563,   205,   338,   810,   564,   565,   718,   566,    44,    45,
     567,   568,   655,   157,   308,   572,   503,   573,    43,   802,
     213,    45,   157,   574,   805,   744,    49,   157,   744,   181,
     744,   181,   346,   577,   579,   584,   635,   346,    49,    49,
     597,   641,   842,   536,   289,   427,   289,   643,   289,   644,
     593,   289,   710,   289,   289,   646,   766,   648,    24,   583,
     603,   651,   585,   653,    44,    45,   590,   591,   654,   592,
     228,   228,   594,   596,   540,   228,   228,   656,   854,   156,
     657,   156,    57,   181,    49,   674,   679,   209,   157,   209,
      63,   157,     1,   157,   627,   683,    49,   156,   100,    60,
     684,   720,   685,     1,    49,   770,   694,   423,   788,   100,
     236,    43,   598,    44,    45,   695,   744,   696,   699,   326,
     701,   100,   704,    49,   235,   100,    49,   173,   235,   795,
     369,   156,    49,   712,   713,   289,    49,   157,   714,   289,
     716,   731,   631,   722,   170,   729,   734,   736,    49,   191,
     156,   737,    49,    49,   228,   479,   481,   749,    24,   228,
     735,   227,   156,   741,   156,  -485,   745,    49,   750,    24,
     658,   157,   327,   821,   526,   526,   762,   181,   503,   157,
     647,   767,   649,   599,   764,   192,   773,   768,   170,   775,
     157,   774,   778,   503,   289,   780,   289,   289,   781,   791,
      49,   786,   157,    54,   157,   794,   174,   796,   101,   797,
     812,    43,   471,    44,    45,   816,   181,   346,   346,    41,
     823,   707,    43,    41,    44,    45,   825,   830,    42,   678,
     156,   680,    42,    54,   703,   827,    44,    45,   790,   831,
      44,    45,   834,    54,   845,   289,   839,   380,   849,   850,
     289,    45,   485,   479,     1,   487,   852,   113,     1,    49,
       3,    54,   622,   169,     3,   421,    54,   169,   623,   698,
     157,   479,   624,   742,   626,    49,   742,   625,   742,   690,
      49,   738,   476,   740,   207,   525,    54,   539,   757,   639,
      49,    49,   181,    49,   544,   666,   765,   826,   763,   828,
     829,    54,   693,    49,     1,   629,   779,   628,   582,   689,
     100,   308,   396,   604,    54,    54,     0,   481,     0,     0,
      24,     0,     0,     0,    24,     0,   479,     0,   503,     0,
       0,     0,   777,   182,     0,     0,     0,     0,   503,    49,
       0,     0,    49,     0,   771,    49,    49,    49,   851,    49,
       0,    40,    49,   853,     1,   367,   100,     0,    41,   235,
     100,     0,    41,   725,   742,     0,     0,    42,     0,     0,
      24,    42,   101,    43,     0,    44,    45,    43,   182,    44,
      45,     0,     1,     0,   605,     0,     0,     2,   100,     4,
     100,     0,   686,   235,   687,     0,     0,   798,   813,   814,
       0,    49,    54,     0,     0,   819,   820,     0,   101,   807,
     308,   809,    54,   638,     0,   326,   824,     0,     0,   503,
      24,    49,     0,    43,    54,    44,    45,     0,    54,    54,
       0,     0,     0,   717,   431,   432,    49,   433,     0,     0,
       0,   242,    49,    54,   249,     0,   182,   471,    24,     0,
       0,     0,  -483,     0,    41,   314,     0,     0,     0,     0,
       0,    49,   179,    42,   668,     0,     0,   673,   728,     0,
       0,    44,    45,    43,     0,    44,    45,   847,   503,     0,
     503,   503,   182,     0,     0,    49,     0,     0,    41,     0,
       0,     0,     0,     0,     0,   213,     0,    42,     0,     0,
      49,    43,   434,     0,    45,    44,    45,   435,     0,    49,
     436,     0,     0,     0,    49,     0,     0,     0,   848,   400,
      54,     0,     0,     0,   406,     0,   182,     0,     0,   503,
       0,     0,     0,     0,   503,     0,     0,     0,     0,     0,
       0,   479,     0,   457,   458,   459,   460,   461,   462,   463,
     464,    54,     0,   465,   466,     0,    54,     0,     0,     0,
     467,     0,     0,     0,   784,   182,   481,     0,     0,     0,
      54,    49,    54,    49,     0,    49,     0,     0,    49,     0,
      49,    49,     0,     0,     0,     0,     1,   255,   256,   257,
     110,     0,   100,     0,     0,   336,   752,     0,     0,   756,
       0,   539,     0,     0,   761,     0,    49,     0,    49,    49,
       0,     0,     0,     0,     0,   259,   260,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,   261,     0,
       0,   262,     0,     0,   263,     0,   600,     0,     0,   606,
     264,   182,   468,     0,     0,     0,     0,     0,   469,     0,
       0,   265,    24,     0,     0,     0,     0,   266,    49,     0,
       0,   267,    49,   268,   846,     0,    49,   269,     0,   271,
       0,     0,   272,     0,     0,     0,     0,    49,     0,     0,
     801,   578,   803,   273,     0,   804,     0,   806,     0,    49,
     274,    49,     0,     0,     0,   275,     0,   276,     0,   277,
       0,     0,     0,     0,   278,   279,     0,    44,    45,   663,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,    49,     0,    49,    49,     0,     0,     0,     0,   832,
       0,     0,   833,     0,     0,     0,    54,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,    49,     0,     0,
       1,   255,   256,   257,   110,     2,   100,     4,     0,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   719,   721,     0,     0,     0,     0,   724,   726,   259,
     260,     0,     0,     6,     7,     8,   490,   491,     0,     9,
      10,    11,   261,   492,   493,   262,   494,    12,   263,     0,
      13,    14,     0,   185,   264,    17,   495,    18,   496,   497,
      19,    20,    21,    22,   498,   265,    24,     0,     0,     0,
      25,   266,   499,    26,    27,   267,    28,   268,    29,   500,
       0,   269,   270,   271,   501,    31,   272,    32,    33,    34,
      35,    36,    37,    38,    39,   502,     0,   273,     0,     0,
     332,  -469,     0,     0,   274,    54,     0,     0,     0,   275,
       0,   276,     0,   277,     0,     0,     0,     0,   278,   279,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   782,     0,     0,     0,     0,   783,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     255,   256,   257,   110,     2,   100,     4,    54,   258,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,   260,
       0,     0,     6,     7,     8,   490,   491,     0,     9,    10,
      11,   261,   492,   493,   262,   494,    12,   263,     0,    13,
      14,    54,   185,   264,    17,   495,    18,   496,   497,    19,
      20,    21,    22,   498,   265,    24,     0,     0,     0,    25,
     266,   499,    26,    27,   267,    28,   268,    29,   500,     0,
     269,   270,   271,   501,    31,   272,    32,    33,    34,    35,
      36,    37,    38,    39,   502,     0,   273,     0,     0,   332,
    -470,     0,     0,   274,     0,     0,     0,     0,   275,     0,
     276,     0,   277,     0,     0,     0,     0,   278,   279,     0,
      44,    45,     1,   255,   256,   257,   110,     2,   100,     4,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     6,     7,     8,   490,   491,
       0,     9,    10,    11,   261,   492,   493,   262,   494,    12,
     263,     0,    13,    14,     0,   185,   264,    17,   495,    18,
     496,   497,    19,    20,    21,    22,   498,   265,    24,     0,
       0,     0,    25,   266,   499,    26,    27,   267,    28,   268,
      29,   500,     0,   269,   270,   271,   501,    31,   272,    32,
      33,    34,    35,    36,    37,    38,    39,   502,     0,   273,
       0,     0,   332,     0,     0,     0,   274,     0,     0,     0,
       0,   275,     0,   276,     0,   277,     0,     0,     0,     0,
     278,   279,     0,    44,    45,     1,   255,   256,   257,   110,
       2,   100,     4,     0,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   260,     0,     0,     0,     7,
       8,     0,     0,     0,     9,    10,    11,   261,     0,     0,
     262,     0,    12,   263,     0,    13,    14,     0,   185,   264,
      17,     0,    18,     0,     0,    19,    20,    21,    22,     0,
     265,    24,     0,     0,     0,    25,   266,     0,    26,    27,
     267,    28,   268,    29,     0,     0,   269,   270,   271,     0,
      31,   272,    32,    33,    34,     0,    36,    37,    38,    39,
       0,     0,   273,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,   275,     0,   276,     0,   277,     0,
       0,     0,     0,   278,   279,     0,    44,    45,     1,   255,
     256,   257,   110,     2,   100,     4,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,   260,     0,
       0,     0,     0,     8,     0,     0,     0,     9,    10,    11,
     261,     0,     0,   262,     0,    12,   263,     0,    13,     0,
       0,     0,   264,    17,     0,     0,     0,     0,     0,    20,
      21,     0,     0,   265,    24,     0,     0,     0,     0,   266,
       0,    26,    27,   267,     0,   268,    29,     0,     0,   269,
     270,   271,     0,     0,   272,    32,    33,    34,     0,     0,
      37,    38,    39,     0,     1,   273,     0,     0,     0,     2,
       3,     4,   274,     5,     0,     0,     0,   275,     0,   276,
       0,   277,     0,     0,     0,     0,   278,   279,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,    12,     0,     0,    13,    14,    15,    16,     0,    17,
       0,    18,     0,     0,    19,    20,    21,    22,    23,     0,
      24,     0,     0,     0,    25,     0,     0,    26,    27,     0,
      28,     1,    29,     0,    30,     0,     2,     3,     4,    31,
       5,    32,    33,    34,    35,    36,    37,    38,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,     0,
     161,     0,     0,     0,     6,     7,     8,    42,     0,     0,
       9,    10,    11,    43,     0,    44,    45,     0,    12,     0,
       0,    13,    14,    15,    16,     0,    17,     0,    18,     0,
       0,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,     0,     0,    26,    27,     0,    28,     1,    29,
       0,    30,     0,     2,     3,     4,    31,     5,    32,    33,
      34,    35,    36,    37,    38,    39,     0,     0,    40,     0,
       0,   221,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     7,     8,    42,     0,     0,     9,    10,    11,
      43,     0,    44,    45,     0,    12,     0,     0,    13,    14,
       0,   185,     0,    17,     0,    18,     0,     0,    19,    20,
      21,    22,     0,     0,    24,   341,   342,   343,    25,     0,
       0,    26,    27,     0,    28,     1,    29,     0,     0,     0,
       2,     3,     4,    31,     5,    32,    33,    34,   344,    36,
      37,    38,    39,     0,   345,    40,     0,     0,     0,  -489,
       0,     0,    41,     0,     0,     0,     0,     0,     6,     7,
       8,    42,     0,     0,     9,    10,    11,    43,     0,    44,
      45,     0,    12,     0,     0,    13,    14,    15,    16,     0,
      17,     0,    18,     0,     0,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     1,    29,     0,    30,     0,     2,     3,     4,
      31,     5,    32,    33,    34,    35,    36,    37,    38,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     7,     8,    42,     0,
       0,     9,    10,    11,    43,     0,    44,    45,     0,    12,
       0,     0,    13,    14,     0,   185,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,    24,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     1,
      29,     0,     0,     0,     2,     3,     4,    31,     5,    32,
      33,    34,     0,    36,    37,    38,    39,     0,   186,    40,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     7,     8,    42,     0,     0,     9,    10,
      11,    43,     0,    44,    45,     0,    12,     0,     0,    13,
      14,     0,   185,     0,    17,     0,    18,     0,     0,    19,
      20,    21,    22,     0,     0,    24,     0,     0,     0,    25,
       0,     0,    26,    27,     0,    28,     1,    29,     0,     0,
       0,     2,     3,     4,    31,     5,    32,    33,    34,     0,
      36,    37,    38,    39,     0,     0,   367,     0,     0,     0,
       0,  -483,     0,    41,     0,     0,     0,     0,     0,     0,
       7,     8,    42,     0,     0,     9,    10,    11,    43,     0,
      44,    45,     0,    12,     0,     0,    13,    14,     0,   185,
       0,    17,     0,    18,     0,     0,    19,    20,    21,    22,
       0,     0,    24,     0,     0,     0,    25,     0,     0,    26,
      27,     0,    28,     0,    29,     0,     0,     0,     0,     0,
       0,    31,     0,    32,    33,    34,     0,    36,    37,    38,
      39,     0,   523,    40,     0,     1,   255,   256,   257,   110,
      41,   100,     0,     0,   336,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,    43,     0,    44,    45,     0,
       0,     0,     0,     0,   259,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
     262,     0,     0,   263,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,    24,     0,     0,     0,     0,   266,     0,     0,     0,
     267,     0,   268,     0,     0,     0,   269,   270,   271,     0,
       0,   272,     1,   255,   256,   257,   110,     0,   100,     0,
       0,   336,   273,     0,     0,   480,   632,     0,     0,   274,
       0,     0,     0,     0,   275,     0,   276,     0,   277,     0,
       0,   259,   260,   278,   279,     0,    44,    45,     0,     0,
       0,     0,     0,     0,   261,     0,     0,   262,     0,     0,
     263,     0,     0,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   265,    24,     0,
       0,     0,     0,   266,     0,     0,     0,   267,     0,   268,
       0,     0,     0,   269,   270,   271,     0,     0,   272,     1,
     255,   256,   257,   110,     0,   100,     0,     0,   336,   273,
       0,     0,   480,     0,     0,     0,   274,     0,     0,     0,
       0,   275,     0,   276,     0,   277,     0,     0,   259,   260,
     278,   279,     0,    44,    45,     0,     0,     0,     0,     0,
       0,   261,     0,     0,   262,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,     0,     0,     1,   255,   256,
     257,   110,     0,   100,   265,    24,   336,     0,     0,     0,
     266,     0,     0,     0,   267,     0,   268,     0,     0,     0,
     269,     0,   271,     0,     0,   272,   259,   260,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,     0,   261,
       0,   413,   262,   274,     0,   263,     0,     0,   275,     0,
     276,   264,   277,     0,     0,     0,     0,   278,   279,     0,
      44,    45,   265,    24,     0,     0,     0,     0,   266,     0,
       0,     0,   267,     0,   268,     0,     0,     0,   269,   270,
     271,     0,     0,   272,     1,   255,   256,   257,   110,     0,
     100,     0,     0,   336,   273,     0,     0,     0,     0,     0,
       0,   274,     0,     0,     0,     0,   275,     0,   276,     0,
     277,     0,     0,   259,   260,   278,   279,     0,    44,    45,
       0,     0,     0,     0,     0,     0,   261,     0,     0,   262,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
       0,     0,     1,   255,   256,   257,   110,     0,   100,   265,
      24,   336,     0,     0,     0,   266,     0,     0,     0,   267,
       0,   268,     0,     0,     0,   269,     0,   271,     0,     0,
     272,   259,   260,     0,     0,     0,     0,     0,     0,     0,
       0,   273,     0,     0,   261,     0,   580,   262,   274,     0,
     263,     0,     0,   275,     0,   276,   264,   277,     0,     0,
       0,     0,   278,   279,     0,    44,    45,   265,    24,     0,
       0,     0,     0,   266,     0,     0,     0,   267,     0,   268,
       0,     0,     0,   269,     0,   271,     0,     0,   272,     1,
     255,   256,   257,   110,     0,   100,     0,     0,   336,   273,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,   275,     0,   276,     0,   277,     0,     0,   259,   260,
     278,   279,     0,    44,    45,     0,     0,     0,     0,     0,
       0,   261,     0,     0,   262,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,    24,     0,     0,     0,     0,
     266,     0,     0,     0,   267,     0,   268,     0,     0,     0,
     269,     0,   271,     0,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,   275,     0,
     276,     0,   277,     0,     0,     0,     0,   278,   279,     0,
      44,    45,     2,   100,     4,     0,   115,     0,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,     8,     0,     0,     0,     9,    10,    11,     0,
       0,     0,   138,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,    20,    21,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    37,
      38,    39,     0,     0,   140,     0,   141,     0,     0,   142,
       0,   143,     0,   144,   145,   146,   147,   148,     0,   149,
     150,   151,   152,     0,   153,   154,   155,     0,    44,    45,
       2,   100,     4,   208,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,    13,    14,     0,   185,     0,
      17,     0,    18,     0,     0,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,    25,     0,     0,    26,    27,
       0,    28,     0,    29,     0,     0,     0,     2,   100,     4,
      31,   115,    32,    33,    34,     0,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,   545,    11,     0,     0,    44,    45,     0,    12,
       0,     0,    13,    14,     0,   185,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,     0,    28,     0,
      29,     0,   546,     0,     0,     0,     0,    31,     0,   547,
      33,    34,     0,    36,    37,    38,    39,     2,   100,     4,
     560,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     7,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,    13,    14,     0,   185,     0,    17,     0,    18,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     2,
     100,     4,    25,   115,     0,    26,    27,     0,    28,     0,
      29,     0,     0,     0,     0,     0,     0,    31,     0,    32,
      33,    34,     0,    36,    37,    38,    39,     0,     0,     8,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,    12,     0,     0,    13,     0,     0,     0,     0,    17,
       0,     0,     0,    44,    45,    20,    21,     0,     0,     0,
       0,     0,     2,   100,     4,     0,   115,    26,    27,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,     0,    37,    38,    39,     0,
       0,   587,     8,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    17,     0,     0,    44,    45,     0,    20,    21,
       0,     0,     0,     0,     0,     2,   100,     4,   787,   115,
      26,    27,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,     0,    37,
      38,    39,     0,     0,   697,     8,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,    12,     0,     0,
      13,     0,     0,     0,     0,    17,     0,     0,    44,    45,
       0,    20,    21,     0,     0,     0,     0,     2,   100,     4,
       0,   115,     0,    26,    27,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
       0,     0,    37,    38,    39,     0,     0,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,    13,     0,     0,     0,     0,    17,     0,     0,
       0,    44,    45,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,     0,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45
};

static const yytype_int16 yycheck[] =
{
       0,    24,    42,   177,    30,     5,   367,   190,     0,   173,
     499,   480,   360,    13,   195,     0,   180,     0,   197,   196,
     353,   197,   190,   191,    24,    40,   489,   199,     3,   659,
      30,     3,    58,   363,    11,    35,   166,     9,    30,    63,
      40,   318,    16,     9,   199,   100,   376,    30,    63,   213,
       3,     5,   199,     8,     9,    10,     9,    44,    58,    12,
      87,     3,     7,    63,    24,    87,    58,     9,    83,     3,
      12,   637,   698,    12,     3,    58,    12,   209,   100,    12,
     651,   103,   653,    83,     3,   111,   652,    99,   491,    89,
     102,   113,    13,    12,    69,     9,   123,   227,    12,    99,
     158,   123,    48,    57,     9,    12,   106,    99,    83,    96,
     471,   111,   112,    34,   244,   115,   246,   103,   521,   111,
     112,   100,    68,   526,   102,   102,   105,   113,   111,   112,
      31,   105,     3,   173,   157,    69,    12,   767,     9,   416,
     180,    12,   323,   324,   109,   123,   102,   122,   102,   775,
     104,   209,   124,   125,   110,    12,     3,   157,   158,   125,
      99,   564,     9,    99,   164,   165,   166,   167,   739,   169,
     125,   124,   125,   213,   103,   175,   176,   177,   310,   237,
     810,   353,   124,   125,   199,   209,   812,   364,   122,   366,
     538,   103,   192,   100,   209,   124,   196,   157,   353,   199,
     200,   534,   156,     0,   196,   205,   353,   199,     3,   209,
     124,   125,   103,     9,   240,   169,    12,   177,   119,   124,
     125,   221,    69,    28,    29,   225,   226,   227,   112,   221,
     114,    83,   100,   225,   226,   235,   221,   237,   221,     3,
     240,   704,   225,   226,   244,   113,    44,   247,   240,   103,
     100,   205,   310,   124,   125,   105,   102,   240,   258,   389,
     729,   391,   102,   102,   110,    22,    23,   106,   259,   260,
     110,   262,   402,   273,    69,   122,   102,   124,   125,   101,
     100,    26,    27,   274,   110,   105,   277,    85,    83,     9,
      99,   102,    12,   102,    90,   106,   250,    13,    96,   105,
     474,   292,   317,   105,   109,   110,   106,    23,   101,   367,
     310,   369,   491,   273,   103,   491,    99,   317,     9,   102,
     501,   116,   101,   102,   348,   325,   674,   122,   124,   125,
     101,   102,   332,   348,     9,   289,   825,    12,   353,   101,
     102,   524,   521,   110,   344,   521,   123,   526,   348,   679,
     526,   681,   367,   353,   369,   519,   524,    48,   101,   102,
     360,   353,   534,   363,   364,     9,   366,   367,    12,   369,
     109,   363,   364,    89,   366,   778,   376,    68,   100,   534,
     559,   558,   123,   559,   376,   564,   100,   534,   564,   389,
     106,     3,   101,   109,   101,   418,     8,     9,    10,   573,
     115,   116,   117,   538,   124,   125,     9,   104,   543,    12,
     106,   365,   412,   471,   472,   415,   106,   408,   418,   419,
     420,   116,   422,    67,   124,   425,     3,   788,   101,   102,
      99,     3,     9,   124,   125,    12,     8,     9,    10,    99,
     570,   447,   448,   449,   450,   109,    90,   438,   439,   124,
     125,   109,   412,     9,   100,   415,    12,    69,   418,   419,
     420,     9,   422,   100,    12,   425,   109,    70,    71,    72,
     109,   471,   472,   107,   474,   120,   192,   101,   102,   519,
     124,   125,   118,   199,   200,    30,   202,   102,   488,   451,
     452,   515,    69,     9,   494,   100,    12,    69,   273,     3,
     515,   101,   218,   219,     8,     9,    10,   101,   102,   509,
     122,    83,   124,   125,   474,   515,   101,   102,   533,   534,
     273,   124,   125,   100,   106,   241,   123,     0,   105,    99,
     107,   589,     5,   533,   534,   670,   671,   537,   538,   116,
     675,   676,   534,   543,   116,   122,    94,   124,   125,     9,
     122,    24,    12,   125,    70,    71,    72,    30,   558,   582,
     440,   441,   442,   101,   102,    69,   558,    99,   124,   125,
      43,   443,   444,   573,   225,   226,   124,   125,    94,    83,
     445,   446,   582,   123,    57,    58,   104,   587,   113,   589,
      63,   113,     3,   584,   323,   324,    99,   494,     9,   778,
     102,    12,   778,   767,   113,   104,   597,   104,   124,   125,
     104,   104,   509,   573,   177,    99,   332,   109,   122,   754,
     116,   125,   582,    99,   759,   648,    99,   587,   651,   102,
     653,   104,   348,    99,    99,   106,    41,   353,   111,   112,
     101,    99,   823,   359,   644,   420,   646,    99,   648,   123,
     425,   651,   710,   653,   654,   100,   682,   100,    69,   412,
     435,   100,   415,   100,   124,   125,   419,   420,   123,   422,
     670,   671,   425,   102,   674,   675,   676,    99,   852,   679,
     104,   681,   682,   156,   157,   102,   109,   679,   648,   681,
     682,   651,     3,   653,   469,   101,   169,   697,     9,   682,
     101,    12,   101,     3,   177,   696,    99,   270,   731,     9,
     710,   122,    12,   124,   125,    99,   739,   106,   110,   192,
     110,     9,   100,   196,    12,     9,   199,   767,    12,   744,
     788,   731,   205,   110,   101,   735,   209,   697,   110,   739,
     101,   100,   102,   101,   744,   102,   101,   644,   221,    87,
     750,    98,   225,   226,   754,   318,   319,   654,    69,   759,
     123,   113,   762,    99,   764,   103,    99,   240,   100,    69,
      85,   731,   488,   788,   113,   113,   113,   250,   494,   739,
     496,   101,   498,    83,   113,   123,   100,   106,   788,   101,
     750,   100,   105,   509,   794,   100,   796,   797,   100,   100,
     273,   104,   762,     0,   764,   101,   279,   101,     5,   101,
     101,   122,   100,   124,   125,   101,   289,   533,   534,   107,
     101,   105,   122,   107,   124,   125,    99,   102,   116,   545,
     830,   547,   116,    30,   587,   113,   124,   125,   735,   101,
     124,   125,    43,    40,    52,   845,   106,   563,    99,   101,
     850,   125,   325,   416,     3,   328,   113,    23,     3,   332,
       9,    58,   453,    12,     9,   267,    63,    12,   454,   582,
     830,   434,   455,   648,   467,   348,   651,   456,   653,   563,
     353,   646,   317,   646,    98,   348,    83,   360,   674,   488,
     363,   364,   365,   366,   362,   533,   681,   794,   679,   796,
     797,    98,   573,   376,     3,   474,   710,   470,   409,   559,
       9,   474,   237,    12,   111,   112,    -1,   480,    -1,    -1,
      69,    -1,    -1,    -1,    69,    -1,   489,    -1,   644,    -1,
      -1,    -1,   707,    57,    -1,    -1,    -1,    -1,   654,   412,
      -1,    -1,   415,    -1,   697,   418,   419,   420,   845,   422,
      -1,   100,   425,   850,     3,   100,     9,    -1,   107,    12,
       9,    -1,   107,    12,   739,    -1,    -1,   116,    -1,    -1,
      69,   116,   169,   122,    -1,   124,   125,   122,   102,   124,
     125,    -1,     3,    -1,    83,    -1,    -1,     8,     9,    10,
       9,    -1,   555,    12,   557,    -1,    -1,   750,   773,   774,
      -1,   474,   199,    -1,    -1,   780,   781,    -1,   205,   762,
     573,   764,   209,   486,    -1,   488,   791,    -1,    -1,   735,
      69,   494,    -1,   122,   221,   124,   125,    -1,   225,   226,
      -1,    -1,    -1,   596,    32,    33,   509,    35,    -1,    -1,
      -1,   165,   515,   240,   168,    -1,   170,   100,    69,    -1,
      -1,    -1,   105,    -1,   107,   179,    -1,    -1,    -1,    -1,
      -1,   534,    83,   116,   537,    -1,    -1,   540,   631,    -1,
      -1,   124,   125,   122,    -1,   124,   125,   830,   794,    -1,
     796,   797,   206,    -1,    -1,   558,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   116,    -1,    -1,
     573,   122,   100,    -1,   125,   124,   125,   105,    -1,   582,
     108,    -1,    -1,    -1,   587,    -1,    -1,    -1,   834,   243,
     317,    -1,    -1,    -1,   248,    -1,   250,    -1,    -1,   845,
      -1,    -1,    -1,    -1,   850,    -1,    -1,    -1,    -1,    -1,
      -1,   704,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,   348,    -1,    24,    25,    -1,   353,    -1,    -1,    -1,
      31,    -1,    -1,    -1,   727,   289,   729,    -1,    -1,    -1,
     367,   644,   369,   646,    -1,   648,    -1,    -1,   651,    -1,
     653,   654,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    -1,    -1,    12,   669,    -1,    -1,   672,
      -1,   674,    -1,    -1,   677,    -1,   679,    -1,   681,   682,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   697,    -1,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    -1,   433,    -1,    -1,   436,
      57,   365,   113,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    68,    69,    -1,    -1,    -1,    -1,    74,   731,    -1,
      -1,    78,   735,    80,   827,    -1,   739,    84,    -1,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,   750,    -1,    -1,
     753,   405,   755,   100,    -1,   758,    -1,   760,    -1,   762,
     107,   764,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   515,    -1,
      -1,   794,    -1,   796,   797,    -1,    -1,    -1,    -1,   802,
      -1,    -1,   805,    -1,    -1,    -1,   533,   534,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   845,    -1,    -1,    -1,    -1,   850,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   598,   599,    -1,    -1,    -1,    -1,   604,   605,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,    -1,    -1,
     103,   104,    -1,    -1,   107,   682,    -1,    -1,    -1,   112,
      -1,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,
      -1,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   720,    -1,    -1,    -1,    -1,   725,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,   744,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,   788,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,   100,    -1,    -1,   103,
     104,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,
     114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,
     124,   125,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,
     121,   122,    -1,   124,   125,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    50,    51,    -1,    53,    54,    -1,    56,    57,
      58,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,
      -1,    -1,    -1,   121,   122,    -1,   124,   125,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    50,    51,    -1,    53,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    81,    -1,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    96,    97,    -1,     3,   100,    -1,    -1,    -1,     8,
       9,    10,   107,    12,    -1,    -1,    -1,   112,    -1,   114,
      -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    63,    64,    65,    66,    67,    -1,
      69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,    -1,
      79,     3,    81,    -1,    83,    -1,     8,     9,    10,    88,
      12,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,    -1,    -1,    -1,    36,    37,    38,   116,    -1,    -1,
      42,    43,    44,   122,    -1,   124,   125,    -1,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      -1,    73,    -1,    -1,    76,    77,    -1,    79,     3,    81,
      -1,    83,    -1,     8,     9,    10,    88,    12,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,   116,    -1,    -1,    42,    43,    44,
     122,    -1,   124,   125,    -1,    50,    -1,    -1,    53,    54,
      -1,    56,    -1,    58,    -1,    60,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    76,    77,    -1,    79,     3,    81,    -1,    -1,    -1,
       8,     9,    10,    88,    12,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,   104,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,   116,    -1,    -1,    42,    43,    44,   122,    -1,   124,
     125,    -1,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      -1,    79,     3,    81,    -1,    83,    -1,     8,     9,    10,
      88,    12,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,   116,    -1,
      -1,    42,    43,    44,   122,    -1,   124,   125,    -1,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,    -1,    79,     3,
      81,    -1,    -1,    -1,     8,     9,    10,    88,    12,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,   116,    -1,    -1,    42,    43,
      44,   122,    -1,   124,   125,    -1,    50,    -1,    -1,    53,
      54,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,    73,
      -1,    -1,    76,    77,    -1,    79,     3,    81,    -1,    -1,
      -1,     8,     9,    10,    88,    12,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
      -1,   105,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,   116,    -1,    -1,    42,    43,    44,   122,    -1,
     124,   125,    -1,    50,    -1,    -1,    53,    54,    -1,    56,
      -1,    58,    -1,    60,    -1,    -1,    63,    64,    65,    66,
      -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,     3,     4,     5,     6,     7,
     107,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,   122,    -1,   124,   125,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    -1,    84,    85,    86,    -1,
      -1,    89,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    12,   100,    -1,    -1,   103,   104,    -1,    -1,   107,
      -1,    -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,
      -1,    32,    33,   121,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    85,    86,    -1,    -1,    89,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    32,    33,
     121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    68,    69,    12,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    86,    -1,    -1,    89,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    45,
      -1,   105,    48,   107,    -1,    51,    -1,    -1,   112,    -1,
     114,    57,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,
     124,   125,    68,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    84,    85,
      86,    -1,    -1,    89,     3,     4,     5,     6,     7,    -1,
       9,    -1,    -1,    12,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,   112,    -1,   114,    -1,
     116,    -1,    -1,    32,    33,   121,   122,    -1,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    68,
      69,    12,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    80,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      89,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    45,    -1,   105,    48,   107,    -1,
      51,    -1,    -1,   112,    -1,   114,    57,   116,    -1,    -1,
      -1,    -1,   121,   122,    -1,   124,   125,    68,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    89,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,   112,    -1,   114,    -1,   116,    -1,    -1,    32,    33,
     121,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,    -1,
     114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,
     124,   125,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    -1,    -1,   100,    -1,   102,    -1,    -1,   105,
      -1,   107,    -1,   109,   110,   111,   112,   113,    -1,   115,
     116,   117,   118,    -1,   120,   121,   122,    -1,   124,   125,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    54,    -1,    56,    -1,
      58,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,     8,     9,    10,
      88,    12,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,   124,   125,    -1,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    76,    77,    -1,    79,    -1,
      81,    -1,    83,    -1,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,    37,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,     8,
       9,    10,    73,    12,    -1,    76,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    -1,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,   124,   125,    64,    65,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    -1,    12,    76,    77,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    92,    -1,    -1,    95,    96,    97,    -1,
      -1,   100,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,   124,   125,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    -1,    -1,   100,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,   124,   125,
      -1,    64,    65,    -1,    -1,    -1,    -1,     8,     9,    10,
      -1,    12,    -1,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,   124,   125,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     8,     9,    10,    12,    36,    37,    38,    42,
      43,    44,    50,    53,    54,    55,    56,    58,    60,    63,
      64,    65,    66,    67,    69,    73,    76,    77,    79,    81,
      83,    88,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   107,   116,   122,   124,   125,   128,   129,   130,   131,
     132,   133,   134,   141,   143,   144,   145,   146,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   202,   203,   204,   205,   206,   208,   210,   211,   212,
     213,   216,   217,   218,   220,   221,   229,   234,   235,   236,
     247,   254,   256,   260,   263,   264,   273,   294,    12,   100,
       9,   143,   146,   196,   274,   100,    12,   131,   134,   146,
       7,   139,   103,   130,   134,    12,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    48,    68,
     100,   102,   105,   107,   109,   110,   111,   112,   113,   115,
     116,   117,   118,   120,   121,   122,   146,   194,   223,   248,
     255,   109,   187,    12,   276,    12,    67,    90,   146,    12,
     146,   216,   219,   220,   131,    12,    12,   109,     0,    83,
     116,   131,   144,   196,   187,    56,    99,   190,   214,   215,
     216,    87,   123,   250,   266,   289,   100,   105,   216,   103,
      12,   134,   146,    83,     9,    12,   146,   221,    11,   191,
     226,   227,   228,   116,   196,   196,   139,   134,   146,   103,
     134,   103,   187,   207,   273,   103,   103,   113,   146,   105,
     105,   101,   106,   223,   287,    12,   146,   218,   249,   293,
     110,   146,   144,   146,    12,   129,   146,    12,   146,   144,
     146,   101,   219,   146,   146,     4,     5,     6,    12,    32,
      33,    45,    48,    51,    57,    68,    74,    78,    80,    84,
      85,    86,    89,   100,   107,   112,   114,   116,   121,   122,
     133,   135,   136,   137,   138,   139,   140,   142,   143,   146,
     147,   149,   150,   151,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   222,
     223,   261,   262,   270,   144,   219,    99,   102,   100,   113,
     231,   266,   284,   289,   289,    12,   131,   134,   146,   251,
     252,   253,   103,   178,   230,   226,    12,   169,   170,   174,
     285,    70,    71,    72,    93,    99,   134,   145,   191,   210,
     216,   229,   237,   238,   239,   240,   246,   291,   134,   146,
     123,   243,   134,   109,   100,   146,   100,   100,   216,   218,
     224,   225,   286,   288,   101,    11,   102,   219,   101,   134,
     134,   199,   200,   201,   283,   273,   104,   207,   207,    12,
     129,   146,   209,   106,   106,   146,   293,   187,   134,    99,
     144,   129,   146,    99,   129,   146,   144,    99,    48,    68,
     158,   158,   109,   105,   158,   109,   100,   152,   277,   109,
     100,   149,   109,   171,   296,   100,   171,   173,   222,   158,
     158,    32,    33,    35,   100,   105,   108,   158,    13,    34,
     115,   116,   117,   112,   114,    22,    23,    28,    29,   109,
     110,    26,    27,   107,   120,   118,    30,    14,    15,    16,
      17,    18,    19,    20,    21,    24,    25,    31,   113,   119,
     172,   100,   218,   286,   102,   110,   215,   216,   148,   171,
     103,   171,   232,   230,   230,   131,   146,   131,   102,   100,
      39,    40,    46,    47,    49,    59,    61,    62,    67,    75,
      82,    87,    98,   134,   173,   175,   176,   177,   178,   179,
     180,   182,   184,   185,   188,   191,   265,   280,   281,   101,
     106,   123,    99,    99,   216,   239,   113,   241,   242,    99,
     292,   291,    99,   102,   123,   104,   134,    12,    94,   131,
     146,   244,   245,   246,   243,    43,    83,    90,   228,   257,
     258,   259,   226,   226,   224,   113,   286,   113,   100,   105,
      11,   228,    99,   102,   113,   104,   104,   104,   104,   129,
     146,   129,    99,   109,    99,    99,   129,    99,   144,    99,
     105,   158,   277,   222,   106,   222,   148,   100,   153,   223,
     222,   222,   222,   173,   222,   101,   102,   101,    12,    83,
     143,   148,   275,   173,    12,    83,   143,   158,   158,   159,
     159,   159,   160,   160,   161,   161,   162,   162,   162,   162,
     163,   163,   164,   165,   166,   167,   168,   173,   171,   262,
     101,   102,   104,   232,   233,    41,   267,   268,   131,   251,
     275,    99,   174,    99,   123,   175,   100,   134,   100,   134,
     280,   100,   178,   100,   123,   175,    99,   104,    85,   219,
     271,   174,    99,   126,   174,   216,   240,   291,   131,   146,
      12,   246,   274,   131,   102,    12,    94,   274,   134,   109,
     134,   102,   110,   101,   101,   101,   171,   171,   226,   285,
     200,   174,   129,   261,    99,    99,   106,   100,   153,   110,
     158,   110,   101,   222,   100,   156,   278,   105,   154,   155,
     218,   279,   110,   101,   110,   101,   101,   171,   158,   143,
      12,   143,   101,   106,   143,    12,   143,   123,   171,   102,
     290,   100,   267,   295,   101,   123,   175,    98,   177,   183,
     189,    99,   173,   181,   223,    99,   181,   267,   181,   175,
     100,   271,   131,   274,    12,   274,   131,   245,   274,    12,
     274,   131,   113,   257,   113,   258,   187,   101,   106,   110,
     158,   222,   278,   100,   100,   101,   275,   173,   105,   279,
     100,   100,   143,   143,   171,   232,   104,    11,   223,   269,
     175,   100,   181,   282,   101,   216,   101,   101,   222,   272,
     297,   131,   274,   131,   131,   274,   131,   222,   110,   222,
     219,   271,   101,   173,   173,   278,   101,   106,   174,   173,
     173,   216,   224,   101,   173,    99,   175,   113,   175,   175,
     102,   101,   131,   131,    43,   271,   278,   101,   101,   106,
     101,   101,   178,   101,   280,    52,   171,   222,   134,    99,
     101,   175,   113,   175,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   130,   131,   131,   132,   133,   134,
     135,   135,   135,   135,   135,   136,   137,   138,   139,   140,
     140,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   145,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   151,   151,   151,   151,   152,   153,   154,   154,
     155,   155,   156,   157,   157,   157,   157,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   163,   163,   163,   163,   163,   164,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   173,   173,   174,   175,
     175,   175,   175,   175,   175,   175,   175,   176,   176,   176,
     177,   178,   179,   179,   180,   180,   180,   181,   181,   182,
     182,   182,   183,   183,   184,   184,   184,   184,   185,   186,
     186,   187,   187,   187,   187,   187,   187,   187,   188,   188,
     188,   188,   188,   189,   189,   190,   190,   190,   190,   190,
     191,   191,   192,   192,   192,   192,   192,   193,   193,   193,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   196,
     196,   196,   197,   197,   197,   197,   197,   197,   197,   198,
     199,   199,   200,   200,   201,   202,   202,   203,   203,   204,
     205,   206,   207,   208,   209,   209,   209,   209,   210,   210,
     210,   210,   210,   211,   211,   211,   211,   212,   213,   213,
     214,   214,   215,   216,   216,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   221,   221,
     222,   223,   224,   224,   225,   225,   225,   225,   225,   225,
     226,   226,   226,   226,   226,   227,   227,   228,   228,   228,
     228,   229,   229,   229,   229,   230,   231,   231,   232,   232,
     232,   233,   233,   234,   235,   235,   235,   235,   236,   236,
     236,   237,   237,   238,   238,   238,   238,   238,   238,   238,
     239,   239,   240,   240,   240,   240,   240,   241,   242,   243,
     244,   244,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   246,   246,   246,   247,   248,   249,
     250,   251,   251,   252,   253,   253,   253,   253,   253,   254,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   256,   257,   257,   258,   258,   259,   259,   259,
     259,   259,   259,   260,   261,   261,   262,   262,   262,   263,
     264,   265,   266,   267,   268,   269,   269,   269,   269,   270,
     271,   272,   272,   273,   273,   274,   274,   275,   275,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   291,
     291,   292,   292,   293,   293,   294,   294,   295,   295,   296,
     296,   297,   297
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     2,     1,     4,     4,
       5,     4,     4,     3,     5,     4,     4,     3,     2,     2,
       7,     7,     7,     7,     4,     4,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     4,     5,     6,     7,     3,     2,     2,     1,
       3,     4,     3,     2,     3,     4,     5,     1,     4,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     5,     7,     5,     1,     4,     5,
       7,     8,     1,     1,     2,     2,     3,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     3,     3,     4,     7,     5,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     5,
       5,     4,     1,     5,     3,     2,     2,     1,     6,     5,
       5,     4,     4,     6,     5,     5,     4,     5,     5,     3,
       1,     3,     2,     1,     2,     1,     6,     5,     5,     4,
       4,     6,     6,     4,     3,     1,     2,     1,     2,     3,
       3,     4,     1,     2,     1,     1,     1,     2,     3,     2,
       2,     2,     2,     1,     6,     5,     5,     4,     4,     3,
       1,     2,     1,     3,     0,     1,     3,     2,     4,     2,
       4,     3,     4,     2,     3,     1,     2,     3,     1,     4,
       2,     1,     3,     4,     2,     3,     3,     4,     1,     1,
       1,     2,     3,     3,     2,     2,     1,     2,     2,     1,
       1,     3,     0,     1,     2,     2,     3,     2,     2,     2,
       1,     3,     3,     2,     2,     1,     5,     4,     4,     3,
       5,     4,     4,     3,     1,     1,     1,     2,     2,     2,
       2,     1,     3,     4,     3,     2,     2,     1,     1,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     6,     1,     3,     1,     1,     2,     4,     2,
       4,     6,     8,     4,     1,     3,     1,     1,     1,     2,
       4,     3,     4,     2,     5,     2,     2,     1,     1,     2,
       4,     1,     3,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     0,     1,     0,
       1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 155 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2591 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 159 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2597 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 164 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2603 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 169 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2609 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2615 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2621 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 178 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2627 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 187 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2633 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 191 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2639 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 192 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2645 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 193 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2651 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 194 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2657 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 195 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2663 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2669 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 203 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2675 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 207 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2681 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 211 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2687 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2693 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2699 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 224 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("start", 212, 1, (yyvsp[0].tptr)); t_unit = (yyval.tptr);}
#line 2705 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 232 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2711 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 233 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2717 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 234 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("primary_expression_219", 216, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2723 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 235 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2729 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 239 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2735 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2741 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2747 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2753 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2759 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unqualified_id_232", 228, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2765 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 251 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_id_236", 235, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2771 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 252 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_id_237", 235, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2777 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 256 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_241", 240, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2783 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 257 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_242", 240, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2789 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 258 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_243", 240, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2795 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 262 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2801 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 263 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_247", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2807 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 264 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_248", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2813 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 265 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_2480", 245, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 2819 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 266 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_2481", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2825 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 267 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_251", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2831 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 268 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_252", 245, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2837 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 269 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_2482", 245, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 2843 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 270 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_2560", 245, 3, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 2849 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 271 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_255", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2855 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 272 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_256", 245, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2861 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 273 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_257", 245, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2867 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 274 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_258", 245, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2873 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 275 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_259", 245, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2879 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 276 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_260", 245, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2885 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 277 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_261", 245, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2891 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 278 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_262", 245, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2897 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 279 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_263", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2903 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 280 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_264", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2909 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 284 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2915 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 285 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_list_269", 267, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 2921 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 289 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2927 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 290 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_274", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2933 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 291 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_275", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2939 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 292 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_276", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2945 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 293 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_277", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2951 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 294 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_278", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2957 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 295 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_279", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2963 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 296 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_280", 272, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2969 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 297 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2975 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 298 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2981 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 302 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2987 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 303 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2993 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 304 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2999 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 305 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3005 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 309 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_293", 292, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3011 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 310 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_294", 292, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3017 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 311 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_295", 292, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3023 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 312 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_296", 292, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3029 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 316 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_placement_300", 299, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3035 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 320 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_type_id_304", 303, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3041 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 324 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_declarator_308", 307, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3047 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 325 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3053 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 329 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_new_declarator_313", 312, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3059 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 330 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_new_declarator_314", 312, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3065 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 334 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_initializer_318", 317, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3071 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 338 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_322", 321, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3077 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 339 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_323", 321, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3083 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 340 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_324", 321, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3089 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 341 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_325", 321, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3095 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 345 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3101 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 346 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("cast_expression_330", 328, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3107 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 350 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3113 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 351 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("pm_expression_335", 333, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3119 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 352 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("pm_expression_336", 333, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3125 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 356 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3131 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 357 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_341", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3137 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 358 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_342", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3143 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 359 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_343", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3149 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 363 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3155 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 364 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("additive_expression_348", 346, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3161 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 365 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("additive_expression_349", 346, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3167 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 369 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3173 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 370 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("shift_expression_354", 352, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3179 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 371 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("shift_expression_355", 352, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3185 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 375 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3191 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 376 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_360", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3197 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 377 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_361", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3203 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 378 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_362", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3209 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 379 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_363", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3215 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 383 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3221 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 384 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("equality_expression_368", 366, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3227 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 385 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("equality_expression_369", 366, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3233 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 389 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3239 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 390 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("and_expression_374", 372, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3245 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 394 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3251 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 395 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exclusive_or_expression_379", 377, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3257 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 399 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3263 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 400 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("inclusive_or_expression_384", 382, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3269 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 404 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3275 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 405 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("logical_and_expression_389", 387, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3281 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 409 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3287 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 410 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("logical_or_expression_394", 392, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3293 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 414 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3299 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 415 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conditional_expression_399", 397, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3305 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 419 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3311 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 420 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("assignment_expression_404", 402, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3317 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 421 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3323 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 425 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3329 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 426 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3335 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 427 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3341 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 428 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3347 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 429 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3353 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 430 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3359 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 431 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3365 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 432 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3371 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 433 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3377 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 434 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3383 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 435 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3389 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 439 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3395 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 440 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_424", 422, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3401 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 444 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3407 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 452 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3413 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 453 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3419 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 454 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3425 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 455 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3431 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 456 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3437 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 457 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3443 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 458 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3449 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 459 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3455 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 463 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_447", 446, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3461 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 464 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_448", 446, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3467 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 465 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_449", 446, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3473 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 469 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_statement_453", 452, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3479 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 473 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("compound_statement_457", 456, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3485 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 477 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3491 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 478 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("statement_seq_462", 460, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3497 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 482 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_466", 465, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3503 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 483 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_467", 465, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3509 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 484 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_468", 465, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3515 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 488 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3521 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 489 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("condition_473", 471, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3527 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 493 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_477", 476, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3533 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 494 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_478", 476, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3539 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 495 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_479", 476, 8, (yyvsp[-7].tptr), (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3545 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 499 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3551 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 500 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3557 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 504 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_488", 487, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3563 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 505 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_489", 487, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3569 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 506 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_490", 487, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3575 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 507 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_491", 487, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3581 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 511 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3587 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 519 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3593 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 520 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declaration_seq_504", 502, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3599 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 524 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3605 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 525 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3611 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 526 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3617 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 527 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3623 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 528 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3629 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 529 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3635 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 530 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3641 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 534 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr); }
#line 3647 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 535 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3653 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 536 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3659 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 537 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3665 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 538 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3671 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 542 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_declaration_526", 525, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3677 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 543 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_declaration_527", 525, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3683 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 547 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3689 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 548 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3695 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 549 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3701 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 550 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3707 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 551 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3713 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 555 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3719 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 556 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("decl_specifier_seq_540", 538, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3725 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 560 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3731 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 561 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3737 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 562 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3743 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 563 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3749 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 564 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3755 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 568 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3761 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 569 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3767 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 570 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3773 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 574 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3779 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 575 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3785 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 576 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3791 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 577 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3797 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 578 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3803 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 582 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3809 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 583 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_type_specifier_567", 565, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3815 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 584 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_type_specifier_568", 565, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3821 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 585 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3827 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 586 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3833 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 587 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3839 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 588 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3845 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 590 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3851 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 591 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3857 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 592 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3863 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 593 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3869 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 594 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3875 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 595 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3881 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 599 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3887 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 600 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3893 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 601 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3899 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 605 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_589", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3905 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 606 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_590", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3911 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 607 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_591", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3917 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 608 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_592", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3923 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 609 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_593", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3929 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 610 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_594", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3935 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 611 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_595", 588, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3941 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 621 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enum_specifier_605", 604, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3947 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 625 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3953 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 626 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enumerator_list_610", 608, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3959 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 630 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3965 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 631 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enumerator_definition_615", 613, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3971 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 635 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3977 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 650 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3983 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 651 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3989 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 655 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3995 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 656 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4001 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 660 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("original_namespace_definition_644", 643, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4007 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 664 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("extension_namespace_definition_648", 647, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4013 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 668 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unnamed_namespace_definition_652", 651, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4019 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 672 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4025 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 682 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("namespace_alias_definition_666", 665, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4031 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 687 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_671", 670, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4037 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 688 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_672", 670, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4043 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 689 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_673", 670, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4049 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 690 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4055 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 694 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_678", 677, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4061 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 695 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_679", 677, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4067 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 696 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_680", 677, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4073 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 697 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_681", 677, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4079 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 698 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_682", 677, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4085 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 702 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_686", 685, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4091 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 703 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_687", 685, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4097 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 704 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_688", 685, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4103 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 705 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_689", 685, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4109 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 710 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("asm_definition_694", 693, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4115 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 714 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("linkage_specification_698", 697, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4121 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 715 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("linkage_specification_699", 697, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4127 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 723 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4133 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 724 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("init_declarator_list_708", 706, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4139 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 728 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("init_declarator_712", 711, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4145 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 732 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4151 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 733 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_717", 715, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4157 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 737 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4163 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 738 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_722", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4169 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 739 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_723", 720, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4175 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 740 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_724", 720, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4181 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 741 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_725", 720, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4187 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 742 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_726", 720, 3, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4193 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 743 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_727", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4199 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 744 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_728", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4205 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 745 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_729", 720, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4211 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 746 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_730", 720, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4217 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 750 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4223 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 751 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_735", 733, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4229 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 752 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4235 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 753 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_737", 733, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4241 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 754 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_738", 733, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4247 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 755 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_739", 733, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4253 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 756 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_740", 733, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4259 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 760 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4265 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 761 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("cv_qualifier_seq_745", 743, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4271 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 765 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4277 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 766 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4283 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 770 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4289 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 771 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_755", 753, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4295 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 772 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_756", 753, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4301 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 773 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_757", 753, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4307 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 777 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_id_761", 760, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4313 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 781 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_specifier_seq_765", 764, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4319 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 785 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("abstract_declarator_769", 768, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4325 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 786 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4331 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 790 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_774", 773, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4337 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 791 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_775", 773, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4343 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 792 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_776", 773, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4349 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 793 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_777", 773, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4355 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 794 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_778", 773, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4361 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 795 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_779", 773, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4367 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 799 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 4373 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 800 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4379 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 801 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4385 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 802 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4391 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 803 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4397 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 807 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4403 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 808 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_list_792", 790, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4409 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 812 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_796", 795, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4415 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 813 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_797", 795, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4421 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 814 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_798", 795, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4427 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 815 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_799", 795, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4433 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 819 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_803", 802, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4439 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 820 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_804", 802, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4445 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 821 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_805", 802, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4451 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 822 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_806", 802, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4457 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 826 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4463 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 830 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_814", 813, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4469 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 831 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_815", 813, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4475 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 835 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4481 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 836 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_clause_820", 818, 3, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4487 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 837 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_clause_821", 818, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4493 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 841 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4499 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 842 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_list_826", 824, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4505 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 855 "120gram.y" /* yacc.c:1646  */
    { typenametable_insert((yyvsp[0].tptr), CLASS_NAME); /*printf("%s\n", ($2)->name);*/ }
#line 4511 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 856 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("class_head_839", 837, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4517 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 857 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("class_head_840", 837, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4523 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 858 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("class_head_841", 837, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4529 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 862 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4535 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 863 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4541 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 864 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4547 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 868 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_specification_851", 850, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4553 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 869 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_specification_852", 850, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4559 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 873 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_856", 855, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4565 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 874 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_857", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4571 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 875 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_858", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4577 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 876 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4583 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 877 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_860", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4589 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 878 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_861", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4595 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 883 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4601 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 884 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_list_867", 865, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4607 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 888 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4613 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 889 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_872", 870, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4619 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 890 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_873", 870, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4625 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 891 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_874", 870, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4631 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 902 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL; }
#line 4637 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 906 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("constant_initializer_887", 886, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4643 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 914 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_clause_895", 894, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4649 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 918 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4655 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 919 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_list_900", 898, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4661 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 923 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_904", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4667 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 924 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_905", 903, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4673 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 925 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_906", 903, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4679 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 926 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4685 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 927 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_908", 903, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4691 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 928 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_909", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4697 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 929 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_910", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4703 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 930 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_911", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4709 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 931 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_912", 903, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4715 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 932 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_913", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4721 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 933 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_914", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4727 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 934 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_915", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4733 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 938 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4739 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 939 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4745 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 940 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4751 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 948 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_function_id_929", 928, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4757 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 952 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_type_id_933", 932, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4763 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 956 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_declarator_937", 936, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4769 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 960 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ctor_initializer_941", 940, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4775 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 964 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4781 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 965 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_list_946", 944, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4787 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 969 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_950", 949, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4793 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 973 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_954", 953, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4799 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 974 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_955", 953, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4805 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 975 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_956", 953, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4811 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 976 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4817 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 977 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4823 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 985 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_function_id_966", 965, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4829 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 989 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4835 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 990 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4841 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 991 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_972", 969, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4847 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 992 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_973", 969, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4853 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 993 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4859 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 994 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4865 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 995 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4871 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 996 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4877 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 997 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4883 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 998 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4889 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 999 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4895 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1000 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4901 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1001 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4907 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1002 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4913 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1003 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4919 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1004 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4925 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1005 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4931 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1006 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4937 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1007 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4943 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1008 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4949 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1009 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4955 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1010 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4961 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1011 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4967 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1012 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4973 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1013 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4979 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1014 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4985 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1015 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4991 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1016 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4997 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1017 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5003 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1018 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5009 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1019 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5015 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1020 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5021 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1021 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5027 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1022 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5033 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1023 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5039 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1024 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5045 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1025 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5051 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1026 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5057 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1027 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5063 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1028 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5069 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1029 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_1010", 969, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5075 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1030 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_1011", 969, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5081 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1038 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("template_declaration_1019", 1018, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5087 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1042 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5093 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1043 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("template_parameter_list_1024", 1022, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5099 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1047 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5105 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1048 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5111 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1051 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1032", 1031, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5117 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1052 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1033", 1031, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5123 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1053 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1034", 1031, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5129 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1054 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1035", 1031, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5135 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1055 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1036", 1031, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5141 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1056 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_parameter_1037", 1031, 8, (yyvsp[-7].tptr), (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5147 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1060 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("template_id_1041", 1040, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5153 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1064 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5159 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1065 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("template_argument_list_1046", 1044, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5165 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1069 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5171 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1070 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5177 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1071 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5183 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1075 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("explicit_instantiation_1056", 1055, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5189 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1079 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("explicit_specialization_1060", 1059, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5195 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1087 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("try_block_1068", 1067, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5201 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1091 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_try_block_1072", 1071, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5207 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1095 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("handler_seq_1076", 1075, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5213 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1099 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("handler_1080", 1079, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5219 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1103 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_declaration_1084", 1083, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5225 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1104 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_declaration_1085", 1083, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5231 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1105 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5237 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1106 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5243 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1110 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("throw_expression_1091", 1090, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5249 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1114 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_specification_1095", 1094, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5255 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1118 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5261 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1119 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_id_list_1100", 1098, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 5267 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1127 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5273 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1128 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5279 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1132 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5285 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1133 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5291 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1137 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5297 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1138 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5303 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1142 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5309 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1143 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5315 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1147 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5321 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1148 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5327 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1152 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5333 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1153 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5339 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1157 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5345 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1158 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5351 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1162 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5357 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1163 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5363 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1167 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5369 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1168 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5375 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1172 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5381 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1173 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5387 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1177 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5393 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1178 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5399 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1182 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5405 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1183 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5411 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1187 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5417 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1188 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5423 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1192 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5429 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1193 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5435 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1197 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5441 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1198 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5447 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1202 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5453 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1203 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5459 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1207 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5465 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1208 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5471 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1212 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5477 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1213 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5483 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1217 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5489 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1218 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5495 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1222 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5501 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1223 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5507 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1227 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5513 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1228 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5519 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 1232 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5525 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1233 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5531 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 1237 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5537 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1238 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5543 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 1242 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5549 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1243 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5555 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 1247 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5561 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1248 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5567 "120gram.tab.c" /* yacc.c:1646  */
    break;


#line 5571 "120gram.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1251 "120gram.y" /* yacc.c:1906  */


static void yyerror(char *s) {
	fprintf(stderr, "line %d: %s\n", yylineno, s);
}
