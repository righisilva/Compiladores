/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

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


/*    extern int yyparse();*/

	extern int yyerror(const char* msg );
	extern int yylex();

	extern Node *syntax_tree;


#line 90 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DEF_INT = 258,                 /* DEF_INT  */
    DEF_FLOAT = 259,               /* DEF_FLOAT  */
    DEF_CHAR = 260,                /* DEF_CHAR  */
    DEF_STRING = 261,              /* DEF_STRING  */
    MAIS = 262,                    /* MAIS  */
    MENOS = 263,                   /* MENOS  */
    VEZES = 264,                   /* VEZES  */
    DIVIDE = 265,                  /* DIVIDE  */
    MAISMAIS = 266,                /* MAISMAIS  */
    MENOSMENOS = 267,              /* MENOSMENOS  */
    VIRGULA = 268,                 /* VIRGULA  */
    DOISPONTOS = 269,              /* DOISPONTOS  */
    PONTOVIRGULA = 270,            /* PONTOVIRGULA  */
    ASPASIMPLES = 271,             /* ASPASIMPLES  */
    ABREPARENTESE = 272,           /* ABREPARENTESE  */
    FECHAPARENTESE = 273,          /* FECHAPARENTESE  */
    ABRECOLCHETE = 274,            /* ABRECOLCHETE  */
    FECHACOLCHETE = 275,           /* FECHACOLCHETE  */
    ABRECHAVE = 276,               /* ABRECHAVE  */
    FECHACHAVE = 277,              /* FECHACHAVE  */
    MENOR = 278,                   /* MENOR  */
    MAIOR = 279,                   /* MAIOR  */
    IGUAL = 280,                   /* IGUAL  */
    MENORIGUAL = 281,              /* MENORIGUAL  */
    MAIORIGUAL = 282,              /* MAIORIGUAL  */
    IGUALIGUAL = 283,              /* IGUALIGUAL  */
    ECOMERCIAL = 284,              /* ECOMERCIAL  */
    DIFERENTE = 285,               /* DIFERENTE  */
    NEGACAO = 286,                 /* NEGACAO  */
    OU = 287,                      /* OU  */
    PORCENTO = 288,                /* PORCENTO  */
    SUSTENIDO = 289,               /* SUSTENIDO  */
    TABULACAO = 290,               /* TABULACAO  */
    ASPADUPLA = 291,               /* ASPADUPLA  */
    VERDADEIRO = 292,              /* VERDADEIRO  */
    FALSO = 293,                   /* FALSO  */
    SE = 294,                      /* SE  */
    ENTAO = 295,                   /* ENTAO  */
    SENAO = 296,                   /* SENAO  */
    ENQUANTO = 297,                /* ENQUANTO  */
    FAZ = 298,                     /* FAZ  */
    PARA = 299,                    /* PARA  */
    INICIA = 300,                  /* INICIA  */
    TERMINA = 301,                 /* TERMINA  */
    DEFINE = 302,                  /* DEFINE  */
    PRINCIPAL = 303,               /* PRINCIPAL  */
    RETORNA = 304,                 /* RETORNA  */
    INCLUI = 305,                  /* INCLUI  */
    IMPRIME = 306,                 /* IMPRIME  */
    INTEIRO = 307,                 /* INTEIRO  */
    QUEBRADO = 308,                /* QUEBRADO  */
    EXPOENTE = 309,                /* EXPOENTE  */
    IDENTIFICADOR = 310,           /* IDENTIFICADOR  */
    PALAVRA = 311,                 /* PALAVRA  */
    LETRA = 312,                   /* LETRA  */
    FRASE = 313,                   /* FRASE  */
    ESPECIAL = 314                 /* ESPECIAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DEF_INT 258
#define DEF_FLOAT 259
#define DEF_CHAR 260
#define DEF_STRING 261
#define MAIS 262
#define MENOS 263
#define VEZES 264
#define DIVIDE 265
#define MAISMAIS 266
#define MENOSMENOS 267
#define VIRGULA 268
#define DOISPONTOS 269
#define PONTOVIRGULA 270
#define ASPASIMPLES 271
#define ABREPARENTESE 272
#define FECHAPARENTESE 273
#define ABRECOLCHETE 274
#define FECHACOLCHETE 275
#define ABRECHAVE 276
#define FECHACHAVE 277
#define MENOR 278
#define MAIOR 279
#define IGUAL 280
#define MENORIGUAL 281
#define MAIORIGUAL 282
#define IGUALIGUAL 283
#define ECOMERCIAL 284
#define DIFERENTE 285
#define NEGACAO 286
#define OU 287
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
#line 22 "nico.y"

	int num;
	char *cadeia;
	struct _node *no;

#line 267 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEF_INT = 3,                    /* DEF_INT  */
  YYSYMBOL_DEF_FLOAT = 4,                  /* DEF_FLOAT  */
  YYSYMBOL_DEF_CHAR = 5,                   /* DEF_CHAR  */
  YYSYMBOL_DEF_STRING = 6,                 /* DEF_STRING  */
  YYSYMBOL_MAIS = 7,                       /* MAIS  */
  YYSYMBOL_MENOS = 8,                      /* MENOS  */
  YYSYMBOL_VEZES = 9,                      /* VEZES  */
  YYSYMBOL_DIVIDE = 10,                    /* DIVIDE  */
  YYSYMBOL_MAISMAIS = 11,                  /* MAISMAIS  */
  YYSYMBOL_MENOSMENOS = 12,                /* MENOSMENOS  */
  YYSYMBOL_VIRGULA = 13,                   /* VIRGULA  */
  YYSYMBOL_DOISPONTOS = 14,                /* DOISPONTOS  */
  YYSYMBOL_PONTOVIRGULA = 15,              /* PONTOVIRGULA  */
  YYSYMBOL_ASPASIMPLES = 16,               /* ASPASIMPLES  */
  YYSYMBOL_ABREPARENTESE = 17,             /* ABREPARENTESE  */
  YYSYMBOL_FECHAPARENTESE = 18,            /* FECHAPARENTESE  */
  YYSYMBOL_ABRECOLCHETE = 19,              /* ABRECOLCHETE  */
  YYSYMBOL_FECHACOLCHETE = 20,             /* FECHACOLCHETE  */
  YYSYMBOL_ABRECHAVE = 21,                 /* ABRECHAVE  */
  YYSYMBOL_FECHACHAVE = 22,                /* FECHACHAVE  */
  YYSYMBOL_MENOR = 23,                     /* MENOR  */
  YYSYMBOL_MAIOR = 24,                     /* MAIOR  */
  YYSYMBOL_IGUAL = 25,                     /* IGUAL  */
  YYSYMBOL_MENORIGUAL = 26,                /* MENORIGUAL  */
  YYSYMBOL_MAIORIGUAL = 27,                /* MAIORIGUAL  */
  YYSYMBOL_IGUALIGUAL = 28,                /* IGUALIGUAL  */
  YYSYMBOL_ECOMERCIAL = 29,                /* ECOMERCIAL  */
  YYSYMBOL_DIFERENTE = 30,                 /* DIFERENTE  */
  YYSYMBOL_NEGACAO = 31,                   /* NEGACAO  */
  YYSYMBOL_OU = 32,                        /* OU  */
  YYSYMBOL_PORCENTO = 33,                  /* PORCENTO  */
  YYSYMBOL_SUSTENIDO = 34,                 /* SUSTENIDO  */
  YYSYMBOL_TABULACAO = 35,                 /* TABULACAO  */
  YYSYMBOL_ASPADUPLA = 36,                 /* ASPADUPLA  */
  YYSYMBOL_VERDADEIRO = 37,                /* VERDADEIRO  */
  YYSYMBOL_FALSO = 38,                     /* FALSO  */
  YYSYMBOL_SE = 39,                        /* SE  */
  YYSYMBOL_ENTAO = 40,                     /* ENTAO  */
  YYSYMBOL_SENAO = 41,                     /* SENAO  */
  YYSYMBOL_ENQUANTO = 42,                  /* ENQUANTO  */
  YYSYMBOL_FAZ = 43,                       /* FAZ  */
  YYSYMBOL_PARA = 44,                      /* PARA  */
  YYSYMBOL_INICIA = 45,                    /* INICIA  */
  YYSYMBOL_TERMINA = 46,                   /* TERMINA  */
  YYSYMBOL_DEFINE = 47,                    /* DEFINE  */
  YYSYMBOL_PRINCIPAL = 48,                 /* PRINCIPAL  */
  YYSYMBOL_RETORNA = 49,                   /* RETORNA  */
  YYSYMBOL_INCLUI = 50,                    /* INCLUI  */
  YYSYMBOL_IMPRIME = 51,                   /* IMPRIME  */
  YYSYMBOL_INTEIRO = 52,                   /* INTEIRO  */
  YYSYMBOL_QUEBRADO = 53,                  /* QUEBRADO  */
  YYSYMBOL_EXPOENTE = 54,                  /* EXPOENTE  */
  YYSYMBOL_IDENTIFICADOR = 55,             /* IDENTIFICADOR  */
  YYSYMBOL_PALAVRA = 56,                   /* PALAVRA  */
  YYSYMBOL_LETRA = 57,                     /* LETRA  */
  YYSYMBOL_FRASE = 58,                     /* FRASE  */
  YYSYMBOL_ESPECIAL = 59,                  /* ESPECIAL  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_inicio = 61,                    /* inicio  */
  YYSYMBOL_cabecalhos = 62,                /* cabecalhos  */
  YYSYMBOL_cabecalho = 63,                 /* cabecalho  */
  YYSYMBOL_code = 64,                      /* code  */
  YYSYMBOL_declaracoes = 65,               /* declaracoes  */
  YYSYMBOL_declaracao = 66,                /* declaracao  */
  YYSYMBOL_parametros = 67,                /* parametros  */
  YYSYMBOL_parametro = 68,                 /* parametro  */
  YYSYMBOL_atribuicao = 69,                /* atribuicao  */
  YYSYMBOL_atr_oper = 70,                  /* atr_oper  */
  YYSYMBOL_acoes = 71,                     /* acoes  */
  YYSYMBOL_acao = 72,                      /* acao  */
  YYSYMBOL_funcao = 73,                    /* funcao  */
  YYSYMBOL_aritmeticas = 74,               /* aritmeticas  */
  YYSYMBOL_aritmetica = 75,                /* aritmetica  */
  YYSYMBOL_operando = 76,                  /* operando  */
  YYSYMBOL_seentao = 77,                   /* seentao  */
  YYSYMBOL_fazpara = 78,                   /* fazpara  */
  YYSYMBOL_enquanto = 79,                  /* enquanto  */
  YYSYMBOL_logicos = 80,                   /* logicos  */
  YYSYMBOL_logico = 81,                    /* logico  */
  YYSYMBOL_imprimir = 82,                  /* imprimir  */
  YYSYMBOL_incdec = 83,                    /* incdec  */
  YYSYMBOL_se = 84,                        /* se  */
  YYSYMBOL_entao = 85,                     /* entao  */
  YYSYMBOL_senao = 86,                     /* senao  */
  YYSYMBOL_define = 87,                    /* define  */
  YYSYMBOL_tipo = 88,                      /* tipo  */
  YYSYMBOL_id = 89,                        /* id  */
  YYSYMBOL_valor = 90,                     /* valor  */
  YYSYMBOL_pontuacao = 91,                 /* pontuacao  */
  YYSYMBOL_abrep = 92,                     /* abrep  */
  YYSYMBOL_fechap = 93,                    /* fechap  */
  YYSYMBOL_igualdade = 94,                 /* igualdade  */
  YYSYMBOL_mmais = 95,                     /* mmais  */
  YYSYMBOL_mmenos = 96,                    /* mmenos  */
  YYSYMBOL_operador = 97,                  /* operador  */
  YYSYMBOL_operadorlog = 98,               /* operadorlog  */
  YYSYMBOL_ini = 99,                       /* ini  */
  YYSYMBOL_term = 100,                     /* term  */
  YYSYMBOL_princ = 101,                    /* princ  */
  YYSYMBOL_imprime = 102,                  /* imprime  */
  YYSYMBOL_frase = 103,                    /* frase  */
  YYSYMBOL_para = 104,                     /* para  */
  YYSYMBOL_faz = 105,                      /* faz  */
  YYSYMBOL_enq = 106,                      /* enq  */
  YYSYMBOL_inclui = 107,                   /* inclui  */
  YYSYMBOL_num = 108                       /* num  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,   151,   151,   152,   155,   156,   159,   160,   163,   164,
     165,   166,   169,   170,   173,   174,   175,   176,   177,   178,
     181,   182,   185,   186,   189,   190,   191,   194,   195,   198,
     199,   202,   203,   204,   205,   206,   207,   208,   211,   212,
     215,   216,   217,   218,   221,   222,   225,   226,   229,   230,
     233,   236,   239,   240,   241,   244,   247,   250,   251,   256,
     259,   262,   265,   268,   269,   270,   271,   274,   277,   278,
     279,   280,   283,   286,   289,   292,   295,   298,   301,   302,
     303,   304,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   319,   322,   325,   328,   331,   334,   337,   340,
     343,   346,   347
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DEF_INT", "DEF_FLOAT",
  "DEF_CHAR", "DEF_STRING", "MAIS", "MENOS", "VEZES", "DIVIDE", "MAISMAIS",
  "MENOSMENOS", "VIRGULA", "DOISPONTOS", "PONTOVIRGULA", "ASPASIMPLES",
  "ABREPARENTESE", "FECHAPARENTESE", "ABRECOLCHETE", "FECHACOLCHETE",
  "ABRECHAVE", "FECHACHAVE", "MENOR", "MAIOR", "IGUAL", "MENORIGUAL",
  "MAIORIGUAL", "IGUALIGUAL", "ECOMERCIAL", "DIFERENTE", "NEGACAO", "OU",
  "PORCENTO", "SUSTENIDO", "TABULACAO", "ASPADUPLA", "VERDADEIRO", "FALSO",
  "SE", "ENTAO", "SENAO", "ENQUANTO", "FAZ", "PARA", "INICIA", "TERMINA",
  "DEFINE", "PRINCIPAL", "RETORNA", "INCLUI", "IMPRIME", "INTEIRO",
  "QUEBRADO", "EXPOENTE", "IDENTIFICADOR", "PALAVRA", "LETRA", "FRASE",
  "ESPECIAL", "$accept", "inicio", "cabecalhos", "cabecalho", "code",
  "declaracoes", "declaracao", "parametros", "parametro", "atribuicao",
  "atr_oper", "acoes", "acao", "funcao", "aritmeticas", "aritmetica",
  "operando", "seentao", "fazpara", "enquanto", "logicos", "logico",
  "imprimir", "incdec", "se", "entao", "senao", "define", "tipo", "id",
  "valor", "pontuacao", "abrep", "fechap", "igualdade", "mmais", "mmenos",
  "operador", "operadorlog", "ini", "term", "princ", "imprime", "frase",
  "para", "faz", "enq", "inclui", "num", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    23,   132,   -83,   -83,   150,   -83,   -83,
     150,   -83,   -83,   136,    19,   122,   -83,   -83,   -83,   -83,
     -83,     5,     5,   227,   110,   178,    -6,     5,   -83,   -83,
     -83,   -83,   -83,   155,    24,   -83,   -83,   159,   -83,   -83,
     -83,   -83,   -83,   -83,   136,   116,    -3,   -83,   -83,   -83,
     231,   110,   -83,   -83,   160,   -83,   -83,   -83,   -83,    21,
      21,    21,    21,    21,   -83,    19,   -83,   -18,    27,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    -2,   -83,
     231,   -83,     5,    19,   -83,   136,    99,   -83,   -10,   231,
     231,    24,   -10,   -83,    26,    57,   -83,   136,    19,   -83,
      19,    19,   -83,    -1,   -83,   230,   -10,   231,   150,   231,
     150,   141,    -1,   -83,   -83,   -83,   -83,    47,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     5,    -1,
     150,    45,   150,    45,    -9,    60,   -83,   150,   -83,   -83,
      45,   -83,   -83,    45,   -83,   110,   -83,   150,    37,   -83,
     -83,   160,    45,   -83,   150,   -83,   150,   -83,    45,    45,
     -83,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    63,    64,    65,    66,    73,    92,    62,   100,    95,
     101,   102,    67,     0,     0,     4,     3,    11,    12,    37,
      10,    29,    36,    31,    40,     0,    32,    33,    34,    35,
      45,     0,     0,    46,     0,     0,     0,     0,    47,     1,
       5,     2,    13,     8,     9,    30,    42,    46,    72,    41,
      78,    79,    80,    81,     0,     0,     0,    76,    77,    75,
       0,     0,    57,    58,     0,    59,    99,    97,    94,     0,
       0,     0,     0,     0,    96,     0,     7,     0,     0,    44,
      46,    68,    69,    71,    70,     6,    14,    15,     0,    74,
       0,    20,     0,     0,    28,    27,    46,    43,     0,     0,
       0,     0,     0,    56,   101,   102,    26,    25,     0,    21,
       0,    22,    38,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    39,    23,    53,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,    55,    54,
       0,    93,    19,     0,    17,     0,    98,     0,     0,    18,
      16,     0,     0,    61,     0,    49,     0,    51,     0,     0,
      48,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,    93,   -14,   -17,   -12,    22,   -82,   -83,
     -83,    95,    16,   -41,   -30,   -22,    94,   -83,   -83,   -83,
      59,   -24,   -83,   -83,   -83,   -83,   -83,   -83,   -51,   -21,
      63,    49,    -8,   -20,    58,   -83,   -83,   -83,   -83,   -25,
      61,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,    15,    16,    17,    18,    90,    91,    86,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     113,   114,    29,    30,    69,   147,   164,    31,    32,    33,
      85,    49,    34,    93,    61,    62,    63,    54,   138,    35,
     152,    71,    36,    75,    72,   157,    73,    37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    46,    47,    44,    64,    42,    48,     5,   109,    92,
      55,    56,    48,    47,    70,     5,    76,    89,    77,    78,
      94,    65,    59,    39,    66,    60,    67,     1,     2,     3,
       4,    95,    42,    80,    48,   109,    45,   109,     5,    92,
      96,   -68,    46,    47,    97,    12,    12,   106,    92,    92,
     104,   105,    74,    12,    12,    83,    84,    70,   107,    45,
      12,    98,    99,   100,   101,   102,    92,    96,    92,     6,
     110,   111,   -69,    46,    47,    68,    78,   115,   163,   118,
     120,   115,    12,   151,   121,    46,    47,   146,    60,   126,
     116,   151,   115,   127,   116,   115,    78,   140,   126,   142,
     115,   115,   145,   156,   141,    87,   143,    40,   116,    42,
      57,    58,    43,   116,    88,   126,     5,   148,   115,   149,
     126,   117,   119,   115,   103,   161,   150,     5,   153,    50,
      51,    52,    53,   158,    47,     1,     2,     3,     4,    46,
      47,   166,   112,   162,     1,     2,     3,     4,    79,     5,
     168,   108,   169,     1,     2,     3,     4,   123,     5,   124,
     125,   122,    10,    11,     0,    12,     0,     5,    81,    82,
      57,    58,     5,    83,    84,   139,     0,     6,    89,     7,
     144,     0,     8,     9,    10,    11,     6,    12,    10,    11,
       0,    12,     0,   155,     0,     6,    12,     0,     0,     0,
       6,     9,    10,    11,   154,    12,     9,    10,    11,     0,
      12,   159,    10,    11,   160,    12,     0,    65,     0,   165,
      66,     0,    67,   167,     0,     0,    68,     0,     0,   170,
     171,     0,     0,    12,     1,     2,     3,     4,    57,    58,
       0,     0,     0,     0,     5,     0,     0,     0,     0,    89,
       0,     0,    59,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137
};

static const yytype_int16 yycheck[] =
{
      14,    23,    23,    20,    34,    17,    15,    17,    90,    60,
      31,    32,    15,    34,    35,    17,    37,    18,    43,    44,
      61,    39,    25,     0,    42,    33,    44,     3,     4,     5,
       6,    61,    44,    54,    15,   117,    20,   119,    17,    90,
      61,    15,    64,    64,    64,    55,    55,    88,    99,   100,
      52,    53,    58,    55,    55,    57,    58,    78,    88,    43,
      55,    69,    70,    71,    72,    73,   117,    88,   119,    45,
      90,    92,    15,    95,    95,    48,   101,    98,    41,    99,
     100,   102,    55,    46,   101,   107,   107,    40,    96,   113,
      98,    46,   113,   113,   102,   116,   121,   117,   122,   119,
     121,   122,   122,    43,   118,    56,   120,    14,   116,   121,
      11,    12,    17,   121,    56,   139,    17,   138,   139,   139,
     144,    99,   100,   144,    75,   155,   140,    17,   142,     7,
       8,     9,    10,   147,   155,     3,     4,     5,     6,   161,
     161,   161,    93,   157,     3,     4,     5,     6,    54,    17,
     164,    88,   166,     3,     4,     5,     6,   108,    17,   110,
     111,   102,    52,    53,    -1,    55,    -1,    17,    52,    53,
      11,    12,    17,    57,    58,   116,    -1,    45,    18,    47,
     121,    -1,    50,    51,    52,    53,    45,    55,    52,    53,
      -1,    55,    -1,   144,    -1,    45,    55,    -1,    -1,    -1,
      45,    51,    52,    53,   143,    55,    51,    52,    53,    -1,
      55,   150,    52,    53,   153,    55,    -1,    39,    -1,   158,
      42,    -1,    44,   162,    -1,    -1,    48,    -1,    -1,   168,
     169,    -1,    -1,    55,     3,     4,     5,     6,    11,    12,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    25,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    17,    45,    47,    50,    51,
      52,    53,    55,    61,    62,    63,    64,    65,    66,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    82,
      83,    87,    88,    89,    92,    99,   102,   107,   108,     0,
      63,    64,    66,    71,    65,    72,    75,    89,    15,    91,
       7,     8,     9,    10,    97,    89,    89,    11,    12,    25,
      92,    94,    95,    96,    74,    39,    42,    44,    48,    84,
      89,   101,   104,   106,    58,   103,    89,    99,    99,    76,
      89,    52,    53,    57,    58,    90,    69,    91,    94,    18,
      67,    68,    88,    93,    73,    74,    89,    93,    92,    92,
      92,    92,    92,    91,    52,    53,    73,    74,    90,    68,
      93,    89,    91,    80,    81,    89,    92,    67,    93,    67,
      93,    65,    80,    91,    91,    91,    81,    93,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    98,    80,
      93,    64,    93,    64,    80,    93,    40,    85,    89,    93,
      64,    46,   100,    64,   100,    91,    43,   105,    64,   100,
     100,    74,    64,    41,    86,   100,    93,   100,    64,    64,
     100,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    79,    80,    80,    80,    81,    82,    83,    83,    84,
      85,    86,    87,    88,    88,    88,    88,    89,    90,    90,
      90,    90,    91,    92,    93,    94,    95,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   108
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     3,     2,     2,     2,
       1,     1,     1,     2,     3,     3,     7,     6,     7,     6,
       1,     2,     2,     3,     3,     2,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       1,     2,     2,     3,     3,     1,     1,     1,    10,     8,
      10,     8,     1,     2,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* inicio: cabecalhos code  */
