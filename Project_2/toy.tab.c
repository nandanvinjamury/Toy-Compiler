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
#line 1 "toy.y"

 
#include <stdio.h>
//#include "lex.yy.c"
void yyerror(char *s); 
extern int yylex(); 


#line 79 "toy.tab.c"

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
#ifndef YY_YY_TOY_TAB_H_INCLUDED
# define YY_YY_TOY_TAB_H_INCLUDED
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
    _leftbracket = 258,
    _period = 259,
    _not = 260,
    _unaryminus = 261,
    _plus = 262,
    _minus = 263,
    _multiplication = 264,
    _division = 265,
    _mod = 266,
    _less = 267,
    _lessequal = 268,
    _greater = 269,
    _greaterequal = 270,
    _equal = 271,
    _notequal = 272,
    _and = 273,
    _or = 274,
    _assignop = 275,
    _boolean = 276,
    _break = 277,
    _class = 278,
    _double = 279,
    _else = 280,
    _extends = 281,
    _for = 282,
    _if = 283,
    _implements = 284,
    _int = 285,
    _interface = 286,
    _new = 287,
    _newarray = 288,
    _null = 289,
    _println = 290,
    _readln = 291,
    _return = 292,
    _string = 293,
    _this = 294,
    _void = 295,
    _while = 296,
    _semicolon = 297,
    _comma = 298,
    _leftparen = 299,
    _rightparen = 300,
    _rightbracket = 301,
    _leftbrace = 302,
    _rightbrace = 303,
    _intconstant = 304,
    _doubleconstant = 305,
    _stringconstant = 306,
    _booleanconstant = 307,
    _id = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOY_TAB_H_INCLUDED  */



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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    88,    89,    92,    93,    94,    95,    98,
     101,   102,   105,   106,   107,   108,   109,   110,   113,   114,
     117,   118,   121,   122,   123,   126,   128,   129,   130,   131,
     133,   134,   136,   137,   141,   142,   146,   148,   149,   153,
     154,   158,   160,   161,   163,   164,   168,   169,   170,   171,
     172,   173,   174,   175,   177,   178,   182,   184,   185,   189,
     193,   197,   201,   205,   207,   208,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   238,
     239,   240,   244,   245,   249,   250,   254,   255,   256,   257,
     258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_leftbracket", "_period", "_not",
  "_unaryminus", "_plus", "_minus", "_multiplication", "_division", "_mod",
  "_less", "_lessequal", "_greater", "_greaterequal", "_equal",
  "_notequal", "_and", "_or", "_assignop", "_boolean", "_break", "_class",
  "_double", "_else", "_extends", "_for", "_if", "_implements", "_int",
  "_interface", "_new", "_newarray", "_null", "_println", "_readln",
  "_return", "_string", "_this", "_void", "_while", "_semicolon", "_comma",
  "_leftparen", "_rightparen", "_rightbracket", "_leftbrace",
  "_rightbrace", "_intconstant", "_doubleconstant", "_stringconstant",
  "_booleanconstant", "_id", "$accept", "PROGRAM", "DECLP", "DECL",
  "VARIABLEDECL", "VARIABLE", "TYPE", "FUNCTIONDECL", "FORMALS",
  "VARIABLEPC", "CLASSDECL", "CLASSDECLO", "IDPC", "FIELDM", "FIELD",
  "INTERFACEDECL", "PROTOTYPEM", "PROTOTYPE", "STMTBLOCK", "VARIABLEDECLM",
  "STMTM", "STMT", "EXPRO", "IFSTMT", "ELSESTMTO", "WHILESTMT", "FORSTMT",
  "BREAKSTMT", "RETURNSTMT", "PRINTSTMT", "EXPRPC", "EXPR", "LVALUE",
  "CALL", "ACTUALS", "CONSTANT", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     295,  -104,   -31,  -104,  -104,   -13,  -104,    -6,  -104,    28,
    -104,   295,  -104,     9,    -1,  -104,  -104,  -104,    10,    11,
      36,  -104,  -104,  -104,    38,   -14,    29,    32,    40,    -7,
     -11,  -104,   195,   -11,    65,    45,  -104,   299,    42,     1,
      48,    -7,   306,   -11,     2,    52,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,    58,    32,    32,  -104,  -104,    61,   299,
      72,    80,  -104,  -104,   -11,  -104,   106,    89,    89,  -104,
    -104,  -104,  -104,   -11,   -11,  -104,   306,  -104,  -104,    92,
      93,   306,    78,   101,   102,  -104,   134,   134,   103,    90,
     107,   109,   111,   112,   134,  -104,   114,   134,    34,  -104,
     121,    78,   117,  -104,  -104,  -104,  -104,  -104,  -104,   353,
      87,  -104,  -104,  -104,  -104,   353,   270,  -104,   134,   134,
     122,   134,   116,   130,   134,   194,   123,   134,  -104,  -104,
    -104,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   175,   134,   132,   207,   197,
     193,   259,  -104,  -104,   246,  -104,   131,  -104,   196,   270,
     270,   218,   218,   218,   280,   280,   280,   280,   163,   163,
     223,  -104,   181,  -104,  -104,   134,   113,   306,   201,   134,
     113,   134,  -104,  -104,   296,   224,     4,  -104,  -104,  -104,
     203,   134,   113,  -104,  -104,  -104,   205,  -104,   113,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    14,     0,    13,    12,     0,    15,     0,    17,     0,
       2,     4,     5,     0,     0,     6,     7,     8,    29,     0,
       0,     1,     3,     9,     0,    10,     0,     0,     0,    38,
      21,    16,     0,    21,    26,    31,    27,    33,     0,     0,
       0,    38,     0,    24,     0,     0,    20,   100,    96,    97,
      98,    99,    11,     0,     0,     0,    34,    35,     0,    33,
       0,     0,    36,    37,    24,    23,    10,     0,     0,    28,
      30,    25,    32,    21,    21,    22,    43,    19,    18,     0,
       0,    43,    45,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    69,     0,     0,    89,    53,
       0,    45,     0,    47,    48,    49,    50,    51,    52,    54,
      68,    70,    67,    40,    39,    86,    77,    61,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    41,    44,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    87,    62,     0,    71,     0,    94,     0,    72,
      73,    74,    75,    76,    78,    79,    80,    81,    82,    83,
      84,    85,     0,    91,    66,     0,    55,     0,     0,     0,
      55,    95,    92,    90,     0,    58,     0,    63,    64,    59,
       0,    55,    55,    56,    88,    93,     0,    57,    55,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   240,  -104,    -2,    59,     0,   -25,   -30,   -19,
    -104,  -104,   -46,   231,  -104,  -104,   260,  -104,   -47,   219,
     216,   -99,   -93,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -103,   -71,  -104,  -104,   140,   290
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    44,    15,    45,    46,
      16,    28,    36,    58,    59,    17,    40,    41,    99,    82,
     100,   101,   102,   103,   193,   104,   105,   106,   107,   108,
     157,   109,   110,   111,   158,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   123,    24,    53,    24,    24,    32,    24,    69,    70,
       1,    14,    57,     3,     1,   115,   116,     3,   150,     4,
      77,    78,    18,     4,    65,   147,   125,     6,    21,    39,
      33,     6,    42,    38,    57,    56,    26,    14,   126,    27,
      19,    39,     8,    79,    80,    75,     8,    20,   148,   194,
     151,    23,    25,   154,    61,    66,   151,    56,    29,    14,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,    81,   174,   188,   185,   127,    81,
      30,   189,    34,    86,    31,    35,    87,    37,    55,    43,
     144,   145,    43,   197,    54,    60,    62,    67,   196,   199,
      88,    64,    43,    68,   184,    89,    90,   146,   151,    71,
     151,    91,    47,    92,    93,    94,    73,    95,    86,    96,
     -55,    87,    97,    43,    74,    76,    32,    48,    49,    50,
      51,    98,    43,    43,   118,    88,    76,    83,    84,    86,
      89,    90,    87,   113,   114,   117,    91,    47,    92,    93,
      94,   119,    95,   120,    96,   121,   122,    97,   124,   130,
      76,   152,    48,    49,    50,    51,    98,    91,    47,   128,
      93,   149,   153,    95,   175,   181,   156,   186,    97,   -56,
     -56,   142,   143,    48,    49,    50,    51,    98,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   183,   173,    47,
     136,   137,   138,   139,   140,   141,   142,   143,   178,   155,
     177,   182,   143,   187,    48,    49,    50,    51,   195,   192,
     198,    22,   176,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      72,   180,   -56,   -56,   -56,   -56,   140,   141,   142,   143,
      85,    63,   179,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     1,   129,     2,     3,
       1,   190,    52,     3,     0,     4,     5,     1,     0,     4,
       3,     0,     0,     6,     0,     7,     4,     6,   191,     7,
       0,     0,     0,     0,     6,     0,     0,     0,     8,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     8,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143
};

