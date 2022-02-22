#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,w;
    scanf("%lf",&a);
    if(a<=10000)
        w=1500+0.05*a;
       else if((a>=10000) && (a<=50000))
        w=1500+500+(a-10000)*0.03;
              else
        w=1500+1700+(a-50000)*0.02;
    printf("%.2f",w);
    return 0;
}
