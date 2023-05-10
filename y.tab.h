/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    INCLUE = 305,
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
#define INCLUE 305
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

#line 181 "y.tab.h"

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
