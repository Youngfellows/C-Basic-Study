#include<stdio.h>
#include<stdlib.h>
int main()
{
	void *p;
	printf("指针变量p的内存地址: %p\n",p);
	p++;
	printf("指针变量p的内存地址: %p\n",p);
	p++;
	printf("指针变量p的内存地址: %p\n",p);
	p++;
	printf("指针变量p的内存地址: %p\n",p);


	return 0;
}
