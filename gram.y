%{
#include<stdio.h>
#include<string.h>
void yyerror(const char*);
int yylex();
%}

%union{
        char *name;
}

%token<name>PRIVATE PUBLIC CLASS
%token<name>CHAR INT FLOAT DOUBLE VOID
%token<name>SEMICOLON COMMA ASSIGN COLON
%token<name>ID
%token<name>ICONST FCONST
%token<name>ROBRAC RCBRAC COBRAC CCBRAC SOBRAC SCBRAC
%token<name>POINTER
%token<name>IF ELSEIF ELSE
%token<name>PLUS MINUS DIVIDE INC DEC MOD
%token<name>OR AND NOT BOR BAND BNOT XOR BLSHIFT BRSHIFT
%token<name>EQ NEQ LT LTE GT GTE
%token<name>FOR WHILE DO
%token<name>RETURN BREAK CONTINUE
%token<name>CIN COUT

%type<name>source_code
%type<name>class
%type<name>class_name
%type<name>class_program
%type<name>class_inner_statements
%type<name>specifier
%type<name>program
%type<name>function
%type<name>return_statement
%type<name>function_call
%type<name>arguments_with_type
%type<name>arguments_without_type
%type<name>arguments
%type<name>statements
%type<name>statement
%type<name>complex_statement
%type<name>simple_statement
%type<name>declaration
%type<name>name
%type<name>declare
%type<name>if_statement
%type<name>if_body
%type<name>elseif_statement
%type<name>for_statement
%type<name>while_statement
%type<name>while
%type<name>dowhile_statement
%type<name>assignment
%type<name>expression_statement
%type<name>multi_exp
%type<name>expression
%type<name>unary
%type<name>variables
%type<name>multi_dim
%type<name>pointer
%type<name>array
%type<name>array_dim
%type<name>type
%type<name>input_and_output_statements
%type<name>input_statements
%type<name>output_statements
%type<name>output
%type<name>input

%left COMMA
%left OR 
%left AND
%left BOR
%left XOR
%left BAND
%left EQ NEQ
%left LT LTE GT GTE
%left BLSHIFT BRSHIFT
%left PLUS MINUS
%left POINTER DIVIDE MOD

%right INC DEC
%right BNOT NOT
%right ASSIGN

%nonassoc LOWER
%nonassoc ELSE
%nonassoc ELSEIF

%define parse.error verbose

%start source_code

%%

source_code:  source_code class {strcat($1,$2);strcpy($$,$1);}
        |     source_code program {strcat($1,$2);strcpy($$,$1);}
        |     program {strcpy($$,$1);}
        |     class {strcpy($$,$1);}
        ;

class: CLASS class_name COBRAC class_program CCBRAC SEMICOLON{
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
};

class_name: ID {strcpy($$,$1);}
        | { $$ = strdup("");};

class_program: class_program specifier class_inner_statements {
        strcat($1,$2);
        strcat($1,$3);
        strcpy($$,$1);
                }
        | class_program class {
        strcat($1,$2);
        strcpy($$,$1);
                }
        | { $$ = strdup("");};

class_inner_statements: function {strcpy($$,$1);};
        | declaration SEMICOLON {strcat($1,$2);strcpy($$,$1);};

specifier: PRIVATE COLON  {strcat($1,$2);strcpy($$,$1);};
        | PUBLIC COLON  {strcat($1,$2);strcpy($$,$1);};
        | { $$ = strdup("");};

program:   function {strcpy($$,$1);}
        | declaration SEMICOLON {strcat($1,$2);strcpy($$,$1);};

function: type ID ROBRAC arguments_with_type RCBRAC complex_statement{
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
};

