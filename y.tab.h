/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    INC_OP = 261,
    DEC_OP = 262,
    AND_OP = 263,
    OR_OP = 264,
    ASSIGMENT = 265,
    CMP_OP = 266,
    TYPE_NAME = 267,
    CHAR = 268,
    INT = 269,
    DOUBLE = 270,
    VOID = 271,
    CONST = 272,
    IF = 273,
    ELSE = 274,
    WHILE = 275,
    FOR = 276,
    CONTINUE = 277,
    BREAK = 278,
    RETURN = 279
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define AND_OP 263
#define OR_OP 264
#define ASSIGMENT 265
#define CMP_OP 266
#define TYPE_NAME 267
#define CHAR 268
#define INT 269
#define DOUBLE 270
#define VOID 271
#define CONST 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define FOR 276
#define CONTINUE 277
#define BREAK 278
#define RETURN 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "full.y" /* yacc.c:1909  */

    struct ast *a;
    double d;
    struct symbol *s;		/* which symbol */
    struct symlist *sl;
    int fn;			/* which function */

#line 110 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
