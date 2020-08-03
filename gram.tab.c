/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "gram.y" /* yacc.c:337  */

#include<stdio.h>
#include<string.h>
void yyerror(const char*);
int yylex();

#line 77 "gram.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PRIVATE = 258,
    PUBLIC = 259,
    CLASS = 260,
    CHAR = 261,
    INT = 262,
    FLOAT = 263,
    DOUBLE = 264,
    VOID = 265,
    SEMICOLON = 266,
    COMMA = 267,
    ASSIGN = 268,
    COLON = 269,
    ID = 270,
    ICONST = 271,
    FCONST = 272,
    ROBRAC = 273,
    RCBRAC = 274,
    COBRAC = 275,
    CCBRAC = 276,
    SOBRAC = 277,
    SCBRAC = 278,
    POINTER = 279,
    IF = 280,
    ELSEIF = 281,
    ELSE = 282,
    PLUS = 283,
    MINUS = 284,
    DIVIDE = 285,
    INC = 286,
    DEC = 287,
    MOD = 288,
    OR = 289,
    AND = 290,
    NOT = 291,
    BOR = 292,
    BAND = 293,
    BNOT = 294,
    XOR = 295,
    BLSHIFT = 296,
    BRSHIFT = 297,
    EQ = 298,
    NEQ = 299,
    LT = 300,
    LTE = 301,
    GT = 302,
    GTE = 303,
    FOR = 304,
    WHILE = 305,
    DO = 306,
    RETURN = 307,
    BREAK = 308,
    CONTINUE = 309,
    CIN = 310,
    COUT = 311,
    LOWER = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "gram.y" /* yacc.c:352  */

        char *name;

#line 179 "gram.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   592

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

