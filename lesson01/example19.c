#include<stdio.h>
#include<stdlib.h>
int main()
{
		int x,y;
		int *p;
		int **pp;
		p = &x;
		pp = &p;

		printf("&x=%p\n",&x);
		printf("&y=%p\n",&y);
		printf("p=%p\n",p);
		printf("pp=%p\n",pp);

		printf("*pp=%p,p=%p,&x=%p\n",*pp,p,&x);
		**pp = 37;
		printf("x=%d\n",x);

		*pp=&y;
		**pp=21;
		printf("y=%d\n",y);
	return 0;
}
