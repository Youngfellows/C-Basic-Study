#include<stdlib.h>
#include<stdio.h>

void method();

int main()
{
		method();
		method();
		return 0;
}

void method()
{
		int m = 0;
		static int n = 0;
		m++;
		n++;
		printf("m=%d,n=%d\n",m,n);
}
