#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //字符串转换为整数
    char *p1="-139";//字符串1
    char *p2 = "0xff";//字符串2
    int sum = 0;
    sum = atoi(p1)+atoi(p2);///字符串转换为整数
    printf("%d\n",sum);

    return 0;
}
