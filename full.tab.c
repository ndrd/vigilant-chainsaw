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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   608
=======
#define YYLAST   602
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234
=======
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251

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
<<<<<<< HEAD
     197,   201,   202,   203,   204,   205,   206,   207,   208,   208,
     209,   210,   211,   215,   216,   217,   221,   222,   223,   224,
     228,   232,   233,   237,   238,   242,   243,   244,   245,   246,
     250,   251,   255,   256,   260,   261,   265,   266,   270,   271,
     275,   276,   277,   278,   279,   283,   284,   285,   286,   290,
     291,   295,   296,   300,   301,   305,   306
=======
     197,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   215,   216,   217,   221,   222,   223,   224,   228,
     232,   233,   237,   238,   242,   243,   244,   245,   246,   250,
     251,   255,   256,   260,   261,   265,   266,   270,   271,   275,
     276,   277,   278,   279,   283,   284,   285,   286,   290,   291,
     295,   296,   300,   301,   302,   303,   307,   308
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
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
  "identifier_list", "type_name", "direct_abstract_declarator", "$@1",
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

#define YYPACT_NINF -175

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-175)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     207,  -175,  -175,  -175,  -175,  -175,  -175,     6,   207,   396,
    -175,  -175,  -175,    87,   397,  -175,    -5,  -175,    -3,   105,
     308,  -175,  -175,  -175,  -175,     3,    36,    58,    -8,  -175,
      46,  -175,  -175,  -175,   569,   569,   474,  -175,  -175,  -175,
    -175,    94,  -175,    60,     1,   574,  -175,   118,   166,   104,
     108,   137,   165,   128,    22,  -175,   488,   123,   430,   570,
     441,   233,  -175,     2,  -175,   146,  -175,  -175,   145,  -175,
    -175,   207,  -175,   474,  -175,  -175,  -175,    33,   207,   158,
     160,  -175,  -175,  -175,   498,   574,  -175,  -175,   574,  -175,
    -175,   574,   574,   574,   574,   574,   574,   574,   574,   574,
    -175,    22,  -175,   201,  -175,  -175,  -175,  -175,   164,    78,
    -175,   143,   156,  -175,   167,  -175,   182,   184,   163,   188,
     190,   178,   192,   359,  -175,  -175,    18,  -175,  -175,  -175,
     270,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   203,
    -175,   574,  -175,   426,   145,   522,  -175,    80,  -175,   -11,
    -175,  -175,  -175,  -175,   118,   118,   166,   216,   108,   137,
     574,   229,  -175,    62,   488,    13,  -175,  -175,  -175,   239,
    -175,  -175,  -175,  -175,  -175,   574,   574,   344,  -175,  -175,
    -175,    29,  -175,  -175,  -175,   214,  -175,   201,  -175,  -175,
     574,  -175,   165,   222,  -175,  -175,    91,  -175,  -175,  -175,
    -175,   102,   117,   382,   382,  -175,   147,  -175,  -175,  -175,
    -175,   488,   307,   307,   532,   537,  -175,   162,  -175,   225,
    -175,   307,   120,   307,   121,  -175,   307,  -175,   307,  -175,
     307,  -175,  -175,  -175
=======
     221,  -179,  -179,  -179,  -179,  -179,  -179,    16,  -179,    13,
     320,   214,    12,   131,  -179,  -179,    59,  -179,    -6,  -179,
     110,  -179,   247,  -179,    13,  -179,   214,   561,   396,  -179,
    -179,  -179,    16,  -179,   480,  -179,   214,  -179,  -179,  -179,
     159,   159,    -1,    42,    90,    97,   112,    41,   448,  -179,
    -179,  -179,  -179,  -179,  -179,    93,    11,   533,  -179,    77,
     117,   118,   156,   175,   186,  -179,    20,  -179,  -179,  -179,
     284,  -179,  -179,  -179,  -179,  -179,   162,  -179,  -179,  -179,
    -179,    28,   171,   176,  -179,     9,  -179,   197,   203,  -179,
     169,  -179,  -179,  -179,   448,  -179,  -179,   533,   533,   358,
    -179,  -179,  -179,    26,    70,   320,    31,   185,  -179,  -179,
     485,   533,  -179,  -179,   533,  -179,  -179,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,  -179,  -179,  -179,
     556,   410,  -179,    79,  -179,   320,  -179,   211,  -179,  -179,
     533,   229,  -179,   139,   480,    -4,  -179,   212,    71,   104,
     373,   373,  -179,  -179,  -179,   530,    79,   491,  -179,   107,
    -179,    50,  -179,  -179,  -179,  -179,    77,    77,   117,   228,
     156,   175,  -179,  -179,   230,   115,  -179,   213,   236,   576,
     443,  -179,  -179,   186,   238,  -179,  -179,   183,  -179,  -179,
    -179,   244,   321,   321,   496,   528,   169,  -179,  -179,   533,
    -179,  -179,  -179,  -179,  -179,  -179,   231,  -179,   246,   250,
    -179,  -179,  -179,   480,   239,  -179,   321,   127,   321,   151,
     148,  -179,  -179,  -179,  -179,  -179,   321,  -179,   321,  -179,
     321,  -179,   215,  -179,  -179,  -179,  -179
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       0,    59,    56,    57,    58,    55,   132,     0,    49,     0,
     129,   131,    63,     0,     0,    47,     0,    51,    53,    62,
       0,    50,     1,   130,    88,    76,     0,     0,    71,    72,
       0,     2,     3,     4,     0,     0,     0,    82,    20,    21,
      22,     0,     6,    16,    23,     0,    25,    29,    32,    34,
      36,    38,    40,     0,     0,    48,     0,     0,     0,     0,
       0,     0,   135,     0,   134,     0,    89,    74,    75,    64,
      90,     0,    81,     0,    17,    18,    44,     0,    61,    79,
       0,    86,    10,    11,     0,     0,    43,    42,     0,    23,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,    52,     0,    93,    54,    77,    70,     0,     0,
      67,     0,     0,    91,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   116,     0,   114,   115,   105,
       0,   112,   106,   107,   108,   109,   136,   133,    73,     0,
       5,     0,    60,     0,    80,     0,     8,     0,    14,     0,
      41,    26,    27,    28,    30,    31,    33,    35,    37,    39,
       0,     0,    96,     0,     0,     0,   101,    68,    69,     0,
      66,    65,    92,    87,    85,     0,     0,     0,   125,   126,
     127,     0,   117,   111,   113,     0,    45,     0,    24,     9,
       0,     7,    46,     0,   104,    94,     0,    97,   100,   102,
      78,     0,     0,     0,     0,   128,     0,    15,   103,    95,
      98,     0,     0,     0,     0,     0,    12,     0,    99,   118,
     120,     0,     0,     0,     0,    13,     0,   123,     0,   121,
       0,   119,   124,   122
