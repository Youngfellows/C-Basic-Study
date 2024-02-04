#include<stdlib.h>
#include<stdio.h>
typedef int (*FunType)(int,int);//定义函数指针类型FunType
int add(int,int);//函数声明
int sub(int,int);
int func(FunType,int,int);//函数指针类型做为函数的参数
int main()
{
	int a,b,add_result,sub_result;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("请输入两个整数a和b:\n");
	scanf("%d %d",pa,pb);
	
	add_result = func(add,*pa,*pb);//函数指针类型做为函数的参数
	sub_result = func(sub,*pa,*pb);//函数指针类型做为函数的参数
	printf("add_result = %d,sub_result = %d\n",add_result,sub_result);	

	return 0;
}

//函数定义
int add(int a,int b)
{
	return a + b;
}

int sub(int a,int b)
{
	return a - b;
}

//函数指针类型做为函数的参数
int func(FunType p,int a,int b)
{
	int result;
	//两种调用方式都可以
	//result = (*p)(a,b);
	result = p(a,b);
	return result;
}
























