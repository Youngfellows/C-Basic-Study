#include<stdio.h>
#include<stdlib.h>

int main()
{
    //将不同进制的字符串转化为整数
    char *p1 = "1111";//二进制
    char *p2 = "22234";//十进制
    char *p3 = "ABCD";//十六进制

    printf("ch1 = %ld\n",strtol(p1,NULL,2));
    printf("ch2 = %ld\n",strtol(p2,NULL,10));
    printf("ch3 = %ld\n",strtol(p3,NULL,16));

    return 0;
}