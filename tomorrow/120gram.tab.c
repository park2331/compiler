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
#include "hasht.h"
#include "symtab.h"


#define YYDEBUG 1
extern int yylineno;
extern char *yytext;
extern tableptr classtable;

/* extern in 120++.c 
 * Head pointer to start of program (translation unit).
 */
 
treeptr t_unit;

 
int yydebug=0;

static void yyerror(char *s);


#line 97 "120gram.tab.c" /* yacc.c:339  */

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
#line 75 "120gram.y" /* yacc.c:355  */

  struct tree *tptr;

#line 242 "120gram.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "120gram.tab.c" /* yacc.c:358  */

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
#define YYFINAL  164
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  160
/* YYNRULES -- Number of rules.  */
#define YYNRULES  459
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  756

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
       0,   165,   165,   169,   174,   179,   184,   197,   201,   202,
     203,   204,   205,   209,   213,   217,   221,   225,   226,   234,
     242,   243,   244,   245,   249,   250,   254,   255,   256,   257,
     261,   262,   266,   267,   268,   272,   273,   274,   279,   280,
     285,   286,   287,   288,   300,   301,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   318,   319,   320,   321,
     325,   326,   327,   328,   332,   336,   340,   341,   345,   346,
     350,   354,   355,   356,   357,   361,   362,   366,   367,   368,
     372,   373,   374,   375,   379,   380,   381,   385,   386,   387,
     391,   392,   393,   394,   395,   399,   400,   401,   405,   406,
     410,   411,   415,   416,   420,   421,   425,   426,   430,   431,
     435,   436,   437,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   455,   456,   460,   468,   469,   470,
     471,   472,   473,   474,   475,   479,   480,   481,   485,   489,
     493,   494,   498,   499,   500,   504,   505,   509,   510,   511,
     515,   516,   520,   521,   522,   523,   527,   535,   536,   540,
     541,   545,   546,   550,   551,   552,   553,   554,   558,   559,
     563,   564,   565,   566,   567,   571,   572,   576,   577,   578,
     579,   580,   584,   585,   586,   590,   591,   592,   593,   594,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   611,   615,   616,   617,   621,   622,   623,
     624,   625,   626,   637,   641,   642,   646,   647,   651,   666,
     667,   671,   672,   676,   680,   684,   688,   698,   703,   704,
     705,   706,   710,   711,   712,   713,   714,   718,   719,   720,
     721,   726,   730,   731,   739,   740,   744,   748,   749,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   766,
     768,   769,   771,   776,   777,   781,   782,   786,   787,   788,
     789,   793,   797,   801,   802,   806,   807,   808,   809,   810,
     811,   815,   816,   817,   818,   819,   823,   824,   828,   829,
     830,   831,   835,   836,   837,   838,   842,   846,   847,   851,
     852,   853,   857,   858,   866,   872,   873,   879,   880,   881,
     885,   886,   890,   891,   892,   893,   894,   895,   896,   900,
     901,   905,   906,   907,   908,   919,   923,   931,   935,   936,
     940,   941,   942,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   955,   956,   957,   965,   969,   973,   977,   981,
     982,   986,   990,   991,   992,   993,   994,  1002,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1104,  1108,  1112,  1116,  1120,  1121,  1122,  1123,  1127,  1131,
    1135,  1136,  1144,  1145,  1149,  1150,  1154,  1155,  1159,  1160,
    1164,  1165,  1169,  1170,  1174,  1175,  1179,  1180,  1184,  1185,
    1189,  1190,  1194,  1195,  1199,  1200,  1204,  1205,  1209,  1210,
    1214,  1215,  1219,  1220,  1224,  1225,  1229,  1230,  1234,  1235,
    1239,  1240,  1244,  1245,  1255,  1256,  1260,  1261,  1265,  1266
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
  "assignment_expression_opt", "type_id_list_opt", YY_NULL
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

#define YYPACT_NINF -541

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-541)))

