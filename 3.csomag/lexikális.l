%{
 #include <string.h>
 int szamok =0;
%}
%% 		
[0-9]+		{++szamok;}
%%

int 
main()
{
 yylex();
 printf("%d szam",szamok); 							
return 0;
}
