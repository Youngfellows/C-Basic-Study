#include<stdio.h>
#include<stdlib.h>
#define ROW 3//3行
#define COLUMN 4//4列

int main()
{
	//找出一个二维数组中的最大值及其位置
	int array[ROW][COLUMN] = {{12,3,5,23},{21,15,45,18},{4,21,34,6}};
	int i,j,max,row,column;
	int *p1,*p2;//int * 型指针变量p1,p2
	int **p;//指向指针的指针变量p
	
	p = &p2;//p指向指针变量p2
	
	printf("打印二维数组: \n");
	for(i=0;i<ROW;i++)
	{
		p1 = &array[i][COLUMN-1];//P1指向每一行的最后一个元素
		for(p2 = &array[i][0];p2<=p1;p2++)
		{
			printf("%d ",**p);
		}
		printf("\n");

	}
	printf("\n");
	
	//第一种方法找出一个二维数组中的最大值及其位置
	max = array[0][0];
	for(i=0;i<ROW;i++)
	{
		p1 = &array[i][COLUMN-1];//P1指向每一行的最后一个元素
		for(p2 = &array[i][0];p2<=p1;p2++)
		{
			if(max<**p)
			{
				max = **p;//最大值
				row = i+1;//记录行数
				column = COLUMN - (p1 - p2);//记录列位置
			}
		}
	}
	


	printf("二维数组中的最大值是: max = %d,i=%d,j=%d\n",max,row,column);

	return 0;
}
