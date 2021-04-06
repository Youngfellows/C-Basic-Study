#include<stdlib.h>
#include<stdio.h>
#define SIZE 5

int main()
{
		int a[SIZE] = {33,44,17,28,39};
		int **p;
		int i;
		int *num[SIZE];
		for(i=0;i<SIZE;i++)
		{
			num[i] = &a[i];
		}

		p = num;
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",**p);
			p++;
		}
		printf("\n");
		return 0;
}
