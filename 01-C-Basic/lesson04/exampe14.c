#include<stdlib.h>
#include<stdio.h>

//打印二进制数据
void dec_to_bin(int num)
{
    if(num >0)
    {
        dec_to_bin(num/2);
        printf("%d",num%2);
    }
}

int main()
{
    int a = 1234567898;
    char *pa;//char型指针变量，指向int a的内存地址
    pa = (char *)&a;//char型指针变量，指向int a的内存地址
    int i;
    //打印每个字节的内存数据头地址及数据
    for(i=0;i<sizeof(a);i++)
    {
        printf("%p \t %d \n",(pa+i),*(pa+i));
    }
    dec_to_bin(a);//打印二进制数据
    printf("\n");

    return 0;
}