#include<stdio.h>
#define MAX(m,n) (m>n)?m:n
int main()
{
	//定义带参数的宏
	int i,j,max;
	printf("请输入两个整数i和j:\n");
	scanf("%d %d",&i,&j);
	max = MAX(i,j);
	printf("max = %d\n",max);
	return 0;
}
