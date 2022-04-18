#include<stdlib.h>
#include<stdio.h>
#define SIZE 4

int main()
{
	int a[4] = {1,3,5,7};
	int (*p)[4];//指针变量p指向4包含4个整型元素的一维数组
	p = &a;
	printf("%d\n",(*p)[3]);
	printf("%d\n",*(*p+3));//获取地4个元素的值
	
	printf("%p\n",*p);
	printf("%p\n",*p+1);
	printf("%p\n",*p+2);
	printf("%p\n",*p+3);
	return 0;
}

