#include <stdio.h>

int main()
{
   int a=1;
   int bit=0;
   do
   bit++;	
   while(a<<=1);
   printf("%d %s\n",bit,"bites a szohossz a gepen");
} 
