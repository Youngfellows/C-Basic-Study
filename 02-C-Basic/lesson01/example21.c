#include<stdlib.h>
#include<stdio.h>
#define M 5
int main()
{
		int array[M] = {22,11,44,33,12};
		int i,j,temp;
		int *p;
		p = array;
		printf("*****************\n");
		for(i=0;i<M;i++)
		{
				printf("%d,array[%d]=%d\n",i,i,array[i]);
		}

		for(i=0;i<M-1;i++)
		{
				for(j=i+1;j<M;j++)
				{
						if(array[i]>array[j])
						{
								temp = array[i];
								array[i] = array[j];
								array[j] = temp;
						}
				}
		}

		printf("*********************\n");
		for(i=0;i<M;i++)
		{
				printf("%d,%d\n",i,*(p+i));
		}
		return 0;
}
