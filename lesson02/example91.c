#include<stdio.h>
#include<stdlib.h>

int max(int,int);

int main()
{
	int (*p)(int,int);
	int x,y,result;
	printf("请输入x和y:\n");
	scanf("%d,%d",&x,&y);
	
	p = max;
	
	//result = max(x,y);
	result = (*p)(x,y);
	printf("max=%d\n",result);
	return 0;
}

int max(int a,int b)
{
	return a > b?a:b;
}
