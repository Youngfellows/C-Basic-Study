#include<stdlib.h>
#include<stdio.h>
int main()
{
	//指针变量的定义
	int m;//int 型变量m
	int *pm;//指针变量pm，用于存放int 型变量的指针
	printf("%p\n",pm);//指针变量的地址值
	pm = &m;//将变量m的指针(变量m的地址)赋给指针变量pm
	m = 22;
	printf("%p\n",pm);//指针变量的地址值
	printf("%p\n",&m);//变量的地址值
	printf("m = %d,*pm = %d\n",m,*pm);
	
	*pm = 38;
	printf("pm的地址: pm = %p,变量m的地址: &m = %p\n",pm,&m);
	printf("m = %d,*pm = %d\n",m,*pm);//指针变量pm指向的内存的内容(值)

	return 0;
}
