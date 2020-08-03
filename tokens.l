%{

%}

%option noyywrap

%x IN_COMMENT

alpha       [a-zA-Z_]
digit       [0-9]
alnum       {alpha}|{digit}

ID          {alpha}{alnum}*
ICONST      [0-9]{digit}*
FCONST      {digit}+"."{digit}+

%%

"class"     {yylval.name = strdup(yytext);return CLASS;}

"cin"       {yylval.name = strdup(yytext);return CIN;}
"cout"      {yylval.name = strdup(yytext);return COUT;}

"char"      {yylval.name = strdup(yytext);return CHAR ; }
"int"       {yylval.name = strdup(yytext);return INT ; }
"float"     {yylval.name = strdup(yytext);return FLOAT ; }
"double"    {yylval.name = strdup(yytext);return DOUBLE; }
"void"		{yylval.name = strdup(yytext);return VOID;}

"else if"   {yylval.name = strdup(yytext);return ELSEIF;}
"else"      {yylval.name = strdup(yytext);return ELSE;}
"if"        {yylval.name = strdup(yytext);return IF;}

"private"   {yylval.name = strdup(yytext);return PRIVATE;}
"public"    {yylval.name = strdup(yytext);return PUBLIC;}

":"         {yylval.name = strdup(yytext);return COLON;}
";"         {yylval.name = strdup(yytext);return SEMICOLON;} 
","         {yylval.name = strdup(yytext);return COMMA; }
"="         {yylval.name = strdup(yytext);return ASSIGN; }

"+"         {yylval.name = strdup(yytext);return PLUS;}
"-"         {yylval.name = strdup(yytext);return MINUS;}
"/"         {yylval.name = strdup(yytext);return DIVIDE;}
"%"		    {yylval.name = strdup(yytext);return MOD;}
"++"        {yylval.name = strdup(yytext);return INC;}
"--"        {yylval.name = strdup(yytext);return DEC;}

"||"        {yylval.name = strdup(yytext);return OR;}
"&&"        {yylval.name = strdup(yytext);return AND;}
"!"         {yylval.name = strdup(yytext);return NOT;}
"|"		    {yylval.name = strdup(yytext);return BOR;}
"&" 	    {yylval.name = strdup(yytext);return BAND;}
"~"		    {yylval.name = strdup(yytext);return BNOT;}
"^"		    {yylval.name = strdup(yytext);return XOR;}
"<<"	    {yylval.name = strdup(yytext);return BLSHIFT;}
">>"	    {yylval.name = strdup(yytext);return BRSHIFT;}

"=="        {yylval.name = strdup(yytext);return EQ;}
"!="        {yylval.name = strdup(yytext);return NEQ;}
"<"         {yylval.name = strdup(yytext);return LT;}
">"         {yylval.name = strdup(yytext);return GT;}
"<="        {yylval.name = strdup(yytext);return LTE;}
">="        {yylval.name = strdup(yytext);return GTE;}

"for"	    {yylval.name = strdup(yytext);return FOR;}
"while"	    {yylval.name = strdup(yytext);return WHILE;}
"do"	    {yylval.name = strdup(yytext);return DO;}

"["         {yylval.name = strdup(yytext);return SOBRAC;}
"]"         {yylval.name = strdup(yytext);return SCBRAC;}
"("         {yylval.name = strdup(yytext);return ROBRAC;}
")"         {yylval.name = strdup(yytext);return RCBRAC;}
"{"         {yylval.name = strdup(yytext);return COBRAC;}
"}"         {yylval.name = strdup(yytext);return CCBRAC;}

"*"         {yylval.name = strdup(yytext);return POINTER;}
"break"		{yylval.name = strdup(yytext);return BREAK;}
"continue"	{yylval.name = strdup(yytext);return CONTINUE;}
"return"    {yylval.name = strdup(yytext);return RETURN;}


{ID}        {yylval.name = strdup(yytext);return ID; }
{ICONST}    {yylval.name = strdup(yytext);return ICONST; }
{FCONST}    {yylval.name = strdup(yytext);return FCONST; }

"//".*   { ;}

<INITIAL>{

"/*"      BEGIN(IN_COMMENT);

}
<IN_COMMENT>{

"*/"      BEGIN(INITIAL);
[^*\n]+   ;
"*"       ;
\n        ;

}


"\n"	        ; 
[ \t]+          ;
.		        ;

%%