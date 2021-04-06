#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char str[] = "www.google.com,i love you shenzheng!!!!";
		char *ps,*pd;
		ps = str;
		pd = strdup(ps);
		fputs(pd,stdout);
	return 0;
}
