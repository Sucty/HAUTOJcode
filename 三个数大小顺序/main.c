#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,m,n;
    scanf("%d%d%d",&x,&y,&z);
    if (x > y)

    {
       m =x;
       n =y;
    }
    else
     {
        m = y;
        n = x;
     }

    if (m > z)

    {
        if (z >n)
         {

            printf(m,z,n);
         }

        else
         {
             printf(m,n,z);
         }
    }
     else
     {

         printf(z,m,n);
     }
    return 0;
}
