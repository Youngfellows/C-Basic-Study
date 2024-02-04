#include<stdlib.h>
#include<stdio.h>
#define ROW 2
#define COLUMN 3
int main()
{
		int array[ROW][COLUMN] = {{22,7,33},{8,24,6}};
		int max = array[0][0];
		int row;
		int column;
		int i,j;
		for(i=0;i<ROW;i++)
		{
				for(j=0;j<COLUMN;j++)
				{
						if(array[i][j]>=max)
						{
							max = array[i][j];
							row = i;
							column = j;
						}
				}
		}

		printf("max=%d,row:%d,column:%d\n",max,row,column);

		return 0;
}

