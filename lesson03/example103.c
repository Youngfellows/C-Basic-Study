#include<stdio.h>
#include<stdlib.h>

int main()
{
		int a = 3;
		int *p,*q;
		p = &a;
		q = p;

		printf("%d,%d,%d\n",a,*p,*q);
		printf("&p=%p,&q=%p,&a=%p\n",&p,&q,&a);
		printf("p=%p,q=%p,&a=%p\n",p,q,&a);

		return 0;
}
