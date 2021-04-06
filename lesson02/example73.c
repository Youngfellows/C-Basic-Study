#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 4

float average(float *p,int size);
void search(float (*p)[4],int row);
void search_flunk(float (*p)[4],int row);

int main()
{
		float score[ROW][COLUMN] = {{77.5,89.0,79,65},{82.0,59,73,74},{90,68,89,72.5}};
		float *p;
		int i,j;
		float avg;
		p = score;
		printf("成绩:\n");
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COLUMN;j++)
			{
				printf("%.2f\t",*p);
				p++;
			}
			printf("\n");
		}
		
		avg = average(*score,ROW*COLUMN);
		printf("平均值:avg=%.2f\n",avg);

		printf("查找:\n");
		search(score,2);

		printf("不及格:\n");
		search_flunk(score,ROW);
		return 0;
}

float average(float *p,int size)
{
	float *pend = p + size - 1;
	int i;
	float avg = 0;
	float sum = 0;

	for(;p < pend;p++)
	{
		sum +=*p;
	}

	avg = sum/size;

}

void search(float (*p)[4],int row)
{
	int j;
	for(j=0;j<COLUMN;j++)
	{
		printf("%.2f\t",*(*(p+row)+j));
	}
	printf("\n");
}


void search_flunk(float (*p)[4],int row)
{
	int i,j,flag = 0;
	for(i=0;i<row;i++)
	{
		flag = 0;
		for(j=0;j<COLUMN;j++)
		{
			if(*(*(p+i)+j) < 60)
			{
				flag = 1;
			}

			if(flag == 1)
			{
				for(j=0;j<COLUMN;j++){
					printf("%.2f\t",*(*(p+i)+j));
				}
			}

		}
		printf("\n");
		
	}

}
