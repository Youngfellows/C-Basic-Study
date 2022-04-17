#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

int main()
{
		char src[] = "www.google.com is google website!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = src;//字符型指针变量ps指向字符串src
		pd = dest;//字符型指针变量pd指向字符串dest
		printf("%s\n",ps);
		printf("%s\n",pd);

		p = strcpy(pd,ps);//字符串拷贝
		fputs(pd,stdout);
		printf("\n");
		fputs(p,stdout);
	return 0;
}
