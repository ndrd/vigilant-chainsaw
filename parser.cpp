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

#line 67 "parser.cpp" /* yacc.c:339  */

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
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    MUL_ASSIGN = 269,
    DIV_ASSIGN = 270,
    MOD_ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    TYPE_NAME = 274,
    CHAR = 275,
    INT = 276,
    DOUBLE = 277,
    VOID = 278,
    CONST = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    FOR = 283,
    CONTINUE = 284,
    BREAK = 285,
    RETURN = 286
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define LE_OP 263
#define GE_OP 264
#define EQ_OP 265
#define NE_OP 266
#define AND_OP 267
#define OR_OP 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define TYPE_NAME 274
#define CHAR 275
#define INT 276
#define DOUBLE 277
#define VOID 278
#define CONST 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define FOR 283
#define CONTINUE 284
#define BREAK 285
#define RETURN 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 177 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   576

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,    44,     2,     2,
      32,    33,    42,    39,    38,    40,    49,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      45,    47,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    15,    15,    16,    17,    18,    22,    23,    24,    25,
      26,    27,    28,    29,    33,    34,    38,    39,    40,    41,
      45,    46,    47,    51,    52,    56,    57,    58,    59,    63,
      64,    65,    69,    70,    71,    72,    73,    77,    78,    79,
      83,    84,    88,    89,    93,    94,    98,    99,   100,   101,
     102,   103,   107,   108,   112,   116,   117,   121,   122,   126,
     127,   131,   132,   136,   137,   138,   139,   143,   144,   148,
     153,   154,   155,   156,   157,   158,   159,   160,   164,   168,
     169,   173,   174,   175,   179,   180,   184,   185,   189,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     207,   208,   209,   213,   214,   215,   216,   220,   224,   225,
     229,   230,   234,   235,   236,   237,   238,   242,   243,   247,
     248,   252,   253,   257,   258,   262,   263,   267,   268,   269,
     270,   271,   275,   276,   277,   278,   282,   283,   287,   288,
     292,   293,   297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "CONST", "IF", "ELSE", "WHILE", "FOR", "CONTINUE", "BREAK", "RETURN",
  "'('", "')'", "'['", "']'", "'{'", "'}'", "','", "'+'", "'-'", "'!'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "'='", "';'", "'.'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "specifier_qualifier_list", "declarator",
  "direct_declarator", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
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
     285,   286,    40,    41,    91,    93,   123,   125,    44,    43,
      45,    33,    42,    47,    37,    60,    62,    61,    59,    46
};
# endif