=======
       0,    63,    59,    56,    57,    58,    55,     0,   131,     0,
      49,     0,    62,     0,   128,   130,     0,    47,     0,    51,
      53,    50,     0,   136,     0,   132,     0,     0,     0,     1,
     129,    64,     0,    48,     0,   133,     0,     2,     3,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
      20,    21,    22,   115,     6,    16,    23,     0,    25,    29,
      32,    34,    36,    38,    40,    44,     0,   113,   114,   104,
       0,   111,   105,   106,   107,   108,    53,   137,   134,    77,
      70,    76,     0,    71,    72,     0,    67,     0,     0,    52,
       0,    92,    54,   135,     0,    17,    18,     0,     0,     0,
     124,   125,   126,     0,     0,    61,    79,     0,    10,    11,
       0,     0,    43,    42,     0,    23,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,   110,   112,
       0,     0,    74,    75,    68,     0,    69,     0,    66,    65,
       0,     0,    95,     0,     0,     0,   100,     0,     0,     0,
       0,     0,   127,     5,    60,     0,    80,     0,     8,     0,
      14,     0,    41,    26,    27,    28,    30,    31,    33,    35,
      37,    39,    45,    82,     0,     0,    83,     0,     0,     0,
       0,    73,    78,    46,     0,   103,    93,     0,    96,    99,
     101,     0,     0,     0,     0,     0,     0,    24,     9,     0,
       7,    89,    81,    87,    84,    90,     0,    85,     0,     0,
     102,    94,    97,     0,   117,   119,     0,     0,     0,     0,
       0,    15,    91,    88,    86,    98,     0,   122,     0,   120,
       0,    12,     0,   118,   123,   121,    13
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -175,  -175,  -175,  -175,   -16,  -175,   -37,   130,   168,   155,
     161,   169,   100,   -14,  -175,   -35,  -175,   -13,     4,  -175,
     215,   -15,   183,   -10,  -175,    48,  -175,   199,  -175,   198,
       7,  -175,   -54,    92,  -174,  -175,   113,   -12,    -4,  -175,
     150,  -167,  -175,  -175,  -175,  -175,   272,  -175,  -175
=======
    -179,  -179,  -179,  -179,   -30,  -179,   -49,    85,   153,   160,
     158,   167,   144,   -28,  -179,   -34,  -179,     6,     2,  -179,
     253,   -44,   188,    -2,  -179,   -24,  -179,   166,  -179,   200,
     -63,   -33,    99,  -178,  -179,   165,  -109,   311,  -179,   233,
     -79,  -179,  -179,  -179,  -179,   298,  -179,   292
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,    42,    43,   147,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    76,    88,   126,   193,     6,    25,    16,
      17,     8,    79,    18,    19,    27,    28,    29,   109,    80,
      30,    66,   162,   163,   164,   165,   166,   128,   129,   130,
     131,   132,   133,   134,   135,     9,    10,    11,    65