#define YYUNDEFTOK  2
#define YYMAXUTOK   312

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,    99,   100,   103,   112,   113,   115,
     120,   124,   126,   127,   129,   130,   131,   133,   134,   136,
     145,   146,   148,   157,   165,   172,   178,   179,   181,   182,
     183,   185,   185,   185,   187,   188,   190,   191,   193,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   210,   211,   213,   215,   216,   218,   220,
     221,   224,   226,   227,   229,   230,   232,   241,   242,   244,
     251,   259,   262,   271,   280,   289,   291,   297,   305,   312,
     314,   315,   316,   318,   319,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   351,   352,   353,   354,   355,   359,
     360,   362,   363,   365,   366,   368,   369,   371,   373,   374,
     375,   376,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRIVATE", "PUBLIC", "CLASS", "CHAR",
  "INT", "FLOAT", "DOUBLE", "VOID", "SEMICOLON", "COMMA", "ASSIGN",
  "COLON", "ID", "ICONST", "FCONST", "ROBRAC", "RCBRAC", "COBRAC",
  "CCBRAC", "SOBRAC", "SCBRAC", "POINTER", "IF", "ELSEIF", "ELSE", "PLUS",
  "MINUS", "DIVIDE", "INC", "DEC", "MOD", "OR", "AND", "NOT", "BOR",
  "BAND", "BNOT", "XOR", "BLSHIFT", "BRSHIFT", "EQ", "NEQ", "LT", "LTE",
  "GT", "GTE", "FOR", "WHILE", "DO", "RETURN", "BREAK", "CONTINUE", "CIN",
  "COUT", "LOWER", "$accept", "source_code", "class", "class_name",
  "class_program", "class_inner_statements", "specifier", "program",
  "function", "return_statement", "function_call", "arguments_with_type",
  "arguments_without_type", "arguments", "statements", "statement",
  "complex_statement", "simple_statement", "input_and_output_statements",
  "input_statements", "input", "output_statements", "output",
  "declaration", "name", "declare", "if_statement", "if_body",
  "elseif_statement", "for_statement", "while_statement", "while",
  "dowhile_statement", "assignment", "expression_statement", "multi_exp",
  "expression", "unary", "variables", "multi_dim", "pointer", "array",
  "array_dim", "type", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     437,    14,  -154,  -154,  -154,  -154,  -154,    96,  -154,  -154,
    -154,    72,    16,  -154,   -15,  -154,  -154,  -154,  -154,    44,
    -154,    76,  -154,  -154,    85,    17,  -154,   326,    97,  -154,
     105,  -154,    41,   503,   105,  -154,    12,    73,    41,   106,
    -154,   105,  -154,  -154,  -154,   503,    41,   503,   503,   503,
     503,   503,   503,  -154,   358,  -154,  -154,   119,   123,   131,
    -154,   326,   326,   138,  -154,  -154,   275,  -154,   -13,   -13,
    -154,   408,   433,  -154,   503,   503,   503,   503,   503,  -154,
    -154,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,  -154,  -154,  -154,  -154,  -154,   166,    41,
    -154,  -154,  -154,   358,   -13,   130,   130,   -13,   -13,   383,
     408,   433,   217,   217,   458,   458,    49,    49,    49,    49,
    -154,  -154,   115,  -154,    90,   176,  -154,   155,    39,    39,
     171,   172,   212,   313,   181,   183,   154,   157,  -154,   188,
    -154,  -154,  -154,  -154,  -154,  -154,   189,  -154,  -154,  -154,
     212,  -154,   190,    -7,   191,    41,    43,  -154,   503,   144,
    -154,   144,   342,   503,   153,  -154,   245,  -154,  -154,    41,
     163,    41,   167,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
     528,   194,  -154,  -154,    74,  -154,  -154,    95,  -154,   198,
     342,    63,    85,   192,   122,   202,  -154,  -154,    41,  -154,
      41,    93,   553,    43,  -154,   212,  -154,   478,  -154,  -154,
    -154,  -154,  -154,  -154,    43,   110,  -154,   156,   212,   195,
     136,   137,    43,   197,   212,  -154,  -154,  -154,   212,   212,
    -154,   160,   503,  -154,  -154,  -154,  -154,   162,   212,   156,
    -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,   130,   128,   129,   131,   132,     0,     5,     4,
      17,     0,     0,     7,     0,     1,     2,     3,    18,   122,
     124,    61,    63,    64,    65,     0,    11,    27,     0,   119,
     121,   126,     0,     0,   122,   123,    16,     0,     0,     0,
     125,   122,    62,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    84,   113,   120,     0,     0,     0,
      10,     0,     0,     0,    26,   127,     0,   110,   106,   108,
     102,    98,    99,   101,     0,     0,     0,     0,     0,   107,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     6,     9,    12,     0,     0,
      35,    19,   105,    83,    88,    85,    86,    87,    89,    90,
      91,   100,   103,   104,    92,    93,    94,    95,    97,    96,
      13,    25,     0,    51,   122,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      34,    37,    36,    52,    53,    54,     0,    39,    42,    40,
       0,    41,     0,     0,   118,     0,    30,    49,     0,   115,
     118,   116,     0,     0,     0,    21,     0,    45,    46,     0,
      55,     0,    58,    43,    44,    75,    47,    48,   114,   117,
       0,    65,    32,    33,     0,    29,    31,     0,    82,     0,
       0,     0,   113,     0,     0,     0,    20,    57,     0,    60,
       0,   122,     0,     0,    24,     0,    80,     0,    81,    77,
      76,    78,    56,    59,    30,   122,    28,    68,     0,     0,
       0,     0,    30,     0,     0,    66,    67,    74,     0,     0,
      23,     0,     0,    71,    73,    72,    22,     0,     0,    69,
      70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,    -6,  -154,  -154,  -154,  -154,   218,   168,  -154,
    -154,  -154,  -153,    21,  -154,  -129,   170,  -154,  -154,  -154,
    -154,  -154,  -154,     7,  -154,   199,  -154,  -154,    -9,  -154,
    -154,    70,  -154,   -10,    45,  -135,   -39,    56,   -12,   204,
    -154,  -154,   209,    57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,    14,    36,    96,    61,     9,    10,   138,
     139,    37,   184,   185,   122,   140,   141,   142,   143,   144,
     170,   145,   172,   146,    21,    22,   147,   225,   226,   148,
     149,   150,   151,   152,   190,    53,    54,   153,    55,    29,
      25,    30,    31,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      24,    16,    23,   164,   177,    26,    66,    11,    68,    69,
      70,    71,    72,    73,    11,    57,    58,     1,    79,    80,
      24,   175,    23,   187,   178,   179,    64,   191,   194,    13,
      60,    19,    34,    59,    67,   103,   104,   105,   106,   107,
      20,    35,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    41,   191,    41,    12,    41,   182,
     183,   221,    27,    20,    12,    20,    28,    20,    98,   231,
     128,   129,   220,    75,   208,    74,   217,    76,    77,    78,
      79,    80,    81,    18,    38,    62,   203,   121,    32,   227,
      85,    86,    63,   204,   166,   233,    15,   237,    33,   234,
     235,     1,     2,     3,     4,     5,     6,    74,   156,   239,
     154,   214,    28,    39,   205,    28,   160,   160,    12,    99,
     154,     2,     3,     4,     5,     6,   123,    28,   222,    65,
     124,   125,    28,    93,    74,   100,   126,    94,   154,    20,
     127,   210,    95,   181,   186,    23,   128,   129,    74,   203,
     192,   192,   189,   193,    75,   229,   230,   197,   100,   199,
      78,    79,    80,    81,   130,   131,   132,   133,   134,   135,
     136,   137,   203,   158,    74,   178,   179,   120,   192,   236,
     189,   238,   223,   224,   159,   161,   212,   157,   213,   162,
     163,   186,   167,   154,   168,   192,   169,   219,   171,   173,
     174,   176,   186,   131,   180,   198,   154,   202,   200,   206,
     186,   209,   154,   211,   228,   232,   154,   154,     2,     3,
       4,     5,     6,   123,   216,    17,   154,   124,   125,    97,
     240,    42,   100,   101,   195,   207,    20,   127,    56,    40,
       0,    75,     0,   128,   129,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,   130,   131,   132,   133,   134,   135,   136,   137,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,   102,     0,     0,     0,     0,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,   165,     0,     0,     0,    41,    43,
      44,    45,     2,     3,     4,     5,     6,    20,     0,     0,
       0,     0,    46,     0,    47,    48,     0,     0,     0,    49,
      50,    51,    52,   188,     0,     0,     0,    41,    43,    44,
      45,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    46,     0,    47,    48,     0,     0,     0,    49,    50,
      51,    52,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,     0,    83,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,     1,     2,     3,     4,     5,     6,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,     0,    41,    43,    44,    45,   218,     0,    85,
      86,     0,    20,    89,    90,    91,    92,    46,     0,    47,
      48,     0,     0,     0,    49,    50,    51,    52,    41,    43,
      44,    45,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,    46,     0,    47,    48,     0,     0,     0,    49,
      50,    51,    52,   201,    43,    44,    45,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,    46,     0,    47,
      48,     0,     0,     0,    49,    50,    51,    52,   215,    43,
      44,    45,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,    46,     0,    47,    48,     0,     0,     0,    49,
      50,    51,    52
};

