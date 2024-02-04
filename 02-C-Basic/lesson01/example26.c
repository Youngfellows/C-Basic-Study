#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 4
int main()
{
		int array[ROW][COLUMN] = {{11,22,8,7},{6,43,27,21},{9,4,3,19}};
		int i,j,max,lineMax;
		int *p1,*p2;
		int **p;
		int arrayMax[ROW];
		p = &p2;

		for(i=0;i<ROW;i++)
		{
				p1 = &array[i][COLUMN-1];
				lineMax = array[i][0];
				for(p2 = &array[i][0];p2<p1;p2++){
					if(**p > lineMax){
						lineMax = **p;
					}
				}
				arrayMax[i] = lineMax;
		
		}

		p1 = arrayMax;
		max = arrayMax[0];
		for(i=0;i<ROW;i++)
		{
			if(max < *(p1 + i))
			{
					max = *(p1 + i);
			}
		}
		printf("max:%d\n",max);
	return 0;
}