=======
      -1,    54,    55,   159,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   114,    66,   184,     8,    24,    18,
      19,    10,   106,    11,    12,   174,    83,    84,    85,   107,
     175,   142,   143,   144,   145,   146,    68,    69,    70,    71,
      72,    73,    74,    75,    13,    14,    15,    26
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      53,    77,   105,    26,     7,    12,    12,    62,    90,    12,
     204,    86,    21,     7,    20,    67,    64,   191,    74,    75,
     141,    78,   211,    71,    63,    12,    54,   101,    13,    89,
      14,    13,    68,    14,    55,    56,   214,   215,    77,    87,
     160,    15,   104,   211,   112,    15,   117,   101,   127,   141,
     149,   198,   136,   161,   151,   152,   153,   182,    78,   140,
     141,   137,    69,    78,   141,    63,    82,    83,   205,    63,
     148,    59,    72,    60,   150,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    70,    84,   144,    85,   181,   104,
      12,    26,   195,   196,    31,    32,    33,    34,    35,     1,
       2,     3,     4,     5,   168,   108,   189,   114,   188,   169,
     197,   190,    13,    24,    14,    96,    36,   127,   160,    97,
     103,   209,    81,    38,    39,    40,   106,   186,   212,    89,
      57,   161,    58,   141,    63,     1,     2,     3,     4,     5,
     201,   202,   210,   213,    89,    98,   228,   230,   141,   107,
     104,   141,   141,    91,    92,    93,   100,   218,     1,     2,
       3,     4,     5,   210,   203,    31,    32,    33,    34,    35,
      59,   170,    60,   104,    99,    61,   207,   216,   217,   222,
     224,    63,   104,   143,   171,    14,   145,    36,   175,   160,
     167,   103,   225,   172,    38,    39,    40,   104,    94,    95,
     219,   220,   161,   104,    31,    32,    33,    34,    35,   227,
     173,   229,   174,   176,   231,   177,   232,   178,   233,     1,
       2,     3,     4,     5,   154,   155,    36,    -1,   160,   185,
     103,   179,   194,    38,    39,    40,    31,    32,    33,    34,
      35,   161,   200,   187,   226,     1,     2,     3,     4,     5,
     208,   118,   157,   119,   120,   121,   122,   123,    36,   158,
     192,   142,    61,   124,   156,    38,    39,    40,   159,   102,
     138,   139,   125,    31,    32,    33,    34,    35,   199,   206,
     184,    23,     1,     2,     3,     4,     5,     0,   118,     0,
     119,   120,   121,   122,   123,    36,     0,     0,     0,    61,
     183,     0,    38,    39,    40,     0,     0,     0,     0,   125,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,   118,     0,   119,   120,   121,
     122,   123,    36,    59,     0,    60,    61,    61,     0,    38,
      39,    40,     0,     0,     0,     0,   125,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     0,    31,    32,    33,    34,    35,     0,     0,    36,
       0,     0,     0,     0,     0,     0,    38,    39,    40,     0,
       0,     0,     0,   125,    36,    31,    32,    33,    34,    35,
       0,    38,    39,    40,     0,     0,    22,     0,   180,     0,
      31,    32,    33,    34,    35,     0,     0,    36,     1,     2,
       3,     4,     5,     0,    38,    39,    40,     0,     0,     0,
       0,   125,    36,     0,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    31,    32,    33,    34,    35,     1,     2,
       3,     4,     5,     0,    31,    32,    33,    34,    35,     0,
       0,   143,    24,    14,     0,    36,     0,     0,   110,     0,
       0,     0,    38,    39,    40,   111,    36,     0,     0,   115,
       0,     0,     0,    38,    39,    40,   116,    31,    32,    33,
      34,    35,     0,     0,     0,     0,     1,     2,     3,     4,
       5,    31,    32,    33,    34,    35,     0,     0,     0,    36,
       0,    31,    32,    33,    34,    35,    38,    39,    40,     0,
       0,     0,     0,    36,     0,     0,     0,   103,     0,     0,
      38,    39,    40,    36,   146,    31,    32,    33,    34,    35,
      38,    39,    40,     0,     0,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,     0,     0,    36,     0,     0,
       0,   187,     0,     0,    38,    39,    40,    36,   221,     0,
       0,     0,    36,   223,    38,    39,    40,     0,     0,    38,
      39,    40,    31,    32,    33,    34,    35,    31,    32,    33,
      34,    35,     1,     2,     3,     4,     5,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   113,     0,     0,    36,
       0,    38,    39,    40,     0,     0,    38,    39,    40
