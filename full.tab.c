/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "full.y" /* yacc.c:339  */

#  include <stdio.h>
#  include <stdlib.h>
#  include "AST.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);

#line 77 "full.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "full.tab.h".  */
#ifndef YY_YY_FULL_TAB_H_INCLUDED
# define YY_YY_FULL_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    INC_OP = 261,
    DEC_OP = 262,
    AND_OP = 263,
    OR_OP = 264,
    ASSIGMENT = 265,
    CMP_OP = 266,
    TYPE_NAME = 267,
    CHAR = 268,
    INT = 269,
    DOUBLE = 270,
    VOID = 271,
    CONST = 272,
    IF = 273,
    ELSE = 274,
    WHILE = 275,
    FOR = 276,
    CONTINUE = 277,
    BREAK = 278,
    RETURN = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "full.y" /* yacc.c:355  */

    struct ast *a;
    double d;
    struct symbol *s;		/* which symbol */
    struct symlist *sl;
    int fn;			/* which function */

#line 150 "full.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_FULL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 167 "full.tab.c" /* yacc.c:358  */

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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,    37,     2,     2,
      25,    26,    35,    32,    31,    33,    40,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,    28,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    37,    38,    42,    43,    44,    45,
      46,    47,    48,    49,    53,    54,    58,    59,    60,    61,
      65,    66,    67,    71,    72,    76,    77,    78,    79,    83,
      84,    85,    89,    90,    93,    94,    98,    99,   103,   104,
     108,   109,   113,   114,   118,   119,   123,   127,   128,   132,
     133,   137,   138,   142,   143,   147,   148,   149,   150,   151,
     155,   156,   160,   165,   166,   167,   168,   169,   170,   171,
     172,   176,   180,   181,   185,   186,   187,   191,   192,   196,
     197,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   215,   216,   217,   221,   222,   223,   224,   228,
     232,   233,   237,   238,   242,   243,   244,   245,   246,   250,
     251,   255,   256,   260,   261,   265,   266,   270,   271,   275,
     276,   277,   278,   279,   283,   284,   285,   286,   290,   291,
     295,   296,   300,   301,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "INC_OP", "DEC_OP", "AND_OP", "OR_OP", "ASSIGMENT",
  "CMP_OP", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID", "CONST", "IF",
  "ELSE", "WHILE", "FOR", "CONTINUE", "BREAK", "RETURN", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "','", "'+'", "'-'", "'!'", "'*'", "'/'",
  "'%'", "'='", "';'", "'.'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "direct_declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    40,    41,    91,    93,   123,
     125,    44,    43,    45,    33,    42,    47,    37,    61,    59,
      46
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     357,  -179,  -179,  -179,  -179,  -179,  -179,     0,   357,   304,
    -179,  -179,  -179,    86,   396,  -179,   -11,  -179,    48,    32,
     197,  -179,  -179,  -179,  -179,     7,    -4,    82,    79,  -179,
     158,  -179,  -179,  -179,   568,   568,   473,  -179,  -179,  -179,
    -179,    93,  -179,    78,     3,   573,  -179,   162,   144,   114,
     131,   106,   109,   116,    18,  -179,   487,   145,   429,   569,
     440,   232,  -179,     8,  -179,   202,  -179,    45,  -179,  -179,
     357,  -179,   473,  -179,  -179,  -179,    14,   357,    65,   105,
    -179,  -179,  -179,   497,   573,  -179,  -179,   573,  -179,  -179,
     573,   573,   573,   573,   573,   573,   573,   573,   573,  -179,
      18,  -179,   200,  -179,  -179,  -179,  -179,   127,    30,  -179,
     141,   146,  -179,   129,  -179,   152,   159,   164,   167,   175,
     169,   182,   358,  -179,  -179,    -8,  -179,  -179,  -179,   269,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,   204,  -179,
     573,  -179,   425,    45,   521,  -179,    37,  -179,   142,  -179,
    -179,  -179,  -179,   162,   162,   144,   212,   131,   106,   573,
     225,  -179,   189,   487,    24,  -179,  -179,  -179,   240,  -179,
    -179,  -179,  -179,  -179,   573,   573,   343,  -179,  -179,  -179,
      27,  -179,  -179,  -179,   220,  -179,   200,  -179,  -179,   573,
    -179,   109,   223,  -179,  -179,    90,  -179,  -179,  -179,  -179,
     101,   103,   381,   381,  -179,   211,  -179,  -179,  -179,  -179,
     487,   306,   306,   531,   536,  -179,   161,  -179,   241,  -179,
     306,   107,   306,   120,  -179,   306,  -179,   306,  -179,   306,
    -179,  -179,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    56,    57,    58,    55,   131,     0,    49,     0,
     128,   130,    63,     0,     0,    47,     0,    51,    53,    62,
       0,    50,     1,   129,    88,    76,     0,     0,    71,    72,
       0,     2,     3,     4,     0,     0,     0,    82,    20,    21,
      22,     0,     6,    16,    23,     0,    25,    29,    32,    34,
      36,    38,    40,     0,     0,    48,     0,     0,     0,     0,
       0,     0,   134,     0,   133,     0,    74,    75,    64,    89,
       0,    81,     0,    17,    18,    44,     0,    61,    79,     0,
      86,    10,    11,     0,     0,    43,    42,     0,    23,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    52,     0,    92,    54,    77,    70,     0,     0,    67,
       0,     0,    90,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   115,     0,   113,   114,   104,     0,
     111,   105,   106,   107,   108,   135,   132,    73,     0,     5,
       0,    60,     0,    80,     0,     8,     0,    14,     0,    41,
      26,    27,    28,    30,    31,    33,    35,    37,    39,     0,
       0,    95,     0,     0,     0,   100,    68,    69,     0,    66,
      65,    91,    87,    85,     0,     0,     0,   124,   125,   126,
       0,   116,   110,   112,     0,    45,     0,    24,     9,     0,
       7,    46,     0,   103,    93,     0,    96,    99,   101,    78,
       0,     0,     0,     0,   127,     0,    15,   102,    94,    97,
       0,     0,     0,     0,     0,    12,     0,    98,   117,   119,
       0,     0,     0,     0,    13,     0,   122,     0,   120,     0,
     118,   123,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,  -179,   -16,  -179,   -37,   165,   168,   171,
     172,   170,   111,   -14,  -179,   -35,  -179,   -13,     6,  -179,
     224,   -12,   203,    -9,  -179,    47,  -179,   207,  -179,   214,
       5,   -54,   102,  -178,  -179,   115,   -75,   -15,  -179,   166,
    -167,  -179,  -179,  -179,  -179,   287,  -179,  -179
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,   146,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    75,    87,   125,   192,     6,    25,    16,
      17,     8,    78,    18,    19,    27,    28,    29,   108,    79,
      30,   161,   162,   163,   164,   165,   127,   128,   129,   130,
     131,   132,   133,   134,     9,    10,    11,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    76,   104,    12,    26,    64,     7,    62,    89,   203,
      12,    12,    20,    85,    21,     7,    66,   210,    73,    74,
      54,    12,    68,   140,    77,    13,    63,    14,    55,    88,
      67,   181,    13,   100,    14,   213,   214,    76,   210,    15,
     139,    86,   103,   100,   111,   140,   116,    15,   126,   148,
     136,   159,   135,   150,   151,   152,   167,    57,   140,    58,
      77,   168,   197,   188,   160,    77,   204,    63,   189,   147,
      59,    63,    60,   149,    88,    88,    88,    88,    88,    88,
      88,    88,    88,   143,    81,    82,    56,   180,   103,    12,
     142,    26,    14,    31,    32,    33,    34,    35,     1,     2,
       3,     4,     5,    83,   107,    84,   113,   187,    69,   196,
      70,    13,    24,    14,    97,    36,   126,   159,    98,   102,
     208,    80,    38,    39,    40,    95,   185,   211,    88,   212,
     160,   144,   140,   227,   140,    63,   218,   219,   140,   200,
     201,   209,    96,    88,    99,   226,   229,   228,   105,   103,
     230,   140,   231,   166,   232,   171,   217,     1,     2,     3,
       4,     5,   209,   202,    31,    32,    33,    34,    35,   169,
     190,   106,   103,   140,   170,   206,    93,    94,   221,   223,
     172,   103,    63,    59,    71,    60,    36,   173,   159,   174,
     102,   224,   175,    38,    39,    40,   103,    90,    91,    92,
     176,   160,   103,    31,    32,    33,    34,    35,   177,     1,
       2,     3,     4,     5,     1,     2,     3,     4,     5,   194,
     195,   178,    59,    -1,    60,    36,    61,   159,   193,   102,
     184,    61,    38,    39,    40,    31,    32,    33,    34,    35,
     160,   215,   216,   199,     1,     2,     3,     4,     5,   186,
     117,   207,   118,   119,   120,   121,   122,    36,   153,   154,
     225,    61,   123,   155,    38,    39,    40,   156,   158,   157,
     191,   124,    31,    32,    33,    34,    35,   137,   101,   198,
     141,     1,     2,     3,     4,     5,   138,   117,   205,   118,
     119,   120,   121,   122,    36,   183,    23,     0,    61,   182,
       0,    38,    39,    40,    22,     0,     0,     0,   124,    31,
      32,    33,    34,    35,     0,     0,     1,     2,     3,     4,
       5,     0,     0,     0,   117,     0,   118,   119,   120,   121,
     122,    36,     0,     0,     0,    61,     0,     0,    38,    39,
      40,     0,     0,     0,     0,   124,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       0,    31,    32,    33,    34,    35,     0,     0,    36,     1,
       2,     3,     4,     5,     0,    38,    39,    40,     0,     0,
       0,     0,   124,    36,    31,    32,    33,    34,    35,     0,
      38,    39,    40,     0,     0,     0,     0,   179,     0,    31,
      32,    33,    34,    35,     0,     0,    36,     0,     0,     0,
       0,     0,     0,    38,    39,    40,     0,     0,     0,     0,
     124,    36,     0,     0,    37,     0,     0,     0,    38,    39,
      40,    41,    31,    32,    33,    34,    35,     1,     2,     3,
       4,     5,     0,    31,    32,    33,    34,    35,     0,     0,
     142,    24,    14,     0,    36,     0,     0,   109,     0,     0,
       0,    38,    39,    40,   110,    36,     0,     0,   114,     0,
       0,     0,    38,    39,    40,   115,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     1,     2,     3,     4,     5,
      31,    32,    33,    34,    35,     0,     0,     0,    36,     0,
      31,    32,    33,    34,    35,    38,    39,    40,     0,     0,
       0,     0,    36,     0,     0,     0,   102,     0,     0,    38,
      39,    40,    36,   145,    31,    32,    33,    34,    35,    38,
      39,    40,     0,     0,    31,    32,    33,    34,    35,    31,
      32,    33,    34,    35,     0,     0,    36,     0,     0,     0,
     186,     0,     0,    38,    39,    40,    36,   220,     0,     0,
       0,    36,   222,    38,    39,    40,     0,     0,    38,    39,
      40,    31,    32,    33,    34,    35,    31,    32,    33,    34,
      35,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   112,     0,     0,    36,     0,
      38,    39,    40,     0,     0,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
      14,    36,    56,     3,    13,    20,     0,    20,    45,   176,
       3,     3,     7,    10,     8,     9,    25,   195,    34,    35,
      31,     3,    26,    31,    36,    25,    20,    27,    39,    45,
      25,    39,    25,    25,    27,   202,   203,    72,   216,    39,
      26,    38,    56,    25,    58,    31,    60,    39,    61,    84,
      65,    27,    65,    90,    91,    92,    26,    25,    31,    27,
      72,    31,    38,    26,    40,    77,    39,    61,    31,    83,
      25,    65,    27,    87,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    78,     6,     7,    38,   122,   102,     3,
      25,   100,    27,     3,     4,     5,     6,     7,    12,    13,
      14,    15,    16,    25,    57,    27,    59,   144,    26,   163,
      31,    25,    26,    27,     8,    25,   129,    27,     9,    29,
      30,    28,    32,    33,    34,    11,   140,    26,   144,    26,
      40,    26,    31,    26,    31,   129,   211,   212,    31,   174,
     175,   195,    11,   159,    28,   220,    26,   222,     3,   163,
     225,    31,   227,    26,   229,    26,   210,    12,    13,    14,
      15,    16,   216,   176,     3,     4,     5,     6,     7,    28,
      28,    26,   186,    31,    28,   189,    32,    33,   213,   214,
      28,   195,   176,    25,    26,    27,    25,    28,    27,    25,
      29,    30,    25,    32,    33,    34,   210,    35,    36,    37,
      25,    40,   216,     3,     4,     5,     6,     7,    39,    12,
      13,    14,    15,    16,    12,    13,    14,    15,    16,    30,
      31,    39,    25,    11,    27,    25,    29,    27,     3,    29,
      26,    29,    32,    33,    34,     3,     4,     5,     6,     7,
      40,    30,    31,     3,    12,    13,    14,    15,    16,    29,
      18,    28,    20,    21,    22,    23,    24,    25,    93,    94,
      19,    29,    30,    95,    32,    33,    34,    96,    98,    97,
     159,    39,     3,     4,     5,     6,     7,    70,    54,   164,
      77,    12,    13,    14,    15,    16,    72,    18,   186,    20,
      21,    22,    23,    24,    25,   129,     9,    -1,    29,    30,
      -1,    32,    33,    34,     0,    -1,    -1,    -1,    39,     3,
       4,     5,     6,     7,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    18,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    25,    12,
      13,    14,    15,    16,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    25,     3,     4,     5,     6,     7,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,     3,     4,     5,     6,     7,    12,    13,    14,
      15,    16,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      25,    26,    27,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    -1,
       3,     4,     5,     6,     7,    32,    33,    34,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,    34,    25,    26,     3,     4,     5,     6,     7,    32,
      33,    34,    -1,    -1,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    -1,    -1,    25,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,    34,    25,    26,    -1,    -1,
      -1,    25,    26,    32,    33,    34,    -1,    -1,    32,    33,
      34,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    26,    -1,    -1,    25,    -1,
      32,    33,    34,    -1,    -1,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    14,    15,    16,    58,    59,    62,    85,
      86,    87,     3,    25,    27,    39,    60,    61,    64,    65,
      71,    59,     0,    86,    26,    59,    64,    66,    67,    68,
      71,     3,     4,     5,     6,     7,    25,    28,    32,    33,
      34,    35,    42,    43,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    31,    39,    38,    25,    27,    25,
      27,    29,    58,    59,    78,    88,    64,    71,    26,    26,
      31,    26,    25,    45,    45,    54,    56,    62,    63,    70,
      28,     6,     7,    25,    27,    10,    38,    55,    45,    47,
      35,    36,    37,    32,    33,    11,    11,     8,     9,    28,
      25,    61,    29,    54,    72,     3,    26,    66,    69,    28,
      35,    54,    26,    66,    28,    35,    54,    18,    20,    21,
      22,    23,    24,    30,    39,    56,    58,    77,    78,    79,
      80,    81,    82,    83,    84,    58,    78,    68,    70,    26,
      31,    63,    25,    71,    26,    26,    44,    54,    56,    54,
      47,    47,    47,    48,    48,    49,    50,    51,    52,    27,
      40,    72,    73,    74,    75,    76,    26,    26,    31,    28,
      28,    26,    28,    28,    25,    25,    25,    39,    39,    39,
      56,    39,    30,    80,    26,    54,    29,    47,    26,    31,
      28,    53,    57,     3,    30,    31,    72,    38,    76,     3,
      56,    56,    58,    81,    39,    73,    54,    28,    30,    72,
      74,    26,    26,    81,    81,    30,    31,    72,    77,    77,
      26,    56,    26,    56,    30,    19,    77,    26,    77,    26,
      77,    77,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    43,    44,    44,    45,    45,    45,    45,
      46,    46,    46,    47,    47,    48,    48,    48,    48,    49,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       2,     2,     6,     7,     1,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     4,     4,     3,     4,     4,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     1,
       2,     3,     2,     3,     3,     4,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     2,     3,     4,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       6,     7,     6,     7,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
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
#line 35 "full.y" /* yacc.c:1646  */
    { printf("Hola"); }
#line 1493 "full.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "full.y" /* yacc.c:1646  */
    { printf("STRING_LITERAL"); }
#line 1499 "full.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 37 "full.y" /* yacc.c:1646  */
    { printf("STRING_LITERAL"); }
#line 1505 "full.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 132 "full.y" /* yacc.c:1646  */
    {printf("TYPE, %s",$);}
#line 1511 "full.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 149 "full.y" /* yacc.c:1646  */
    {printf("HERE INT");}
#line 1517 "full.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 201 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1523 "full.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 208 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1529 "full.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1535 "full.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1541 "full.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 250 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1547 "full.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 290 "full.y" /* yacc.c:1646  */
    {printf("Hola");}
#line 1553 "full.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 291 "full.y" /* yacc.c:1646  */
    {printf("Hola");}
#line 1559 "full.tab.c" /* yacc.c:1646  */
    break;


#line 1563 "full.tab.c" /* yacc.c:1646  */
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
#line 308 "full.y" /* yacc.c:1906  */


  int main(){
      yyin = stdin;
      do{
          yyparse();
      }while(!feof(yyin));

      return 0;
  }
void yyerror( const char* s ){
    fprintf(stderr, "Parse error: %s\n",s);
    exit(1);
}
