#include<stdlib.h>
#include<stdio.h>
#define ROW 2
#define COLUMN 3
int main()
{
		int array[ROW][COLUMN] = {{23,45,37},{17,27,9}};
		int i,j,row,column,max;
		int *p1,*p2;
		int **p;
		p = &p2;

		max = array[0][0];
		for(i=0;i<ROW;i++)
		{
			p1 = &array[i][COLUMN-1];
			for(p2 = &array[i][0];p2<p1;p2++)
			{
					printf("%d ",**p);
					if(**p>=max)
					{
							max = **p;
							row = i;
							column = COLUMN - (p1 - p2);
					}
			}
			printf("%d\n",*p1);
		}
		printf("max:%d,row:%d,column:%d\n",max,row,column);

	return 0;
}
