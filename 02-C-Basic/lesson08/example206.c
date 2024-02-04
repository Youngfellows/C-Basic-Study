#include<stdio.h>

#define M 3
#define N 3

void input(int array[M][N],int m,int n);
void convert(int *p,int m,int n);
void print1(int *p,int m,int n);

int main()
{
		int array[M][N];
		int *p;
		int i,j;
		printf("请输入一个二维数组:\n");
		input(array,M,N);
		p = &array[0][0];
		printf("原始数组是:\n");
		print1(p,M,N);
		printf("交互后:\n");
		convert(p,M,N);
		print1( p,M,N);

		return 0;
}

void input(int array[M][N],int m,int n)
{
		int i,j;
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				printf("array[%d][%d]=",i,j);
				scanf("%d",&array[i][j]);
			}
		}
}

void convert(int *p,int m,int n)
{
		int i,j,temp;
		int *pt = p;
		for(i = 0; i < m; i++)
		{
			for(j = i; j < n; j++)
			{
				// &a[i][j] = p + m * i + j;
				// &a[j][i] = p + m * j + i;
				temp = *(pt + m * i + j);
				*(pt + m * i + j) = *(pt + n * j + i);
				*(pt + n * j + i) = temp;
			}
		}
}

void print1(int *p,int m,int n)
{
		int i,j;
		int *pt = p;
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				printf("%d\t",*pt);
				pt++;
			}
			printf("\n");
		}
}
