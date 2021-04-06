#include<stdio.h>
#include<stdlib.h>

int max(int,int);

int main()
{
	int i,j,result;
	int *pa,*pb;
	int (*p)(int,int);
	pa = &i;
	pb = &j;
	p = &max;
	printf("请输入a和b:\n");
	scanf("%d %d",pa,pb);
	result = (*p)(*pa,*pb);
	printf("result=%d\n",result);
	return 0;
}


int max(int a,int b)
{
	return a>b?a:b;
}
