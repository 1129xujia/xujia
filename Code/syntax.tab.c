/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./syntax.y"

   #include <stdio.h>
   #include"tree.h"
   #include"lex.yy.c"
   int yyerror(char*msg);
   extern int syn_error;
   extern struct Node*root;
   extern int yylineno;

#line 80 "./syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    ID = 260,
    SEMI = 261,
    COMMA = 262,
    RELOP = 263,
    ASSIGNOP = 264,
    PLUS = 265,
    MINUS = 266,
    STAR = 267,
    DIV = 268,
    AND = 269,
    OR = 270,
    DOT = 271,
    NOT = 272,
    LP = 273,
    RP = 274,
    LB = 275,
    RB = 276,
    LC = 277,
    RC = 278,
    STRUCT = 279,
    RETURN = 280,
    IF = 281,
    ELSE = 282,
    WHILE = 283,
    TYPE = 284,
    UMINUS = 285,
    LOWER_THAN_ELSE = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "./syntax.y"

  int type_int;
  float type_float;
  double type_double;
  struct Node* node ;

#line 171 "./syntax.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

#define YYUNDEFTOK  2
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    64,    70,    72,    79,    85,    92,    93,
      94,    95,    96,    98,   103,   110,   111,   113,   118,   124,
     133,   139,   140,   142,   147,   149,   155,   160,   168,   169,
     171,   179,   186,   187,   188,   191,   198,   203,   205,   212,
     220,   222,   228,   230,   236,   241,   248,   257,   268,   277,
     278,   279,   280,   281,   282,   284,   290,   292,   299,   300,
     302,   307,   315,   320,   328,   335,   342,   349,   356,   363,
     370,   377,   384,   391,   397,   403,   411,   418,   426,   433,
     438,   443,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   464,   471,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "SEMI", "COMMA",
  "RELOP", "ASSIGNOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT",
  "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF",
  "ELSE", "WHILE", "TYPE", "UMINUS", "LOWER_THAN_ELSE", "$accept",
  "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "OptTag", "Tag", "VarDec", "FunDec", "VarList",
  "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    69,     6,  -111,    23,  -111,    12,   221,  -111,    -3,
      -1,     5,     1,     8,    28,  -111,  -111,  -111,    59,    -1,
    -111,    14,     2,     7,  -111,    39,    42,    68,  -111,  -111,
      53,   109,  -111,  -111,  -111,   141,   168,    42,  -111,   128,
    -111,    90,    13,   133,  -111,    90,   204,   101,    68,    16,
      88,   136,  -111,  -111,   136,  -111,   162,    17,    74,  -111,
     134,  -111,  -111,    74,   130,   151,   177,   185,   191,    78,
    -111,  -111,   181,   189,   207,   212,   230,    98,    99,  -111,
     196,   101,   150,  -111,  -111,  -111,  -111,  -111,  -111,   197,
    -111,  -111,   104,  -111,    90,  -111,  -111,  -111,   184,  -111,
     229,  -111,   229,   195,   384,   214,   166,   194,   104,  -111,
     104,  -111,  -111,   231,  -111,   235,   253,   258,   276,   281,
     299,   304,   322,   227,   327,   423,  -111,   129,  -111,   357,
     223,  -111,  -111,  -111,  -111,  -111,   127,   397,   410,  -111,
    -111,   341,  -111,   423,  -111,   121,  -111,   121,  -111,   229,
    -111,   229,  -111,   445,  -111,   434,  -111,  -111,   222,   370,
     345,  -111,   345,  -111,  -111,   127,   127,  -111,  -111,   237,
    -111,  -111,   233,  -111,   127,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    17,     0,     2,     0,     0,    18,     0,
       0,     0,     0,    25,     0,    20,     1,     3,     0,    26,
       6,     0,    13,     0,    34,     0,     0,     0,    10,    22,
       0,     0,    11,     8,     5,     0,     0,    12,     7,     0,
      31,     0,     0,    36,    40,     0,     0,     0,     0,     0,
       0,     0,    26,    15,    16,    14,     0,     0,     0,    32,
      38,    33,    30,     0,    62,     0,    60,     0,     0,     0,
      80,    81,    79,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,    55,    21,    19,    28,    29,    27,     0,
      37,    35,     0,    59,     0,    58,    57,    49,     0,    91,
      73,    92,    74,     0,     0,     0,     0,     0,     0,    54,
       0,    39,    41,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    61,     0,    76,    97,
       0,    90,    72,    52,    51,    45,     0,     0,     0,    50,
      85,    67,    82,    64,    86,    68,    87,    69,    88,    70,
      89,    71,    83,    65,    84,    66,    95,    78,     0,     0,
       0,    93,     0,    75,    53,     0,     0,    94,    77,     0,
      98,    96,    46,    48,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   244,  -111,   220,     4,  -111,  -111,  -111,    26,
     259,   110,  -111,   102,   186,  -110,    32,  -111,   -41,  -111,
     -73,    36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    21,    41,     8,    14,    15,    64,
      11,    42,    43,    79,    80,    81,    47,    48,    65,    66,
      82,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,   102,   104,   106,     7,    68,    26,    12,    37,    35,
       7,    13,    -4,     1,    61,    33,    24,    25,    87,   125,
      34,    52,    36,    16,    29,   129,   164,    27,   -24,    27,
     -23,    46,    62,    22,    46,   137,     2,   138,    88,    84,
      39,     3,   141,   143,   145,   147,   149,   151,   153,   155,
      30,   159,    46,   126,    49,   172,   173,    22,    40,    -9,
      26,    22,    50,     2,   175,    44,    31,    60,     3,    45,
       9,   -56,   -56,   -56,    10,    89,   -56,     2,    24,   -56,
      83,    27,     3,    -9,    97,   -56,   -56,   129,    -9,   129,
     -56,   -56,     2,   -56,   -56,    52,   -56,     3,     2,   107,
     109,    44,    69,     3,    70,    71,    72,    70,    71,    72,
      51,    85,    73,    28,    52,    73,   108,   110,    74,    75,
      32,    74,    75,    27,   -42,    38,    76,    77,    69,    78,
      70,    71,    72,   119,   120,    58,   160,   123,    73,    92,
      63,   124,    54,    31,    74,    75,    52,    59,   161,    27,
      36,   113,    76,    77,    36,    78,   114,    93,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   134,    90,    56,
     124,    57,   135,    91,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    86,    94,   127,   124,    70,    71,    72,
      99,    95,    70,    71,    72,    73,   170,    96,   171,    98,
      73,    74,    75,   128,    58,    67,    74,    75,   101,    52,
      70,    71,    72,   103,   131,    70,    71,    72,    73,   111,
     133,   136,    18,    73,    74,    75,    19,    20,   156,    74,
      75,   105,   157,    70,    71,    72,   140,   139,    70,    71,
      72,    73,   163,   167,   160,   123,    73,    74,    75,   124,
      17,    53,    74,    75,   142,    55,    70,    71,    72,   144,
     174,    70,    71,    72,    73,     0,    23,   112,     0,    73,
      74,    75,     0,     0,     0,    74,    75,   146,     0,    70,
      71,    72,   148,     0,    70,    71,    72,    73,     0,     0,
       0,     0,    73,    74,    75,     0,     0,     0,    74,    75,
     150,     0,    70,    71,    72,   152,     0,    70,    71,    72,
      73,     0,     0,     0,     0,    73,    74,    75,     0,     0,
       0,    74,    75,   154,     0,    70,    71,    72,   158,     0,
      70,    71,    72,    73,     0,     0,     0,     0,    73,    74,
      75,     0,     0,     0,    74,    75,   169,     0,    70,    71,
      72,   117,   118,   119,   120,     0,    73,   123,     0,     0,
       0,   124,    74,    75,   162,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   124,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
     124,   168,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     0,     0,   132,   124,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,   165,   124,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,   166,
     124,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,   115,   124,   117,   118,   119,   120,   121,     0,
     123,     0,     0,   115,   124,   117,   118,   119,   120,     0,
       0,   123,     0,     0,     0,   124
};

