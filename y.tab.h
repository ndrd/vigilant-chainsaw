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
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    MUL_ASSIGN = 269,
    DIV_ASSIGN = 270,
    MOD_ASSIGN = 271,
    ADD_ASSIGN = 272,
    SUB_ASSIGN = 273,
    TYPE_NAME = 274,
    CHAR = 275,
    INT = 276,
    DOUBLE = 277,
    VOID = 278,
    CONST = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    FOR = 283,
    CONTINUE = 284,
    BREAK = 285,
    RETURN = 286
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define LE_OP 263
#define GE_OP 264
#define EQ_OP 265
#define NE_OP 266
#define AND_OP 267
#define OR_OP 268
#define MUL_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define ADD_ASSIGN 272
#define SUB_ASSIGN 273
#define TYPE_NAME 274
#define CHAR 275
#define INT 276
#define DOUBLE 277
#define VOID 278
#define CONST 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define FOR 283
#define CONTINUE 284
#define BREAK 285
#define RETURN 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
