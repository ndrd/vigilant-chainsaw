%{
#  include <stdio.h>
#  include <stdlib.h>
#  include "AST.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
%}
/*
   Deberian de ir acompanhados los IDENTIFIERS de la cadena asociada? */
%union {
    struct ast *a;
    double d;
    struct symbol *s;		/* which symbol */
    struct symlist *sl;
    int fn;			/* which function */
}
%token IDENTIFIER CONSTANT STRING_LITERAL
%token INC_OP DEC_OP
%token AND_OP OR_OP
%nonassoc <fn> ASSIGMENT
%nonassoc <fn> CMP_OP
%token  TYPE_NAME

%token CHAR INT DOUBLE VOID CONST

%token IF ELSE WHILE FOR CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER { printf("Hola"); }
	| CONSTANT { printf("STRING_LITERAL"); }
	| STRING_LITERAL { printf("STRING_LITERAL"); }
	| '(' expression ')'
	;

postfix_expression
	: primary_expression { printf("1");}
	| postfix_expression '[' expression ']' { printf("2");}
	| postfix_expression '(' ')' { printf("3");}
	| postfix_expression '(' argument_expression_list ')' { printf("4");}
	| postfix_expression INC_OP { printf("5");}
	| postfix_expression DEC_OP { printf("6");}
	| '(' type_name ')' '{' initializer_list '}' { printf("7");}
	| '(' type_name ')' '{' initializer_list ',' '}' { printf("8");}
	;

argument_expression_list
	: assignment_expression {printf("8");}
	| argument_expression_list ',' assignment_expression {printf("9");}
	;

unary_expression
	: postfix_expression {printf ("10");}
	| INC_OP unary_expression {printf ("11");}
	| DEC_OP unary_expression {printf ("12");}
	| unary_operator cast_expression {printf ("13");}
	;

unary_operator
	: '+'
	| '-'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression {printf ("13");}
	| multiplicative_expression '*' cast_expression {printf ("14");}
	| multiplicative_expression '/' cast_expression {printf ("15");}
	| multiplicative_expression '%' cast_expression {printf ("16");}
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

relational_expression
	: additive_expression
	| relational_expression CMP_OP additive_expression
	;
equality_expression
	: relational_expression
	| equality_expression CMP_OP relational_expression
	;

logical_and_expression
	: equality_expression
	| logical_and_expression AND_OP equality_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

assignment_expression
	: logical_or_expression
	| unary_expression assignment_operator assignment_expression
	;
//Esto se va a reducir a una funcion que toma el valor del enumerado en AST.h
assignment_operator
	: '='
	| ASSIGMENT /*Aqui va la funcion con el enumerador ASSIGMENT*/
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: logical_or_expression
	;

declaration
	: declaration_specifiers ';' {printf ("from declaration a");}
	| declaration_specifiers init_declarator_list ';' {printf ("from declaration b");}
	;

declaration_specifiers
	: type_specifier {printf("type_spedifier ---");}
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

type_specifier
	: VOID
	| CHAR
	| INT {printf("HERE INT");}
	| DOUBLE
  	| TYPE_NAME {printf("functions");}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator
	;


direct_declarator
	: IDENTIFIER {printf("direct_declarator 1");}
	| '(' declarator ')' {printf("direct_declarator 2");}
	| direct_declarator '[' assignment_expression ']' {printf("direct_declarator 3");}
	| direct_declarator '[' '*' ']' {printf("direct_declarator 4");}
	| direct_declarator '[' ']' {printf("direct_declarator 5");}
	| direct_declarator '(' parameter_type_list ')' {printf("direct_declarator 6");}
	| direct_declarator '(' identifier_list ')' {printf("direct_declarator 7");}
	| direct_declarator '(' ')' {printf("direct_declarator 8");}


parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator {printf("from parameter 1");}
	| declaration_specifiers direct_abstract_declarator {printf("from parameter 2");}
	| declaration_specifiers {printf("from parameter 3");}
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list {printf("type_name ");}
	| specifier_qualifier_list direct_abstract_declarator {printf("type_name ");}
	;

direct_abstract_declarator
	: '(' direct_abstract_declarator ')' {printf("direct abstract declarator 1");}
	| '[' ']' {printf("direct abstract declarator 2");}
	| '[' assignment_expression ']' {printf("direct abstract declarator 3");}
	| direct_abstract_declarator '[' ']' {printf("direct abstract declarator 4");}
	| direct_abstract_declarator '[' assignment_expression ']' {printf("direct abstract declarator 5");}
	| '[' '*' ']' {printf("direct abstract declarator 6");}
	| direct_abstract_declarator '[' '*' ']' {printf("direct abstract declarator 7");}
	| '(' ')' {printf("I'm Here");} {printf("direct abstract declarator 8");}
	| '(' parameter_type_list ')' {printf("direct abstract declarator 9");}
	| direct_abstract_declarator '(' ')' {printf("direct abstract declarator 10");}
	| direct_abstract_declarator '(' parameter_type_list ')' {printf("direct abstract declarator 11");}
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer {printf ("initializer 0");}
	| designation initializer {printf ("initializer 1");}
	| initializer_list ',' initializer {printf ("initializer 2");}
	| initializer_list ',' designation initializer {printf ("initializer 3");}
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: compound_statement { printf("statement 1");}
	| expression_statement { printf("statement 2");}
	| selection_statement { printf("statement 3");}
	| iteration_statement { printf("statement 4");}
	| jump_statement { printf("statement 5");}
	;

compound_statement
	: '{' '}' {printf("I'm Here");}
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration   {printf("Hola");}
	| translation_unit external_declaration {printf("Hola");}
	;

external_declaration
	: function_definition {printf ("external declaration");}
	| declaration {printf ("external declaration");}
	;

function_definition
	: declaration_specifiers direct_abstract_declarator declaration_list compound_statement { printf ("is a function a");}
	| declaration_specifiers direct_abstract_declarator compound_statement { printf ("is a function b");}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;
%%

  int main(){
      yyin = stdin;
      do{
          yyparse();
      }while(!feof(yyin));

      return 0;
  }
void yyerror( const char* s ){
    fprintf(stderr, "Parse error: %s\n",s);
    exit(1);
}
