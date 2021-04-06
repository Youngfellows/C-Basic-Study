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

float *search(float (*p)[4])
{
		int i;
		float *pt;
		pt = NULL;

		for(i=0;i<COLUMN;i++)
		{
			if(*(*p + i) < 60)
			{
					pt = *p;
			}
		}

		return pt;
}
