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
#line 3 "nico.y"

  /* Aqui, pode-se inserir qualquer codigo C necessario ah compilacao
   * final do parser. Sera copiado tal como esta no inicio do y.tab.c
   * gerado por Yacc.
   */
	#include <stdio.h>
	#include <stdlib.h>
	#include "node.h"
    #include "symbol_table.h"
    
    symbol_t symbol_table; // Declare a tabela de símbolos
    int tipo = 0; //int = 1, float = 2, char = 3, string = 4
    int tamanho = 4;    /**< numero de Bytes necessarios para armazenamento. */
    int desloc = 0;  /**< Endereco da proxima variavel. */
/*    extern int yyparse();*/

	extern int yyerror(const char* msg );
	extern int yylex();

	extern Node *syntax_tree;
	


#line 94 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    MAIS = 258,
    MENOS = 259,
    VEZES = 260,
    DIVIDE = 261,
    OU = 262,
    NEGACAO = 263,
    DEF_INT = 264,
    DEF_FLOAT = 265,
    DEF_CHAR = 266,
    DEF_STRING = 267,
    MAISMAIS = 268,
    MENOSMENOS = 269,
    VIRGULA = 270,
    DOISPONTOS = 271,
    PONTOVIRGULA = 272,
    ASPASIMPLES = 273,
    ABREPARENTESE = 274,
    FECHAPARENTESE = 275,
    ABRECOLCHETE = 276,
    FECHACOLCHETE = 277,
    ABRECHAVE = 278,
    FECHACHAVE = 279,
    MENOR = 280,
    MAIOR = 281,
    IGUAL = 282,
    MENORIGUAL = 283,
    MAIORIGUAL = 284,
    IGUALIGUAL = 285,
    ECOMERCIAL = 286,
    DIFERENTE = 287,
    PORCENTO = 288,
    SUSTENIDO = 289,
    TABULACAO = 290,
    ASPADUPLA = 291,
    VERDADEIRO = 292,
    FALSO = 293,
    SE = 294,
    ENTAO = 295,
    SENAO = 296,
    ENQUANTO = 297,
    FAZ = 298,
    PARA = 299,
    INICIA = 300,
    TERMINA = 301,
    DEFINE = 302,
    PRINCIPAL = 303,
    RETORNA = 304,
    INCLUI = 305,
    IMPRIME = 306,
    INTEIRO = 307,
    QUEBRADO = 308,
    EXPOENTE = 309,
    IDENTIFICADOR = 310,
    PALAVRA = 311,
    LETRA = 312,
    FRASE = 313,
    ESPECIAL = 314
  };
#endif
/* Tokens.  */
#define MAIS 258
#define MENOS 259
#define VEZES 260
#define DIVIDE 261
#define OU 262
#define NEGACAO 263
#define DEF_INT 264
#define DEF_FLOAT 265
#define DEF_CHAR 266
#define DEF_STRING 267
#define MAISMAIS 268
#define MENOSMENOS 269
#define VIRGULA 270
#define DOISPONTOS 271
#define PONTOVIRGULA 272
#define ASPASIMPLES 273
#define ABREPARENTESE 274
#define FECHAPARENTESE 275
#define ABRECOLCHETE 276
#define FECHACOLCHETE 277
#define ABRECHAVE 278
#define FECHACHAVE 279
#define MENOR 280
#define MAIOR 281
#define IGUAL 282
#define MENORIGUAL 283
#define MAIORIGUAL 284
#define IGUALIGUAL 285
#define ECOMERCIAL 286
#define DIFERENTE 287
#define PORCENTO 288
#define SUSTENIDO 289
#define TABULACAO 290
#define ASPADUPLA 291
#define VERDADEIRO 292
#define FALSO 293
#define SE 294
#define ENTAO 295
#define SENAO 296
#define ENQUANTO 297
#define FAZ 298
#define PARA 299
#define INICIA 300
#define TERMINA 301
#define DEFINE 302
#define PRINCIPAL 303
#define RETORNA 304
#define INCLUI 305
#define IMPRIME 306
#define INTEIRO 307
#define QUEBRADO 308
#define EXPOENTE 309
#define IDENTIFICADOR 310
#define PALAVRA 311
#define LETRA 312
#define FRASE 313
#define ESPECIAL 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "nico.y"

	int num;
	char *cadeia;
	struct _node *no;