=======
      88,    92,     9,    82,   105,    16,    91,    20,   116,   213,
      95,    96,    21,   103,   104,     9,     1,    23,   133,     1,
     151,   112,    76,   140,    97,    32,    23,   115,    67,    81,
      76,     1,    77,    33,   189,   136,   141,    27,     7,    28,
     137,     7,    77,   156,    37,    38,    39,    40,    41,   113,
     105,   126,    17,   130,   213,   131,   155,   126,   131,   127,
     104,   105,    91,   148,   149,   152,    48,    98,   163,   164,
     165,   194,   195,    50,    51,    52,    67,   161,   200,   132,
     102,   126,   160,   214,   215,    31,   162,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   153,   192,   172,   108,
     109,   126,   126,   178,   179,   150,   180,   227,   197,   229,
     115,   188,   117,   118,   119,    99,    91,   233,   110,   234,
     111,   235,     2,     3,     4,     5,     6,   115,    16,   122,
     193,    29,    81,   198,     1,   126,   100,    81,   199,    22,
     179,   202,   180,     2,     3,     4,     5,     6,    34,   120,
     121,   101,   209,   228,   212,   206,     7,    81,   126,    91,
     217,   219,    37,    38,    39,    40,    41,   123,    91,   186,
     187,   221,    37,    38,    39,    40,    41,   230,   231,   232,
     225,    81,   126,   124,    94,    91,    37,    38,    39,    40,
      41,    50,    51,    52,    48,   125,   140,   134,    90,   212,
      34,    50,    51,    52,    91,   166,   167,   135,    48,   141,
     140,   157,    90,   211,   182,    50,    51,    52,    37,    38,
      39,    40,    41,   141,     1,   138,     2,     3,     4,     5,
       6,   139,   185,     2,     3,     4,     5,     6,   191,    -1,
      48,   203,   140,    22,    90,   236,     7,    50,    51,    52,
      37,    38,    39,    40,    41,   141,   201,   222,   226,     2,
       3,     4,     5,     6,   204,    42,   210,    43,    44,    45,
      46,    47,    48,   196,   223,   168,    22,    49,   224,    50,
      51,    52,   170,   169,   183,    89,    53,    37,    38,    39,
      40,    41,   171,   154,   147,   220,     2,     3,     4,     5,
       6,   181,    42,   129,    43,    44,    45,    46,    47,    48,
     190,    30,    36,    22,   128,     0,    50,    51,    52,     0,
       0,     0,    25,    53,    37,    38,    39,    40,    41,     0,
       0,    35,     2,     3,     4,     5,     6,    78,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    93,     0,     0,
      22,     0,     0,    50,    51,    52,     0,     0,     0,     0,
      53,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     0,    37,    38,    39,    40,
      41,     0,     0,    48,     0,     0,     0,     0,     0,     0,
      50,    51,    52,     0,     0,     0,     0,    53,    48,    37,
      38,    39,    40,    41,     0,    50,    51,    52,     0,     0,
       0,     0,    53,    37,    38,    39,    40,    41,     0,     0,
       0,    48,     0,     0,    86,     0,     0,     0,    50,    51,
      52,    87,     0,     0,     0,    48,     0,     0,   176,     0,
       0,     0,    50,    51,    52,   177,    37,    38,    39,    40,
      41,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     0,     0,     0,    48,     0,
       0,   207,     0,    48,     0,    50,    51,    52,   208,     0,
      50,    51,    52,    37,    38,    39,    40,    41,    37,    38,
      39,    40,    41,     0,    37,    38,    39,    40,    41,    37,
      38,    39,    40,    41,     0,    48,     0,     0,     0,    90,
      48,   158,    50,    51,    52,     0,    48,    50,    51,    52,
     196,    48,   216,    50,    51,    52,     0,     0,    50,    51,
      52,    37,    38,    39,    40,    41,    37,    38,    39,    40,
      41,     0,     2,     3,     4,     5,     6,     0,     0,     0,
       0,     0,     0,    48,   218,   155,   173,   131,    48,     1,
      50,    51,    52,     0,    79,    50,    51,    52,     2,     3,
       4,     5,     6,     2,     3,     4,     5,     6,     0,     0,
       0,   130,   173,   131,     0,     0,     0,    80,     2,     3,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
      14,    36,    56,    13,     0,     3,     3,    20,    45,     3,
     177,    10,     8,     9,     7,    25,    20,    28,    34,    35,
      31,    36,   196,    31,    20,     3,    31,    25,    25,    45,
      27,    25,    25,    27,    39,    38,   203,   204,    73,    38,
      27,    39,    56,   217,    58,    39,    60,    25,    61,    31,
      85,    38,    65,    40,    91,    92,    93,    39,    73,    26,
      31,    65,    26,    78,    31,    61,     6,     7,    39,    65,
      84,    25,    26,    27,    88,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    26,    25,    79,    27,   123,   103,
       3,   101,    30,    31,     3,     4,     5,     6,     7,    12,
      13,    14,    15,    16,    26,    57,    26,    59,   145,    31,
     164,    31,    25,    26,    27,    11,    25,   130,    27,    11,
      29,    30,    28,    32,    33,    34,     3,   141,    26,   145,
      25,    40,    27,    31,   130,    12,    13,    14,    15,    16,
     175,   176,   196,    26,   160,     8,    26,    26,    31,    26,
     164,    31,    31,    35,    36,    37,    28,   211,    12,    13,
      14,    15,    16,   217,   177,     3,     4,     5,     6,     7,
      25,    28,    27,   187,     9,    29,   190,    30,    31,   214,
     215,   177,   196,    25,    28,    27,    26,    25,    25,    27,
      26,    29,    30,    26,    32,    33,    34,   211,    32,    33,
     212,   213,    40,   217,     3,     4,     5,     6,     7,   221,
      28,   223,    28,    25,   226,    25,   228,    39,   230,    12,
      13,    14,    15,    16,    94,    95,    25,    11,    27,    26,
      29,    39,     3,    32,    33,    34,     3,     4,     5,     6,
       7,    40,     3,    29,    19,    12,    13,    14,    15,    16,
      28,    18,    97,    20,    21,    22,    23,    24,    25,    98,
     160,    78,    29,    30,    96,    32,    33,    34,    99,    54,
      71,    73,    39,     3,     4,     5,     6,     7,   165,   187,
     130,     9,    12,    13,    14,    15,    16,    -1,    18,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    29,
      30,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,    39,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    18,    -1,    20,    21,    22,
      23,    24,    25,    25,    -1,    27,    29,    29,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    39,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    -1,     3,     4,     5,     6,     7,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    25,     3,     4,     5,     6,     7,
      -1,    32,    33,    34,    -1,    -1,     0,    -1,    39,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    25,    12,    13,
      14,    15,    16,    -1,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    34,    35,     3,     4,     5,     6,     7,    12,    13,
      14,    15,    16,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    25,    26,    27,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    25,    -1,    -1,    28,
      -1,    -1,    -1,    32,    33,    34,    35,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,     3,     4,     5,     6,     7,    -1,    -1,    -1,    25,
      -1,     3,     4,     5,     6,     7,    32,    33,    34,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,
      32,    33,    34,    25,    26,     3,     4,     5,     6,     7,
      32,    33,    34,    -1,    -1,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    -1,    -1,    25,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    25,    26,    -1,
      -1,    -1,    25,    26,    32,    33,    34,    -1,    -1,    32,
      33,    34,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    26,    -1,    -1,    25,
      -1,    32,    33,    34,    -1,    -1,    32,    33,    34