#define YYTABLE_NINF -445

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1859,  -541,  -541,    23,  -541,   126,   -27,  -541,  -541,  -541,
    -541,  -541,  -541,    49,  -541,   125,  -541,  -541,  -541,  -541,
    -541,  -541,    43,  2600,  -541,  -541,  -541,  -541,  -541,  -541,
      69,  -541,  -541,   367,  -541,  -541,  -541,  -541,   576,  -541,
    -541,   109,  -541,  -541,   162,  -541,   169,  -541,  -541,   202,
    -541,  -541,  -541,   707,  1859,  -541,  -541,  -541,  -541,  1934,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,   -45,    70,   576,
    -541,  -541,  -541,  -541,   114,   289,  -541,  -541,  -541,   400,
    2717,  -541,  -541,   716,  -541,   287,   125,    41,   169,   188,
     262,  -541,  1784,  1859,   203,   120,    21,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,   171,
     206,   219,  -541,   209,  -541,  -541,  -541,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,   287,  3037,   590,
    -541,  -541,  -541,    21,   274,    59,    74,    46,   126,   130,
     238,  -541,    21,    21,  -541,    46,  -541,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,   214,  -541,   528,   218,    60,  -541,
    -541,   242,  2717,  2470,  -541,  1709,    41,   224,   254,   126,
     118,   266,  -541,  2009,   277,    20,  -541,  -541,  -541,  -541,
     284,  -541,   262,   262,  -541,  1859,  -541,   271,  -541,  1859,
    1859,    79,  -541,   275,   291,  -541,  -541,  -541,  -541,    21,
     279,   590,  -541,  -541,   262,   308,    46,    21,    27,   269,
      21,    46,   320,   716,  -541,  -541,  -541,  -541,  -541,   576,
    2216,  2183,  -541,  -541,  -541,   242,   242,    21,   169,  -541,
     109,  -541,   319,   325,  1111,  -541,  -541,   329,  -541,  -541,
    -541,    37,  2470,  2470,  2315,  -541,   347,  2483,  -541,  -541,
    1613,  2470,  -541,  -541,  2470,  -541,   109,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,   775,  -541,  2470,  -541,  -541,
    -541,    85,   253,   -69,   215,   251,    81,   364,   354,   360,
     452,     5,  -541,  -541,   379,  -541,  -541,  -541,   458,  -541,
     366,   388,  2084,  -541,   392,   404,  -541,  1709,   223,  -541,
     383,   407,  -541,   262,   742,  -541,  2717,   380,  2717,   902,
     401,   368,  -541,   163,   405,   173,  -541,  -541,  2792,   424,
    -541,  -541,   425,  -541,   415,   426,   431,  -541,   433,   435,
      21,   162,   269,   442,  -541,  -541,   449,  -541,  -541,  -541,
     443,    29,   269,  -541,   467,    46,   469,  -541,  -541,    30,
    2216,   315,  1072,  -541,  -541,  -541,   944,  -541,  -541,  -541,
     530,   169,   109,  -541,    60,  2216,   294,   473,  2470,   477,
     454,  1369,   481,   262,   487,   262,  2216,   489,   242,   494,
     480,   380,  -541,   498,  -541,  -541,  -541,  -541,  1247,  -541,
    -541,  -541,  -541,  -541,  1934,  -541,   497,   500,     4,  2348,
     347,  -541,  -541,   502,  -541,  2216,  -541,  2854,  1613,  -541,
     338,   509,   248,  -541,  -541,  -541,  -541,   485,  2216,  2216,
     501,  -541,  2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,
    2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,
    2470,  2470,  2216,  -541,  2470,  -541,  -541,   392,   247,   813,
    -541,  -541,  -541,  -541,  -541,  -541,   576,  1709,  -541,  -541,
      21,   771,   169,   109,   517,  -541,   321,   519,   521,   523,
    2216,  -541,  2216,  2717,  2470,  -541,  -541,  -541,   262,  2470,
    -541,  -541,  -541,  -541,   162,   269,  -541,  -541,  -541,  -541,
     527,  -541,   533,  -541,  -541,  -541,  -541,  2216,  -541,  -541,
    -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  2216,
    -541,  -541,   531,   529,  -541,   530,  -541,  -541,   535,   541,
    -541,   524,  -541,  1369,   550,  1491,   551,  1613,   544,   559,
    1613,   530,  1613,  1369,  2216,  -541,  -541,  -541,   561,   577,
       3,  -541,   560,  -541,  2915,  2470,   341,  3037,   565,   681,
     566,  -541,  2470,   752,   248,  -541,   274,  -541,   569,   -32,
     274,  -541,  -541,  -541,    85,    85,    85,   253,   253,   -69,
     -69,   215,   215,   215,   215,   251,   251,    81,   364,   354,
     360,   452,    36,  -541,  -541,  -541,  -541,   568,  -541,  -541,
     169,   109,    21,    83,   109,  -541,   742,    21,    92,   109,
    -541,  -541,  -541,  -541,  -541,   572,   579,  -541,  -541,  -541,
    -541,  -541,  -541,  -541,  2183,   582,  2976,  -541,  -541,  -541,
    1369,  -541,   599,  -541,  1613,  -541,  -541,   498,   604,   576,
    -541,   607,  -541,   608,  -541,  -541,  3037,  -541,  -541,  2470,
    3037,   565,  -541,  -541,   611,  2216,  -541,  -541,  2216,  -541,
     613,   681,  -541,  -541,  -541,  -541,  -541,  -541,  -541,  2216,
    -541,   109,    21,   109,  -541,  -541,   109,    21,   109,  -541,
       4,  -541,  -541,  -541,  -541,   368,   619,  -541,  2216,  -541,
     622,  1369,   609,  1369,  1369,  -541,   627,   629,  -541,   631,
    -541,   565,   635,   149,  2470,  -541,  -541,  -541,   109,  -541,
    -541,   109,  -541,   577,  -541,  -541,  -541,   242,   349,  2216,
     685,  2216,  -541,  -541,  3037,  -541,   565,  -541,  -541,  -541,
     633,  -541,  -541,  -541,  -541,   641,   644,  1369,  -541,  -541,
    -541,  -541,  -541,  1369,  -541,  -541
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     412,     7,     2,     5,     6,     0,     0,   177,   195,   193,
     307,   265,   202,     0,   184,   180,   201,   173,   182,   197,
     198,   181,     0,     0,   178,   196,   199,   179,   308,   174,
     418,   309,   200,     0,   183,   203,   266,   194,     0,   260,
     259,     0,     4,   206,     0,     3,   204,   205,    26,     0,
     267,    24,    25,     0,   413,   157,   159,   163,   175,     0,
     170,   172,   171,   185,   190,   188,   187,   162,   219,   221,
     222,   220,   165,   166,   167,   164,   161,   444,   247,     0,
     189,   249,   160,   186,     0,     0,    28,    27,    19,     0,
     285,     5,   268,     0,   270,     0,     0,     0,     0,     0,
       0,    16,     0,   412,     0,     0,   414,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   396,   397,   359,
     358,     0,   395,     0,   368,   373,   374,   363,   362,   372,
     366,   364,   365,   369,   367,   371,   370,     0,   440,   452,
     345,   357,   419,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    34,     1,     0,   261,   204,    30,   191,
     158,   180,   169,   176,     0,   244,   434,   444,     0,   445,
     294,     0,   285,   436,   248,   448,     0,   305,     5,     0,
       0,     0,   283,   438,     0,   281,   286,   262,   269,   192,
       0,   210,     0,   432,   211,   412,   243,     0,   226,   412,
     412,     0,   415,     0,     0,   398,   399,   441,   272,     0,
       0,   452,   453,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,    33,    32,    31,   168,     0,
       0,     0,   435,   295,   246,     0,     0,     0,   355,   356,
       0,   348,   349,     0,   426,   296,   292,     0,    13,    15,
      14,     0,     0,     0,     0,    18,   420,     0,    21,    17,
       0,     0,    56,    57,     0,    58,    59,    20,     8,     9,
      10,    11,    12,    35,    23,    46,    75,     0,    54,    55,
      77,    80,    84,    87,    90,    95,    98,   100,   102,   104,
     106,   108,   126,   437,     0,   342,   343,   344,     0,   315,
      26,    25,     0,   318,   321,   450,   449,   448,     0,   319,
       0,     0,   208,     0,     0,   306,   285,     0,   285,   442,
     288,   438,   439,   274,   290,     0,   254,   282,     0,     0,
     209,   218,   433,   214,   216,     0,     0,   225,     0,     0,
       0,   231,     0,     0,   361,   360,     0,   347,   212,   236,
       0,     0,     0,   240,     0,     0,     0,   235,   245,   434,
     456,     0,   108,   110,    44,   112,     0,   299,   297,   293,
       0,   353,     0,   354,     0,   416,   414,     0,     0,     0,
       0,   426,     0,     0,     0,     0,   426,     0,     0,     0,
      26,     0,   124,   427,   140,   127,   128,   129,   426,   130,
     131,   132,   133,   156,     0,   134,     0,     0,   253,     0,
     420,    47,    48,     0,    71,     0,   421,     0,     0,    52,
       0,     0,   438,    50,    49,    42,    43,     0,   416,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,     0,   317,   313,   321,     0,     0,
     322,   323,   451,   316,   310,   314,     0,   448,   304,   207,
       0,     0,   333,     0,   327,   328,     0,     0,     0,     0,
       0,   273,     0,   285,   436,   284,   287,   241,     0,     0,
     213,   242,   224,   223,   229,     0,   230,   227,   234,   238,
       0,   239,     0,   233,   457,   408,   298,     0,   117,   118,
     114,   115,   116,   122,   121,   123,   119,   120,   113,     0,
     301,   302,   446,     0,   401,   454,   352,   350,   417,     0,
     152,     0,   153,   426,     0,   426,     0,     0,     0,     0,
       0,     0,     0,   426,     0,   141,   138,   139,     0,   251,
     263,   252,     0,    72,     0,     0,     0,     0,   422,   424,
       0,    22,     0,   442,   438,   271,     0,    41,     0,     0,
       0,    39,    78,    79,    83,    81,    82,    85,    86,    88,
      89,    93,    94,    91,    92,    96,    97,    99,   101,   103,
     105,   107,     0,   324,   312,   325,   326,   321,   320,   311,
     331,     0,     0,     0,     0,   332,     0,     0,     0,     0,
     256,   255,   280,   289,   291,     0,     0,   215,   217,   228,
     237,   232,    45,   111,   447,     0,     0,   455,   402,   351,
     426,   137,     0,   150,   430,   151,   155,   145,     0,     0,
     154,     0,   400,     0,   135,   125,   458,   250,   264,     0,
       0,   422,    73,    64,     0,   416,   423,    60,     0,   425,
      67,   424,    65,    53,    76,    40,    37,    36,    38,     0,
     330,     0,     0,     0,   337,   329,     0,     0,     0,   341,
     278,   279,   303,   300,   407,   406,     0,   136,     0,   431,
       0,   426,     0,   426,   426,   410,   459,     0,    74,     0,
      61,   422,     0,     0,     0,    66,   109,   336,     0,   335,
     340,     0,   339,   276,   277,   404,   405,     0,     0,   426,
     142,     0,   144,   147,     0,   409,   422,    62,    70,    68,
       0,   334,   338,   275,   403,     0,     0,   426,   146,   411,
      63,    69,   148,   426,   143,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -541,  -541,  -118,   727,   351,  -541,    40,  -541,  -541,  -541,
    -541,    17,  -541,  -541,  -541,   669,   537,  -178,     0,  -541,
    -211,   493,  -541,  -541,  -541,   192,  -541,  -541,  -541,  -541,
    -207,   -44,    11,    51,   201,    52,   309,   316,   310,   313,
     323,  -180,  -159,   221,  -541,  -262,  -382,  -281,  -541,   236,
    -170,  -541,  -541,  -456,  -541,  -541,  -541,  -541,  -541,    12,
      77,   237,   -41,   429,  -541,  -541,    28,  -541,   111,  -541,
    -541,  -541,   293,  -541,  -541,  -541,  -541,  -541,  -541,   311,
    -541,  -541,  -175,  -541,  -541,  -541,  -541,   553,    82,  -541,
    -109,  -540,  -409,   700,  -407,    -1,  -328,  -541,  -157,  -541,
     456,  -173,   280,  -541,  -360,  -541,  -541,  -541,  -541,  -541,
    -541,   483,   322,  -541,  -541,  -541,  -541,   180,  -309,  -541,
    -541,  -541,  -541,   416,  -541,  -541,  -541,  -541,  -541,  -174,
    -320,  -541,  -541,  -541,  -533,  -541,    19,  -421,  -424,  -541,
     381,  -402,   131,  -392,  -541,  -541,  -541,  -541,   312,  -176,
    -541,  -541,  -149,  -541,  -283,  -541,   583,  -541,  -541,  -541
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    43,    44,    45,    98,    47,    48,   277,   278,   279,
     280,   281,   282,    49,   283,   284,    51,    52,   190,   285,
     538,   286,   287,   288,   426,   568,   669,   670,   666,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   372,   373,   402,   529,   403,   303,   404,   405,   406,
     407,   408,   409,   648,   410,   644,   411,   412,    54,    55,
     413,    57,    58,   414,    60,    61,    62,    63,    64,    65,
      66,   342,   343,   344,    67,    68,    69,    70,    71,   207,
      72,   353,    73,    74,    75,    76,   174,   175,    77,    78,
      79,   559,    80,    81,   431,   432,   332,   333,   194,   195,
     196,    82,   256,   242,   378,   532,    83,    84,    85,   316,
     317,   318,   319,   470,   471,   325,   484,   485,   320,    86,
     150,   222,   179,   251,   252,   253,    87,   151,   415,   180,
     534,   535,   696,   375,   561,   706,   208,    95,   539,   153,
     427,   667,   672,   416,   417,   700,   345,   244,   304,   491,
     218,   335,   181,   635,   321,   473,   223,   638,   515,   707
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   489,   243,   301,   549,    93,   541,   311,   430,   560,
     313,   255,   315,   100,   578,   486,   531,   334,   173,    88,
     658,   570,   149,   147,   302,   257,   657,   245,   246,   371,
      91,   337,   102,   157,   474,    89,   461,   228,   159,   162,
     221,   162,   177,   447,     1,   448,     1,    11,    11,     1,
      91,   148,     1,    99,    53,   421,   422,   424,    91,    53,
     614,    97,   105,     1,   433,   619,   170,   434,    91,    91,
     554,   227,   247,    96,   677,   255,   255,    56,   178,   159,
     441,   152,   603,    91,   331,   419,   230,   606,    91,   558,
     147,   350,    91,   351,   651,   682,   653,   202,   442,    36,
      36,    91,    53,    53,   687,   420,   212,   455,   456,   361,
     544,   364,   221,   200,   206,    23,    94,   628,    91,   443,
     160,     1,   338,    90,   462,   187,   363,   555,   509,     1,
     240,    56,   101,     1,     2,    91,     4,   201,   554,   311,
     204,   176,   313,   241,   315,    42,   103,   217,   147,   220,
     723,   560,   173,   224,   226,   229,   231,   724,   233,   679,
     664,   184,   235,   236,   169,    42,   430,    42,    41,   487,
     182,   488,   613,    42,   162,   183,   148,   579,   250,    56,
      56,   163,   147,    42,    42,    53,   323,    23,   699,   327,
     743,   681,   683,    53,   609,    23,   686,   688,    42,    23,
     602,   165,   164,    42,   198,    53,   199,    42,   301,    53,
      53,   352,   563,   165,   566,   637,    42,   185,   249,   356,
     331,   220,   331,   210,   346,   310,   322,   362,   551,   302,
     365,   652,   504,   211,   506,   582,   583,   449,   450,   159,
      41,   712,   340,   341,   510,   489,   166,   382,    41,   705,
      42,   554,    41,   709,   401,   739,   575,    91,   169,   710,
     219,   718,   641,  -443,   358,     1,   721,   314,  -443,    94,
     401,   173,   654,   493,   692,   330,   213,     1,   494,   451,
     452,   560,    56,    91,   301,   647,    56,    56,   647,   301,
     647,   203,     1,   243,   400,     2,    91,     4,   148,   311,
      94,   186,   313,    91,   315,   302,   209,   486,   157,   737,
     302,   214,    53,   238,   301,   216,   239,    53,   245,   301,
     215,   369,   475,   574,   483,   476,   147,   749,   147,   159,
      91,   159,   740,   617,   750,   302,   625,   746,   147,   234,
     302,   178,   419,    23,   198,   254,   604,   324,   573,   476,
     505,    46,   310,  -442,   326,    39,    46,   310,   662,   697,
     453,   454,   420,   479,    40,   674,   328,   726,   444,   445,
     446,     1,    42,   173,    46,   347,    91,     3,   336,   154,
     158,   354,   647,     1,   250,   339,   212,   629,     2,    91,
       4,   401,   161,    42,   467,   166,    41,   355,    42,   314,
     584,   585,   586,     1,   167,    46,   713,   359,   401,   188,
      46,   160,   189,   184,    53,   618,   516,   517,    42,   367,
     730,   384,   732,   733,   249,   385,   569,   147,   401,    59,
     418,   400,   220,   546,   155,   548,   728,    23,   198,   571,
     554,    46,   663,   517,   167,    42,   167,   425,   400,    23,
     745,   554,   708,    46,    46,   148,   148,   156,   587,   588,
     671,   374,   377,   165,   574,   574,   754,    91,   329,    23,
     154,   457,   755,  -442,   458,    39,   159,    53,   459,   177,
     611,   212,   460,    59,    40,   463,   212,   465,     1,   464,
      41,    42,    42,   147,    91,  -444,   369,   576,   167,    46,
     589,   590,    41,   472,     1,   469,   477,   595,   596,    46,
      91,   478,   169,   580,   490,   178,   310,   310,   492,   193,
     348,   349,    41,   497,    42,   379,   380,   498,   499,   248,
     500,    59,    59,    46,   301,   501,    46,   502,   341,   503,
      46,   507,   508,   401,    46,   401,   649,   401,   156,   649,
     401,   649,   401,   401,    23,   302,    46,   744,   607,   314,
      46,    46,   671,   569,   147,   197,   511,   147,   513,   220,
      23,   533,   540,   220,   220,   148,   542,   543,   148,     1,
     148,   545,    42,   400,   167,     3,   331,   547,   158,   550,
     168,   514,   148,   400,   552,   148,   556,   377,   381,    91,
     554,   383,   219,   553,   557,    46,   374,    41,   565,    42,
     572,   193,   212,   212,   312,   177,   483,   212,   212,   616,
     620,    46,   621,    41,   622,    42,   630,   161,   240,   636,
     168,  -444,   631,   634,    59,   695,   147,   517,    59,    59,
     401,   241,   639,   649,   401,    23,   374,   640,   642,   159,
     646,   178,   591,   592,   593,   594,   147,   211,   650,   374,
     147,   656,   558,    46,   148,   665,   659,   673,    46,    50,
     676,   220,   148,   690,    92,   482,    38,    46,   167,    46,
     400,   469,   212,    39,   148,   691,   693,   212,   148,    46,
      91,   225,    40,   219,   232,   159,   168,    39,    41,   698,
      42,   401,   237,   401,   401,   701,    40,    50,   703,   704,
       1,   623,   711,   624,    42,     2,    91,     4,   714,     1,
     727,   729,   731,    50,     2,    91,     4,   168,    50,   734,
     735,   702,   736,   536,   147,   248,   738,   747,   632,   751,
     752,   400,    46,   400,   400,   753,   312,   401,    50,   104,
     633,    91,   167,   401,   480,   193,   661,   193,    50,    46,
     429,    91,   148,   360,   219,    46,   597,   193,   366,   599,
     168,    50,    50,   600,   598,   655,    23,   725,    46,    46,
      91,   643,   645,   612,   601,    23,   668,   400,    39,   191,
     165,   627,   368,   400,   496,   468,   685,    40,   608,   165,
     537,   564,   715,     0,   357,    42,   626,   435,   436,     0,
     437,     0,   305,   306,   307,     0,     1,   258,   259,   260,
     101,     0,    91,   166,     0,   261,     0,    92,    46,    41,
       0,   610,   197,     0,   615,     0,   481,     0,    41,     0,
       0,   305,   306,   307,    46,   262,   263,     0,     0,     0,
       0,     0,   573,     0,    50,   377,     0,     0,    92,    39,
       0,   264,    50,     0,   168,     0,    42,     0,    40,     0,
     265,     0,     0,     0,    50,   438,    42,     0,    50,    50,
     439,   266,    23,   440,     0,     0,   374,     0,     0,     0,
       0,   267,     0,     0,    46,    42,    46,   268,    46,   269,
     716,    46,   512,    46,    46,     1,   312,     0,    50,     0,
       0,     3,     0,   270,   158,    46,     0,     0,    46,     0,
     271,     0,   193,     0,     0,   272,     0,   273,     0,   274,
       0,     0,     0,     0,   275,   276,     0,    42,   168,   605,
       0,     0,     0,     0,     0,     0,     0,     1,   258,   259,
     260,   101,   748,    91,     0,     0,   261,     0,     0,     0,
       0,     0,   680,     0,     0,   684,     0,   482,     0,     0,
     689,    23,     0,     0,     0,     0,   262,   263,     0,     0,
       0,    50,     0,     0,     0,     0,    50,    46,     0,     0,
       0,    46,   264,     0,     0,    46,     0,     0,    50,     0,
      50,   265,   329,     0,     0,     0,     0,    46,     0,    39,
       0,    46,   266,    23,     0,     0,     0,     0,    40,     0,
       0,     0,   267,     0,    41,     0,    42,     0,   268,   370,
     269,     0,   717,     0,   719,     0,     0,   720,     0,   722,
       0,     0,     0,     0,   270,     0,     0,   376,   530,     0,
       0,   271,    46,     0,    46,    46,   272,     0,   273,     0,
     274,     0,     0,     0,     0,   275,   276,     0,    42,   741,
       0,     0,   742,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,    46,   518,   519,   520,   521,
     522,   523,   524,   525,     0,     0,   526,   527,    46,     0,
       0,     0,     0,   461,    46,     0,   577,     0,     0,   581,
       0,     0,     0,     0,     1,   258,   259,   260,   101,     2,
      91,     4,     0,   386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,    50,    50,     6,     7,     8,
     387,   388,     0,     9,    10,    11,     0,   389,   390,   264,
     391,    12,     0,     0,    13,    14,     0,   171,   265,    16,
     392,    17,   393,   394,    18,    19,    20,    21,   395,   266,
      23,     0,     0,     0,    24,   528,   396,    25,    26,   267,
      27,   462,    28,   397,     0,   268,   370,   269,   398,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,   399,
       0,   270,     0,     0,   254,  -428,     0,     0,   271,     0,
       0,     0,     0,   272,     0,   273,     0,   274,     0,     0,
       0,     0,   275,   276,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,     0,     0,     0,   678,
       1,   258,   259,   260,   101,     2,    91,     4,     0,   386,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   262,
     263,     0,     0,     6,     7,     8,   387,   388,     0,     9,
      10,    11,     0,   389,   390,   264,   391,    12,     0,     0,
      13,    14,     0,   171,   265,    16,   392,    17,   393,   394,
      18,    19,    20,    21,   395,   266,    23,     0,    50,     0,
      24,     0,   396,    25,    26,   267,    27,     0,    28,   397,
       0,   268,   370,   269,   398,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,   399,     0,   270,     0,     0,
     254,  -429,     0,     0,   271,     0,     0,     0,     0,   272,
       0,   273,     0,   274,    50,     0,     0,     0,   275,   276,
       0,    42,     1,   258,   259,   260,   101,     2,    91,     4,
       0,   386,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,     0,     0,     6,     7,     8,   387,   388,
       0,     9,    10,    11,     0,   389,   390,   264,   391,    12,
       0,     0,    13,    14,     0,   171,   265,    16,   392,    17,
     393,   394,    18,    19,    20,    21,   395,   266,    23,     0,
       0,     0,    24,     0,   396,    25,    26,   267,    27,     0,
      28,   397,     0,   268,   370,   269,   398,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,   399,     0,   270,
       0,     0,   254,     0,     0,     0,   271,     0,     0,     0,
       0,   272,     0,   273,     0,   274,     0,     0,     0,     0,
     275,   276,     0,    42,     1,   258,   259,   260,   101,     2,
      91,     4,     0,   386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,     0,     0,     0,     7,     8,
       0,     0,     0,     9,    10,    11,     0,     0,     0,   264,
       0,    12,     0,     0,    13,    14,     0,   171,   265,    16,
       0,    17,     0,     0,    18,    19,    20,    21,     0,   266,
      23,     0,     0,     0,    24,     0,     0,    25,    26,   267,
      27,     0,    28,     0,     0,   268,   370,   269,     0,    29,
       0,    30,    31,    32,     0,    34,    35,    36,    37,     0,
       0,   270,     0,     0,     0,     0,     0,     0,   271,     0,
       0,     0,     0,   272,     0,   273,     0,   274,     0,     0,
       0,     0,   275,   276,     0,    42,     1,   258,   259,   260,
     101,     2,    91,     4,     0,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   263,     0,     0,     0,
       0,     8,     0,     0,     0,     9,    10,    11,     0,     0,
       0,   264,     0,    12,     0,     0,    13,     0,     0,     0,
     265,    16,     0,     0,     0,     0,     0,    19,    20,     0,
       0,   266,    23,     0,     0,     0,     0,     0,     0,    25,
      26,   267,     0,     0,    28,     0,     0,   268,   370,   269,
       0,     0,     0,    30,    31,    32,     0,     0,    35,    36,
      37,     0,     1,   270,     0,     0,     0,     2,     3,     4,
     271,     5,     0,     0,     0,   272,     0,   273,     0,   274,
       0,     0,     0,     0,   275,   276,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,    13,    14,     0,   171,     0,    16,     0,    17,
       0,     0,    18,    19,    20,    21,     0,     0,    23,   305,
     306,   307,    24,     0,     0,    25,    26,     1,    27,     0,
      28,     0,     2,     3,     4,     0,     5,    29,     0,    30,
      31,    32,   308,    34,    35,    36,    37,     0,   309,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       6,     7,     8,     0,     0,    40,     9,    10,    11,     0,
       0,    41,     0,    42,    12,     0,     0,    13,    14,     0,
      15,     0,    16,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,    23,     0,     0,     0,    24,     0,     0,
      25,    26,     1,    27,     0,    28,     0,     2,     3,     4,
       0,     5,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,     0,     0,    38,     0,     0,   205,     0,     0,
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
      31,    32,     0,    34,    35,    36,    37,     0,     0,   329,
       0,     0,     0,     0,  -442,     0,    39,     0,     0,     0,
       0,     7,     8,     0,     0,    40,     9,    10,    11,     0,
       0,    41,     0,    42,    12,     0,     0,    13,    14,     0,
     171,     0,    16,     0,    17,     0,     0,    18,    19,    20,
      21,     0,     0,    23,     0,     0,     0,    24,     0,     0,
      25,    26,     0,    27,     0,    28,     0,     0,     0,     0,
       0,     0,    29,     0,    30,    31,    32,     0,    34,    35,
      36,    37,     0,   466,    38,     0,     1,   258,   259,   260,
     101,    39,    91,     0,     0,   261,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,    41,     0,    42,     0,
       0,     0,     0,     0,     0,   262,   263,     0,     0,     1,
     258,   259,   260,   101,     0,    91,     0,     0,   261,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
     265,     0,     0,     0,     0,     0,     0,     0,   262,   263,
       0,   266,    23,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,   264,     0,     0,   268,   370,   269,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,   266,    23,   376,     0,     0,     0,
     271,     0,     0,     0,   267,   272,     0,   273,     0,   274,
     268,   370,   269,     0,   275,   276,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     1,   258,
     259,   260,   101,   271,    91,     0,     0,   261,   272,     0,
     273,     0,   274,     0,     0,     0,     0,   275,   276,     0,
      42,     0,     0,     0,     0,     0,     0,   262,   263,     0,
       0,     1,   258,   259,   260,   101,     0,    91,     0,     0,
     261,     0,     0,   264,     0,     0,     0,     0,     0,     0,
       0,     0,   265,     0,     0,     0,     0,     0,     0,     0,
     262,   263,     0,   266,    23,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   264,     0,     0,   268,
       0,   269,     0,     0,     0,   265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,   266,    23,     0,     0,
     423,     0,   271,     0,     0,     0,   267,   272,     0,   273,
       0,   274,   268,     0,   269,     0,   275,   276,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,   270,     0,
       0,     0,     0,   562,     0,   271,     0,     0,     0,     0,
     272,     0,   273,     0,   274,     0,     0,     0,     0,   275,
     276,     0,    42,     1,   258,   259,   260,   101,     0,    91,
       0,     0,   261,     0,     0,     0,     1,   258,   259,   260,
     101,     0,    91,     0,     0,   261,     0,     0,     0,     0,
       0,     0,   262,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   263,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,   264,     0,     0,     0,     0,     0,     0,   266,    23,
     265,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   266,    23,     0,   268,     0,   269,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,   268,     0,   269,
     270,     0,     0,     0,     0,     0,     0,   271,     0,     0,
       0,     0,   272,   428,   273,     0,   274,     0,     0,     0,
     271,   275,   276,     0,    42,   272,     0,   273,     0,   274,
       0,     0,     0,     0,   275,   276,     0,    42,     2,    91,
       4,     0,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,     8,     0,
       0,     0,     9,    10,    11,     0,     0,     0,   129,     0,
      12,     0,     0,    13,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,    19,    20,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,     0,    35,    36,    37,     0,     0,
     131,     0,   132,     0,     0,   133,     0,   134,     0,   135,
     136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     144,   145,   146,     0,    42,     2,    91,     4,   192,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,    12,     0,     0,
      13,    14,     0,   171,     0,    16,     0,    17,     0,     0,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,     0,    27,     0,    28,     0,
       2,    91,     4,   495,   106,    29,     0,    30,    31,    32,
       0,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,    42,    12,     0,     0,    13,    14,     0,   171,     0,
      16,     0,    17,     0,     0,    18,    19,    20,    21,     0,
       0,     0,     2,    91,     4,    24,   106,     0,    25,    26,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
      29,     0,    30,    31,    32,     0,    34,    35,    36,    37,
       0,     0,     8,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,    13,     0,     0,
       0,     0,    16,     0,     0,     0,    42,     0,    19,    20,
       0,     0,     0,     2,    91,     4,     0,   106,     0,     0,
      25,    26,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,     0,     0,    35,
      36,    37,     0,     8,   567,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,    13,     0,
       0,     0,     0,    16,     0,     0,     0,     0,    42,    19,
      20,     0,     0,     0,     2,    91,     4,   694,   106,     0,
       0,    25,    26,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
      35,    36,    37,     0,     8,   660,     0,     0,     9,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,    13,
       0,     0,     0,     0,    16,     0,     0,     0,     0,    42,
      19,    20,     0,     0,     0,     2,    91,     4,     0,   106,
       0,     0,    25,    26,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,     0,
       0,    35,    36,    37,     0,     8,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,    12,     0,     0,
      13,     0,     0,     0,     0,    16,     0,     0,     0,     0,
      42,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
       0,     0,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42
};

