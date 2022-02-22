#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    ch=getchar();
    if(ch >= 'a' && ch <= 'z')
        ch -= 32;
    printf("%c",ch);
    return 0;
}
