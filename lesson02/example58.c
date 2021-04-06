#include<stdio.h>
#include<stdlib.h>

int main()
{
		int a,b;
		int *p1,*p2,*pt;
		a = 7;
		b = 6;
		p1 = &a;
		p2 = &b;

		printf("&a=%p,&b=%p\n",&a,&b);
		printf("a=%d,b=%d\n",a,b);
		printf("p1=%p,p2=%p\n",p1,p2);

		if(*p1 > *p2)
		{
			pt = p1;
			p1 = p2;
			p2 = pt;
		}
		printf("&a=%p,&b=%p\n",&a,&b);
		printf("a=%d,b=%d\n",a,b);
		printf("p1=%p,p2=%p\n",p1,p2);
		printf("max:%d,min:%d\n",*p1,*p2);
	return 0;
}
