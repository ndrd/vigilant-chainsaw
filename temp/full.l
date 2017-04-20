D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			([Ee][+-]?{D}+)
P                       ([Pp][+-]?{D}+)
FS			(f|F|l|L)
IS                      ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))

%{
#include <stdio.h>
#include "y.tab.h"

void count(void);
void comment(void);
int yyerror(char *);
%}

%%
"/*"			{ comment(); }
"//"[^\n]*              { /* consume //-comment */ }

"auto"			{ puts("hola\n"); count(); return(AUTO); }
"_Bool"			{ puts("hola\n"); count(); return(BOOL); }
"break"			{ puts("hola\n"); count(); return(BREAK); }
"case"			{ puts("hola\n"); count(); return(CASE); }
"char"			{ puts("hola\n"); count(); return(CHAR); }
"_Complex"		{ puts("hola\n"); count(); return(COMPLEX); }
"const"			{ puts("hola\n"); count(); return(CONST); }
"continue"		{ puts("hola\n"); count(); return(CONTINUE); }
"default"		{ puts("hola\n"); count(); return(DEFAULT); }
"do"			{ puts("hola\n"); count(); return(DO); }
"double"		{ puts("hola\n"); count(); return(DOUBLE); }
"else"			{ puts("hola\n"); count(); return(ELSE); }
"enum"			{ puts("hola\n"); count(); return(ENUM); }
"extern"		{ puts("hola\n"); count(); return(EXTERN); }
"float"			{ puts("hola\n"); count(); return(FLOAT); }
"for"			{ puts("hola\n"); count(); return(FOR); }
"goto"			{ puts("hola\n"); count(); return(GOTO); }
"if"			{ puts("hola\n"); count(); return(IF); }
"_Imaginary"		{ puts("hola\n"); count(); return(IMAGINARY); }
"inline"		{ puts("hola\n"); count(); return(INLINE); }
"int"			{ puts("hola\n"); count(); return(INT); }
"long"			{ puts("hola\n"); count(); return(LONG); }
"register"		{ puts("hola\n"); count(); return(REGISTER); }
"restrict"		{ puts("hola\n"); count(); return(RESTRICT); }
"return"		{ puts("hola\n"); count(); return(RETURN); }
"short"			{ puts("hola\n"); count(); return(SHORT); }
"signed"		{ puts("hola\n"); count(); return(SIGNED); }
"sizeof"		{ puts("hola\n"); count(); return(SIZEOF); }
"static"		{ puts("hola\n"); count(); return(STATIC); }
"struct"		{ puts("hola\n"); count(); return(STRUCT); }
"switch"		{ puts("hola\n"); count(); return(SWITCH); }
"typedef"		{ puts("hola\n"); count(); return(TYPEDEF); }
"union"			{ puts("hola\n"); count(); return(UNION); }
"unsigned"		{ puts("hola\n"); count(); return(UNSIGNED); }
"void"			{ puts("hola\n"); count(); return(VOID); }
"volatile"		{ puts("hola\n"); count(); return(VOLATILE); }
"while"			{ puts("hola\n"); count(); return(WHILE); }

{L}({L}|{D})*		{ puts("hola\n"); count(); return(check_type()); }

0[xX]{H}+{IS}?		{ puts("hola\n"); count(); return(CONSTANT); }
0[0-7]*{IS}?		{ puts("hola\n"); count(); return(CONSTANT); }
[1-9]{D}*{IS}?		{ puts("hola\n"); count(); return(CONSTANT); }
L?'(\\.|[^\\'\n])+'	{ puts("hola\n"); count(); return(CONSTANT); }

{D}+{E}{FS}?		{ puts("hola\n"); count(); return(CONSTANT); }
{D}*"."{D}+{E}?{FS}?	{ puts("hola\n"); count(); return(CONSTANT); }
{D}+"."{D}*{E}?{FS}?	{ puts("hola\n"); count(); return(CONSTANT); }
0[xX]{H}+{P}{FS}?	{ puts("hola\n"); count(); return(CONSTANT); }
0[xX]{H}*"."{H}+{P}?{FS}?     { puts("hola\n"); count(); return(CONSTANT); }
0[xX]{H}+"."{H}*{P}?{FS}?     { puts("hola\n"); count(); return(CONSTANT); }