static const yytype_int16 yycheck[] =
{
      12,     7,    12,   132,    11,    20,    45,     0,    47,    48,
      49,    50,    51,    52,     7,     3,     4,     5,    31,    32,
      32,   150,    32,   158,    31,    32,    38,   162,   163,    15,
      36,    15,    15,    21,    46,    74,    75,    76,    77,    78,
      24,    24,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    15,   190,    15,     0,    15,    16,
      17,   214,    18,    24,     7,    24,    22,    24,    61,   222,
      31,    32,   207,    24,    11,    12,   205,    28,    29,    30,
      31,    32,    33,    11,    27,    12,    12,    99,    12,   218,
      41,    42,    19,    19,   133,   224,     0,   232,    13,   228,
     229,     5,     6,     7,     8,     9,    10,    12,    18,   238,
     122,    18,    22,    16,    19,    22,   128,   129,    61,    62,
     132,     6,     7,     8,     9,    10,    11,    22,    18,    23,
      15,    16,    22,    14,    12,    20,    21,    14,   150,    24,
      25,    19,    11,   155,   156,   155,    31,    32,    12,    12,
     162,   163,   162,   163,    24,    19,    19,   169,    20,   171,
      30,    31,    32,    33,    49,    50,    51,    52,    53,    54,
      55,    56,    12,    18,    12,    31,    32,    11,   190,    19,
     190,    19,    26,    27,   128,   129,   198,    11,   200,    18,
      18,   203,    11,   205,    11,   207,    42,   207,    41,    11,
      11,    11,   214,    50,    13,    42,   218,    13,    41,    11,
     222,    19,   224,    11,    19,    18,   228,   229,     6,     7,
       8,     9,    10,    11,   203,     7,   238,    15,    16,    61,
     239,    32,    20,    63,   164,   190,    24,    25,    34,    30,
      -1,    24,    -1,    31,    32,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    19,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    11,    -1,    -1,    -1,    15,    16,
      17,    18,     6,     7,     8,     9,    10,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    11,    -1,    -1,    -1,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,     5,     6,     7,     8,     9,    10,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    -1,    15,    16,    17,    18,    19,    -1,    41,
      42,    -1,    24,    45,    46,    47,    48,    29,    -1,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    59,    60,    65,
      66,    81,   101,    15,    61,     0,    60,    65,    11,    15,
      24,    82,    83,    91,    96,    98,    20,    18,    22,    97,
      99,   100,    12,    13,    15,    24,    62,    69,   101,    16,
     100,    15,    83,    16,    17,    18,    29,    31,    32,    36,
      37,    38,    39,    93,    94,    96,    97,     3,     4,    21,
      60,    64,    12,    19,    96,    23,    94,    96,    94,    94,
      94,    94,    94,    94,    12,    24,    28,    29,    30,    31,
      32,    33,    34,    35,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    14,    14,    11,    63,    66,    81,   101,
      20,    74,    19,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      11,    96,    72,    11,    15,    16,    21,    25,    31,    32,
      49,    50,    51,    52,    53,    54,    55,    56,    67,    68,
      73,    74,    75,    76,    77,    79,    81,    84,    87,    88,
      89,    90,    91,    95,    96,   101,    18,    11,    18,    95,
      96,    95,    18,    18,    73,    11,    94,    11,    11,    42,
      78,    41,    80,    11,    11,    73,    11,    11,    31,    32,
      13,    96,    16,    17,    70,    71,    96,    93,    11,    91,
      92,    93,    96,    91,    93,    89,    11,    96,    42,    96,
      41,    15,    13,    12,    19,    19,    11,    92,    11,    19,
      19,    11,    96,    96,    18,    15,    71,    73,    19,    91,
      93,    70,    18,    26,    27,    85,    86,    73,    19,    19,
      19,    70,    18,    73,    73,    73,    19,    93,    19,    73,
      86
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    60,    61,    61,    62,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    78,    78,    79,    80,
      80,    81,    82,    82,    83,    83,    84,    85,    85,    86,
      86,    86,    87,    87,    87,    88,    89,    89,    90,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   101,   101,
     101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     6,     1,     0,     3,
       2,     0,     1,     2,     2,     2,     0,     1,     2,     6,
       3,     2,     7,     6,     4,     4,     2,     0,     3,     1,
       0,     1,     1,     1,     2,     0,     1,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     2,     3,     2,     2,     3,
       2,     2,     3,     1,     1,     1,     6,     1,     0,     5,
       6,     2,     7,     7,     6,     2,     4,     4,     4,     3,
       2,     2,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     1,     2,
       3,     1,     0,     2,     1,     2,     1,     3,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 97 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1523 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 98 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1529 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 99 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1535 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 100 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1541 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 103 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
}
#line 1554 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 112 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1560 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 113 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1566 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 115 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-2].name),(yyvsp[-1].name));
        strcat((yyvsp[-2].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-2].name));
                }
