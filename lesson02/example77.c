#include<stdio.h>
#include<stdlib.h>
#define SIZE 128

int main()
{
	char a[] = "she is a beautiful girl !!!";
	char b[SIZE];
	char *p1;
	char *p2;

	p1 = a;
	p2 = b;

	for(;*p1 != '\0';p1++,p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("b:%s\n",b);
	printf("b:%s\n",p2);

	return 0;
}
