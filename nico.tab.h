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

#ifndef YY_YY_NICO_TAB_H_INCLUDED
# define YY_YY_NICO_TAB_H_INCLUDED
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
    TMAIS = 258,
    TMENOS = 259,
    TVEZES = 260,
    TDIVIDE = 261,
    TOU = 262,
    TNEGACAO = 263,
    TDEF_INT = 264,
    TDEF_FLOAT = 265,
    TDEF_CHAR = 266,
    TDEF_STRING = 267,
    TMAISMAIS = 268,
    TMENOSMENOS = 269,
    TVIRGULA = 270,
    TDOISPONTOS = 271,
    TPONTOVIRGULA = 272,
    TASPASIMPLES = 273,
    TABREPARENTESE = 274,
    TFECHAPARENTESE = 275,
    TABRECOLCHETE = 276,
    TFECHACOLCHETE = 277,
    TABRECHAVE = 278,
    TFECHACHAVE = 279,
    TMENOR = 280,
    TMAIOR = 281,
    TIGUAL = 282,
    TMENORIGUAL = 283,
    TMAIORIGUAL = 284,
    TIGUALIGUAL = 285,
    TECOMERCIAL = 286,
    TDIFERENTE = 287,
    TPORCENTO = 288,
    TSUSTENIDO = 289,
    TTABULACAO = 290,
    TASPADUPLA = 291,
    TVERDADEIRO = 292,
    TFALSO = 293,
    TSE = 294,
    TENTAO = 295,
    TSENAO = 296,
    TENQUANTO = 297,
    TFAZ = 298,
    TPARA = 299,
    TINICIA = 300,
    TTERMINA = 301,
    TDEFINE = 302,
    TPRINCIPAL = 303,
    TRETORNA = 304,
    TINCLUE = 305,
    TIMPRIME = 306,
    TINTEIRO = 307,
    TQUEBRADO = 308,
    TEXPOENTE = 309,
    TIDENTIFICADOR = 310,
    TFRASE = 311,
    TESPECIAL = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "nico.y"

	int num;
	char *cadeia;
	struct _node *no;

#line 121 "nico.tab.h"

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

#endif /* !YY_YY_NICO_TAB_H_INCLUDED  */
