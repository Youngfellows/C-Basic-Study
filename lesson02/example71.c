#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 4

int main()
{
		int a[ROW][COLUMN] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		int (*p)[4],i,j;//指针变量p指向4包含4个整型元素的一维数组
		p = a;//p指向二维数组的0行
		printf("请输入要求输出元素的行列号:\n");
		scanf("%d,%d",&i,&j);
		printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));

		return 0;
}