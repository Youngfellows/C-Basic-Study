#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 4

int main()
{
		int array[ROW][COLUMN] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		int *p;//int 型指针变量p,p指向二维数组的每一个元素
		for(p=array[0];p<array[0]+ROW*COLUMN;p++)
		{
				if((p-array[0])%4==0)
				{
					printf("\n");
				}
				printf("%d ",*p);
		}
		printf("\n");
		return 0;
}
