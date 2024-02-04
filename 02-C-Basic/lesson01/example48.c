#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char str[] = "www.google.com is website!!!";
		char *p;
		p = str;//字符型指针变量p指向字符串str
		printf("%s\n",p);

		memset(p,'H',3);//填充字符
		fputs(p,stdout);
		return 0;
}