#line 270 "y.tab.c"

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   159,   159,   160,   163,   164,   167,   168,   171,   172,
     173,   174,   177,   178,   181,   182,   183,   184,   185,   186,
     189,   190,   193,   194,   197,   198,   199,   202,   203,   206,
     207,   210,   211,   212,   213,   214,   215,   216,   217,   220,
     221,   225,   226,   229,   230,   233,   234,   235,   239,   240,
     243,   244,   247,   250,   253,   254,   255,   258,   261,   264,
     265,   266,   271,   274,   277,   280,   283,   284,   285,   286,
     289,   302,   303,   304,   305,   308,   311,   314,   317,   320,
     323,   326,   327,   328,   329,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   344,   347,   350,   353,   356,
     359,   362,   365,   368,   371,   372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIS", "MENOS", "VEZES", "DIVIDE", "OU",
  "NEGACAO", "DEF_INT", "DEF_FLOAT", "DEF_CHAR", "DEF_STRING", "MAISMAIS",
  "MENOSMENOS", "VIRGULA", "DOISPONTOS", "PONTOVIRGULA", "ASPASIMPLES",
  "ABREPARENTESE", "FECHAPARENTESE", "ABRECOLCHETE", "FECHACOLCHETE",
  "ABRECHAVE", "FECHACHAVE", "MENOR", "MAIOR", "IGUAL", "MENORIGUAL",
  "MAIORIGUAL", "IGUALIGUAL", "ECOMERCIAL", "DIFERENTE", "PORCENTO",
  "SUSTENIDO", "TABULACAO", "ASPADUPLA", "VERDADEIRO", "FALSO", "SE",
  "ENTAO", "SENAO", "ENQUANTO", "FAZ", "PARA", "INICIA", "TERMINA",
  "DEFINE", "PRINCIPAL", "RETORNA", "INCLUI", "IMPRIME", "INTEIRO",
  "QUEBRADO", "EXPOENTE", "IDENTIFICADOR", "PALAVRA", "LETRA", "FRASE",
  "ESPECIAL", "$accept", "inicio", "cabecalhos", "cabecalho", "code",
  "declaracoes", "declaracao", "parametros", "parametro", "atribuicao",
  "atr_oper", "acoes", "acao", "funcao", "s", "t", "f", "operando",
  "seentao", "fazpara", "enquanto", "logicos", "logico", "imprimir",
  "incdec", "se", "entao", "senao", "define", "tipo", "id", "valor",
  "pontuacao", "abrep", "fechap", "igualdade", "mmais", "mmenos",
  "operador", "operadorlog", "ini", "term", "princ", "imprime", "frase",
  "para", "faz", "enq", "inclui", "num", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,    16,   127,   -76,   -76,   145,   -76,   -76,
     145,   -76,   -76,   -76,   201,   -76,   -76,   -76,   -76,   -76,
     -76,   234,   -20,   -20,   162,    32,   188,    -6,   -20,   -76,
     -76,   -76,   -76,   -76,   107,    29,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,    32,   -76,   196,    61,   -76,   -76,   -76,
     235,    32,   -76,   -76,   208,    39,     0,   -76,   -76,   -76,
     -76,    51,    51,    51,    51,    51,   -76,    39,   -76,   144,
      80,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     8,
     -76,   235,   -76,   -20,    39,   -76,   -76,    76,   -76,   -10,
     235,   235,    29,   -10,   -76,    62,    83,   -76,   -76,    39,
     -76,    39,    39,   -76,    -5,   -76,   194,   -10,   235,   145,
     235,   145,    14,    -5,   -76,   -76,   -76,   -76,    66,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -20,
      -5,   145,    55,   145,    55,    -7,    67,   -76,   145,   -76,
     -76,    55,   -76,   -76,    55,   -76,    32,   -76,   145,    -9,
     -76,   -76,    92,    55,   -76,   145,   -76,   145,   -76,    55,
      55,   -76,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    66,    67,    68,    69,    76,    95,    65,   103,    98,
     104,   105,    70,     0,     0,     4,     3,    11,    12,    38,
      10,    29,    37,    31,    41,    43,    45,    33,    34,    35,
      36,    32,     0,     0,    48,     0,     0,     0,     0,    49,
       1,     5,     2,    13,     8,     9,    30,    81,    82,    83,
      84,    75,    42,     0,    61,     0,     0,    79,    80,    78,
       0,     0,    59,    60,     0,    47,    48,    62,   102,   100,
      97,     0,     0,     0,     0,     0,    99,     0,     7,     0,
       0,    44,    71,    72,    73,    74,     6,    14,    15,     0,
      77,     0,    20,     0,     0,    28,    27,    48,    46,     0,
       0,     0,     0,     0,    58,   104,   105,    26,    25,     0,
      21,     0,    22,    39,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    40,    23,    55,     0,    94,
      93,    85,    86,    87,    88,    89,    90,    91,    92,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,    57,
      56,     0,    96,    19,     0,    17,     0,   101,     0,     0,
      18,    16,     0,     0,    64,     0,    51,     0,    53,     0,
       0,    50,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -76,   102,   -14,    -8,   -11,    30,   -16,   -76,
     -76,   116,    11,   -43,   -53,   106,    94,   -76,   -76,   -76,
     -76,   -75,    47,   -76,   -32,   -76,   -76,   -76,   -76,    22,
     -31,    59,   -13,    46,   -47,   109,   -76,   -76,   -76,   -76,
     -25,    40,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    91,    92,    87,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   114,   115,    30,    31,    71,   148,   165,    32,    33,
      34,    86,    54,    35,    94,    61,    62,    63,    53,   139,
      36,   153,    73,    37,    77,    74,   158,    75,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    55,    56,    65,    66,    72,    43,    78,    96,     5,
      51,    52,    45,    57,    58,    90,    40,    98,    95,    79,
      80,    65,    66,     1,     2,     3,     4,     5,   123,    65,
      97,    46,   164,     5,    43,    12,   108,   152,     1,     2,
       3,     4,   140,    88,   111,    12,   107,   145,    12,    72,
      12,     5,    76,   119,   121,    46,    51,    65,    97,     6,
     105,   106,   112,    12,   104,    84,    85,   128,   116,    12,
       5,   141,   116,   143,     6,   110,   146,    80,    51,   -71,
      60,   113,    93,   116,    10,    11,   116,    12,    59,    57,
      58,   116,   116,   150,   122,     5,   124,    80,   125,   126,
     -72,   152,   110,   162,   110,   142,   147,   144,   149,   116,
     157,    43,    90,    93,   116,   167,    41,    99,   100,   101,
     102,   103,    93,    93,    65,    66,     5,   151,    70,   154,
     118,   120,   156,    44,   159,    12,     1,     2,     3,     4,
      93,    64,    93,    60,   163,   117,     5,    81,   109,   117,
       0,   169,     6,   170,     1,     2,     3,     4,     9,    10,
      11,   127,    12,   117,     5,    89,     0,     0,   117,     0,
     127,     0,     6,     0,     7,    57,    58,     8,     9,    10,
      11,     5,    12,    67,   155,     0,    68,   127,    69,    59,
       6,   160,   127,     0,   161,     0,     9,    10,    11,   166,
      12,   129,   130,   168,    47,    48,    49,    50,     0,   171,
     172,    47,    48,    49,    50,     0,     0,     0,    51,   131,
     132,   133,   134,   135,   136,   137,   138,    67,    90,     0,
      68,     0,    69,     0,     0,     0,    70,   -47,   -47,   -47,
     -47,     0,     0,    12,     1,     2,     3,     4,    82,    83,
       0,    51,     0,    84,    85,    90
};

