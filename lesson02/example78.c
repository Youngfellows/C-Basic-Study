#include<stdio.h>
#include<stdlib.h>
#define SIZE 128

int main()
{

	//指针一定要定义指向,否则会变成野指针
	//char a[] = "she is a beautiful girl !!!";
	//char b[SIZE];
		char *p1="she is a beautiful girl !!!";
		char *p2;

	//p1 = a;
	//p2 = b;

	for(;*p1 != '\0';p1++,p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("b:%s\n",p1);
	printf("b:%s\n",p2);

	return 0;
}
