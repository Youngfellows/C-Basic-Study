#include<stdio.h>
#include<stdlib.h>
void method();//函数声明

int main()
{
	extern int a,b;
	printf("a=%d ,b=%d\n",a,b);
	method();
	printf("a=%d ,b=%d\n",a,b);

	return 0;
}
int a = 100;
int b = 200;
//函数定义
void method()
{
	a = 199;
	b = 307;	
}
