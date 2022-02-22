#include <stdio.h>
#include <stdlib.h>

int main(viod)
{   int x;
    scanf("%d",&x);
    printf("%d\n%d\n%d\n",(x%100)%10,(x%100)/10,x/100);
    return 0;
}
