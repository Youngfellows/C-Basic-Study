#include<stdlib.h>
#include<stdio.h>
int max(int a,int b);//函数声明
int main()
{
	printf("函数max(int a,int b)的地址: %p \n",&max);		
	return 0;
}

//函数定义
int max(int a,int b)
{
	return a>b?a:b;
}