#define YYPACT_NINF -200

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-200)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     252,  -200,  -200,  -200,  -200,  -200,    19,   252,   196,  -200,
    -200,  -200,   532,   139,  -200,   -23,  -200,   -19,    84,    53,
     152,  -200,  -200,  -200,  -200,    30,    36,    44,    98,  -200,
      58,  -200,  -200,  -200,   502,   502,   432,  -200,  -200,  -200,
    -200,    92,  -200,   126,    66,   507,  -200,   178,   100,    26,
     162,   143,   146,   148,    14,  -200,   438,    65,   379,   223,
    -200,     9,  -200,    53,   130,   392,  -200,  -200,  -200,  -200,
     252,  -200,   432,  -200,  -200,  -200,   -22,   252,   199,   156,
    -200,  -200,  -200,   443,   507,  -200,  -200,  -200,  -200,  -200,
    -200,   507,  -200,  -200,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,  -200,    14,  -200,
     200,  -200,  -200,  -200,  -200,   159,   -14,  -200,   164,   173,
     203,   210,   215,   213,   222,   316,  -200,  -200,    93,  -200,
    -200,  -200,   262,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,   225,  -200,   251,   253,  -200,   264,  -200,   507,  -200,
     191,  -200,   453,  -200,    -6,  -200,    28,  -200,  -200,  -200,
    -200,   178,   178,   100,   100,   100,   100,    26,    26,   162,
     143,   507,   297,  -200,   219,   438,   -11,  -200,  -200,  -200,
     306,  -200,  -200,   507,   507,   340,  -200,  -200,  -200,    99,
    -200,  -200,  -200,  -200,  -200,  -200,   275,  -200,   200,  -200,
    -200,   507,  -200,   146,   277,  -200,  -200,    89,  -200,  -200,
    -200,  -200,    82,    86,   362,   362,  -200,   243,  -200,  -200,
    -200,  -200,   438,   301,   301,   492,   497,  -200,   161,  -200,
     287,  -200,   301,   123,   301,   144,  -200,   301,  -200,   301,
    -200,   301,  -200,  -200,  -200
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    64,    65,    66,    63,   139,     0,    57,     0,   136,
     138,    70,     0,     0,    55,     0,    59,    61,    69,     0,
      88,    58,     1,   137,    96,    83,     0,     0,    78,    79,
       0,     2,     3,     4,     0,     0,     0,    90,    20,    21,
      22,     0,     6,    16,    23,     0,    25,    29,    32,    37,
      40,    42,    44,     0,     0,    56,     0,     0,     0,     0,
     142,     0,   141,     0,     0,     0,    81,    82,    71,    97,
       0,    89,     0,    17,    18,    52,     0,    68,    86,     0,
      94,    10,    11,     0,     0,    47,    48,    49,    50,    51,
      46,     0,    23,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    60,
       0,   100,    62,    84,    77,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,   117,   123,     0,   121,
     122,   112,     0,   119,   113,   114,   115,   116,   143,   140,
      98,     0,    92,     0,     0,    80,     0,     5,     0,    67,
       0,    87,     0,     8,     0,    14,     0,    45,    26,    27,
      28,    30,    31,    35,    36,    33,    34,    38,    39,    41,
      43,     0,     0,   103,     0,     0,     0,   108,    75,    76,
       0,    73,    72,     0,     0,     0,   132,   133,   134,     0,
     124,   118,   120,    99,    95,    93,     0,    53,     0,    24,
       9,     0,     7,    54,     0,   111,   101,     0,   104,   107,
     109,    85,     0,     0,     0,     0,   135,     0,    15,   110,
     102,   105,     0,     0,     0,     0,     0,    12,     0,   106,
     125,   127,     0,     0,     0,     0,    13,     0,   130,     0,
     128,     0,   126,   131,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,  -200,  -200,     5,  -200,   -40,   140,   177,   192,
     209,   211,   145,   -13,  -200,   -35,  -200,   -15,     2,  -200,
     261,   -30,   241,     6,  -200,   -44,  -200,   254,  -200,   255,
       1,  -200,   -53,   127,  -199,  -200,   158,   335,    -5,  -200,
     204,  -155,  -200,  -200,  -200,  -200,   327,  -200,  -200
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,   154,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    75,    91,   128,   204,     5,    25,    15,
      16,     7,    78,    17,    18,    27,    28,    29,   116,    79,
      30,    20,   173,   174,   175,   176,   177,   130,   131,   132,
     133,   134,   135,   136,   137,     8,     9,    10,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    76,     6,   112,    60,    93,    77,    19,   222,    21,
       6,   147,    11,   115,    62,    54,   148,    11,    26,   179,
     141,    61,    11,   171,   180,    55,    67,   200,    56,   222,
     215,    66,   201,    11,    99,   100,   209,    76,   172,    73,
      74,   108,    77,   111,   129,   119,   108,    77,   138,   156,
      92,    12,   144,    13,   158,   159,   160,    14,   139,   225,
     226,    61,    12,   202,    13,    61,   148,    14,   113,    68,
     155,   101,   102,     1,     2,     3,     4,    69,   157,   151,
      85,    86,    87,    88,    89,     1,     2,     3,     4,    59,
     189,    71,    31,    32,    33,    34,    35,   111,   114,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,   199,    90,    26,   223,    57,   129,    58,   224,
     148,    36,   208,   171,   148,   110,   220,    80,    38,    39,
      40,   148,    81,    82,    61,   197,    70,   148,   172,    97,
      98,   190,    31,    32,    33,    34,    35,   216,   212,   213,
       1,     2,     3,     4,   221,   105,   239,    92,    83,   106,
      84,   148,   111,   140,    31,    32,    33,    34,    35,   229,
     214,    36,   103,   104,    37,   221,    92,   241,    38,    39,
      40,    41,   148,   107,    64,   111,    65,    61,   218,   152,
     233,   235,   178,    36,   111,   171,    22,   110,   236,   181,
      38,    39,    40,    31,    32,    33,    34,    35,   182,   111,
     172,     1,     2,     3,     4,   111,     1,     2,     3,     4,
      94,    95,    96,   150,    24,    13,    31,    32,    33,    34,
      35,   150,    36,    13,   171,   183,   110,   161,   162,    38,
      39,    40,   184,     1,     2,     3,     4,   185,   120,   172,
     121,   122,   123,   124,   125,    36,   206,   207,   193,    59,
     126,   186,    38,    39,    40,    31,    32,    33,    34,    35,
     187,   127,     1,     2,     3,     4,   163,   164,   165,   166,
     227,   228,     1,     2,     3,     4,   194,   120,   195,   121,
     122,   123,   124,   125,    36,   167,   168,   196,    59,   191,
     205,    38,    39,    40,    31,    32,    33,    34,    35,   211,
     127,   198,   219,   237,   169,   109,   203,   170,   149,    31,
      32,    33,    34,    35,   145,   217,   120,   146,   121,   122,
     123,   124,   125,    36,   210,    23,   192,    59,     0,     0,
      38,    39,    40,    31,    32,    33,    34,    35,    36,   127,
       0,     0,     0,     0,     0,    38,    39,    40,     0,     0,
       1,     2,     3,     4,   188,    31,    32,    33,    34,    35,
       0,     0,    36,     0,     0,     0,     0,     0,     0,    38,
      39,    40,    31,    32,    33,    34,    35,     0,   127,     0,
       0,     0,     0,     0,    36,    31,    32,    33,    34,    35,
       0,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     127,    36,     0,     0,   117,     0,     0,     0,    38,    39,
      40,   118,     0,     0,    36,     0,     0,   142,     0,     0,
       0,    38,    39,    40,   143,    31,    32,    33,    34,    35,
       0,    31,    32,    33,    34,    35,    31,    32,    33,    34,
      35,     0,     1,     2,     3,     4,    31,    32,    33,    34,
      35,     0,     0,     0,    36,     0,     0,     0,     0,     0,
      36,    38,    39,    40,   110,    36,   153,    38,    39,    40,
       0,     0,    38,    39,    40,    36,     0,     0,     0,   198,
       0,     0,    38,    39,    40,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,   232,     0,     0,     0,    36,
     234,    38,    39,    40,    72,    11,    38,    39,    40,    36,
       0,    38,    39,    40,     0,     0,    38,    39,    40,     0,
       0,     0,     1,     2,     3,     4,     0,     0,   230,   231,
       0,     0,     0,     0,    12,    24,    13,   238,     0,   240,
       0,     0,   242,     0,   243,     0,   244
};

