#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	printf("指针变量P的地址:%p\n",p);
	p++;//int * 型指针变量，移动一位刚好是4个字节
	printf("指针变量P的地址:%p\n",p);
	return 0;
}
