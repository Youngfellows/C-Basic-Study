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
		p = score;//int 型指针变量p,指向数组元素的首地址
		printf("成绩:\n");
		for(i=0;i<ROW;i++)
		{
			for(j=0;j<COLUMN;j++)
			{
				printf("%.2f\t",*p);
				p++;//移动指针指向的元素位置
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

/**
 * @brief 求平均成绩
 * 
 * @param p int 型指针变量p,指向二维数组元素的首地址
 * @param size 二维数组元素个数
 * @return float 返回平均成绩
 */
float average(float *p,int size)
{
	float *pend = p + size - 1;//最后一个元素指针变量地址
	int i;
	float avg = 0;
	float sum = 0;

	for(;p < pend;p++)
	{
		sum +=*p;
	}
	avg = sum/size;
	return avg;
}

/**
 * @brief 查找二维数组的第x行元素
 * 
 * @param p 指针变量p指向包含4个float元素的一维数组
 * @param row 行数
 */
void search(float (*p)[4],int row)
{
	int j;
	for(j=0;j<COLUMN;j++)
	{
		printf("%.2f\t",*(*(p+row)+j));
	}
	printf("\n");
}


/**
 * @brief 查找不及格学生
 * 
 * @param p 指针变量p指向包含4个float元素的一维数组
 * @param row 
 */
void search_flunk(float (*p)[4],int row)
{
	int i,j,flag = 0;
	for(i=0;i<row;i++)
	{
		flag = 0;//是否不及格的标记
		for(j=0;j<COLUMN;j++)
		{
			if(*(*(p+i)+j) < 60)
			{
				flag = 1;//不及格
			}
		}
		
		if(flag == 1)
		{
			for(j=0;j<COLUMN;j++){
				printf("%.2f\t",*(*(p+i)+j));
			}
		}
		printf("\n");
		
	}

}
