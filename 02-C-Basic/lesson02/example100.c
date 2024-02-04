#include<stdlib.h>
#include<stdio.h>

int main()
{
		int a = 3;
		int *p1 = &a;
		char *p2;
		void *p3;
		
		//指针类型转换
		p3 = (void *)p1;
		p2 = (char *)p3;

		printf("*p1=%d\n",*p1);
		printf("*p2=%d\n",*p2);
		//p3 = &a;
		//printf("*p3=%d\n",*p3);

		return 0;
}
