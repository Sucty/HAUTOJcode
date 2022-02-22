#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, number,sum;
    printf("请输入整数的个数：\n");/*提示输入几个数*/
    scanf("%d",&n);
    sum = 0;
    printf("请输入%d个整数：\n",n);/*%d个整数既n个整数，计算机一次只录入一个*/

    for (i = 1;i <= n; i++)
    {
        scanf("%d",&number);/*每录入一次整数的值*/
        sum += number;/*执行一次”加“操作*/
    }
    printf("%d\n",sum);

    return 0;
}

