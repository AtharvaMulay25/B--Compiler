/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REM = 258,
     STRING_LITERAL = 259,
     FLOAT = 260,
     INT = 261,
     SINGLE_UPPER = 262,
     UPPER_DIGIT = 263,
     STOP = 264,
     FOR = 265,
     TO = 266,
     STEP = 267,
     NEXT = 268,
     GOTO = 269,
     NOT = 270,
     AND = 271,
     OR = 272,
     XOR = 273,
     EQ = 274,
     NE = 275,
     LT = 276,
     GT = 277,
     LE = 278,
     GE = 279,
     DATA = 280,
     LET = 281,
     INPUT = 282,
     END = 283,
     DIM = 284,
     DEF = 285,
     FN = 286,
     IF = 287,
     THEN = 288,
     PRINT = 289,
     GOSUB = 290,
     RETURN = 291
   };
#endif
/* Tokens.  */
#define REM 258
#define STRING_LITERAL 259
#define FLOAT 260
#define INT 261
#define SINGLE_UPPER 262
#define UPPER_DIGIT 263
#define STOP 264
#define FOR 265
#define TO 266
#define STEP 267
#define NEXT 268
#define GOTO 269
#define NOT 270
#define AND 271
#define OR 272
#define XOR 273
#define EQ 274
#define NE 275
#define LT 276
#define GT 277
#define LE 278
#define GE 279
#define DATA 280
#define LET 281
#define INPUT 282
#define END 283
#define DIM 284
#define DEF 285
#define FN 286
#define IF 287
#define THEN 288
#define PRINT 289
#define GOSUB 290
#define RETURN 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

