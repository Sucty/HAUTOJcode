#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main (void)
{
double a, w;
scanf("%lf",&a);
if (a<500)
w=a;
else if ((a>=500) &&(a<1000))
w=0.95*a;
else if ((a>=1000)&&(a<3000))
w=0.9*a;
else if((a>=3000)&&(a<5000))
w=0.85*a;
else
w=0.8*a;
printf("%.2f\n",w);
return 0;
}
