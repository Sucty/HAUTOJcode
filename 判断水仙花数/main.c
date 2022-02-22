#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, x, y, z;
    scanf("%d",&a);
    x=a/100;
    y=(a-100*x)/10;
    z=(a-100*x-10*y);
    if
        (a==x*x*x+y*y*y+z*z*z)
         printf("yes\n");
    else
         printf("no\n");
    return 0;
}
