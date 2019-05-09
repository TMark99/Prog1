%{
 #include <string.h>
 int szamok=0;
%}
%% 		
"0"	{printf("o");}
"1"	{printf("i");}
"3"	{printf("e");}
"4"	{printf("a");}
"5"	{printf("s");}
"7"	{printf("t");}

"o"	{printf("0");}
"i"	{printf("1");}
"e"	{printf("3");}
"a"	{printf("4");}
"s"	{printf("5");}
"t"	{printf("7");}
%%

int 
main()
{
 yylex();
 printf("%d szam",szamok); 							
return 0;
}