static const yytype_int16 yycheck[] =
{
      14,    32,    33,    35,    35,    36,    17,    38,    61,    19,
      17,    24,    20,    13,    14,    20,     0,    64,    61,    44,
      45,    53,    53,     9,    10,    11,    12,    19,   103,    61,
      61,    20,    41,    19,    45,    55,    89,    46,     9,    10,
      11,    12,   117,    56,    91,    55,    89,   122,    55,    80,
      55,    19,    58,   100,   101,    44,    17,    89,    89,    45,
      52,    53,    93,    55,    77,    57,    58,   114,    99,    55,
      19,   118,   103,   120,    45,    91,   123,   102,    17,    17,
      34,    94,    60,   114,    52,    53,   117,    55,    27,    13,
      14,   122,   123,   140,   102,    19,   109,   122,   111,   112,
      17,    46,   118,   156,   120,   119,    40,   121,   139,   140,
      43,   122,    20,    91,   145,   162,    14,    71,    72,    73,
      74,    75,   100,   101,   156,   156,    19,   141,    48,   143,
     100,   101,   145,    17,   148,    55,     9,    10,    11,    12,
     118,    35,   120,    97,   158,    99,    19,    53,    89,   103,
      -1,   165,    45,   167,     9,    10,    11,    12,    51,    52,
      53,   114,    55,   117,    19,    56,    -1,    -1,   122,    -1,
     123,    -1,    45,    -1,    47,    13,    14,    50,    51,    52,
      53,    19,    55,    39,   144,    -1,    42,   140,    44,    27,
      45,   151,   145,    -1,   154,    -1,    51,    52,    53,   159,
      55,     7,     8,   163,     3,     4,     5,     6,    -1,   169,
     170,     3,     4,     5,     6,    -1,    -1,    -1,    17,    25,
      26,    27,    28,    29,    30,    31,    32,    39,    20,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,     3,     4,     5,
       6,    -1,    -1,    55,     9,    10,    11,    12,    52,    53,
      -1,    17,    -1,    57,    58,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    19,    45,    47,    50,    51,
      52,    53,    55,    61,    62,    63,    64,    65,    66,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      83,    84,    88,    89,    90,    93,   100,   103,   108,   109,
       0,    63,    64,    66,    71,    65,    72,     3,     4,     5,
       6,    17,    92,    98,    92,    90,    90,    13,    14,    27,
      93,    95,    96,    97,    75,    84,    90,    39,    42,    44,
      48,    85,    90,   102,   105,   107,    58,   104,    90,   100,
     100,    76,    52,    53,    57,    58,    91,    69,    92,    95,
      20,    67,    68,    89,    94,    73,    74,    90,    94,    93,
      93,    93,    93,    93,    92,    52,    53,    73,    74,    91,
      68,    94,    90,    92,    81,    82,    90,    93,    67,    94,
      67,    94,    65,    81,    92,    92,    92,    82,    94,     7,
       8,    25,    26,    27,    28,    29,    30,    31,    32,    99,
      81,    94,    64,    94,    64,    81,    94,    40,    86,    90,
      94,    64,    46,   101,    64,   101,    92,    43,   106,    64,
     101,   101,    74,    64,    41,    87,   101,    94,   101,    64,
      64,   101,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      78,    78,    79,    80,    81,    81,    81,    82,    83,    84,
      84,    84,    85,    86,    87,    88,    89,    89,    89,    89,
      90,    91,    91,    91,    91,    92,    93,    94,    95,    96,
      97,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     3,     2,     2,     2,
       1,     1,     1,     2,     3,     3,     7,     6,     7,     6,
       1,     2,     2,     3,     3,     2,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     1,     2,     1,     3,     1,     3,     1,     1,     1,
      10,     8,    10,     8,     1,     2,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 159 "nico.y"
                             {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL); syntax_tree = (yyval.no); init_table(&symbol_table);}
