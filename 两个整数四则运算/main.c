#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n",a+b, a-b, a*b, a/b, a%b);
    printf("%p\n",&a); 
    return 0;
}
