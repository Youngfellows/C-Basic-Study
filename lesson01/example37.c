#include<stdlib.h>
#include<stdio.h>

typedef int (*FuncType)(int,int);
int add(int,int);
int sub(int,int);
int ride(int,int);
int divide(int,int);
int func(FuncType,int,int);

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
	return (*p)(a,b);
}
