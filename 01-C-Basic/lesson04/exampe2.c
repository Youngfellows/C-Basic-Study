#include<stdio.h>
#include<stdlib.h>
int main()
{
	//指针的运算
	int a = 37;
	int b = 234;
	int *pm;//指针变量pm
	pm = &a;//指针变量pm指向变量a的地址
	printf("指针变量pm的地址: pm = %p ,变量a的地址: &a = %p,a的值: a = %d,*pm = %d\n",pm,&a,a,*pm);
	
	pm ++;//指针向下移动一位(4个字节)
	pm = &b;	
	printf("指针变量pm的地址: pm = %p ,变量a的地址: &a = %p,a的值: a = %d,b = %d\n",pm,&a,a,*pm);
	
	return 0;
}