#line 151 "nico.y"
                             {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL); syntax_tree = (yyval.no);}
#line 1633 "y.tab.c"
    break;

  case 3: /* inicio: code  */
#line 152 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL); syntax_tree = (yyval.no);}
#line 1639 "y.tab.c"
    break;

  case 4: /* cabecalhos: cabecalho  */
#line 155 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, declaracoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1645 "y.tab.c"
    break;

  case 5: /* cabecalhos: cabecalhos cabecalho  */
#line 156 "nico.y"
                                  {(yyval.no) = create_node((yylsp[-1]).first_line, declaracoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1651 "y.tab.c"
    break;

  case 6: /* cabecalho: define id valor  */
#line 159 "nico.y"
                             {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1657 "y.tab.c"
    break;

  case 7: /* cabecalho: inclui id  */
#line 160 "nico.y"
                       {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1663 "y.tab.c"
    break;

  case 8: /* code: declaracoes acoes  */
#line 163 "nico.y"
                               {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1669 "y.tab.c"
    break;

  case 9: /* code: acoes declaracoes  */
#line 164 "nico.y"
                               {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1675 "y.tab.c"
    break;

  case 10: /* code: acoes  */
#line 165 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1681 "y.tab.c"
    break;

  case 11: /* code: declaracoes  */
#line 166 "nico.y"
                         {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1687 "y.tab.c"
    break;

  case 12: /* declaracoes: declaracao  */
#line 169 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, declaracoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1693 "y.tab.c"
    break;

  case 13: /* declaracoes: declaracoes declaracao  */
#line 170 "nico.y"
                                    {(yyval.no) = create_node((yylsp[-1]).first_line, declaracoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1699 "y.tab.c"
    break;

  case 14: /* declaracao: tipo id atribuicao  */
#line 173 "nico.y"
                                {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1705 "y.tab.c"
    break;

  case 15: /* declaracao: tipo id pontuacao  */
#line 174 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1711 "y.tab.c"
    break;

  case 16: /* declaracao: ini princ abrep parametros fechap code term  */
#line 175 "nico.y"
                                                          {(yyval.no) = create_node((yylsp[-6]).first_line, declaracao_node, NULL, (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1717 "y.tab.c"
    break;

  case 17: /* declaracao: ini princ abrep fechap code term  */
#line 176 "nico.y"
                                               {(yyval.no) = create_node((yylsp[-5]).first_line, declaracao_node, NULL, (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1723 "y.tab.c"
    break;

  case 18: /* declaracao: ini id abrep parametros fechap code term  */
#line 177 "nico.y"
                                                       {(yyval.no) = create_node((yylsp[-6]).first_line, declaracao_node, NULL, (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1729 "y.tab.c"
    break;

  case 19: /* declaracao: ini id abrep fechap code term  */
#line 178 "nico.y"
                                            {(yyval.no) = create_node((yylsp[-5]).first_line, declaracao_node, NULL, (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 1735 "y.tab.c"
    break;

  case 20: /* parametros: parametro  */
#line 181 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, declaracao_node, NULL, (yyvsp[0].no), NULL);}
#line 1741 "y.tab.c"
    break;

  case 21: /* parametros: parametros parametro  */
#line 182 "nico.y"
                                   {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1747 "y.tab.c"
    break;

  case 22: /* parametro: tipo id  */
#line 185 "nico.y"
                     {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1753 "y.tab.c"
    break;

  case 23: /* parametro: tipo id pontuacao  */
#line 186 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1759 "y.tab.c"
    break;

  case 24: /* atribuicao: igualdade valor pontuacao  */
#line 189 "nico.y"
                                       {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1765 "y.tab.c"
    break;

  case 25: /* atribuicao: igualdade aritmeticas  */
#line 190 "nico.y"
                                   {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1771 "y.tab.c"
    break;

  case 26: /* atribuicao: igualdade funcao  */
#line 191 "nico.y"
                              {(yyval.no) = create_node((yylsp[-1]).first_line, declaracao_node, NULL, (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1777 "y.tab.c"
    break;

  case 27: /* atr_oper: id igualdade aritmeticas  */
#line 194 "nico.y"
                                      {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1783 "y.tab.c"
    break;

  case 28: /* atr_oper: id igualdade funcao  */
#line 195 "nico.y"
                                 {(yyval.no) = create_node((yylsp[-2]).first_line, declaracao_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),  NULL);}
#line 1789 "y.tab.c"
    break;

  case 29: /* acoes: acao  */
#line 198 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, acoes_node, NULL, (yyvsp[0].no), NULL);}
#line 1795 "y.tab.c"
    break;

  case 30: /* acoes: acoes acao  */
#line 199 "nico.y"
                        {(yyval.no) = create_node((yylsp[-1]).first_line, acoes_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1801 "y.tab.c"
    break;

  case 31: /* acao: aritmeticas  */
#line 202 "nico.y"
                         {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1807 "y.tab.c"
    break;

  case 32: /* acao: seentao  */
#line 203 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1813 "y.tab.c"
    break;

  case 33: /* acao: fazpara  */
#line 204 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1819 "y.tab.c"
    break;

  case 34: /* acao: enquanto  */
#line 205 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1825 "y.tab.c"
    break;

  case 35: /* acao: imprimir  */
#line 206 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1831 "y.tab.c"
    break;

  case 36: /* acao: funcao  */
#line 207 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1837 "y.tab.c"
    break;

  case 37: /* acao: atr_oper  */
#line 208 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, acao_node, NULL, (yyvsp[0].no), NULL);}
#line 1843 "y.tab.c"
    break;

  case 38: /* funcao: id abrep fechap pontuacao  */
#line 211 "nico.y"
                                       {(yyval.no) = create_node((yylsp[-3]).first_line, acao_node, NULL, (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1849 "y.tab.c"
    break;

  case 39: /* funcao: id abrep parametros fechap pontuacao  */
#line 212 "nico.y"
                                                  {(yyval.no) = create_node((yylsp[-4]).first_line, acao_node, NULL, (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1855 "y.tab.c"
    break;

  case 40: /* aritmeticas: aritmetica  */
#line 215 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1861 "y.tab.c"
    break;

  case 41: /* aritmeticas: aritmetica pontuacao  */
#line 216 "nico.y"
                                  {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1867 "y.tab.c"
    break;

  case 42: /* aritmeticas: aritmeticas aritmetica  */
#line 217 "nico.y"
                                    {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1873 "y.tab.c"
    break;

  case 43: /* aritmeticas: abrep aritmeticas fechap  */
#line 218 "nico.y"
                                      {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1879 "y.tab.c"
    break;

  case 44: /* aritmetica: operando operador operando  */
#line 221 "nico.y"
                                        {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1885 "y.tab.c"
    break;

  case 45: /* aritmetica: incdec  */
#line 222 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1891 "y.tab.c"
    break;

  case 46: /* operando: id  */
#line 225 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1897 "y.tab.c"
    break;

  case 47: /* operando: num  */
#line 226 "nico.y"
                 {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1903 "y.tab.c"
    break;

  case 48: /* seentao: ini se abrep logicos fechap entao code senao code term  */
#line 229 "nico.y"
                                                                    {(yyval.no) = create_node((yylsp[-9]).first_line, code_node, NULL, (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no),(yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 1909 "y.tab.c"
    break;

  case 49: /* seentao: ini se abrep logicos fechap entao code term  */
#line 230 "nico.y"
                                                         {(yyval.no) = create_node((yylsp[-7]).first_line, code_node, NULL, (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no),(yyvsp[-1].no), (yyvsp[0].no),NULL);}
#line 1915 "y.tab.c"
    break;

  case 50: /* fazpara: ini para abrep declaracoes logicos pontuacao aritmeticas fechap code term  */
#line 233 "nico.y"
                                                                                       {(yyval.no) = create_node((yylsp[-9]).first_line, code_node, NULL, (yyvsp[-9].no), (yyvsp[-8].no), (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no),(yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1921 "y.tab.c"
    break;

  case 51: /* enquanto: ini enq abrep logicos fechap faz code term  */
#line 236 "nico.y"
                                                        {(yyval.no) = create_node((yylsp[-7]).first_line, code_node, NULL, (yyvsp[-7].no), (yyvsp[-6].no), (yyvsp[-5].no), (yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no),(yyvsp[-1].no),(yyvsp[0].no), NULL);}
#line 1927 "y.tab.c"
    break;

  case 52: /* logicos: logico  */
#line 239 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, NULL, (yyvsp[0].no), NULL);}
#line 1933 "y.tab.c"
    break;

  case 53: /* logicos: logicos logico  */
#line 240 "nico.y"
                            {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1939 "y.tab.c"
    break;

  case 54: /* logicos: abrep logicos fechap  */
#line 241 "nico.y"
                                  {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1945 "y.tab.c"
    break;

  case 55: /* logico: id operadorlog id  */
#line 244 "nico.y"
                               {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1951 "y.tab.c"
    break;

  case 56: /* imprimir: imprime frase pontuacao  */
#line 247 "nico.y"
                                     {(yyval.no) = create_node((yylsp[-2]).first_line, code_node, NULL, (yyvsp[-2].no), (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1957 "y.tab.c"
    break;

  case 57: /* incdec: id mmais  */
#line 250 "nico.y"
                      {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1963 "y.tab.c"
    break;

  case 58: /* incdec: id mmenos  */
#line 251 "nico.y"
                       {(yyval.no) = create_node((yylsp[-1]).first_line, code_node, NULL, (yyvsp[-1].no), (yyvsp[0].no), NULL);}
#line 1969 "y.tab.c"
    break;

  case 59: /* se: SE  */
#line 256 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 1975 "y.tab.c"
    break;

  case 60: /* entao: ENTAO  */
#line 259 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 1981 "y.tab.c"
    break;

  case 61: /* senao: SENAO  */
#line 262 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 1987 "y.tab.c"
    break;

  case 62: /* define: DEFINE  */
#line 265 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 1993 "y.tab.c"
    break;

  case 63: /* tipo: DEF_INT  */
#line 268 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 1999 "y.tab.c"
    break;

  case 64: /* tipo: DEF_FLOAT  */
#line 269 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2005 "y.tab.c"
    break;

  case 65: /* tipo: DEF_CHAR  */
#line 270 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2011 "y.tab.c"
    break;

  case 66: /* tipo: DEF_STRING  */
#line 271 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2017 "y.tab.c"
    break;

  case 67: /* id: IDENTIFICADOR  */
#line 274 "nico.y"
                            {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2023 "y.tab.c"
    break;

  case 68: /* valor: INTEIRO  */
#line 277 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); printf("\n%s\n", yylval.cadeia);}
#line 2029 "y.tab.c"
    break;

  case 69: /* valor: QUEBRADO  */
#line 278 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); printf("\n%s\n", yylval.cadeia);}
#line 2035 "y.tab.c"
    break;

  case 70: /* valor: FRASE  */
#line 279 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); printf("\n%s\n", yylval.cadeia);}
#line 2041 "y.tab.c"
    break;

  case 71: /* valor: LETRA  */
#line 280 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL); printf("\n%s\n", yylval.cadeia);}
#line 2047 "y.tab.c"
    break;

  case 72: /* pontuacao: PONTOVIRGULA  */
#line 283 "nico.y"
                          {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2053 "y.tab.c"
    break;

  case 73: /* abrep: ABREPARENTESE  */
#line 286 "nico.y"
                           {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2059 "y.tab.c"
    break;

  case 74: /* fechap: FECHAPARENTESE  */
#line 289 "nico.y"
                            {(yyval.no) = create_node((yylsp[0]).first_line, tipo_node, yylval.cadeia, NULL);}
#line 2065 "y.tab.c"
    break;

  case 75: /* igualdade: IGUAL  */
#line 292 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2071 "y.tab.c"
    break;

  case 76: /* mmais: MAISMAIS  */
#line 295 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2077 "y.tab.c"
    break;

  case 77: /* mmenos: MENOSMENOS  */
#line 298 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2083 "y.tab.c"
    break;

  case 78: /* operador: MAIS  */
#line 301 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2089 "y.tab.c"
    break;

  case 79: /* operador: MENOS  */
#line 302 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2095 "y.tab.c"
    break;

  case 80: /* operador: VEZES  */
#line 303 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2101 "y.tab.c"
    break;

  case 81: /* operador: DIVIDE  */
#line 304 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2107 "y.tab.c"
    break;

  case 82: /* operadorlog: MENOR  */
#line 307 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2113 "y.tab.c"
    break;

  case 83: /* operadorlog: MAIOR  */
#line 308 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2119 "y.tab.c"
    break;

  case 84: /* operadorlog: IGUAL  */
#line 309 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2125 "y.tab.c"
    break;

  case 85: /* operadorlog: MENORIGUAL  */
#line 310 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2131 "y.tab.c"
    break;

  case 86: /* operadorlog: MAIORIGUAL  */
#line 311 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2137 "y.tab.c"
    break;

  case 87: /* operadorlog: IGUALIGUAL  */
#line 312 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2143 "y.tab.c"
    break;

  case 88: /* operadorlog: ECOMERCIAL  */
#line 313 "nico.y"
                        {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2149 "y.tab.c"
    break;

  case 89: /* operadorlog: DIFERENTE  */
#line 314 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2155 "y.tab.c"
    break;

  case 90: /* operadorlog: NEGACAO  */
#line 315 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2161 "y.tab.c"
    break;

  case 91: /* operadorlog: OU  */
#line 316 "nico.y"
                {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2167 "y.tab.c"
    break;

  case 92: /* ini: INICIA  */
#line 319 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2173 "y.tab.c"
    break;

  case 93: /* term: TERMINA  */
#line 322 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2179 "y.tab.c"
    break;

  case 94: /* princ: PRINCIPAL  */
#line 325 "nico.y"
                       {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2185 "y.tab.c"
    break;

  case 95: /* imprime: IMPRIME  */
#line 328 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2191 "y.tab.c"
    break;

  case 96: /* frase: FRASE  */
#line 331 "nico.y"
                   {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2197 "y.tab.c"
    break;

  case 97: /* para: PARA  */
#line 334 "nico.y"
                  {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2203 "y.tab.c"
    break;

  case 98: /* faz: FAZ  */
#line 337 "nico.y"
                 {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2209 "y.tab.c"
    break;

  case 99: /* enq: ENQUANTO  */
#line 340 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2215 "y.tab.c"
    break;

  case 100: /* inclui: INCLUI  */
#line 343 "nico.y"
                    {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2221 "y.tab.c"
    break;

  case 101: /* num: INTEIRO  */
#line 346 "nico.y"
                     {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2227 "y.tab.c"
    break;

  case 102: /* num: QUEBRADO  */
#line 347 "nico.y"
                      {(yyval.no) = create_node((yylsp[0]).first_line, code_node, yylval.cadeia, NULL);}
#line 2233 "y.tab.c"
    break;


#line 2237 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 350 "nico.y"