=======
      28,    34,     0,    27,    48,     7,    34,     9,    57,   187,
      40,    41,    10,    47,    48,    13,     3,    11,    81,     3,
      99,    10,    24,    27,    25,    31,    20,    57,    22,    27,
      32,     3,    26,    39,    38,    26,    40,    25,    25,    27,
      31,    25,    36,   106,     3,     4,     5,     6,     7,    38,
      94,    31,    39,    25,   232,    27,    25,    31,    27,    39,
      94,   105,    90,    97,    98,    39,    25,    25,   117,   118,
     119,   150,   151,    32,    33,    34,    70,   111,    28,    81,
      39,    31,   110,   192,   193,    26,   114,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    26,    26,   126,     6,
       7,    31,    31,   131,    25,    99,    27,   216,   157,   218,
     140,   144,    35,    36,    37,    25,   144,   226,    25,   228,
      27,   230,    12,    13,    14,    15,    16,   157,   130,    11,
      26,     0,   130,    26,     3,    31,    39,   135,    31,    29,
      25,    26,    27,    12,    13,    14,    15,    16,    38,    32,
      33,    39,   180,    26,   187,   179,    25,   155,    31,   187,
     194,   195,     3,     4,     5,     6,     7,    11,   196,    30,
      31,   199,     3,     4,     5,     6,     7,    26,    30,    31,
     213,   179,    31,     8,    25,   213,     3,     4,     5,     6,
       7,    32,    33,    34,    25,     9,    27,    26,    29,   232,
      38,    32,    33,    34,   232,   120,   121,    31,    25,    40,
      27,    26,    29,    30,     3,    32,    33,    34,     3,     4,
       5,     6,     7,    40,     3,    28,    12,    13,    14,    15,
      16,    28,     3,    12,    13,    14,    15,    16,    26,    11,
      25,    28,    27,    29,    29,    30,    25,    32,    33,    34,
       3,     4,     5,     6,     7,    40,    26,    26,    19,    12,
      13,    14,    15,    16,    28,    18,    28,    20,    21,    22,
      23,    24,    25,    29,    28,   122,    29,    30,    28,    32,
      33,    34,   124,   123,   140,    32,    39,     3,     4,     5,
       6,     7,   125,   105,    94,   196,    12,    13,    14,    15,
      16,   135,    18,    70,    20,    21,    22,    23,    24,    25,
     145,    13,    20,    29,    30,    -1,    32,    33,    34,    -1,
      -1,    -1,    11,    39,     3,     4,     5,     6,     7,    -1,
      -1,    20,    12,    13,    14,    15,    16,    26,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    36,    -1,    -1,
      29,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    25,     3,
       4,     5,     6,     7,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    32,    33,    34,    35,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    25,    -1,    32,    33,    34,    35,    -1,
      32,    33,    34,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    -1,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    -1,    25,    -1,    -1,    -1,    29,
      25,    26,    32,    33,    34,    -1,    25,    32,    33,    34,
      29,    25,    26,    32,    33,    34,    -1,    -1,    32,    33,
      34,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    25,    26,    27,    25,     3,
      32,    33,    34,    -1,     3,    32,    33,    34,    12,    13,
      14,    15,    16,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    26,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    12,    13,    14,    15,    16,    58,    59,    62,    86,
      87,    88,     3,    25,    27,    39,    60,    61,    64,    65,
      71,    59,     0,    87,    26,    59,    64,    66,    67,    68,
      71,     3,     4,     5,     6,     7,    25,    28,    32,    33,
      34,    35,    42,    43,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    31,    39,    38,    25,    27,    25,
      27,    29,    58,    59,    79,    89,    72,    64,    71,    26,
      26,    31,    26,    25,    45,    45,    54,    56,    62,    63,
      70,    28,     6,     7,    25,    27,    10,    38,    55,    45,
      47,    35,    36,    37,    32,    33,    11,    11,     8,     9,
      28,    25,    61,    29,    54,    73,     3,    26,    66,    69,
      28,    35,    54,    26,    66,    28,    35,    54,    18,    20,
      21,    22,    23,    24,    30,    39,    56,    58,    78,    79,
      80,    81,    82,    83,    84,    85,    58,    79,    68,    70,
      26,    31,    63,    25,    71,    26,    26,    44,    54,    56,
      54,    47,    47,    47,    48,    48,    49,    50,    51,    52,
      27,    40,    73,    74,    75,    76,    77,    26,    26,    31,
      28,    28,    26,    28,    28,    25,    25,    25,    39,    39,
      39,    56,    39,    30,    81,    26,    54,    29,    47,    26,
      31,    28,    53,    57,     3,    30,    31,    73,    38,    77,
       3,    56,    56,    58,    82,    39,    74,    54,    28,    30,
      73,    75,    26,    26,    82,    82,    30,    31,    73,    78,
      78,    26,    56,    26,    56,    30,    19,    78,    26,    78,
      26,    78,    78,    78