static const yytype_int16 yycheck[] =
{
       0,   329,   176,   183,   396,     5,   388,   185,   270,   418,
     185,   181,   185,    13,   438,   324,   376,   193,    59,     0,
     560,   428,    23,    23,   183,   182,   559,   176,   177,   240,
       9,    11,    15,    33,   317,    12,    31,   155,    38,    12,
     149,    12,    87,   112,     3,   114,     3,    44,    44,     3,
       9,    23,     3,    13,    54,   262,   263,   264,     9,    59,
     481,    12,    22,     3,   271,   486,    54,   274,     9,     9,
     102,    12,    12,   100,   106,   245,   246,     0,   123,    79,
     287,    12,   464,     9,   193,    48,    12,   469,     9,    85,
      90,    12,     9,   211,   550,    12,   552,    97,    13,    96,
      96,     9,   102,   103,    12,    68,   106,    26,    27,   227,
     391,   229,   221,    96,   102,    69,     5,   499,     9,    34,
      38,     3,   102,   100,   119,    85,    99,   408,    99,     3,
     100,    54,     7,     3,     8,     9,    10,    97,   102,   317,
     100,    59,   317,   113,   317,   124,   103,   148,   148,   149,
     690,   560,   193,   153,   154,   155,   156,   690,   158,   123,
     567,    79,   162,   163,    53,   124,   428,   124,   122,   326,
     100,   328,   481,   124,    12,   105,   148,   439,   178,   102,
     103,    12,   182,   124,   124,   185,   186,    69,   644,   189,
     723,   612,   613,   193,   477,    69,   617,   618,   124,    69,
     462,    83,     0,   124,    93,   205,    95,   124,   388,   209,
     210,   211,   419,    83,   425,   535,   124,   103,   178,   219,
     329,   221,   331,   103,   205,   185,   186,   227,   398,   388,
     230,   551,   350,   113,   352,   442,   443,    22,    23,   239,
     122,   665,   202,   203,   362,   573,   116,   247,   122,   656,
     124,   102,   122,   660,   254,   106,   432,     9,   147,   661,
      12,   682,   543,   100,   224,     3,   687,   185,   105,   158,
     270,   312,   553,   100,   634,   193,   105,     3,   105,    28,
      29,   690,   205,     9,   464,   547,   209,   210,   550,   469,
     552,   103,     3,   467,   254,     8,     9,    10,   270,   477,
     189,    12,   477,     9,   477,   464,   103,   616,   308,   711,
     469,   105,   312,    99,   494,   106,   102,   317,   467,   499,
     101,   239,    99,   432,   324,   102,   326,   734,   328,   329,
       9,   331,   714,    12,   736,   494,   493,   729,   338,   101,
     499,   123,    48,    69,   233,   103,    99,   123,   100,   102,
     350,     0,   312,   105,   100,   107,     5,   317,   565,   640,
     109,   110,    68,   323,   116,   572,   100,   695,   115,   116,
     117,     3,   124,   414,    23,   104,     9,     9,   101,    12,
      12,   106,   644,     3,   384,   101,   386,   505,     8,     9,
      10,   391,    41,   124,   312,   116,   122,   106,   124,   317,
     444,   445,   446,     3,    53,    54,   668,    99,   408,     9,
      59,   329,    12,   331,   414,    94,   101,   102,   124,    99,
     701,   102,   703,   704,   384,   100,   427,   427,   428,     0,
     101,   391,   432,   393,    67,   395,   698,    69,   327,   101,
     102,    90,   101,   102,    93,   124,    95,   100,   408,    69,
     101,   102,   659,   102,   103,   427,   428,    90,   447,   448,
     569,   240,   241,    83,   573,   574,   747,     9,   100,    69,
      12,   107,   753,   105,   120,   107,   476,   477,   118,    87,
     480,   481,    30,    54,   116,   106,   486,    99,     3,   123,
     122,   124,   124,   493,     9,   103,   414,    12,   147,   148,
     449,   450,   122,    99,     3,   113,   123,   455,   456,   158,
       9,   104,   401,    12,   113,   123,   476,   477,   113,    90,
     209,   210,   122,    99,   124,   245,   246,   102,   113,   178,
     104,   102,   103,   182,   714,   104,   185,   104,   498,   104,
     189,    99,    99,   543,   193,   545,   547,   547,    90,   550,
     550,   552,   552,   553,    69,   714,   205,   727,   476,   477,
     209,   210,   671,   564,   564,   116,    99,   567,    99,   569,
      69,    41,    99,   573,   574,   547,    99,   123,   550,     3,
     552,   100,   124,   543,   233,     9,   695,   100,    12,   100,
      53,   370,   564,   553,   100,   567,    99,   376,   247,     9,
     102,   250,    12,   123,   104,   254,   385,   122,   106,   124,
     101,   182,   612,   613,   185,    87,   616,   617,   618,   102,
     101,   270,   101,   122,   101,   124,    99,   276,   100,   100,
      93,   103,    99,   102,   205,   636,   636,   102,   209,   210,
     640,   113,   101,   644,   644,    69,   425,   123,    98,   649,
      99,   123,   451,   452,   453,   454,   656,   113,    99,   438,
     660,   100,    85,   312,   636,   100,   106,   101,   317,     0,
     101,   671,   644,   101,     5,   324,   100,   326,   327,   328,
     640,   113,   682,   107,   656,   106,   104,   687,   660,   338,
       9,   154,   116,    12,   157,   695,   159,   107,   122,   100,
     124,   701,   165,   703,   704,   101,   116,    38,   101,   101,
       3,   490,   101,   492,   124,     8,     9,    10,   105,     3,
     101,    99,   113,    54,     8,     9,    10,   190,    59,   102,
     101,   649,   101,   382,   734,   384,   101,    52,   517,   106,
      99,   701,   391,   703,   704,   101,   317,   747,    79,    22,
     529,     9,   401,   753,    12,   326,   564,   328,    89,   408,
     267,     9,   734,   226,    12,   414,   457,   338,   231,   459,
     233,   102,   103,   460,   458,   554,    69,   695,   427,   428,
       9,   545,   545,    12,   461,    69,   105,   747,   107,    89,
      83,   498,   239,   753,   338,   312,   616,   116,   476,    83,
     384,   420,   671,    -1,   221,   124,   494,    32,    33,    -1,
      35,    -1,    70,    71,    72,    -1,     3,     4,     5,     6,
       7,    -1,     9,   116,    -1,    12,    -1,   158,   477,   122,
      -1,   480,   116,    -1,   483,    -1,    94,    -1,   122,    -1,
      -1,    70,    71,    72,   493,    32,    33,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   185,   634,    -1,    -1,   189,   107,
      -1,    48,   193,    -1,   327,    -1,   124,    -1,   116,    -1,
      57,    -1,    -1,    -1,   205,   100,   124,    -1,   209,   210,
     105,    68,    69,   108,    -1,    -1,   665,    -1,    -1,    -1,
      -1,    78,    -1,    -1,   543,   124,   545,    84,   547,    86,
     679,   550,   365,   552,   553,     3,   477,    -1,   239,    -1,
      -1,     9,    -1,   100,    12,   564,    -1,    -1,   567,    -1,
     107,    -1,   493,    -1,    -1,   112,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,   401,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,   731,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   611,    -1,    -1,   614,    -1,   616,    -1,    -1,
     619,    69,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,   317,   636,    -1,    -1,
      -1,   640,    48,    -1,    -1,   644,    -1,    -1,   329,    -1,
     331,    57,   100,    -1,    -1,    -1,    -1,   656,    -1,   107,
      -1,   660,    68,    69,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    78,    -1,   122,    -1,   124,    -1,    84,    85,
      86,    -1,   681,    -1,   683,    -1,    -1,   686,    -1,   688,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   103,   104,    -1,
      -1,   107,   701,    -1,   703,   704,   112,    -1,   114,    -1,
     116,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,   718,
      -1,    -1,   721,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,    -1,   734,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    25,   747,    -1,
      -1,    -1,    -1,    31,   753,    -1,   437,    -1,    -1,   440,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,   476,   477,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    73,   113,    75,    76,    77,    78,
      79,   119,    81,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,   100,    -1,    -1,   103,   104,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,
      -1,    -1,   121,   122,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   576,    -1,    -1,    -1,   580,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,   649,    -1,
      73,    -1,    75,    76,    77,    78,    79,    -1,    81,    82,
      -1,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,   100,    -1,    -1,
     103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,
      -1,   114,    -1,   116,   695,    -1,    -1,    -1,   121,   122,
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
      -1,    -1,    -1,   100,    68,    69,   103,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    78,   112,    -1,   114,    -1,   116,
      84,    85,    86,    -1,   121,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,     3,     4,
       5,     6,     7,   107,     9,    -1,    -1,    12,   112,    -1,
     114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
      12,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    48,    -1,    -1,    84,
      -1,    86,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    68,    69,    -1,    -1,
     105,    -1,   107,    -1,    -1,    -1,    78,   112,    -1,   114,
      -1,   116,    84,    -1,    86,    -1,   121,   122,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,   105,    -1,   107,    -1,    -1,    -1,    -1,
     112,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,
     122,    -1,   124,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,    12,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    68,    69,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,   112,   100,   114,    -1,   116,    -1,    -1,    -1,
     107,   121,   122,    -1,   124,   112,    -1,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    -1,    -1,
     100,    -1,   102,    -1,    -1,   105,    -1,   107,    -1,   109,
     110,   111,   112,   113,    -1,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,   124,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      53,    54,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    76,    77,    -1,    79,    -1,    81,    -1,
       8,     9,    10,    11,    12,    88,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,   124,    50,    -1,    -1,    53,    54,    -1,    56,    -1,
      58,    -1,    60,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,     8,     9,    10,    73,    12,    -1,    76,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,   124,    -1,    64,    65,
      -1,    -1,    -1,     8,     9,    10,    -1,    12,    -1,    -1,
      76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    -1,    38,   100,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,   124,    64,
      65,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    -1,    38,   100,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,   124,
      64,    65,    -1,    -1,    -1,     8,     9,    10,    -1,    12,
      -1,    -1,    76,    77,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
     124,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124
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
     256,   279,   100,   105,   215,   103,    12,   133,     9,    12,
     145,   220,    11,   190,   225,   226,   227,   116,   195,   195,
     138,   133,   145,   103,   133,   103,   186,   206,   263,   103,
     103,   113,   145,   105,   105,   101,   106,   222,   277,    12,
     145,   217,   248,   283,   145,   143,   145,    12,   129,   145,
      12,   145,   143,   145,   101,   145,   145,   143,    99,   102,
     100,   113,   230,   256,   274,   279,   279,    12,   131,   133,
     145,   250,   251,   252,   103,   177,   229,   225,     4,     5,
       6,    12,    32,    33,    48,    57,    68,    78,    84,    86,
     100,   107,   112,   114,   116,   121,   122,   134,   135,   136,
     137,   138,   139,   141,   142,   146,   148,   149,   150,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   173,   275,    70,    71,    72,    93,    99,
     133,   144,   190,   209,   215,   228,   236,   237,   238,   239,
     245,   281,   133,   145,   123,   242,   100,   145,   100,   100,
     215,   217,   223,   224,   276,   278,   101,    11,   102,   101,
     133,   133,   198,   199,   200,   273,   263,   104,   206,   206,
      12,   129,   145,   208,   106,   106,   145,   283,   133,    99,
     143,   129,   145,    99,   129,   145,   143,    99,   214,   215,
      85,   147,   168,   169,   170,   260,   103,   170,   231,   229,
     229,   131,   145,   131,   102,   100,    12,    39,    40,    46,
      47,    49,    59,    61,    62,    67,    75,    82,    87,    98,
     133,   145,   170,   172,   174,   175,   176,   177,   178,   179,
     181,   183,   184,   187,   190,   255,   270,   271,   101,    48,
      68,   157,   157,   105,   157,   100,   151,   267,   100,   148,
     172,   221,   222,   157,   157,    32,    33,    35,   100,   105,
     108,   157,    13,    34,   115,   116,   117,   112,   114,    22,
      23,    28,    29,   109,   110,    26,    27,   107,   120,   118,
      30,    31,   119,   106,   123,    99,    99,   215,   238,   113,
     240,   241,    99,   282,   281,    99,   102,   123,   104,   133,
      12,    94,   131,   145,   243,   244,   245,   225,   225,   223,
     113,   276,   113,   100,   105,    11,   227,    99,   102,   113,
     104,   104,   104,   104,   129,   145,   129,    99,    99,    99,
     129,    99,   143,    99,   170,   285,   101,   102,    14,    15,
      16,    17,    18,    19,    20,    21,    24,    25,   113,   171,
     104,   231,   232,    41,   257,   258,   131,   250,   147,   265,
      99,   173,    99,   123,   174,   100,   133,   100,   133,   270,
     100,   177,   100,   123,   102,   174,    99,   104,    85,   218,
     219,   261,   105,   157,   267,   106,   147,   100,   152,   222,
     221,   101,   101,   100,   217,   276,    12,   142,   265,   172,
      12,   142,   157,   157,   158,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   162,   162,   163,   164,   165,
     166,   167,   172,   173,    99,   126,   173,   215,   239,   281,
     131,   145,    12,   245,   264,   131,   102,    12,    94,   264,
     101,   101,   101,   170,   170,   225,   275,   199,   173,   129,
      99,    99,   170,   170,   102,   280,   100,   257,   284,   101,
     123,   174,    98,   176,   182,   188,    99,   172,   180,   222,
      99,   180,   257,   180,   174,   170,   100,   261,   218,   106,
     100,   152,   157,   101,   221,   100,   155,   268,   105,   153,
     154,   217,   269,   101,   157,   142,   101,   106,   142,   123,
     131,   264,    12,   264,   131,   244,   264,    12,   264,   131,
     101,   106,   231,   104,    11,   222,   259,   174,   100,   180,
     272,   101,   215,   101,   101,   221,   262,   286,   157,   221,
     268,   101,   265,   172,   105,   269,   170,   131,   264,   131,
     131,   264,   131,   218,   261,   215,   223,   101,   172,    99,
     174,   113,   174,   174,   102,   101,   101,   268,   101,   106,
     173,   131,   131,   261,   177,   101,   270,    52,   170,   221,
     268,   106,    99,   101,   174,   174
};

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
     231,   231,   232,   232,   233,   234,   234,   235,   235,   235,
     236,   236,   237,   237,   237,   237,   237,   237,   237,   238,
     238,   239,   239,   239,   239,   240,   241,   242,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   245,   245,   245,   246,   247,   248,   249,   250,
     250,   251,   252,   252,   252,   252,   252,   253,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     255,   256,   257,   258,   259,   259,   259,   259,   260,   261,
     262,   262,   263,   263,   264,   264,   265,   265,   266,   266,
     267,   267,   268,   268,   269,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   276,
     277,   277,   278,   278,   279,   279,   280,   280,   281,   281,
     282,   282,   283,   283,   284,   284,   285,   285,   286,   286
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       4,     2,     1,     3,     4,     2,     3,     1,     1,     1,
       2,     3,     3,     2,     2,     1,     2,     2,     1,     1,
       3,     1,     2,     2,     3,     2,     2,     2,     1,     3,
       3,     2,     2,     1,     5,     4,     4,     3,     5,     4,
       4,     3,     1,     1,     1,     2,     2,     2,     2,     1,
       3,     4,     3,     2,     2,     1,     1,     2,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     4,     2,     5,     2,     2,     1,     1,     2,     4,
       1,     3,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1
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
#line 165 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2415 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 169 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2421 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 174 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2427 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 179 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2433 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 184 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2439 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 197 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2445 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 201 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2451 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 202 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2457 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 203 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2463 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 204 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2469 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 205 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2475 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 209 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2481 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 213 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2487 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 217 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2493 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 221 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2499 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 225 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2505 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 226 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2511 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 234 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("start", 212, 1, (yyvsp[0].tptr)); t_unit = (yyval.tptr);}
#line 2517 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 242 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2523 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 243 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2529 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 244 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("primary_expression_219", 216, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2535 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 245 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2541 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2547 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 250 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2553 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 254 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 2559 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2565 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 256 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2571 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 257 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unqualified_id_232", 228, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2577 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 261 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_id_236", 235, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2583 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 262 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_id_237", 235, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2589 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 266 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_241", 240, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2595 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_242", 240, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2601 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("nested_name_specifier_243", 240, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2607 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 272 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2613 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 273 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_247", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2619 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 274 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_248", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2625 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 279 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_251", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2631 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 280 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_252", 245, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2637 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 285 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_255", 245, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2643 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 286 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_256", 245, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2649 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 287 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_257", 245, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2655 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 288 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("postfix_expression_258", 245, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2661 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 300 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2667 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 301 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_list_269", 267, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 2673 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 305 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2679 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 306 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_274", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2685 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 307 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_275", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2691 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 308 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_276", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2697 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 309 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_277", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2703 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 310 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_278", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2709 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 311 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_279", 272, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2715 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 312 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unary_expression_280", 272, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2721 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 313 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2727 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 314 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2733 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 318 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2739 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 319 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2745 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 320 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2751 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 321 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2757 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 325 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_293", 292, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2763 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 326 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_294", 292, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2769 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 327 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_295", 292, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2775 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 328 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_expression_296", 292, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2781 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 332 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_placement_300", 299, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2787 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 336 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_type_id_304", 303, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2793 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 340 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_declarator_308", 307, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2799 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 341 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2805 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 345 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_new_declarator_313", 312, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2811 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 346 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_new_declarator_314", 312, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2817 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 350 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("new_initializer_318", 317, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2823 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 354 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_322", 321, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2829 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 355 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_323", 321, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2835 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 356 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_324", 321, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2841 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 357 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("delete_expression_325", 321, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2847 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 361 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2853 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 362 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("cast_expression_330", 328, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2859 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 366 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2865 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 367 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("pm_expression_335", 333, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2871 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 368 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("pm_expression_336", 333, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2877 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 372 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2883 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 373 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_341", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2889 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 374 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_342", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2895 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 375 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("multiplicative_expression_343", 339, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2901 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 379 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2907 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 380 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("additive_expression_348", 346, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2913 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 381 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("additive_expression_349", 346, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2919 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 385 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2925 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 386 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("shift_expression_354", 352, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2931 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 387 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("shift_expression_355", 352, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2937 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 391 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2943 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 392 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_360", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2949 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 393 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_361", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2955 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 394 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_362", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2961 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 395 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("relational_expression_363", 358, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2967 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 399 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2973 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 400 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("equality_expression_368", 366, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2979 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 401 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("equality_expression_369", 366, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2985 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 405 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 2991 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 406 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("and_expression_374", 372, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 2997 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 410 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3003 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 411 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exclusive_or_expression_379", 377, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3009 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 415 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3015 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 416 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("inclusive_or_expression_384", 382, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3021 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 420 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3027 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 421 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("logical_and_expression_389", 387, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3033 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 425 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3039 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 426 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("logical_or_expression_394", 392, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3045 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 430 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3051 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 431 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conditional_expression_399", 397, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3057 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 435 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3063 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 436 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("assignment_expression_404", 402, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3069 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 437 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3075 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 441 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3081 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 442 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3087 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 443 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3093 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 444 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3099 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 445 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3105 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 446 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3111 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 447 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3117 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 448 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3123 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 449 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3129 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 450 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3135 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 451 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3141 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 455 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3147 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 456 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_424", 422, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3153 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 460 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3159 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 468 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3165 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 469 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3171 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 470 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3177 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 471 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3183 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 472 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3189 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 473 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3195 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 474 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3201 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 475 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3207 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 479 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_447", 446, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3213 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 480 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_448", 446, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3219 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 481 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("labeled_statement_449", 446, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3225 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 485 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("expression_statement_453", 452, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3231 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 489 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("compound_statement_457", 456, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3237 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 493 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3243 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 494 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("statement_seq_462", 460, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3249 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 498 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_466", 465, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3255 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 499 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_467", 465, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3261 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 500 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("selection_statement_468", 465, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3267 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 504 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3273 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 505 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("condition_473", 471, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3279 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 509 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_477", 476, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3285 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 510 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_478", 476, 7, (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3291 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 511 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("iteration_statement_479", 476, 8, (yyvsp[-7].tptr), (yyvsp[-6].tptr), (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3297 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 515 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3303 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 516 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3309 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 520 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_488", 487, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3315 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 521 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_489", 487, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3321 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 522 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_490", 487, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3327 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 523 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("jump_statement_491", 487, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3333 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 527 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3339 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 535 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3345 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 536 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declaration_seq_504", 502, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3351 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 540 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3357 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 541 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3363 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 545 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3369 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 546 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3375 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 550 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr); }
#line 3381 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 551 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3387 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 552 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3393 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 553 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3399 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 554 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3405 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 558 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_declaration_526", 525, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3411 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 559 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_declaration_527", 525, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3417 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 563 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 3423 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 564 "120gram.y" /* yacc.c:1646  */
    {printf("HERE?\n");(yyval.tptr) = (yyvsp[0].tptr);}
