#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if
        (a<60)
        printf("E\n");
        else if
          ((a>=60) && (a<=69))
          printf("D\n");
          else if
            ((a>=70) && (a<=79))
            printf("C\n");
            else if
                ((a>=80) && (a<=89))
                printf("B\n");
              else if
                (a>=90)
                printf("A\n");
    return 0;
}