static const yytype_int16 yycheck[] =
{
      13,    36,     0,    56,    19,    45,    36,     6,   207,     7,
       8,    33,     3,    57,    19,    38,    38,     3,    12,    33,
      64,    19,     3,    34,    38,    48,    25,    33,    47,   228,
     185,    25,    38,     3,     8,     9,    47,    72,    49,    34,
      35,    32,    72,    56,    59,    58,    32,    77,    63,    84,
      45,    32,    65,    34,    94,    95,    96,    48,    63,   214,
     215,    59,    32,    35,    34,    63,    38,    48,     3,    33,
      83,    45,    46,    20,    21,    22,    23,    33,    91,    78,
      14,    15,    16,    17,    18,    20,    21,    22,    23,    36,
     125,    33,     3,     4,     5,     6,     7,   110,    33,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   152,    47,   108,    33,    32,   132,    34,    33,
      38,    32,   175,    34,    38,    36,    37,    35,    39,    40,
      41,    38,     6,     7,   132,   148,    38,    38,    49,    39,
      40,    48,     3,     4,     5,     6,     7,    48,   183,   184,
      20,    21,    22,    23,   207,    12,    33,   152,    32,    13,
      34,    38,   175,    33,     3,     4,     5,     6,     7,   222,
     185,    32,    10,    11,    35,   228,   171,    33,    39,    40,
      41,    42,    38,    35,    32,   198,    34,   185,   201,    33,
     225,   226,    33,    32,   207,    34,     0,    36,    37,    35,
      39,    40,    41,     3,     4,     5,     6,     7,    35,   222,
      49,    20,    21,    22,    23,   228,    20,    21,    22,    23,
      42,    43,    44,    32,    33,    34,     3,     4,     5,     6,
       7,    32,    32,    34,    34,    32,    36,    97,    98,    39,
      40,    41,    32,    20,    21,    22,    23,    32,    25,    49,
      27,    28,    29,    30,    31,    32,    37,    38,    33,    36,
      37,    48,    39,    40,    41,     3,     4,     5,     6,     7,
      48,    48,    20,    21,    22,    23,    99,   100,   101,   102,
      37,    38,    20,    21,    22,    23,    35,    25,    35,    27,
      28,    29,    30,    31,    32,   103,   104,    33,    36,    37,
       3,    39,    40,    41,     3,     4,     5,     6,     7,     3,
      48,    36,    35,    26,   105,    54,   171,   106,    77,     3,
       4,     5,     6,     7,    70,   198,    25,    72,    27,    28,
      29,    30,    31,    32,   176,     8,   132,    36,    -1,    -1,
      39,    40,    41,     3,     4,     5,     6,     7,    32,    48,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      20,    21,    22,    23,    48,     3,     4,     5,     6,     7,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,     3,     4,     5,     6,     7,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    32,     3,     4,     5,     6,     7,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    42,     3,     4,     5,     6,     7,
      -1,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    -1,    20,    21,    22,    23,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      32,    39,    40,    41,    36,    32,    33,    39,    40,    41,
      -1,    -1,    39,    40,    41,    32,    -1,    -1,    -1,    36,
      -1,    -1,    39,    40,    41,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    32,
      33,    39,    40,    41,    32,     3,    39,    40,    41,    32,
      -1,    39,    40,    41,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,   223,   224,
      -1,    -1,    -1,    -1,    32,    33,    34,   232,    -1,   234,
      -1,    -1,   237,    -1,   239,    -1,   241
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    21,    22,    23,    67,    68,    71,    95,    96,
      97,     3,    32,    34,    48,    69,    70,    73,    74,    80,
      81,    68,     0,    96,    33,    68,    73,    75,    76,    77,
      80,     3,     4,     5,     6,     7,    32,    35,    39,    40,
      41,    42,    51,    52,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    38,    48,    47,    32,    34,    36,
      67,    68,    88,    98,    32,    34,    73,    80,    33,    33,
      38,    33,    32,    54,    54,    63,    65,    71,    72,    79,
      35,     6,     7,    32,    34,    14,    15,    16,    17,    18,
      47,    64,    54,    56,    42,    43,    44,    39,    40,     8,
       9,    45,    46,    10,    11,    12,    13,    35,    32,    70,
      36,    63,    82,     3,    33,    75,    78,    35,    42,    63,
      25,    27,    28,    29,    30,    31,    37,    48,    65,    67,
      87,    88,    89,    90,    91,    92,    93,    94,    67,    88,
      33,    75,    35,    42,    63,    77,    79,    33,    38,    72,
      32,    80,    33,    33,    53,    63,    65,    63,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    59,    59,    60,
      61,    34,    49,    82,    83,    84,    85,    86,    33,    33,
      38,    35,    35,    32,    32,    32,    48,    48,    48,    65,
      48,    37,    90,    33,    35,    35,    33,    63,    36,    56,
      33,    38,    35,    62,    66,     3,    37,    38,    82,    47,
      86,     3,    65,    65,    67,    91,    48,    83,    63,    35,
      37,    82,    84,    33,    33,    91,    91,    37,    38,    82,
      87,    87,    33,    65,    33,    65,    37,    26,    87,    33,
      87,    33,    87,    87,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    54,    54,
      55,    55,    55,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    59,    59,    59,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    72,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      76,    77,    77,    77,    78,    78,    79,    79,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       2,     2,     6,     7,     1,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     3,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     4,     4,     3,     4,     4,     3,     1,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     3,
       2,     3,     3,     4,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     2,     3,     4,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     6,     7,
       6,     7,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     1,     2
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
      
#line 1504 "parser.cpp" /* yacc.c:1661  */
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
#line 302 "parser.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
