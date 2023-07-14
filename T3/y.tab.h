/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 91 "nico2.y"

	int num;
	char *cadeia;
	struct _node *no;

#line 191 "y.tab.h"

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
