#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char str[] = "www.google.com,i love you shenzheng!!!!";
		char *ps,*pd;
		ps = str;//字符型指针变量ps指向字符串str
		pd = strdup(ps);//字符串拷贝
		fputs(pd,stdout);
	return 0;
}