static const yytype_int16 yycheck[] =
{
      73,    74,    75,    76,     0,    46,     1,     1,     1,     7,
       6,     5,     0,     1,     1,     1,    19,    18,     1,    92,
       6,     5,    20,     0,    23,    98,   136,    22,    22,    22,
      22,    27,    19,     7,    30,   108,    24,   110,    21,    23,
       1,    29,   115,   116,   117,   118,   119,   120,   121,   122,
      22,   124,    48,    94,     1,   165,   166,    31,    19,     0,
       1,    35,    30,    24,   174,    23,     7,    41,    29,     1,
       1,     3,     4,     5,     5,     1,    23,    24,    19,    11,
      48,    22,    29,    24,     6,    17,    18,   160,    29,   162,
      22,    23,    24,    25,    26,     5,    28,    29,    24,     1,
       1,    23,     1,    29,     3,     4,     5,     3,     4,     5,
       1,    23,    11,    11,     5,    11,    18,    18,    17,    18,
      18,    17,    18,    22,    23,    23,    25,    26,     1,    28,
       3,     4,     5,    12,    13,     7,     7,    16,    11,     9,
       7,    20,     1,     7,    17,    18,     5,    19,    19,    22,
      20,     1,    25,    26,    20,    28,     6,     6,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     1,    58,     1,
      20,     3,     6,    63,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    21,     7,     1,    20,     3,     4,     5,
       1,     6,     3,     4,     5,    11,   160,     6,   162,    18,
      11,    17,    18,    19,     7,     1,    17,    18,     1,     5,
       3,     4,     5,     1,    19,     3,     4,     5,    11,    23,
       6,    27,     1,    11,    17,    18,     5,     6,     1,    17,
      18,     1,     5,     3,     4,     5,     1,     6,     3,     4,
       5,    11,    19,    21,     7,    16,    11,    17,    18,    20,
       6,    31,    17,    18,     1,    35,     3,     4,     5,     1,
      27,     3,     4,     5,    11,    -1,     7,    81,    -1,    11,
      17,    18,    -1,    -1,    -1,    17,    18,     1,    -1,     3,
       4,     5,     1,    -1,     3,     4,     5,    11,    -1,    -1,
      -1,    -1,    11,    17,    18,    -1,    -1,    -1,    17,    18,
       1,    -1,     3,     4,     5,     1,    -1,     3,     4,     5,
      11,    -1,    -1,    -1,    -1,    11,    17,    18,    -1,    -1,
      -1,    17,    18,     1,    -1,     3,     4,     5,     1,    -1,
       3,     4,     5,    11,    -1,    -1,    -1,    -1,    11,    17,
      18,    -1,    -1,    -1,    17,    18,     1,    -1,     3,     4,
       5,    10,    11,    12,    13,    -1,    11,    16,    -1,    -1,
      -1,    20,    17,    18,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    21,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,    20,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19,    20,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,     8,    20,    10,    11,    12,    13,    14,    -1,
      16,    -1,    -1,     8,    20,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    24,    29,    33,    34,    35,    37,    38,     1,
       5,    42,     1,     5,    39,    40,     0,    34,     1,     5,
       6,    36,    41,    42,    19,    18,     1,    22,    45,    23,
      22,     7,    45,     1,     6,     7,    20,     1,    45,     1,
      19,    37,    43,    44,    23,     1,    37,    48,    49,     1,
      48,     1,     5,    36,     1,    36,     1,     3,     7,    19,
      41,     1,    19,     7,    41,    50,    51,     1,    50,     1,
       3,     4,     5,    11,    17,    18,    25,    26,    28,    45,
      46,    47,    52,    48,    23,    23,    21,     1,    21,     1,
      43,    43,     9,     6,     7,     6,     6,     6,    18,     1,
      52,     1,    52,     1,    52,     1,    52,     1,    18,     1,
      18,    23,    46,     1,     6,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    52,    50,     1,    19,    52,
      53,    19,    19,     6,     1,     6,    27,    52,    52,     6,
       1,    52,     1,    52,     1,    52,     1,    52,     1,    52,
       1,    52,     1,    52,     1,    52,     1,     5,     1,    52,
       7,    19,     7,    19,    47,    19,    19,    21,    21,     1,
      53,    53,    47,    47,    27,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    35,    35,    35,
      35,    35,    35,    36,    36,    36,    36,    37,    37,    38,
      38,    38,    38,    39,    39,    40,    41,    41,    41,    41,
      42,    42,    42,    42,    42,    43,    43,    43,    44,    45,
      45,    46,    46,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     3,     2,
       3,     3,     3,     1,     3,     3,     3,     1,     1,     5,
       2,     5,     3,     1,     0,     1,     1,     4,     4,     4,
       4,     3,     4,     4,     2,     3,     1,     3,     2,     4,
       2,     2,     0,     2,     1,     3,     5,     7,     5,     2,
       3,     3,     3,     4,     2,     2,     0,     3,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     3,     4,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     4,     4,     3,     3,     1,     3
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 58 "./syntax.y"
                    {
  root = init("Program",(yyloc).first_line,0);
  (yyval.node) = root;
  insert((yyval.node),(yyvsp[0].node));
}
#line 1635 "./syntax.tab.c"
    break;

  case 3:
#line 65 "./syntax.y"
{
  (yyval.node) = init("ExtDefList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1645 "./syntax.tab.c"
    break;

  case 4:
#line 70 "./syntax.y"
  {(yyval.node) = NULL;}
#line 1651 "./syntax.tab.c"
    break;

  case 5:
#line 73 "./syntax.y"
{
  (yyval.node) = init("ExtDef",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1662 "./syntax.tab.c"
    break;

  case 6:
#line 80 "./syntax.y"
{
  (yyval.node) = init("ExtDef",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1672 "./syntax.tab.c"
    break;

  case 7:
#line 86 "./syntax.y"
{
  (yyval.node) = init("ExtDef",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1683 "./syntax.tab.c"
    break;

  case 8:
#line 92 "./syntax.y"
                             {syn_error++;}
#line 1689 "./syntax.tab.c"
    break;

  case 9:
#line 93 "./syntax.y"
                 {syn_error++;}
#line 1695 "./syntax.tab.c"
    break;

  case 10:
#line 94 "./syntax.y"
                     {syn_error++;}
#line 1701 "./syntax.tab.c"
    break;

  case 11:
#line 95 "./syntax.y"
                        {syn_error++;}
#line 1707 "./syntax.tab.c"
    break;

  case 12:
#line 96 "./syntax.y"
                        {syn_error++;}
#line 1713 "./syntax.tab.c"
    break;

  case 13:
#line 99 "./syntax.y"
{
  (yyval.node) = init("ExtDecList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1722 "./syntax.tab.c"
    break;

  case 14:
#line 104 "./syntax.y"
{
  (yyval.node) = init("ExtDecList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1733 "./syntax.tab.c"
    break;

  case 15:
#line 110 "./syntax.y"
                         {syn_error++;}
#line 1739 "./syntax.tab.c"
    break;

  case 16:
#line 111 "./syntax.y"
                     {syn_error++;}
#line 1745 "./syntax.tab.c"
    break;

  case 17:
#line 114 "./syntax.y"
{
  (yyval.node) = init("Specifier",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1754 "./syntax.tab.c"
    break;

  case 18:
#line 119 "./syntax.y"
{
  (yyval.node) = init("Specifier",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1763 "./syntax.tab.c"
    break;

  case 19:
#line 125 "./syntax.y"
{
  (yyval.node) = init("StructSpecifier",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-4].node));
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1776 "./syntax.tab.c"
    break;

  case 20:
#line 134 "./syntax.y"
{
  (yyval.node) = init("StructSpecifier",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1786 "./syntax.tab.c"
    break;

  case 21:
#line 139 "./syntax.y"
                            {syn_error++;}
#line 1792 "./syntax.tab.c"
    break;

  case 22:
#line 140 "./syntax.y"
                  {syn_error++;}
#line 1798 "./syntax.tab.c"
    break;

  case 23:
#line 143 "./syntax.y"
{
  (yyval.node) = init("OptTag",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1807 "./syntax.tab.c"
    break;

  case 24:
#line 147 "./syntax.y"
 {(yyval.node)= NULL;}
#line 1813 "./syntax.tab.c"
    break;

  case 25:
#line 150 "./syntax.y"
{
  (yyval.node) = init("Tag",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1822 "./syntax.tab.c"
    break;

  case 26:
#line 156 "./syntax.y"
{
  (yyval.node) = init("VarDec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1831 "./syntax.tab.c"
    break;

  case 27:
#line 161 "./syntax.y"
{
  (yyval.node) = init("VarDec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1843 "./syntax.tab.c"
    break;

  case 28:
#line 168 "./syntax.y"
                    {syn_error++;}
#line 1849 "./syntax.tab.c"
    break;

  case 29:
#line 169 "./syntax.y"
                      {syn_error++;}
#line 1855 "./syntax.tab.c"
    break;

  case 30:
#line 172 "./syntax.y"
{
  (yyval.node) = init("FunDec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1867 "./syntax.tab.c"
    break;

  case 31:
#line 180 "./syntax.y"
{
  (yyval.node) = init("FunDec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1878 "./syntax.tab.c"
    break;

  case 32:
#line 186 "./syntax.y"
                {syn_error++;}
#line 1884 "./syntax.tab.c"
    break;

  case 33:
#line 187 "./syntax.y"
                      {syn_error++;}
#line 1890 "./syntax.tab.c"
    break;

  case 34:
#line 188 "./syntax.y"
           {syn_error;}
#line 1896 "./syntax.tab.c"
    break;

  case 35:
#line 192 "./syntax.y"
{
  (yyval.node) = init("VarList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1907 "./syntax.tab.c"
    break;

  case 36:
#line 199 "./syntax.y"
{
  (yyval.node) = init("VarList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1916 "./syntax.tab.c"
    break;

  case 37:
#line 203 "./syntax.y"
                     {syn_error++;}
#line 1922 "./syntax.tab.c"
    break;

  case 38:
#line 206 "./syntax.y"
{
  (yyval.node) = init("ParamDec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1932 "./syntax.tab.c"
    break;

  case 39:
#line 213 "./syntax.y"
{
  (yyval.node) = init("CompSt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1944 "./syntax.tab.c"
    break;

  case 40:
#line 220 "./syntax.y"
          {syn_error++;}
#line 1950 "./syntax.tab.c"
    break;

  case 41:
#line 223 "./syntax.y"
{
  (yyval.node) = init("StmtList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1960 "./syntax.tab.c"
    break;

  case 42:
#line 228 "./syntax.y"
  {(yyval.node) = NULL;}
#line 1966 "./syntax.tab.c"
    break;

  case 43:
#line 231 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1976 "./syntax.tab.c"
    break;

  case 44:
#line 237 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 1985 "./syntax.tab.c"
    break;

  case 45:
#line 242 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 1996 "./syntax.tab.c"
    break;

  case 46:
#line 249 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-4].node));
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2009 "./syntax.tab.c"
    break;

  case 47:
#line 258 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-6].node));
  insert((yyval.node),(yyvsp[-5].node));
  insert((yyval.node),(yyvsp[-4].node));
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2024 "./syntax.tab.c"
    break;

  case 48:
#line 269 "./syntax.y"
{
  (yyval.node) = init("Stmt",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-4].node));
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2037 "./syntax.tab.c"
    break;

  case 49:
#line 277 "./syntax.y"
             {syn_error++;}
#line 2043 "./syntax.tab.c"
    break;

  case 50:
#line 278 "./syntax.y"
                 {syn_error++;}
#line 2049 "./syntax.tab.c"
    break;

  case 51:
#line 279 "./syntax.y"
                   {syn_error++;}
#line 2055 "./syntax.tab.c"
    break;

  case 52:
#line 280 "./syntax.y"
                    {syn_error++;}
#line 2061 "./syntax.tab.c"
    break;

  case 53:
#line 281 "./syntax.y"
                     {syn_error++;}
#line 2067 "./syntax.tab.c"
    break;

  case 54:
#line 282 "./syntax.y"
              {syn_error++;}
#line 2073 "./syntax.tab.c"
    break;

  case 55:
#line 285 "./syntax.y"
{
  (yyval.node) = init("DefList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2083 "./syntax.tab.c"
    break;

  case 56:
#line 290 "./syntax.y"
  {(yyval.node) = NULL;}
#line 2089 "./syntax.tab.c"
    break;

  case 57:
#line 293 "./syntax.y"
{
  (yyval.node) = init("Def",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2100 "./syntax.tab.c"
    break;

  case 58:
#line 299 "./syntax.y"
                       {syn_error++;}
#line 2106 "./syntax.tab.c"
    break;

  case 59:
#line 300 "./syntax.y"
                     {syn_error++;}
#line 2112 "./syntax.tab.c"
    break;

  case 60:
#line 303 "./syntax.y"
{
  (yyval.node) = init("DecList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 2121 "./syntax.tab.c"
    break;

  case 61:
#line 308 "./syntax.y"
{
  (yyval.node) = init("DecList",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2132 "./syntax.tab.c"
    break;

  case 62:
#line 316 "./syntax.y"
{
  (yyval.node) = init("Dec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node)); 
}
#line 2141 "./syntax.tab.c"
    break;

  case 63:
#line 321 "./syntax.y"
{
  (yyval.node) = init("Dec",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2152 "./syntax.tab.c"
    break;

  case 64:
#line 329 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2163 "./syntax.tab.c"
    break;

  case 65:
#line 336 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2174 "./syntax.tab.c"
    break;

  case 66:
#line 343 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2185 "./syntax.tab.c"
    break;

  case 67:
#line 350 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2196 "./syntax.tab.c"
    break;

  case 68:
#line 357 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2207 "./syntax.tab.c"
    break;

  case 69:
#line 364 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2218 "./syntax.tab.c"
    break;

  case 70:
#line 371 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2229 "./syntax.tab.c"
    break;

  case 71:
#line 378 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2240 "./syntax.tab.c"
    break;

  case 72:
#line 385 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2251 "./syntax.tab.c"
    break;

  case 73:
#line 392 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2261 "./syntax.tab.c"
    break;

  case 74:
#line 398 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2271 "./syntax.tab.c"
    break;

  case 75:
#line 404 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2283 "./syntax.tab.c"
    break;

  case 76:
#line 412 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2294 "./syntax.tab.c"
    break;

  case 77:
#line 419 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-3].node));
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2306 "./syntax.tab.c"
    break;

  case 78:
#line 427 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2317 "./syntax.tab.c"
    break;

  case 79:
#line 434 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 2326 "./syntax.tab.c"
    break;

  case 80:
#line 439 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 2335 "./syntax.tab.c"
    break;

  case 81:
#line 444 "./syntax.y"
{
  (yyval.node) = init("Exp",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 2344 "./syntax.tab.c"
    break;

  case 82:
#line 448 "./syntax.y"
                    {syn_error++;}
#line 2350 "./syntax.tab.c"
    break;

  case 83:
#line 449 "./syntax.y"
                {syn_error++;}
#line 2356 "./syntax.tab.c"
    break;

  case 84:
#line 450 "./syntax.y"
               {syn_error++;}
#line 2362 "./syntax.tab.c"
    break;

  case 85:
#line 451 "./syntax.y"
                   {syn_error++;}
#line 2368 "./syntax.tab.c"
    break;

  case 86:
#line 452 "./syntax.y"
                 {syn_error++;}
#line 2374 "./syntax.tab.c"
    break;

  case 87:
#line 453 "./syntax.y"
                  {syn_error++;}
#line 2380 "./syntax.tab.c"
    break;

  case 88:
#line 454 "./syntax.y"
                 {syn_error++;}
#line 2386 "./syntax.tab.c"
    break;

  case 89:
#line 455 "./syntax.y"
                {syn_error++;}
#line 2392 "./syntax.tab.c"
    break;

  case 90:
#line 456 "./syntax.y"
              {syn_error++;}
#line 2398 "./syntax.tab.c"
    break;

  case 91:
#line 457 "./syntax.y"
                           {syn_error++;}
#line 2404 "./syntax.tab.c"
    break;

  case 92:
#line 458 "./syntax.y"
            {syn_error++;}
#line 2410 "./syntax.tab.c"
    break;

  case 93:
#line 459 "./syntax.y"
                 {syn_error++;}
#line 2416 "./syntax.tab.c"
    break;

  case 94:
#line 460 "./syntax.y"
                  {syn_error++;}
#line 2422 "./syntax.tab.c"
    break;

  case 95:
#line 461 "./syntax.y"
                {syn_error++;}
#line 2428 "./syntax.tab.c"
    break;

  case 96:
#line 465 "./syntax.y"
{
  (yyval.node) = init("Args",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[-2].node));
  insert((yyval.node),(yyvsp[-1].node));
  insert((yyval.node),(yyvsp[0].node));
}
#line 2439 "./syntax.tab.c"
    break;

  case 97:
#line 472 "./syntax.y"
{
  (yyval.node) = init("Args",(yyloc).first_line,0);
  insert((yyval.node),(yyvsp[0].node));
}
#line 2448 "./syntax.tab.c"
    break;

  case 98:
#line 476 "./syntax.y"
                   {syn_error++;}
#line 2454 "./syntax.tab.c"
    break;


#line 2458 "./syntax.tab.c"

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
  *++yylsp = yyloc;

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 478 "./syntax.y"

int yyerror(char*msg)
{
  syn_error++;
  printf("Error type B at Line %d: %s near %s.\n", yylineno,msg,yytext);
}
