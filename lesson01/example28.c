#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int main()
{
		int a,b;
		int *pa,*pb;
		int m;
		pa = &a;
		pb = &b;
		printf("请输入两个整数a和b:\n");
		scanf("%d %d",pa,pb);
		m = max(*pa,*pb);
		printf("m=%d\n",m);
		printf("&max=%p\n",&max);
	return 0;
}

int max(int a,int b)
{
	return a>b?a:b;
}