static const yytype_int16 yycheck[] =
{
       0,    94,     3,    33,     3,     3,    20,     3,    54,    55,
      21,    11,    37,    24,    21,    86,    87,    24,   121,    30,
      67,    68,    53,    30,    43,   118,    97,    38,     0,    29,
      44,    38,    43,    40,    59,    37,    26,    37,     4,    29,
      53,    41,    53,    73,    74,    64,    53,    53,   119,    45,
     121,    42,    53,   124,    53,    53,   127,    59,    47,    59,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    76,   146,   179,   176,    44,    81,
      44,   180,    53,     5,    46,    53,     8,    47,    43,    30,
       3,     4,    33,   192,    29,    53,    48,    45,   191,   198,
      22,    42,    43,    45,   175,    27,    28,    20,   179,    48,
     181,    33,    34,    35,    36,    37,    44,    39,     5,    41,
      42,     8,    44,    64,    44,    47,    20,    49,    50,    51,
      52,    53,    73,    74,    44,    22,    47,    45,    45,     5,
      27,    28,     8,    42,    42,    42,    33,    34,    35,    36,
      37,    44,    39,    44,    41,    44,    44,    44,    44,    42,
      47,    45,    49,    50,    51,    52,    53,    33,    34,    48,
      36,    49,    42,    39,    42,    44,    53,   177,    44,    16,
      17,    18,    19,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    46,    53,    34,
      12,    13,    14,    15,    16,    17,    18,    19,    45,    45,
      43,    45,    19,    42,    49,    50,    51,    52,    45,    25,
      45,    11,    45,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      59,    45,    12,    13,    14,    15,    16,    17,    18,    19,
      81,    41,    43,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    21,   101,    23,    24,
      21,   181,    32,    24,    -1,    30,    31,    21,    -1,    30,
      24,    -1,    -1,    38,    -1,    40,    30,    38,    42,    40,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    53,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    23,    24,    30,    31,    38,    40,    53,    55,
      56,    57,    58,    59,    60,    61,    64,    69,    53,    53,
      53,     0,    56,    42,     3,    53,    26,    29,    65,    47,
      44,    46,    20,    44,    53,    53,    66,    47,    40,    60,
      70,    71,    43,    59,    60,    62,    63,    34,    49,    50,
      51,    52,    89,    62,    29,    43,    58,    61,    67,    68,
      53,    53,    48,    70,    59,    63,    53,    45,    45,    66,
      66,    48,    67,    44,    44,    63,    47,    72,    72,    62,
      62,    58,    73,    45,    45,    73,     5,     8,    22,    27,
      28,    33,    35,    36,    37,    39,    41,    44,    53,    72,
      74,    75,    76,    77,    79,    80,    81,    82,    83,    85,
      86,    87,    89,    42,    42,    85,    85,    42,    44,    44,
      44,    44,    44,    76,    44,    85,     4,    44,    48,    74,
      42,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     3,     4,    20,    76,    85,    49,
      84,    85,    45,    42,    85,    45,    53,    84,    88,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    53,    85,    42,    45,    43,    45,    43,
      45,    44,    45,    46,    85,    75,    60,    42,    84,    75,
      88,    42,    25,    78,    45,    45,    76,    75,    45,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    63,    63,    63,    64,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    78,    78,    79,
      80,    81,    82,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    89,    89,
      89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     1,     1,     1,     1,     3,     1,     6,     6,
       1,     0,     3,     2,     0,     6,     2,     2,     4,     0,
       3,     1,     2,     0,     1,     1,     5,     2,     0,     6,
       6,     4,     2,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     0,     5,
       9,     2,     3,     5,     3,     1,     3,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     6,     1,
       4,     3,     4,     6,     1,     0,     1,     1,     1,     1,
       1
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
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
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 86 "toy.y"
                              {printf("[reduce 1]\n[accept]");}
#line 1533 "toy.tab.c"
    break;

  case 3:
#line 88 "toy.y"
                                   {printf("[reduce 2]");}
#line 1539 "toy.tab.c"
    break;

  case 4:
#line 89 "toy.y"
                                     {printf("[reduce 3]");}
#line 1545 "toy.tab.c"
    break;

  case 5:
#line 92 "toy.y"
                                     {printf("[reduce 4]");}
#line 1551 "toy.tab.c"
    break;

  case 6:
#line 93 "toy.y"
                                             {printf("[reduce 5]");}
#line 1557 "toy.tab.c"
    break;

  case 7:
#line 94 "toy.y"
                                          {printf("[reduce 6]");}
#line 1563 "toy.tab.c"
    break;

  case 8:
#line 95 "toy.y"
                                              {printf("[reduce 7]");}
#line 1569 "toy.tab.c"
    break;

  case 9:
#line 98 "toy.y"
                                            {printf("[reduce 8]");}
#line 1575 "toy.tab.c"
    break;

  case 10:
#line 101 "toy.y"
                                 {printf("[reduce 9]");}
#line 1581 "toy.tab.c"
    break;

  case 12:
#line 105 "toy.y"
                             {printf("[reduce 10]");}
#line 1587 "toy.tab.c"
    break;

  case 13:
#line 106 "toy.y"
                                        {printf("[reduce 11]");}
#line 1593 "toy.tab.c"
    break;

  case 14:
#line 107 "toy.y"
                                         {printf("[reduce 12]");}
#line 1599 "toy.tab.c"
    break;

  case 15:
#line 108 "toy.y"
                                        {printf("[reduce 13]");}
#line 1605 "toy.tab.c"
    break;

  case 16:
#line 109 "toy.y"
                                                                {printf("[reduce 14]");}
#line 1611 "toy.tab.c"
    break;

  case 17:
#line 110 "toy.y"
                                    {printf("[reduce 15]");}
#line 1617 "toy.tab.c"
    break;

  case 18:
#line 113 "toy.y"
                                                                  {printf("[reduce 16]");}
#line 1623 "toy.tab.c"
    break;

  case 19:
#line 114 "toy.y"
                                                                                   {printf("[reduce 17]");}
#line 1629 "toy.tab.c"
    break;

  case 20:
#line 117 "toy.y"
                                   {printf("[reduce 18]");}
#line 1635 "toy.tab.c"
    break;

  case 21:
#line 118 "toy.y"
                                {printf("[reduce 19]");}
#line 1641 "toy.tab.c"
    break;

  case 22:
#line 121 "toy.y"
                                                                {printf("[reduce 20]");}
#line 1647 "toy.tab.c"
    break;

  case 24:
#line 123 "toy.y"
                                {printf("[reduce 21]");}
#line 1653 "toy.tab.c"
    break;

  case 25:
#line 126 "toy.y"
                                                                                    {printf("[reduce 22]");}
#line 1659 "toy.tab.c"
    break;

  case 26:
#line 128 "toy.y"
                                             {printf("[reduce 23]");}
#line 1665 "toy.tab.c"
    break;

  case 27:
#line 129 "toy.y"
                                                 {printf("[reduce 24]");}
#line 1671 "toy.tab.c"
    break;

  case 28:
#line 130 "toy.y"
                                                              {printf("[reduce 25]");}
#line 1677 "toy.tab.c"
    break;

  case 29:
#line 131 "toy.y"
                                {printf("[reduce 26]");}
#line 1683 "toy.tab.c"
    break;

  case 30:
#line 133 "toy.y"
                                                {printf("[reduce 27]");}
#line 1689 "toy.tab.c"
    break;

  case 31:
#line 134 "toy.y"
                                    {printf("[reduce 28]");}
#line 1695 "toy.tab.c"
    break;

  case 32:
#line 136 "toy.y"
                                             {printf("[reduce 29]");}
#line 1701 "toy.tab.c"
    break;

  case 33:
#line 137 "toy.y"
                                {printf("[reduce 30]");}
#line 1707 "toy.tab.c"
    break;

  case 34:
#line 141 "toy.y"
                                             {printf("[reduce 31]");}
#line 1713 "toy.tab.c"
    break;

  case 35:
#line 142 "toy.y"
                                             {printf("[reduce 32]");}
#line 1719 "toy.tab.c"
    break;

  case 36:
#line 146 "toy.y"
                                                                                 {printf("[reduce 33]");}
#line 1725 "toy.tab.c"
    break;

  case 37:
#line 148 "toy.y"
                                                     {printf("[reduce 34]");}
#line 1731 "toy.tab.c"
    break;

  case 38:
#line 149 "toy.y"
                                {printf("[reduce 35]");}
#line 1737 "toy.tab.c"
    break;

  case 39:
#line 153 "toy.y"
                                                                                   {printf("[reduce 36]");}
#line 1743 "toy.tab.c"
    break;

  case 40:
#line 154 "toy.y"
                                                                                    {printf("[reduce 37]");}
#line 1749 "toy.tab.c"
    break;

  case 41:
#line 158 "toy.y"
                                                                           {printf("[reduce 38]");}
#line 1755 "toy.tab.c"
    break;

  case 42:
#line 160 "toy.y"
                                                           {printf("[reduce 39]");}
#line 1761 "toy.tab.c"
    break;

  case 43:
#line 161 "toy.y"
                                {printf("[reduce 40]");}
#line 1767 "toy.tab.c"
    break;

  case 44:
#line 163 "toy.y"
                                           {printf("[reduce 41]");}
#line 1773 "toy.tab.c"
    break;

  case 45:
#line 164 "toy.y"
                                {printf("[reduce 42]");}
#line 1779 "toy.tab.c"
    break;

  case 46:
#line 168 "toy.y"
                                                 {printf("[reduce 43]");}
#line 1785 "toy.tab.c"
    break;

  case 47:
#line 169 "toy.y"
                                       {printf("[reduce 44]");}
#line 1791 "toy.tab.c"
    break;

  case 48:
#line 170 "toy.y"
                                          {printf("[reduce 45]");}
#line 1797 "toy.tab.c"
    break;

  case 49:
#line 171 "toy.y"
                                        {printf("[reduce 46]");}
#line 1803 "toy.tab.c"
    break;

  case 50:
#line 172 "toy.y"
                                          {printf("[reduce 47]");}
#line 1809 "toy.tab.c"
    break;

  case 51:
#line 173 "toy.y"
                                           {printf("[reduce 48]");}
#line 1815 "toy.tab.c"
    break;

  case 52:
#line 174 "toy.y"
                                          {printf("[reduce 49]");}
#line 1821 "toy.tab.c"
    break;

  case 53:
#line 175 "toy.y"
                                          {printf("[reduce 50]");}
#line 1827 "toy.tab.c"
    break;

  case 54:
#line 177 "toy.y"
                                     {printf("[reduce 51]");}
#line 1833 "toy.tab.c"
    break;

  case 55:
#line 178 "toy.y"
                                {printf("[reduce 52]");}
#line 1839 "toy.tab.c"
    break;

  case 56:
#line 182 "toy.y"
                                                                               {printf("[reduce 53]");}
#line 1845 "toy.tab.c"
    break;

  case 57:
#line 184 "toy.y"
                                           {printf("[reduce 54]");}
#line 1851 "toy.tab.c"
    break;

  case 58:
#line 185 "toy.y"
                                {printf("[reduce 55]");}
#line 1857 "toy.tab.c"
    break;

  case 59:
#line 189 "toy.y"
                                                                        {printf("[reduce 56]");}
#line 1863 "toy.tab.c"
    break;

  case 60:
#line 193 "toy.y"
                                                                                                        {printf("[reduce 57]");}
#line 1869 "toy.tab.c"
    break;

  case 61:
#line 197 "toy.y"
                                                  {printf("[reduce 58]");}
#line 1875 "toy.tab.c"
    break;

  case 62:
#line 201 "toy.y"
                                                         {printf("[reduce 59]");}
#line 1881 "toy.tab.c"
    break;

  case 63:
#line 205 "toy.y"
                                                                                  {printf("[reduce 60]");}
#line 1887 "toy.tab.c"
    break;

  case 64:
#line 207 "toy.y"
                                                   {printf("[reduce 61]");}
#line 1893 "toy.tab.c"
    break;

  case 65:
#line 208 "toy.y"
                                     {printf("[reduce 62]");}
#line 1899 "toy.tab.c"
    break;

  case 66:
#line 212 "toy.y"
                                                      {printf("[reduce 63]");}
#line 1905 "toy.tab.c"
    break;

  case 67:
#line 213 "toy.y"
                                         {printf("[reduce 64]");}
#line 1911 "toy.tab.c"
    break;

  case 68:
#line 214 "toy.y"
                                       {printf("[reduce 65]");}
#line 1917 "toy.tab.c"
    break;

  case 69:
#line 215 "toy.y"
                                      {printf("[reduce 66]");}
#line 1923 "toy.tab.c"
    break;

  case 70:
#line 216 "toy.y"
                                     {printf("[reduce 67]");}
#line 1929 "toy.tab.c"
    break;

  case 71:
#line 217 "toy.y"
                                                            {printf("[reduce 68]");}
#line 1935 "toy.tab.c"
    break;

  case 72:
#line 218 "toy.y"
                                                {printf("[reduce 69]");}
#line 1941 "toy.tab.c"
    break;

  case 73:
#line 219 "toy.y"
                                                 {printf("[reduce 70]");}
#line 1947 "toy.tab.c"
    break;

  case 74:
#line 220 "toy.y"
                                                          {printf("[reduce 71]");}
#line 1953 "toy.tab.c"
    break;

  case 75:
#line 221 "toy.y"
                                                    {printf("[reduce 72]");}
#line 1959 "toy.tab.c"
    break;

  case 76:
#line 222 "toy.y"
                                               {printf("[reduce 73]");}
#line 1965 "toy.tab.c"
    break;

  case 77:
#line 223 "toy.y"
                                            {printf("[reduce 74]");}
#line 1971 "toy.tab.c"
    break;

  case 78:
#line 224 "toy.y"
                                                {printf("[reduce 75]");}
#line 1977 "toy.tab.c"
    break;

  case 79:
#line 225 "toy.y"
                                                     {printf("[reduce 76]");}
#line 1983 "toy.tab.c"
    break;

  case 80:
#line 226 "toy.y"
                                                   {printf("[reduce 77]");}
#line 1989 "toy.tab.c"
    break;

  case 81:
#line 227 "toy.y"
                                                        {printf("[reduce 78]");}
#line 1995 "toy.tab.c"
    break;

  case 82:
#line 228 "toy.y"
                                                 {printf("[reduce 79]");}
#line 2001 "toy.tab.c"
    break;

  case 83:
#line 229 "toy.y"
                                                    {printf("[reduce 80]");}
#line 2007 "toy.tab.c"
    break;

  case 84:
#line 230 "toy.y"
                                               {printf("[reduce 81]");}
#line 2013 "toy.tab.c"
    break;

  case 85:
#line 231 "toy.y"
                                              {printf("[reduce 82]");}
#line 2019 "toy.tab.c"
    break;

  case 86:
#line 232 "toy.y"
                                          {printf("[reduce 83]");}
#line 2025 "toy.tab.c"
    break;

  case 87:
#line 233 "toy.y"
                                                               {printf("[reduce 84]");}
#line 2031 "toy.tab.c"
    break;

  case 88:
#line 234 "toy.y"
                                                                                          {printf("[reduce 85]");}
#line 2037 "toy.tab.c"
    break;

  case 89:
#line 238 "toy.y"
                                    {printf("[reduce 86]");}
#line 2043 "toy.tab.c"
    break;

  case 90:
#line 239 "toy.y"
                                                                       {printf("[reduce 87]");}
#line 2049 "toy.tab.c"
    break;

  case 91:
#line 240 "toy.y"
                                                   {printf("[reduce 88]");}
#line 2055 "toy.tab.c"
    break;

  case 92:
#line 244 "toy.y"
                                                                   {printf("[reduce 89]");}
#line 2061 "toy.tab.c"
    break;

  case 93:
#line 245 "toy.y"
                                                                               {printf("[reduce 90]");}
#line 2067 "toy.tab.c"
    break;

  case 94:
#line 249 "toy.y"
                                       {printf("[reduce 91]");}
#line 2073 "toy.tab.c"
    break;

  case 95:
#line 250 "toy.y"
                                {printf("[reduce 92]");}
#line 2079 "toy.tab.c"
    break;

  case 96:
#line 254 "toy.y"
                                             {printf("[reduce 93]");}
#line 2085 "toy.tab.c"
    break;

  case 97:
#line 255 "toy.y"
                                                {printf("[reduce 94]");}
#line 2091 "toy.tab.c"
    break;

  case 98:
#line 256 "toy.y"
                                                {printf("[reduce 95]");}
#line 2097 "toy.tab.c"
    break;

  case 99:
#line 257 "toy.y"
                                                 {printf("[reduce 96]");}
#line 2103 "toy.tab.c"
    break;

  case 100:
#line 258 "toy.y"
                                      {printf("[reduce 97]");}
#line 2109 "toy.tab.c"
    break;


#line 2113 "toy.tab.c"

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
                  yystos[+*yyssp], yyvsp);
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
#line 260 "toy.y"


void yyerror(char *s) {
 fprintf(stderr, "%s", s);
}

int main(){

    yyparse();
    return 0;
}