return_statement: RETURN expression SEMICOLON  {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        | RETURN SEMICOLON {strcat($1,$2);strcpy($$,$1);};

function_call:  type variables ASSIGN ID ROBRAC arguments_without_type RCBRAC{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcat($1,$7);
        strcpy($$,$1);
                };
        |       variables ASSIGN ID ROBRAC arguments_without_type RCBRAC{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
                };
        |      ID ROBRAC arguments_without_type RCBRAC{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcpy($$,$1);
                };

arguments_with_type: arguments_with_type COMMA type variables{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcpy($$,$1);
};
        |  type variables {strcat($1,$2);strcpy($$,$1);}
        |{ $$ = strdup("");};

arguments_without_type: arguments_without_type  COMMA arguments {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       arguments {strcpy($$,$1);}
        | { $$ = strdup("");};

arguments: variables | ICONST | FCONST;

statements:  statements statement {strcat($1,$2);strcpy($$,$1);} 
        | { $$ = strdup("");};

statement:     simple_statement {strcpy($$,$1);}
        |       complex_statement {strcpy($$,$1);};

complex_statement: COBRAC statements CCBRAC {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};

simple_statement: if_statement  {strcpy($$,$1);}
        |       while_statement {strcpy($$,$1);}
        |       dowhile_statement {strcpy($$,$1);}
        |       for_statement {strcpy($$,$1);}
        |       function_call SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       declaration SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       BREAK SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       CONTINUE SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       assignment SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       unary SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       ICONST SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       return_statement {strcpy($$,$1);}
        |       SEMICOLON {strcpy($$,$1);};
        |       input_and_output_statements {strcpy($$,$1);};

input_and_output_statements: input_statements {strcpy($$,$1);}
                        | output_statements{strcpy($$,$1);};

input_statements : CIN input {strcat($1,$2);strcpy($$,$1);};

input: input BRSHIFT variables {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |  BRSHIFT variables {strcat($1,$2);strcpy($$,$1);};
        
output_statements: COUT output{strcat($1,$2);strcpy($$,$1);};

output: output BLSHIFT variables{strcat($1,$2);strcat($1,$3);strcpy($$,$1);}; 
        | BLSHIFT variables {strcat($1,$2);strcpy($$,$1);}
  

declaration: type name {strcat($1,$2);strcpy($$,$1);};

name: name COMMA declare {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        | declare {strcpy($$,$1);};

declare: assignment {strcpy($$,$1);}
        | variables {strcpy($$,$1);};
	
if_statement:   IF ROBRAC multi_exp RCBRAC statement if_body{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
};

if_body:        elseif_statement {strcpy($$,$1);}
        |       %prec LOWER { $$ = strdup("");};

elseif_statement: ELSEIF ROBRAC multi_exp RCBRAC statement %prec LOWER {
        strcpy($1,$2);
        strcpy($1,$3);
        strcpy($1,$4);
        strcpy($1,$5);
        strcat($$,$1);
};
        |       ELSEIF ROBRAC multi_exp RCBRAC statement elseif_statement{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
};
        |       ELSE statement {strcat($1,$2);strcpy($$,$1);}
        ;

for_statement: FOR ROBRAC expression_statement expression_statement multi_exp RCBRAC statement{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcat($1,$7);
        strcpy($$,$1);
};
        |      FOR ROBRAC expression_statement expression_statement assignment RCBRAC statement{
       strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcat($1,$7);
        strcpy($$,$1);
};
        |      FOR ROBRAC expression_statement expression_statement RCBRAC statement{
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcat($1,$5);
        strcat($1,$6);
        strcpy($$,$1);
};

while_statement: while statement {strcat($1,$2);strcpy($$,$1);};

while:          WHILE ROBRAC multi_exp RCBRAC{
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcpy($$,$1);
};
        |       WHILE ROBRAC assignment RCBRAC {
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcpy($$,$1);
}
        ;

dowhile_statement:      DO statement while SEMICOLON{
        strcat($1,$2);
        strcat($1,$3);
        strcat($1,$4);
        strcpy($$,$1);
};

assignment: variables ASSIGN multi_exp {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};;

expression_statement: assignment SEMICOLON{strcat($1,$2);strcpy($$,$1);}
        |       multi_exp SEMICOLON {strcat($1,$2);strcpy($$,$1);}
        |       SEMICOLON {strcpy($$,$1);};

multi_exp: multi_exp COMMA expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression {strcpy($$,$1);};

expression: expression PLUS expression  {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression MINUS expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};  
        |       expression DIVIDE expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression POINTER expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression MOD expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression OR expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression AND expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression EQ expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression NEQ expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression LT expression{strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression LTE expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression GTE expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression GT expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       BOR expression{strcat($1,$2);strcpy($$,$1);}
        |       BAND expression{strcat($1,$2);strcpy($$,$1);}
        |       expression XOR expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       BNOT expression{strcat($1,$2);strcpy($$,$1);}
        |       NOT expression {strcat($1,$2);strcpy($$,$1);}
        |       expression BLSHIFT expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       expression BRSHIFT expression {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       ROBRAC expression RCBRAC {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};
        |       INC expression{strcat($1,$2);strcpy($$,$1);}
        |       expression INC{strcat($1,$2);strcpy($$,$1);}
        |       DEC expression{strcat($1,$2);strcpy($$,$1);}
        |       expression DEC{strcat($1,$2);strcpy($$,$1);}
        |       MINUS variables {strcat($1,$2);strcpy($$,$1);}
        |       ICONST {strcpy($$,$1);}
        |       FCONST {strcpy($$,$1);}
        |       variables {strcpy($$,$1);};

unary:          unary INC{strcat($1,$2);strcpy($$,$1);}
        |       INC unary{strcat($1,$2);strcpy($$,$1);}
        |       DEC unary {strcat($1,$2);strcpy($$,$1);}
        |       unary DEC {strcat($1,$2);strcpy($$,$1);}
        |       variables {strcpy($$,$1);}
    ;

variables:
        ID multi_dim {strcat($1,$2);strcpy($$,$1);}
        | pointer ID multi_dim {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};

multi_dim: array {strcpy($$,$1);}
        | { $$ = strdup("");};

pointer: pointer POINTER {strcat($1,$2);strcpy($$,$1);};
        | POINTER {strcpy($$,$1);};

array: array array_dim {strcat($1,$2);strcpy($$,$1);};
        | array_dim {strcpy($$,$1);};

array_dim: SOBRAC ICONST SCBRAC {strcat($1,$2);strcat($1,$3);strcpy($$,$1);};

type:     INT    {strcpy($$,$1);}
        | FLOAT  {strcpy($$,$1);}
        | CHAR   {strcpy($$,$1);}
        | DOUBLE {strcpy($$,$1);}
        | VOID   {strcpy($$,$1);}


%%


#include"lex.yy.c"
int main(){
    return yyparse();
}
void yyerror(const char*s)
{
        fprintf(stderr,"%s\n",s);
}
