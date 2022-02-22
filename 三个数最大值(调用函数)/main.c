#include <stdio.h>
#include <stdlib.h>
int max(int a,int b);
int main(void)
{
    int a, b, c, maxi;
    scanf("%d%d%d",&a,&b,&c);
    maxi = max(a, b);
    maxi = max(c, maxi);
    printf("%d\n",maxi);
    return 0;
}

    int max (int a,int b)
{

   if(a>b)
    return a;
    else
        return b;
}
