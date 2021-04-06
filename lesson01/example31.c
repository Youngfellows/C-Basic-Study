#include<stdio.h>
#include<stdlib.h>

void method();

int main()
{
		extern int a,b;
		printf("a=%d,b=%d\n",a,b);
		method();
		printf("a=%d,b=%d\n",a,b);
		return 0;
}

int a = 100;
int b = 200;

void method()
{
		a = 300;
		b = 400;
}
