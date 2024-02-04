#include<stdio.h>
#include<stdlib.h>
#define SIZE 128

int main()
{
	char a[] = "she is a beautiful girl !!!";
	char b[SIZE];
	char *p1;
	char *p2;

	p1 = a;//字符型指针变量p1,指向字符串a
	p2 = b;//字符型指针变量p2,指向字符串b

	//拷贝字符串
	for(;*p1 != '\0';p1++,p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("b:%s\n",b);
	printf("a:%s\n",p1);
	printf("b:%s\n",p2);
	//fputs(p1,stdout);
	//fputs(p2,stdout);

	return 0;
}
