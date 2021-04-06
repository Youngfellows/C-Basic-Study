#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

int main()
{
		char src[] = "www.google.com is google website!!!";
		char dest[SIZE];
		char *ps,*pd,*p;
		ps = src;
		pd = dest;
		printf("%s\n",ps);
		printf("%s\n",pd);

		p = strcpy(pd,ps);
		fputs(pd,stdout);
		printf("\n");
		fputs(p,stdout);
	return 0;
}
