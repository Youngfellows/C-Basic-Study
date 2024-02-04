#include<stdlib.h>
#include<stdio.h>
#define M 6
int main()
{
		int array[M] = {22,11,44,33,55,37};
		int i,j,temp;
		int min;
		int *p,*p1,*p2;
		p = array;
		printf("***************\n");
		for(i=0;i<M;i++)
		{
				printf("%d ",*(p+i));
		}

		for(i=0;i<M-1;i++)
		{
				min = i;
				for(j=i+1;j<M;j++)
				{
					if(*(p+min)>*(p+j))
					{
						min = j;
					}
				}

				if(min!=i)
				{
					temp = *(p+i);
					*(p+i)=*(p+min);
					*(p+min)=temp;
				}
		}

		printf("\n***************\n");
		for(i=0;i<M;i++)
		{
				printf("%d ",*(p+i));
		}
		return 0;
}
