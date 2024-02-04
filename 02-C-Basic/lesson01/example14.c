#include<stdio.h>
#include<stdlib.h>
int main()
{
		int m;
		int *pm;
		pm = &m;
		m = 22;
		printf("%p\n",pm);
		printf("%p\n",&m);
		printf("m=%d,*pm=%d\n",m,*pm);

		*pm = 38;
		printf("%p\n",pm);
		printf("%p\n",&m);
		printf("m=%d,*pm=%d\n",m,*pm);
	return 0;
}