#line 3429 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 565 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3435 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 566 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3441 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 567 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3447 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 571 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3453 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 572 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("decl_specifier_seq_540", 538, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3459 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 576 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3465 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 577 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3471 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 578 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3477 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 579 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3483 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 580 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3489 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 584 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3495 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 585 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3501 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 586 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3507 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 590 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr);}
#line 3513 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 591 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3519 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 592 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3525 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 593 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3531 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 594 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3537 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 598 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr);}
#line 3543 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 599 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_type_specifier_567", 565, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3549 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 600 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("simple_type_specifier_568", 565, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3555 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 601 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3561 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 602 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3567 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 603 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3573 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 604 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3579 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 605 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3585 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 606 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3591 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 607 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3597 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 608 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3603 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 609 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3609 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 610 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3615 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 611 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3621 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 615 "120gram.y" /* yacc.c:1646  */
    {printf("MAEDIT\n");(yyval.tptr) = (yyvsp[0].tptr);}
#line 3627 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 616 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3633 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 617 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3639 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 621 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_589", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3645 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 622 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_590", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3651 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 623 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_591", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3657 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 624 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_592", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3663 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 625 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_593", 588, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3669 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 626 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("elaborated_type_specifier_594", 588, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3675 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 637 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enum_specifier_605", 604, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3681 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 641 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3687 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 642 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enumerator_list_610", 608, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3693 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 646 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3699 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 647 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("enumerator_definition_615", 613, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3705 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 651 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3711 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 666 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3717 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 667 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3723 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 671 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3729 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 672 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3735 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 676 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("original_namespace_definition_644", 643, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3741 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 680 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("extension_namespace_definition_648", 647, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3747 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 684 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("unnamed_namespace_definition_652", 651, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3753 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 688 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3759 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 698 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("namespace_alias_definition_666", 665, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3765 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 703 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_671", 670, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3771 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 704 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_672", 670, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3777 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 705 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("qualified_namespace_specifier_673", 670, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3783 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 706 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3789 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 710 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_678", 677, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3795 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 711 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_679", 677, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3801 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 712 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_680", 677, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3807 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 713 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_681", 677, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3813 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 714 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_declaration_682", 677, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3819 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 718 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_686", 685, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3825 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 719 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_687", 685, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3831 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 720 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_688", 685, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3837 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 721 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("using_directive_689", 685, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3843 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 726 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("asm_definition_694", 693, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3849 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 730 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("linkage_specification_698", 697, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3855 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 731 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("linkage_specification_699", 697, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3861 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 739 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3867 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 740 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("init_declarator_list_708", 706, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3873 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 744 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("init_declarator_712", 711, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3879 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 748 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3885 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 749 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_717", 715, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3891 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 753 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 3897 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 754 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_722", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3903 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 755 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_723", 720, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3909 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 756 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_724", 720, 4, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3915 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 757 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_725", 720, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3921 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 758 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_726", 720, 3, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3927 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 759 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_727", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3933 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 760 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_728", 720, 5, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 3939 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 761 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_729", 720, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3945 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 762 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_declarator_730", 720, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3951 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 766 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3957 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 768 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3963 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 769 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_737", 733, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3969 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 771 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ptr_operator_739", 733, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3975 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 776 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3981 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 777 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("cv_qualifier_seq_745", 743, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 3987 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 781 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3993 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 782 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 3999 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 786 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4005 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 787 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_755", 753, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4011 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 788 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_756", 753, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4017 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 789 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("declarator_id_757", 753, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4023 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 793 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_id_761", 760, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4029 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 797 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_specifier_seq_765", 764, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4035 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 801 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("abstract_declarator_769", 768, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4041 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 802 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4047 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 806 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_774", 773, 6, (yyvsp[-5].tptr), (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4053 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 807 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_775", 773, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4059 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 808 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_776", 773, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4065 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 809 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_777", 773, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4071 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 810 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_778", 773, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4077 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 811 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("direct_abstract_declarator_779", 773, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4083 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 815 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 4089 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 816 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4095 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 817 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4101 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 818 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4107 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 819 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = NULL; }
#line 4113 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 823 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4119 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 824 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_list_792", 790, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4125 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 828 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_796", 795, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4131 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 829 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_797", 795, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4137 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 830 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_798", 795, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4143 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 831 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("parameter_declaration_799", 795, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4149 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 835 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_803", 802, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4155 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 836 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_804", 802, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4161 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 837 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_805", 802, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4167 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 838 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_definition_806", 802, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4173 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 842 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4179 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 846 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_814", 813, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4185 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 847 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_815", 813, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4191 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 851 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4197 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 852 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_clause_820", 818, 3, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr));}
#line 4203 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 853 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_clause_821", 818, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4209 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 857 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4215 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 858 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("initializer_list_826", 824, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4221 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 866 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = alctree("class_specifier_832", 831, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 4227 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 872 "120gram.y" /* yacc.c:1646  */
    { classnametable_insert( (yyvsp[0].tptr), classtable ); (yyval.tptr) = alctree("class_head_836", 837, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr)); }
