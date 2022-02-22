#include <stdio.h>
#include <stdlib.h>

int main()
{   double a, b, c;
    scanf("%lf%lf%lf",&a,&b,&c);
    b=(a+b+c)/3;
    printf("%.2f",b);

    return 0;
}