L?\"(\\.|[^\\"\n])*\"	{ puts("hola\n"); count(); return(STRING_LITERAL); }

"..."			{ puts("hola\n"); count(); return(ELLIPSIS); }
">>="			{ puts("hola\n"); count(); return(RIGHT_ASSIGN); }
"<<="			{ puts("hola\n"); count(); return(LEFT_ASSIGN); }
"+="			{ puts("hola\n"); count(); return(ADD_ASSIGN); }
"-="			{ puts("hola\n"); count(); return(SUB_ASSIGN); }
"*="			{ puts("hola\n"); count(); return(MUL_ASSIGN); }
"/="			{ puts("hola\n"); count(); return(DIV_ASSIGN); }
"%="			{ puts("hola\n"); count(); return(MOD_ASSIGN); }
"&="			{ puts("hola\n"); count(); return(AND_ASSIGN); }
"^="			{ puts("hola\n"); count(); return(XOR_ASSIGN); }
"|="			{ puts("hola\n"); count(); return(OR_ASSIGN); }
">>"			{ puts("hola\n"); count(); return(RIGHT_OP); }
"<<"			{ puts("hola\n"); count(); return(LEFT_OP); }
"++"			{ puts("hola\n"); count(); return(INC_OP); }
"--"			{ puts("hola\n"); count(); return(DEC_OP); }
"->"			{ puts("hola\n"); count(); return(PTR_OP); }
"&&"			{ puts("hola\n"); count(); return(AND_OP); }
"||"			{ puts("hola\n"); count(); return(OR_OP); }
"<="			{ puts("hola\n"); count(); return(LE_OP); }
">="			{ puts("hola\n"); count(); return(GE_OP); }
"=="			{ puts("hola\n"); count(); return(EQ_OP); }
"!="			{ puts("hola\n"); count(); return(NE_OP); }
";"			{ puts("hola\n"); count(); return(';'); }
("{"|"<%")		{ puts("hola\n"); count(); return('{'); }
("}"|"%>")		{ puts("hola\n"); count(); return('}'); }
","			{ puts("hola\n"); count(); return(','); }
":"			{ puts("hola\n"); count(); return(':'); }
"="			{ puts("hola\n"); count(); return('='); }
"(p"			{ puts("hola\n"); count(); return('('); }
")"			{ puts("hola\n"); count(); return(')'); }
("["|"<:")		{ puts("hola\n"); count(); return('['); }
("]"|":>")		{ puts("hola\n"); count(); return(']'); }
"."			{ puts("hola\n"); count(); return('.'); }
"&"			{ puts("hola\n"); count(); return('&'); }
"!"			{ puts("hola\n"); count(); return('!'); }
"~"			{ puts("hola\n"); count(); return('~'); }
"-"			{ puts("hola\n"); count(); return('-'); }
"+"			{ puts("hola\n"); count(); return('+'); }
"*"			{ puts("hola\n"); count(); return('*'); }
"/"			{ puts("hola\n"); count(); return('/'); }
"%"			{ puts("hola\n"); count(); return('%'); }
"<"			{ puts("hola\n"); count(); return('<'); }
">"			{ puts("hola\n"); count(); return('>'); }
"^"			{ puts("hola\n"); count(); return('^'); }
"|"			{ puts("hola\n"); count(); return('|'); }
"?"			{ puts("hola\n"); count(); return('?'); }

[ \t\v\n\f]		{ puts("hola\n"); count(); }
.			{ /* Add code to complain about unmatched characters */ }

%%

int yyerror(char * e)
{
  printf("Error\n");
  exit(1);
}

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
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return TYPE_NAME;
*
*	return IDENTIFIER;
*/

/*
*	it actually will only return IDENTIFIER
*/

	return IDENTIFIER;
}
