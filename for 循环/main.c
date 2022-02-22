#include <stdio.h>
#include <stdlib.h>

int main()
{
   double i, n , sum;
   int sign;
   scanf("%lf",&n);
    sum = 0;
    i =1;
    sign=1.0;

    for(i=1;i<=n;i++)

   {
       sum +=1/(i*2-1)*sign;
       sign = -sign ;
   }
   printf("%.2f\n",sum);

    return 0;
}
