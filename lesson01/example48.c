#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char str[] = "www.google.com is website!!!";
		char *p;
		p = str;
		printf("%s\n",p);

		memset(p,'H',3);
		fputs(p,stdout);
		return 0;
}
