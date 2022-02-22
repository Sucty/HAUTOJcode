#include<stdio.h>
int main()
{
	char a,b,c;
  scanf("%c %c %c",&a,&b,&c);
  if(a>=b) a=a;
  else a=b;
  if(a>=c) a=a;
  else a=c;
  printf("%c",a);
  return 0;
 }