=======
       0,     3,    12,    13,    14,    15,    16,    25,    58,    59,
      62,    64,    65,    85,    86,    87,    64,    39,    60,    61,
      64,    59,    29,    58,    59,    78,    88,    25,    27,     0,
      86,    26,    31,    39,    38,    78,    88,     3,     4,     5,
       6,     7,    18,    20,    21,    22,    23,    24,    25,    30,
      32,    33,    34,    39,    42,    43,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    56,    58,    77,    78,
      79,    80,    81,    82,    83,    84,    64,    58,    78,     3,
      26,    59,    66,    67,    68,    69,    28,    35,    54,    61,
      29,    54,    72,    78,    25,    45,    45,    25,    25,    25,
      39,    39,    39,    56,    56,    62,    63,    70,     6,     7,
      25,    27,    10,    38,    55,    45,    47,    35,    36,    37,
      32,    33,    11,    11,     8,     9,    31,    39,    30,    80,
      25,    27,    64,    71,    26,    31,    26,    31,    28,    28,
      27,    40,    72,    73,    74,    75,    76,    70,    56,    56,
      58,    81,    39,    26,    63,    25,    71,    26,    26,    44,
      54,    56,    54,    47,    47,    47,    48,    48,    49,    50,
      51,    52,    54,    26,    66,    71,    28,    35,    54,    25,
      27,    68,     3,    53,    57,     3,    30,    31,    72,    38,
      76,    26,    26,    26,    81,    81,    29,    47,    26,    31,
      28,    26,    26,    28,    28,    26,    66,    28,    35,    54,
      28,    30,    72,    74,    77,    77,    26,    56,    26,    56,
      73,    54,    26,    28,    28,    72,    19,    77,    26,    77,
      26,    30,    31,    77,    77,    77,    30
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
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
<<<<<<< HEAD
      70,    71,    71,    71,    71,    71,    71,    71,    72,    71,
      71,    71,    71,    73,    73,    73,    74,    74,    74,    74,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89
=======
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    88,    88
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
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
<<<<<<< HEAD
       2,     3,     2,     3,     3,     4,     3,     4,     0,     3,
       3,     3,     4,     1,     3,     4,     1,     2,     3,     4,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       2,     3,     1,     2,     1,     1,     1,     2,     5,     7,
       5,     6,     7,     6,     7,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
=======
       2,     3,     2,     2,     3,     3,     4,     3,     4,     3,
       3,     4,     1,     3,     4,     1,     2,     3,     4,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       6,     7,     6,     7,     2,     2,     2,     3,     1,     2,
       1,     1,     2,     3,     3,     4,     1,     2
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
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
<<<<<<< HEAD
#line 35 "full.y" /* yacc.c:1661  */
    { printf("Hola"); }
#line 1493 "full.tab.c" /* yacc.c:1661  */
    break;

  case 3:
#line 36 "full.y" /* yacc.c:1661  */
    { printf("STRING_LITERAL"); }
#line 1499 "full.tab.c" /* yacc.c:1661  */
=======
#line 35 "full.y" /* yacc.c:1646  */
    { printf("Identifier"); }
#line 1493 "full.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "full.y" /* yacc.c:1646  */
    { printf("\nCONSTANT\n"); }
#line 1499 "full.tab.c" /* yacc.c:1646  */
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
    break;

  case 4:
#line 37 "full.y" /* yacc.c:1661  */
    { printf("STRING_LITERAL"); }
#line 1505 "full.tab.c" /* yacc.c:1661  */
    break;

  case 6:
#line 42 "full.y" /* yacc.c:1661  */
    { printf("1");}
#line 1511 "full.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 43 "full.y" /* yacc.c:1661  */
    { printf("2");}