#line 1576 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 120 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-1].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-1].name));
                }
#line 1585 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 124 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1591 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 126 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1597 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 127 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1603 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 129 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1609 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 130 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1615 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 131 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1621 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 133 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1627 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 134 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1633 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 136 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
}
#line 1646 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 145 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1652 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 146 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1658 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 148 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-6].name),(yyvsp[-5].name));
        strcat((yyvsp[-6].name),(yyvsp[-4].name));
        strcat((yyvsp[-6].name),(yyvsp[-3].name));
        strcat((yyvsp[-6].name),(yyvsp[-2].name));
        strcat((yyvsp[-6].name),(yyvsp[-1].name));
        strcat((yyvsp[-6].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-6].name));
                }
#line 1672 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 157 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
                }
#line 1685 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 165 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-3].name),(yyvsp[-2].name));
        strcat((yyvsp[-3].name),(yyvsp[-1].name));
        strcat((yyvsp[-3].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-3].name));
                }
#line 1696 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 172 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-3].name),(yyvsp[-2].name));
        strcat((yyvsp[-3].name),(yyvsp[-1].name));
        strcat((yyvsp[-3].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-3].name));
}
#line 1707 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 178 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1713 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 179 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1719 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 181 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1725 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 182 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1731 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 183 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1737 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 187 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1743 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 188 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1749 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 190 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1755 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 191 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1761 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 193 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1767 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 195 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1773 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 196 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1779 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 197 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1785 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 198 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1791 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 199 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1797 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 200 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1803 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 201 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1809 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 202 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1815 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 203 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1821 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 204 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1827 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 205 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1833 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 206 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1839 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 207 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1845 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 208 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1851 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 210 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1857 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 211 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1863 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 213 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1869 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 215 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1875 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 216 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1881 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 218 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1887 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 220 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1893 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 221 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1899 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 224 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1905 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 226 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 1911 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 227 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1917 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 229 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1923 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 230 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1929 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 232 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
}
#line 1942 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 241 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 1948 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 242 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 1954 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 244 "gram.y" /* yacc.c:1652  */
    {
        strcpy((yyvsp[-4].name),(yyvsp[-3].name));
        strcpy((yyvsp[-4].name),(yyvsp[-2].name));
        strcpy((yyvsp[-4].name),(yyvsp[-1].name));
        strcpy((yyvsp[-4].name),(yyvsp[0].name));
        strcat((yyval.name),(yyvsp[-4].name));
}
#line 1966 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 251 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
}
#line 1979 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 259 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 1985 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 262 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-6].name),(yyvsp[-5].name));
        strcat((yyvsp[-6].name),(yyvsp[-4].name));
        strcat((yyvsp[-6].name),(yyvsp[-3].name));
        strcat((yyvsp[-6].name),(yyvsp[-2].name));
        strcat((yyvsp[-6].name),(yyvsp[-1].name));
        strcat((yyvsp[-6].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-6].name));
}
#line 1999 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 271 "gram.y" /* yacc.c:1652  */
    {
       strcat((yyvsp[-6].name),(yyvsp[-5].name));
        strcat((yyvsp[-6].name),(yyvsp[-4].name));
        strcat((yyvsp[-6].name),(yyvsp[-3].name));
        strcat((yyvsp[-6].name),(yyvsp[-2].name));
        strcat((yyvsp[-6].name),(yyvsp[-1].name));
        strcat((yyvsp[-6].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-6].name));
}
#line 2013 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 280 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-5].name),(yyvsp[-4].name));
        strcat((yyvsp[-5].name),(yyvsp[-3].name));
        strcat((yyvsp[-5].name),(yyvsp[-2].name));
        strcat((yyvsp[-5].name),(yyvsp[-1].name));
        strcat((yyvsp[-5].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-5].name));
}
#line 2026 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 289 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2032 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 291 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-3].name),(yyvsp[-2].name));
        strcat((yyvsp[-3].name),(yyvsp[-1].name));
        strcat((yyvsp[-3].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-3].name));
}
#line 2043 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 297 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-3].name),(yyvsp[-2].name));
        strcat((yyvsp[-3].name),(yyvsp[-1].name));
        strcat((yyvsp[-3].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-3].name));
}
#line 2054 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 305 "gram.y" /* yacc.c:1652  */
    {
        strcat((yyvsp[-3].name),(yyvsp[-2].name));
        strcat((yyvsp[-3].name),(yyvsp[-1].name));
        strcat((yyvsp[-3].name),(yyvsp[0].name));
        strcpy((yyval.name),(yyvsp[-3].name));
}
#line 2065 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 312 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2071 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 314 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2077 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 315 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2083 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 316 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2089 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 318 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2095 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 319 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2101 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 321 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2107 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 322 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2113 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 323 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2119 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 324 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2125 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 325 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2131 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 326 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2137 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 327 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2143 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 328 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2149 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 329 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2155 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 330 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2161 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 331 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2167 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 332 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2173 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 333 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2179 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 334 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2185 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 335 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2191 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 336 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2197 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 337 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2203 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 338 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2209 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 103:
#line 339 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2215 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 104:
#line 340 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2221 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 105:
#line 341 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2227 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 106:
#line 342 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2233 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 107:
#line 343 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2239 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 108:
#line 344 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2245 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 109:
#line 345 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2251 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 110:
#line 346 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2257 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 111:
#line 347 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2263 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 112:
#line 348 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2269 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 113:
#line 349 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2275 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 114:
#line 351 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2281 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 115:
#line 352 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2287 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 116:
#line 353 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2293 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 117:
#line 354 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2299 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 118:
#line 355 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2305 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 119:
#line 359 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2311 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 120:
#line 360 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2317 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 121:
#line 362 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2323 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 122:
#line 363 "gram.y" /* yacc.c:1652  */
    { (yyval.name) = strdup("");}
#line 2329 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 123:
#line 365 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2335 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 124:
#line 366 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2341 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 125:
#line 368 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-1].name));}
#line 2347 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 126:
#line 369 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2353 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 127:
#line 371 "gram.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].name),(yyvsp[-1].name));strcat((yyvsp[-2].name),(yyvsp[0].name));strcpy((yyval.name),(yyvsp[-2].name));}
#line 2359 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 128:
#line 373 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2365 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 129:
#line 374 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2371 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 130:
#line 375 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2377 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 131:
#line 376 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2383 "gram.tab.c" /* yacc.c:1652  */
    break;

  case 132:
#line 377 "gram.y" /* yacc.c:1652  */
    {strcpy((yyval.name),(yyvsp[0].name));}
#line 2389 "gram.tab.c" /* yacc.c:1652  */
    break;


#line 2393 "gram.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 380 "gram.y" /* yacc.c:1918  */



#include"lex.yy.c"
int main(){
    return yyparse();
}
void yyerror(const char*s)
{
        fprintf(stderr,"%s\n",s);
}
