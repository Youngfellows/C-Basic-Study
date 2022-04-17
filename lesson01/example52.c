#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 128

void strcpy1();
void strcpy2();
void strcpy3();
void strcpy4();

int main()
{
		strcpy1();
		strcpy2();
		strcpy3();
		strcpy4();
		return 0;
}


void strcpy1()
{
		char str[] = "huawei is a great company!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = str;//字符型指针变量ps指向字符串str
		pd = dest;//字符型指针变量ps指向字符串dest

		p = memcpy(pd,ps,strlen(ps));//拷贝字符串
		dest[strlen(ps)] = '\0';
		fputs(pd,stdout);
		printf("\n");
}

void strcpy2()
{
		char str[] = "huawei is a great company!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = str;
		pd = dest;

		p = memcpy(pd,ps,5);//拷贝字符串5个字符
		dest[5] = '\0';//添加字符串结束标志
		fputs(pd,stdout);
		printf("\n");
}

void strcpy3()
{
		char str[] = "huawei is a great company!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = str;
		pd = dest;

		p = memcpy(pd,ps+3,3);//从第3个字符开始拷贝,只拷贝3个字符
		dest[3] = '\0';//添加字符串结束标志
		fputs(pd,stdout);
		printf("\n");
}

void strcpy4()
{
		char str[] = "huawei is a great company!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = str;
		pd = dest;

		p = memcpy(pd,ps,strlen(ps));
		fputs(pd,stdout);
		printf("\n");
}
