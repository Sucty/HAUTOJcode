#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch=getchar();
     if
      ((ch>='A')&&(ch<='Z'))
        printf("%d",ch-64);
     if
        (ch>='a'&&ch<='z')
        printf("%d",ch-96);

    return 0;
}
