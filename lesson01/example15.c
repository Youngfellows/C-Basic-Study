#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a = 37;
		int b = 24;
		int *pm;
		pm = &a;
		printf("pm=%p,&a=%p\n",pm,&a);
		printf("*pm=%d,a=%d\n",*pm,a);

		pm ++;
		printf("pm=%p,&a=%p\n",pm,&a);
		printf("*pm=%d,a=%d\n",*pm,a);
		pm = &b;
		printf("pm=%p,&b=%p\n",pm,&b);
		printf("*pm=%d,b=%d\n",*pm,b);
	return 0;
}
