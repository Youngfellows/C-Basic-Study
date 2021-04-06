#include<stdlib.h>
#include<stdio.h>
#define SIZE 4

int main()
{
	int a[4] = {1,3,5,7};
	int (*p)[4];
	p = &a;
	printf("%d\n",(*p)[3]);

	return 0;
}

