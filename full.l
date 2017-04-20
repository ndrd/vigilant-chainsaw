D			[0-9]
L			[a-zA-Z_]
FS			(f|F)
%{
#include <stdio.h>
#include <string.h>
#include "full.tab.h"
#include "AST.h"
void count();
void comment(void);
int check_type();
%}
%%
"/*"			  { comment(); }
"break"			{  count(); return BREAK; }
"char"			{  count(); return CHAR; }
"continue"	{  count(); return CONTINUE; }
"double"		{  count(); return DOUBLE; }
"else"			{  count(); return ELSE; }
"for"  			{  count(); return FOR; }
"if"	  		{  count(); return IF; }
"int"		  	{  count(); return INT; }
"return"		{  count(); return (RETURN); }
"void"			{  count(); return (VOID); }
"while"			{  count(); return (WHILE); }
"+="			  { yylval.fn = 0; count(); return ASSIGMENT; }
"-="			  { yylval.fn = 1; count(); return ASSIGMENT; }
"*="			  { yylval.fn = 2; count(); return ASSIGMENT; }
"/="			  { yylval.fn = 3; count(); return ASSIGMENT; }
"%="			  { yylval.fn = 4; count(); return ASSIGMENT; }
"++"			  { count(); return ('+'); }
"--"			  { count(); return ('-'); }
"<"			    { yylval.fn = 0; count(); return CMP_OP; }
">"			    { yylval.fn = 1; count(); return CMP_OP; }
"<="			  { yylval.fn = 2; count(); return CMP_OP; }
">="			  { yylval.fn = 3; count(); return CMP_OP; }
"=="			  { yylval.fn = 4; count(); return CMP_OP; }
"!="			  { yylval.fn = 5; count(); return CMP_OP; }
";"			    { count(); return (';'); }
"&&"			  { count(); return AND_OP; }
"||"			  { count(); return  OR_OP; }
("{"|"<%")	{ count(); return ('{'); }
("}"|"%>")	{ count(); return ('}'); }
","			    { count(); return (','); }
"="			    { count(); return('='); }
"("			    { count(); return ('('); }
")"			    { count(); return (')'); }
("["|"<:")	{ count(); return ('['); }
("]"|":>")	{ count(); return (']'); }
"."			{  count(); return ('.'); }
"!"			{  count(); return ('!'); }
"-"			{  count(); return ('-'); }
"+"			{  count(); return ('+'); }
"*"			{  count(); return ('*'); }
"/"			{  count(); return ('/'); }
"%"			{  count(); return ('%'); }
{D}+       { yylval.d = atoi(yytext); /*printf("\n%d\n",atoi(yytext));*/ count(); return(CONSTANT); }
{D}+{FS}?	 { yylval.d = atof(yytext); /*printf("\n%f\n",atof(yytext));*/ count(); return(CONSTANT); }
L?\"(\\.|[^\\"])*\"	{ yylval.s = yytext; count(); return(STRING_LITERAL);}
{L}({L}|{D})*		{ yylval.s = yytext; printf("%s",yytext);count(); return(check_type()); }
L?'(\\.|[^\\'])+'	{ yylval.s = yytext; count(); printf("%s",yytext); return(STRING_LITERAL); }



[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

/* int yyerror(char * e) */
/* { */
/*   printf("Error\n"); */
/*   exit(1); */
/* } */

int yywrap(void)
{
	return 1;
}


void comment(void)
{
	char c, prev = 0;

	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
}


int column = 0;

void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
    if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
	ECHO;
}


int check_type(void)
{
/* if ( !(strcmp(yytext,"int") && strcmp(yytext,"char") && strcmp(yytext,"double"))){ */
/* 		return TYPE_NAME; */
/* printf("SOY TYPE"); */
/* } */
	return IDENTIFIER;
printf("SOY ID");

}
