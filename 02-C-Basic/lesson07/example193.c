#include<stdio.h>

#define M 3
#define N 5

void input_stu(float score[M][N],int row,int column);
void aver_stu(float score[M][N],int row,int column,float average_stu[M]);
void aver_cour(float score[M][N],int row,int column,float average_cour[N]);
void highest(float score[M][N],int row,int column,int *hi,int *hj,float *maxheigh);
void print_stu(float score[M][N],int row,int column);
void print_ave(float average_stu[],int size);

int main()
{		//输入10个学生的5门功课成绩
		//1. 求每个学生的平均分
		//2. 求每门功课的平均分
		//3. 求分数最高的学生和功课
		float score[M][N];//二维数组保存学生和成绩
		float average_stu[M];//保存每个学生的平均成绩
		float average_cour[N];//保存每个功课的平均成绩
		int hi,hj;//最高分的学生和课程
		float maxheigh;//最高分

		printf("请输入%d个学生的%d门功课成绩:\n",M,N);
		input_stu(score,M,N);
		printf("学生成绩信息如下:\n");
		print_stu(score,M,N);

		printf("每个学生的平均成绩:\n");
		aver_stu(score,M,N,average_stu);
		print_ave(average_stu,M);

		printf("每门功课的平均成绩:\n");
		aver_cour(score,M,N,average_cour);
		print_ave(average_cour,N);

		highest(score,M,N,&hi,&hj,&maxheigh);
		printf("最高分%.2f的学生是%d,课程是%d\n",maxheigh,hi,hj);
		return 0;
}

void input_stu(float score[M][N],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						printf("score[%d][%d]=",i,j);
						scanf("%f",&score[i][j]);
				}
		}
}

void print_stu(float score[M][N],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						printf("%.2f\t",score[i][j]);
				}
				putchar('\n');
		}
}

void aver_stu(float score[M][N],int row,int column,float average_stu[M])
{
		int i,j;
		float sum = 0;
		for(i = 0; i < row; i++)
		{
				sum = 0;
				for(j = 0; j < column; j++)
				{
						sum += score[i][j];
				}
				average_stu[i] = sum / N;
		}
}

void aver_cour(float score[M][N],int row,int column,float average_cour[N])
{
		int i,j;
		float sum = 0;
		for(j = 0; j < column; j++)
		{
				sum = 0;
				for(i = 0; i < row; i++)
				{
						sum += score[i][j];
				}
				average_cour[j] = sum / M;
		}
}

void highest(float score[M][N],int row,int column,int *hi,int *hj,float *maxheigh)
{
		int i,j;
		*hi = 0;
		*hj = 0;
		*maxheigh = score[0][0];
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						if(*maxheigh < score[i][j])
						{
								*maxheigh = score[i][j];
								*hi = i;
								*hj = j;
						}
				}
		}
}

void print_ave(float average_stu[],int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				printf("%.2f\t",average_stu[i]);	
		}
		putchar('\n');
}

