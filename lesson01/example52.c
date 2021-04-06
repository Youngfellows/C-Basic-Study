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
		ps = str;
		pd = dest;

		p = memcpy(pd,ps,strlen(ps));
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

		p = memcpy(pd,ps,5);
		dest[5] = '\0';
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

		p = memcpy(pd,ps+3,3);
		dest[3] = '\0';
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
