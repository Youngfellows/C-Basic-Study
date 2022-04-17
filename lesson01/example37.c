#include<stdlib.h>
#include<stdio.h>

typedef int (*FuncType)(int,int);//函数指针,指向的是函数
int add(int,int);
int sub(int,int);
int ride(int,int);
int divide(int,int);
int func(FuncType,int,int);//函数指针作为函数的参数

int main()
{
		int a,b,result;
		int *pa,*pb;
		pa = &a;
		pb = &b;
		printf("请输入a,b:\n");
		scanf("%d %d",pa,pb);
		result = func(add,*pa,*pb);
		printf("result:%d\n",result);
		result = func(sub,*pa,*pb);
		printf("result:%d\n",result);
		result = func(ride,*pa,*pb);
		printf("result:%d\n",result);
		result = func(divide,*pa,*pb);
		printf("result:%d\n",result);
		return 0;
}

int add(int a,int b)
{
		return a+b;
}


int sub(int a,int b)
{
		return a-b;
}
int ride(int a,int b)
{
		return a*b;
}
int divide(int a,int b)
{
		return(int) (a/b);
}

int func(FuncType p,int a,int b)
{
	//通过函数指针调用函数
	return (*p)(a,b);
}
