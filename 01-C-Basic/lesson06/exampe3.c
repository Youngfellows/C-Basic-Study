#include<stdio.h>
#include<stdlib.h>
int recursion(int);//函数声明，函数递归，求函数的阶层
int main()
{
	int number,sum,*p;
	p = &number;
	
	printf("请输入一个整数:\n");
	scanf("%d",p);
	
	sum = recursion(*p);
	printf("%d! = %d\n",*p,sum);
	return 0;
}

//函数定义，求阶层
int recursion(int a)
{
	int temp;
	if(a==1)
	{
		return 1;
	}else
	{
	 	temp = a*recursion(a-1);
		return temp;
	}
}
