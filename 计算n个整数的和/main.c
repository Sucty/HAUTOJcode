#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, number,sum;
    printf("�����������ĸ�����\n");/*��ʾ���뼸����*/
    scanf("%d",&n);
    sum = 0;
    printf("������%d��������\n",n);/*%d��������n�������������һ��ֻ¼��һ��*/

    for (i = 1;i <= n; i++)
    {
        scanf("%d",&number);/*ÿ¼��һ��������ֵ*/
        sum += number;/*ִ��һ�Ρ��ӡ�����*/
    }
    printf("%d\n",sum);

    return 0;
}