#line 1517 "full.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 44 "full.y" /* yacc.c:1661  */
    { printf("3");}
#line 1523 "full.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 45 "full.y" /* yacc.c:1661  */
    { printf("4");}
#line 1529 "full.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 46 "full.y" /* yacc.c:1661  */
    { printf("5");}
#line 1535 "full.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 47 "full.y" /* yacc.c:1661  */
    { printf("6");}
#line 1541 "full.tab.c" /* yacc.c:1661  */
    break;

  case 12:
#line 48 "full.y" /* yacc.c:1661  */
    { printf("7");}
#line 1547 "full.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 49 "full.y" /* yacc.c:1661  */
    { printf("8");}
#line 1553 "full.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 53 "full.y" /* yacc.c:1661  */
    {printf("8");}
#line 1559 "full.tab.c" /* yacc.c:1661  */
    break;

  case 15:
#line 54 "full.y" /* yacc.c:1661  */
    {printf("9");}
#line 1565 "full.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 58 "full.y" /* yacc.c:1661  */
    {printf ("10");}
#line 1571 "full.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 59 "full.y" /* yacc.c:1661  */
    {printf ("11");}
#line 1577 "full.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 60 "full.y" /* yacc.c:1661  */
    {printf ("12");}
#line 1583 "full.tab.c" /* yacc.c:1661  */
    break;

  case 19:
#line 61 "full.y" /* yacc.c:1661  */
    {printf ("13");}
#line 1589 "full.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 76 "full.y" /* yacc.c:1661  */
    {printf ("13");}
#line 1595 "full.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 77 "full.y" /* yacc.c:1661  */
    {printf ("14");}
#line 1601 "full.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 78 "full.y" /* yacc.c:1661  */
    {printf ("15");}
#line 1607 "full.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 79 "full.y" /* yacc.c:1661  */
    {printf ("16");}
#line 1613 "full.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 127 "full.y" /* yacc.c:1661  */
    {printf ("from declaration a");}
#line 1619 "full.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 128 "full.y" /* yacc.c:1661  */
    {printf ("from declaration b");}
#line 1625 "full.tab.c" /* yacc.c:1661  */
    break;

  case 49:
<<<<<<< HEAD
#line 132 "full.y" /* yacc.c:1661  */
    {printf("type_spedifier ---");}
#line 1631 "full.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 149 "full.y" /* yacc.c:1661  */
    {printf("HERE INT");}
#line 1637 "full.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 151 "full.y" /* yacc.c:1661  */
    {printf("functions");}
#line 1643 "full.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 165 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 1");}
#line 1649 "full.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 166 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 2");}
#line 1655 "full.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 167 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 3");}
#line 1661 "full.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 168 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 4");}
#line 1667 "full.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 169 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 5");}
#line 1673 "full.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 170 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 6");}
#line 1679 "full.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 171 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 7");}
#line 1685 "full.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 172 "full.y" /* yacc.c:1661  */
    {printf("direct_declarator 8");}
#line 1691 "full.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 185 "full.y" /* yacc.c:1661  */
    {printf("from parameter 1");}
#line 1697 "full.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 186 "full.y" /* yacc.c:1661  */
    {printf("from parameter 2");}
#line 1703 "full.tab.c" /* yacc.c:1661  */
    break;

  case 76:
#line 187 "full.y" /* yacc.c:1661  */
    {printf("from parameter 3");}
#line 1709 "full.tab.c" /* yacc.c:1661  */
    break;

  case 79:
#line 196 "full.y" /* yacc.c:1661  */
    {printf("type_name ");}
#line 1715 "full.tab.c" /* yacc.c:1661  */
    break;

  case 80:
#line 197 "full.y" /* yacc.c:1661  */
    {printf("type_name ");}
#line 1721 "full.tab.c" /* yacc.c:1661  */
=======
#line 132 "full.y" /* yacc.c:1646  */
    {printf("\nTYPE SPECIFIER\n");}
#line 1511 "full.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 149 "full.y" /* yacc.c:1646  */
    {printf("\nType Int\n");}
#line 1517 "full.tab.c" /* yacc.c:1646  */
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
    break;

  case 74:
#line 185 "full.y" /* yacc.c:1646  */
    {printf("P_D");}
#line 1523 "full.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 186 "full.y" /* yacc.c:1646  */
    {printf("P_D");}
#line 1529 "full.tab.c" /* yacc.c:1646  */
    break;

  case 81:
<<<<<<< HEAD
#line 201 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 1");}
#line 1727 "full.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 202 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 2");}
#line 1733 "full.tab.c" /* yacc.c:1661  */
    break;

  case 83:
#line 203 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 3");}
#line 1739 "full.tab.c" /* yacc.c:1661  */
    break;

  case 84:
#line 204 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 4");}
#line 1745 "full.tab.c" /* yacc.c:1661  */
    break;

  case 85:
#line 205 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 5");}
#line 1751 "full.tab.c" /* yacc.c:1661  */
    break;

  case 86:
#line 206 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 6");}
#line 1757 "full.tab.c" /* yacc.c:1661  */
    break;

  case 87:
#line 207 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 7");}
#line 1763 "full.tab.c" /* yacc.c:1661  */
    break;

  case 88:
#line 208 "full.y" /* yacc.c:1661  */
    {printf("I'm Here");}
#line 1769 "full.tab.c" /* yacc.c:1661  */
    break;

  case 89:
#line 208 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 8");}
#line 1775 "full.tab.c" /* yacc.c:1661  */
    break;

  case 90:
#line 209 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 9");}
#line 1781 "full.tab.c" /* yacc.c:1661  */
    break;

  case 91:
#line 210 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 10");}
#line 1787 "full.tab.c" /* yacc.c:1661  */
    break;

  case 92:
#line 211 "full.y" /* yacc.c:1661  */
    {printf("direct abstract declarator 11");}
#line 1793 "full.tab.c" /* yacc.c:1661  */
    break;

  case 96:
#line 221 "full.y" /* yacc.c:1661  */
    {printf ("initializer 0");}
#line 1799 "full.tab.c" /* yacc.c:1661  */
    break;

  case 97:
#line 222 "full.y" /* yacc.c:1661  */
    {printf ("initializer 1");}
#line 1805 "full.tab.c" /* yacc.c:1661  */
    break;

  case 98:
#line 223 "full.y" /* yacc.c:1661  */
    {printf ("initializer 2");}
#line 1811 "full.tab.c" /* yacc.c:1661  */
    break;

  case 99:
#line 224 "full.y" /* yacc.c:1661  */
    {printf ("initializer 3");}
#line 1817 "full.tab.c" /* yacc.c:1661  */
    break;

  case 105:
#line 242 "full.y" /* yacc.c:1661  */
    { printf("statement 1");}
#line 1823 "full.tab.c" /* yacc.c:1661  */
    break;

  case 106:
#line 243 "full.y" /* yacc.c:1661  */
    { printf("statement 2");}
#line 1829 "full.tab.c" /* yacc.c:1661  */
    break;

  case 107:
#line 244 "full.y" /* yacc.c:1661  */
    { printf("statement 3");}
#line 1835 "full.tab.c" /* yacc.c:1661  */
    break;

  case 108:
#line 245 "full.y" /* yacc.c:1661  */
    { printf("statement 4");}
#line 1841 "full.tab.c" /* yacc.c:1661  */
=======
#line 201 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1535 "full.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 202 "full.y" /* yacc.c:1646  */
    {printf("Hola");}
#line 1541 "full.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 209 "full.y" /* yacc.c:1646  */
    {printf("Hola");}
#line 1547 "full.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1553 "full.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "full.y" /* yacc.c:1646  */
    {printf("I'm Here");}
#line 1559 "full.tab.c" /* yacc.c:1646  */
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
    break;

  case 109:
#line 246 "full.y" /* yacc.c:1661  */
    { printf("statement 5");}
#line 1847 "full.tab.c" /* yacc.c:1661  */
    break;

  case 110:
#line 250 "full.y" /* yacc.c:1661  */
    {printf("I'm Here");}
<<<<<<< HEAD
#line 1853 "full.tab.c" /* yacc.c:1661  */
    break;

  case 129:
#line 290 "full.y" /* yacc.c:1661  */
    {printf("Hola");}
#line 1859 "full.tab.c" /* yacc.c:1661  */
    break;

  case 130:
#line 291 "full.y" /* yacc.c:1661  */
    {printf("Hola");}
#line 1865 "full.tab.c" /* yacc.c:1661  */
    break;

  case 131:
#line 295 "full.y" /* yacc.c:1661  */
    {printf ("external declaration");}
#line 1871 "full.tab.c" /* yacc.c:1661  */
    break;

  case 132:
#line 296 "full.y" /* yacc.c:1661  */
    {printf ("external declaration");}
#line 1877 "full.tab.c" /* yacc.c:1661  */
    break;

  case 133:
#line 300 "full.y" /* yacc.c:1661  */
    { printf ("is a function a");}
#line 1883 "full.tab.c" /* yacc.c:1661  */
    break;

  case 134:
#line 301 "full.y" /* yacc.c:1661  */
    { printf ("is a function b");}
#line 1889 "full.tab.c" /* yacc.c:1661  */
    break;


#line 1893 "full.tab.c" /* yacc.c:1661  */
=======
#line 1565 "full.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 251 "full.y" /* yacc.c:1646  */
    {printf("Block Item\n");}
#line 1571 "full.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 290 "full.y" /* yacc.c:1646  */
    {printf("TU_1");}
#line 1577 "full.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 291 "full.y" /* yacc.c:1646  */
    {printf("TU_2");}
#line 1583 "full.tab.c" /* yacc.c:1646  */
    break;


#line 1587 "full.tab.c" /* yacc.c:1646  */
>>>>>>> e9da6a56cd0858ecb5d6f1e9330f053fe2b7f251
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
#line 310 "full.y" /* yacc.c:1906  */


  int main(){
      yyin = stdin;
      do{
          yyparse();
      }while(!feof(yyin));

      return 0;
  }
void yyerror( const char* s ){
    printf(stderr, "Parse error: %s\n",s);
    exit(1);
}
