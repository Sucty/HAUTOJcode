#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int x, y;
    scanf("%d%d",&x,&y);
    if (y==2)
        {
        if((x%400 == 0) || ((x%4==0) && (x%100 !=0)))
        printf("29\n");
         else
        printf("28\n");
        }
     else  if((y==1)||(y==3)||(y==5)||(y==7)||(y==8)||(y==10)||(y==12))
            printf("31\n");
            else
            printf("30\n");
    return 0;


}
