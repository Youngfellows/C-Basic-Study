#include<stdio.h>
#include<stdlib.h>
void method();//函数声明
int main()
{
	//静态变量
	method();//第一次调用
	method();//第二次调用
	return 0;
}

//函数定义
void method()
{
	int m =0;
	static int n = 0;//静态局部变量
	m++;
	n++;
	printf("m = %d,n = %d\n",m,n);
}
