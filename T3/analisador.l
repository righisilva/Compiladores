    /** DEFINITION sec*/
%option noyywrap
%option yylineno

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




#include "y.tab.h"
void yyerror(char *);

%}

YY_USER_ACTION yylloc.first_line = yylineno;
YY_USER_INIT yylineno = 1;

digito      [0-9]
numeral     {digito}+

fracao      {numeral}+","{numeral}+
expoente    ({numeral}|{fracao})"^"([+|-])?({numeral}|{fracao})

especial    [ -~]
caracter    [a-zA-Z_]
palavra     {caracter}({caracter}|{digito})*
frase       "\""{especial}+"\""
comentario  "\\"{especial}+


%%
    /** RULES sec (mand.) */
inteiro      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DEF_INT);}
quebrado     {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DEF_FLOAT);}
letra        {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DEF_CHAR);}
palavra      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DEF_STRING);}
"+"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MAIS);}
"-"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MENOS);}
"*"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (VEZES);}
"/"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DIVIDE);}
"++"         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MAISMAIS);}
"--"         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MENOSMENOS);}
","          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (VIRGULA);}
":"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DOISPONTOS);}
";"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (PONTOVIRGULA);}
"'"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ASPASIMPLES);}
"("          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ABREPARENTESE);}
")"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FECHAPARENTESE);}
"["          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ABRECOLCHETE);}
"]"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FECHACOLCHETE);}
"{"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ABRECHAVE);}
"}"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FECHACHAVE);}
"<"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MENOR);}
">"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MAIOR);}
"="          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (IGUAL);}
"<="         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MENORIGUAL);}
">="         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (MAIORIGUAL);}
"=="         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (IGUALIGUAL);}
"&"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ECOMERCIAL);}
"!="         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DIFERENTE);}
"!"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (NEGACAO);}
"|"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (OU);}
"%"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (PORCENTO);}
"#"          {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (SUSTENIDO);}
[ \t\n]      {}
"\""         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ASPADUPLA);}
"verdadeiro" {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (VERDADEIRO);}
"falso"      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FALSO);}
"se"         {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (SE);}
"entao"      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ENTAO);}
"senao"      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (SENAO);}
"enquanto"   {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ENQUANTO);}
"faz"        {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FAZ);}
"para"       {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (PARA);}
"inicia"     {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (INICIA);}
"termina"    {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (TERMINA);}
"define"     {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (DEFINE);}
"principal"  {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (PRINCIPAL);}
"retorna"    {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (RETORNA);}
"inclue"     {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (INCLUI);}
"imprime"    {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (IMPRIME);}
{numeral}    {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (INTEIRO);}
{fracao}     {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (QUEBRADO);}
{expoente}   {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (EXPOENTE);}
{caracter}   {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (IDENTIFICADOR);}
{palavra}    {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (IDENTIFICADOR);}
{frase}      {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (FRASE);}
{comentario} {}
{especial}   {yylval.cadeia = (char*)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(yylval.cadeia, yytext); return (ESPECIAL);}




.            printf("Erro léxico: caractere desconhecido '%c' (%d).\n", yytext[0], yytext[0]);

%%

