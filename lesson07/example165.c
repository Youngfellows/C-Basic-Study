#include<stdio.h>

#define ROW 3
#define COLUMN 3
#define ERROR -1

void input(int array[ROW][COLUMN],int row,int column);
void print(int array[ROW][COLUMN],int row,int column);
int saddle_number(int array[ROW][COLUMN],int row,int column,int *pi,int *pj);

int main()
{
		//输出一个二维数组中的鞍点:即该数在该位置行上最大.列上最小
		int array[ROW][COLUMN];
		int max;
		int xpos,ypos;//行列位置

		printf("请输入一个 %d * %d 的二维数组:\n",ROW,COLUMN);
		input(array,ROW,COLUMN);		
		printf("原始数组是:\n");
		print(array,ROW,COLUMN);
		max = saddle_number(array,ROW,COLUMN,&xpos,&ypos);
		if(max != ERROR)
		{
				printf("在位置(%d,%d)的数%d是鞍数...\n",xpos,ypos,max);
		}else
		{
				printf("该数组没有鞍数!!!\n");
		}

		return 0;
}

void input(int array[ROW][COLUMN],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						printf("array[%d][%d]=",i,j);
						scanf("%d",&array[i][j]);
				}
		}
}

void print(int array[ROW][COLUMN],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						printf("%d\t",array[i][j]);
				}
				printf("\n");
		}
}

/**
 * @brief 输出一个二维数组中的鞍点:即该数在该位置行上最大.列上最小
 * 
 * @param array 二维数组
 * @param row 行
 * @param column 列 
 * @param pi 行位置
 * @param pj 列位置
 * @return int 返回鞍点数
 */
int saddle_number(int array[ROW][COLUMN],int row,int column,int *pi,int *pj)
{
		int i,j,k;//行列坐标
		int max;//最大数
		int maxi,maxj;//最大列坐标
		int flag = 0;//是否找到鞍数的标记

		for(i = 0; i < row; i++)
		{
				max = array[i][0];//第一个数最大
				maxj = 0;
				for(j = 0; j < column; j++)
				{
						if(array[i][j] > max)	
						{
								max = array[i][j];
								maxj = j;
						}
				}

				//一行中的最大值,在列中是否也是最小的
				flag = 1;
				for(k = 0;k < row; k++)
				{
						if(max > array[k][maxj])
						{
								flag = 0;
								continue;//结束本次循环,继续下一行
						}
				}
				
				if(flag)
				{
						maxi = i;
						break;//结束循环
				}
		}

		//是否找到鞍数
		if(flag)
		{
				printf("array[%d][%d]=%d\n",maxi,maxj,max);
				*pi = maxi;
				*pj = maxj;
				return max;
		}

		return ERROR;
}
