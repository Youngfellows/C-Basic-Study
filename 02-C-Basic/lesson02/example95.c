#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COLUMN 4

float *search(float (*p)[4],int serial_number);

int main()
{
		float score[ROW][COLUMN] = {{65.5,70,88,79},{83,88,95.5,49.5},{59.5,60.5,77.5,82.5}};
		int i,search_number;
		float *p;
		printf("请输入要查找的序列号:\n");
		scanf("%d",&search_number);
		p = search(score,search_number);

		for(i=0;i<COLUMN;i++)
		{
				printf("%.2f\t",*(p+i));
		}
		printf("\n");
		return 0;
}

/**
 * @brief 
 * 
 * @param p 指向一维数组的指针变量p,一维数组中有4个元素,每一个元素是int型
 * @param serial_number 查找的序列号
 * @return float* 
 */
float *search(float (*p)[4],int serial_number)
{
		float *pt;
		pt = *(p + serial_number);//找到对应行元素的首行地址
		return pt;
}
