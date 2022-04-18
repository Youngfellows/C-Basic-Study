#include<stdio.h>
#include<stdlib.h>

/**
 * @brief 函数申明,求a/b的最大值
 * 
 * @return int 
 */
int max(int,int);

int main()
{
	int x,y,result;
	printf("请输入x和y:\n");
	scanf("%d,%d",&x,&y);
	result = max(x,y);
	printf("max=%d\n",result);
	return 0;
}

int max(int a,int b)
{
	return a > b?a:b;
}
