#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    int b=2;

    printf("%s\n%d %d\n","szorzassal:",a,b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("%d %d\n",a,b);
}
