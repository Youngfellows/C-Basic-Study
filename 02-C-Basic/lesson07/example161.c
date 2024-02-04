#include<stdio.h>

#define ROW 3
#define COLUMN 3

void input(int array[ROW][COLUMN],int row,int column);
void print(int array[ROW][COLUMN],int row,int column);
int  _sum(int array[ROW][COLUMN],int row,int column);

int main()
{
		int sum = 0;
		//求矩阵的对角线元素之和
		int array[ROW][COLUMN];
		input(array,ROW,COLUMN);
		printf("矩阵元素是:\n");
		print(array,ROW,COLUMN);
		sum = _sum(array,ROW,COLUMN);
		printf("sum=%d\n",sum);

		return 0;
}

void input(int array[ROW][COLUMN],int row,int column)
{
		int i,j;
		int sum = 0;
		printf("请输入一个%d x %d的矩阵:\n",ROW,COLUMN);
		for(i = 0; i < ROW; i++)
		{
				for(j = 0; j < COLUMN; j++)
				{
						scanf("%3d",&array[i][j]);
				}
		}
}

void print(int array[ROW][COLUMN],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				for(j = 0;j < column;j++)
				{
						printf("%d\t",array[i][j]);
				}
				printf("\n");
		}
}

int  _sum(int array[ROW][COLUMN],int row,int column)
{
		int i,j;
		int sum = 0;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				if(i==j)
				{
					sum += array[i][j];
				}
			}
		}
		return sum;
}