#line 4233 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 873 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("class_head_839", 837, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4239 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 879 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4245 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 880 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4251 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 881 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4257 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 885 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_specification_851", 850, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4263 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 886 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_specification_852", 850, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4269 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 890 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_856", 855, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4275 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 891 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_857", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4281 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 892 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_858", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4287 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 893 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4293 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 894 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_860", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4299 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 895 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declaration_861", 855, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4305 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 896 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 4311 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 900 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4317 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 901 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_list_867", 865, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4323 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 905 "120gram.y" /* yacc.c:1646  */
    { (yyval.tptr) = (yyvsp[0].tptr); }
#line 4329 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 906 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_872", 870, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4335 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 907 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_873", 870, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4341 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 908 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("member_declarator_874", 870, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4347 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 919 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL; }
#line 4353 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 923 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("constant_initializer_887", 886, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4359 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 931 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_clause_895", 894, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4365 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 935 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4371 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 936 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_list_900", 898, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4377 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 940 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_904", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4383 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 941 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_905", 903, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4389 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 942 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_906", 903, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4395 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 943 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4401 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 944 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_908", 903, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4407 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 945 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_909", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4413 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 946 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_910", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4419 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 947 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_911", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4425 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 948 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_912", 903, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4431 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 949 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_913", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4437 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 950 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_914", 903, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4443 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 951 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("base_specifier_915", 903, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4449 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 955 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4455 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 956 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4461 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 957 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4467 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 965 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_function_id_929", 928, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4473 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 969 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_type_id_933", 932, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4479 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 973 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("conversion_declarator_937", 936, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4485 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 977 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("ctor_initializer_941", 940, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4491 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 981 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4497 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 982 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_list_946", 944, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4503 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 986 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_950", 949, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4509 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 990 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_954", 953, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4515 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 991 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_955", 953, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4521 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 992 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("mem_initializer_id_956", 953, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4527 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 993 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4533 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 994 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4539 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1002 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_function_id_966", 965, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4545 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1006 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4551 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1007 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4557 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1008 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_972", 969, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4563 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1009 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_973", 969, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4569 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1010 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4575 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1011 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4581 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1012 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4587 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1013 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4593 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1014 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4599 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1015 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4605 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1016 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4611 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1017 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4617 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1018 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4623 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1019 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4629 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1020 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4635 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1021 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4641 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1022 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4647 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1023 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4653 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1024 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4659 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1025 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4665 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1026 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4671 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1027 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4677 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1028 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4683 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1029 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4689 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1030 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4695 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1031 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4701 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1032 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4707 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1033 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4713 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1034 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4719 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1035 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4725 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1036 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4731 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1037 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4737 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1038 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4743 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1039 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4749 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1040 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4755 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1041 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4761 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1042 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4767 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1043 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4773 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1044 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4779 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1045 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4785 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1046 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_1010", 969, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4791 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1047 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("operator_1011", 969, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4797 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1104 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("try_block_1068", 1067, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4803 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1108 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("function_try_block_1072", 1071, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4809 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1112 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("handler_seq_1076", 1075, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4815 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1116 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("handler_1080", 1079, 5, (yyvsp[-4].tptr), (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4821 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1120 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_declaration_1084", 1083, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4827 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1121 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_declaration_1085", 1083, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4833 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1122 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4839 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1123 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4845 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1127 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("throw_expression_1091", 1090, 2, (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4851 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1131 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("exception_specification_1095", 1094, 4, (yyvsp[-3].tptr), (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4857 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1135 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4863 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1136 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = alctree("type_id_list_1100", 1098, 3, (yyvsp[-2].tptr), (yyvsp[-1].tptr), (yyvsp[0].tptr));}
#line 4869 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1144 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4875 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1145 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4881 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1149 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4887 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1150 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4893 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1154 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4899 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1155 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4905 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 1159 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4911 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 1160 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4917 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1164 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4923 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1165 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4929 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1169 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4935 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1170 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4941 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1174 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4947 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1175 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4953 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1179 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4959 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1180 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4965 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1184 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4971 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1185 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4977 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1189 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4983 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1190 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 4989 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1194 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 4995 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1195 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5001 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1199 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5007 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1200 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5013 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1204 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5019 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1205 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5025 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1209 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5031 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1210 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5037 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1214 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5043 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1215 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5049 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1219 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5055 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1220 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5061 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1224 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5067 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1225 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5073 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1229 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5079 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1230 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5085 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1234 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5091 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1235 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5097 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1239 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5103 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1240 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5109 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1244 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5115 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1245 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5121 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1255 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5127 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1256 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5133 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1260 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5139 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1261 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5145 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1265 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = NULL;}
#line 5151 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1266 "120gram.y" /* yacc.c:1646  */
    {(yyval.tptr) = (yyvsp[0].tptr);}
#line 5157 "120gram.tab.c" /* yacc.c:1646  */
    break;


#line 5161 "120gram.tab.c" /* yacc.c:1646  */
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
#line 1269 "120gram.y" /* yacc.c:1906  */


static void yyerror(char *s) {
	fprintf(stderr, "line %d: %s\n", yylineno, s);
	fprintf(stderr, "%s\n", yytext);
}
