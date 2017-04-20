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
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
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
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
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
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
: type_specifier {printf("TYPE, %s",$1);}
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
  | TYPE_NAME
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator
	;


direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'


parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers direct_abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' direct_abstract_declarator ')' {printf("I'm Here");}
	| '[' ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '[' '*' ']'
	| direct_abstract_declarator '[' '*' ']'
	| '(' ')' {printf("I'm Here");}
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')' {printf("I'm Here");}
	| direct_abstract_declarator '(' parameter_type_list ')' {printf("I'm Here");}
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
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
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
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
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers direct_abstract_declarator declaration_list compound_statement
	| declaration_specifiers direct_abstract_declarator compound_statement
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