#line 1710 "y.tab.c"
    break;

  case 3:
#line 160 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL); syntax_tree = (yyval.no); init_table(&symbol_table);}
#line 1716 "y.tab.c"
    break;

  case 4:
#line 163 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, declaracoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1722 "y.tab.c"
    break;

  case 5:
#line 164 "nico.y"
                                  {(yyval.no) = create_node((yylsp[-1]).first_line, declaracoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1728 "y.tab.c"
    break;

  case 6:
#line 167 "nico.y"
                             {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1734 "y.tab.c"
    break;

  case 7:
#line 168 "nico.y"
                       {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1740 "y.tab.c"
    break;

  case 8:
#line 171 "nico.y"
                               {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1746 "y.tab.c"
    break;

  case 9:
#line 172 "nico.y"
                               {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1752 "y.tab.c"
    break;

  case 10:
#line 173 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1758 "y.tab.c"
    break;

  case 11:
#line 174 "nico.y"
                         {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1764 "y.tab.c"
    break;

  case 12:
#line 177 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, declaracoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1770 "y.tab.c"
    break;

  case 13:
#line 178 "nico.y"
                                    {(yyval.no) = create_node((yylsp[-1]).first_line, declaracoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1776 "y.tab.c"
    break;

  case 14:
#line 181 "nico.y"
                                {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1782 "y.tab.c"
    break;

  case 15:
#line 182 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1788 "y.tab.c"
    break;

  case 16:
#line 183 "nico.y"
                                                          {(yyval.no) = create_node((yylsp[-6]).first_line, declaracao_node, NULL, (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1794 "y.tab.c"
    break;

  case 17:
#line 184 "nico.y"
                                               {(yyval.no) = create_node((yylsp[-5]).first_line, declaracao_node, NULL, (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1800 "y.tab.c"
    break;

  case 18:
#line 185 "nico.y"
                                                       {(yyval.no) = create_node((yylsp[-6]).first_line, declaracao_node, NULL, (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1806 "y.tab.c"
    break;

  case 19:
#line 186 "nico.y"
                                            {(yyval.no) = create_node((yylsp[-5]).first_line, declaracao_node, NULL, (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 1812 "y.tab.c"
    break;

  case 20:
#line 189 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, declaracao_node, NULL, (yyvsp[0].no), NULL);}
#line 1818 "y.tab.c"
    break;

  case 21:
#line 190 "nico.y"
                                   {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1824 "y.tab.c"
    break;

  case 22:
#line 193 "nico.y"
                     {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1830 "y.tab.c"
    break;

  case 23:
#line 194 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1836 "y.tab.c"
    break;

  case 24:
#line 197 "nico.y"
                                       {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no),  NULL);}
#line 1842 "y.tab.c"
    break;

  case 25:
#line 198 "nico.y"
                         {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1848 "y.tab.c"
    break;

  case 26:
#line 199 "nico.y"
                              {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1854 "y.tab.c"
    break;

  case 27:
#line 202 "nico.y"
                            {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1860 "y.tab.c"
    break;

  case 28:
#line 203 "nico.y"
                                 {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1866 "y.tab.c"
    break;

  case 29:
#line 206 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, acoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1872 "y.tab.c"
    break;

  case 30:
#line 207 "nico.y"
                        {(yyval.no) = create_node((yylsp[-1]).first_line, acoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1878 "y.tab.c"
    break;

  case 31:
#line 210 "nico.y"
               {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1884 "y.tab.c"
    break;

  case 32:
#line 211 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1890 "y.tab.c"
    break;

  case 33:
#line 212 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1896 "y.tab.c"
    break;

  case 34:
#line 213 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1902 "y.tab.c"
    break;

  case 35:
#line 214 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1908 "y.tab.c"
    break;

  case 36:
#line 215 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1914 "y.tab.c"
    break;

  case 37:
#line 216 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1920 "y.tab.c"
    break;

  case 38:
#line 217 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1926 "y.tab.c"
    break;

  case 39:
#line 220 "nico.y"
                                       {(yyval.no) = create_node((yylsp[-3]).first_line, acao_node, NULL, (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1932 "y.tab.c"
    break;

  case 40:
#line 221 "nico.y"
                                                  {(yyval.no) = create_node((yylsp[-4]).first_line, acao_node, NULL, (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1938 "y.tab.c"
    break;

  case 41:
#line 225 "nico.y"
               {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1944 "y.tab.c"
    break;

  case 42:
#line 226 "nico.y"
                         {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1950 "y.tab.c"
    break;

  case 43:
#line 229 "nico.y"
               {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1956 "y.tab.c"
    break;

  case 44:
#line 230 "nico.y"
                          {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1962 "y.tab.c"
    break;

  case 45:
#line 233 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1968 "y.tab.c"
    break;

  case 46:
#line 234 "nico.y"
                            {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1974 "y.tab.c"
    break;

  case 47:
#line 235 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no),  NULL);}
#line 1980 "y.tab.c"
    break;

  case 48:
#line 239 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1986 "y.tab.c"
    break;

  case 49:
#line 240 "nico.y"
                 {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1992 "y.tab.c"
    break;

  case 50:
#line 243 "nico.y"
                                                                    {(yyval.no) = create_node((yylsp[-9]).first_line, code_node, NULL, (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no),(yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 1998 "y.tab.c"
    break;

  case 51:
#line 244 "nico.y"
                                                         {(yyval.no) = create_node((yylsp[-7]).first_line, code_node, NULL, (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no),(yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 2004 "y.tab.c"
    break;

  case 52:
#line 247 "nico.y"
                                                                             {(yyval.no) = create_node((yylsp[-9]).first_line, code_node, NULL, (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no),(yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2010 "y.tab.c"
    break;

  case 53:
#line 250 "nico.y"
                                                        {(yyval.no) = create_node((yylsp[-7]).first_line, code_node, NULL, (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no),(yyvsp[-1].no),(yyvsp[0].no), NULL);}
#line 2016 "y.tab.c"
    break;

  case 54:
#line 253 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 2022 "y.tab.c"
    break;

  case 55:
#line 254 "nico.y"
                            {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2028 "y.tab.c"
    break;

  case 56:
#line 255 "nico.y"
                                  {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2034 "y.tab.c"
    break;

  case 57:
#line 258 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2040 "y.tab.c"
    break;

  case 58:
#line 261 "nico.y"
                                     {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2046 "y.tab.c"
    break;

  case 59:
#line 264 "nico.y"
                      {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2052 "y.tab.c"
    break;

  case 60:
#line 265 "nico.y"
                       {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2058 "y.tab.c"
    break;

  case 61:
#line 266 "nico.y"
                              {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 2064 "y.tab.c"
    break;

  case 62:
#line 271 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2070 "y.tab.c"
    break;

  case 63:
#line 274 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2076 "y.tab.c"
    break;

  case 64:
#line 277 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2082 "y.tab.c"
    break;

  case 65:
#line 280 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2088 "y.tab.c"
    break;

  case 66:
#line 283 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2094 "y.tab.c"
    break;

  case 67:
#line 284 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2100 "y.tab.c"
    break;

  case 68:
#line 285 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2106 "y.tab.c"
    break;

  case 69:
#line 286 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2112 "y.tab.c"
    break;

  case 70:
#line 289 "nico.y"
                            {
                entry_t* new_entry = (entry_t*) malloc(sizeof(entry_t));
                new_entry->name = yylval.cadeia;
                new_entry->type = tipo;
                new_entry->size = tamanho;
                new_entry->desloc = desloc;
                new_entry->extra = NULL;
                insert(&symbol_table, new_entry);
                desloc += tamanho;
                
                (yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2128 "y.tab.c"
    break;

  case 71:
#line 302 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); tipo = 1;}
#line 2134 "y.tab.c"
    break;

  case 72:
#line 303 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); tipo = 2;}
#line 2140 "y.tab.c"
    break;

  case 73:
#line 304 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); tipo = 3;}
#line 2146 "y.tab.c"
    break;

  case 74:
#line 305 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); tipo = 4;}
#line 2152 "y.tab.c"
    break;

  case 75:
#line 308 "nico.y"
                          {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2158 "y.tab.c"
    break;

  case 76:
#line 311 "nico.y"
                           {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2164 "y.tab.c"
    break;

  case 77:
#line 314 "nico.y"
                            {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2170 "y.tab.c"
    break;

  case 78:
#line 317 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2176 "y.tab.c"
    break;

  case 79:
#line 320 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2182 "y.tab.c"
    break;

  case 80:
#line 323 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2188 "y.tab.c"
    break;

  case 81:
#line 326 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2194 "y.tab.c"
    break;

  case 82:
#line 327 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2200 "y.tab.c"
    break;

  case 83:
#line 328 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2206 "y.tab.c"
    break;

  case 84:
#line 329 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2212 "y.tab.c"
    break;

  case 85:
#line 332 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2218 "y.tab.c"
    break;

  case 86:
#line 333 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2224 "y.tab.c"
    break;

  case 87:
#line 334 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2230 "y.tab.c"
    break;

  case 88:
#line 335 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2236 "y.tab.c"
    break;

  case 89:
#line 336 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2242 "y.tab.c"
    break;

  case 90:
#line 337 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2248 "y.tab.c"
    break;

  case 91:
#line 338 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2254 "y.tab.c"
    break;

  case 92:
#line 339 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2260 "y.tab.c"
    break;

  case 93:
#line 340 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2266 "y.tab.c"
    break;

  case 94:
#line 341 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2272 "y.tab.c"
    break;

  case 95:
#line 344 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2278 "y.tab.c"
    break;

  case 96:
#line 347 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2284 "y.tab.c"
    break;

  case 97:
#line 350 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2290 "y.tab.c"
    break;

  case 98:
#line 353 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2296 "y.tab.c"
    break;

  case 99:
#line 356 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2302 "y.tab.c"
    break;

  case 100:
#line 359 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2308 "y.tab.c"
    break;

  case 101:
#line 362 "nico.y"
                 {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2314 "y.tab.c"
    break;

  case 102:
#line 365 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2320 "y.tab.c"
    break;

  case 103:
#line 368 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2326 "y.tab.c"
    break;

  case 104:
#line 371 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2332 "y.tab.c"
    break;

  case 105:
#line 372 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2338 "y.tab.c"
    break;


#line 2342 "y.tab.c"

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
#line 375 "nico.y"


print_table(symbol_table);
