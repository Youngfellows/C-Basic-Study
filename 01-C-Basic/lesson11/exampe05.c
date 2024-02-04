#include<stdio.h>
#include<stdlib.h>
#define SIZE 128//缓冲区 大小

int main()
{
    //字符串转化为浮点数
    char *p1 = "123.456789";

    //将浮点数转化为字符串
    double num = 123.456789;
    char array[SIZE];
    char *p;//转化后的字符串
    p = array;

    printf("%.3f\n",atof(p1));//字符串转化为浮点数

    gcvt(num,8,p);//将浮点数转化为字符串
    printf("//将浮点数转化为字符串: %s\n",p);

    gcvt(num,13,p);//将浮点数转化为字符串
    printf("//将浮点数转化为字符串: %s\n",p);

    return 0;
}
