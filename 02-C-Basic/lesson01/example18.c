#include<stdio.h>
#include<stdlib.h>
int main()
{
		char *pc;
		int *p;
		int m = 8;
		printf("%p\n",pc);
		printf("%p\n",p);
		printf("%p,m=%d\n",&m,m);
		p = (int *)pc;
		printf("%p\n",pc);
		
		pc = &m;
		*pc = 23;
		printf("m=%d\n",m);
		return 0;
}
