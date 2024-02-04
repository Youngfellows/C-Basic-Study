#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b);//函数声明，交换两个变量的值
int main()
{
	int i = 3;
	int j = 4;
	int *a = &i;
	int *b = &j;
	printf("交换前的值: a = %d,b = %d\n",*a,*b);
	printf("0指针变量a和b的地址: a = %p,b = %p\n",a,b);
	swap(a,b);//地址传递
	printf("交换后的值: a = %d,b = %d\n",*a,*b);
	return 0;
}

//函数定义
void swap(int *a,int *b)
{
	printf("1指针变量a和b的地址: a = %p,b = %p\n",a,b);
	int temp;//临时变量
	temp = *a;
	*a = *b;
	*b = temp;
}
