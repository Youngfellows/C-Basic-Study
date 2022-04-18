#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COLUMN 4

float *search(float (*p)[4]);

int main()
{
		float score[ROW][COLUMN] = {{65.5,70,88,79},{83,88,95.5,49.5},{59.5,60.5,77.5,82.5}};
		int i,j;
		float *p;
		printf("不及格的是:\n");
		
		for(i=0;i<ROW;i++)
		{
			p = search(score+i);
			
			//不及格行
			if(p == *(score +i))
			{
				for(j=0;j<COLUMN;j++)
				{
					printf("%.2f\t",*(p+j));
				}
				printf("\n");
			}
		}
		printf("\n");
		return 0;
}

/**
 * @brief 找出不及格的行数据
 * 
 * @param p 指向一维数组的指针变量p,一维数组中有4个元素,每一个元素是int型
 * @return float* 
 */
float *search(float (*p)[4])
{
		int i;
		float *pt;
		pt = NULL;

		for(i=0;i<COLUMN;i++)
		{
			//不及格行
			if(*(*p + i) < 60)
			{
					pt = *p;//记录下不及格行地址位置
			}
		}

		return pt;
}
