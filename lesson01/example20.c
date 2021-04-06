#include<stdlib.h>
#include<stdio.h>
#define M 5
int main()
{
		int array[M] = {11,22,33,44,55};
		int *p;
		int i;
		printf("&array[0]=%p,p=%p\n",&array[0],p);
		p = array;
		printf("&array[0]=%p,p=%p\n",&array[0],p);
		
		for(i=0;i<M;i++)
		{
			printf("%d,&array[%d]=%p,%d\n",i,i,&array[i],array[i]);
		}

		printf("*****************\n");
		for(i=0;i<M;i++)
		{
			printf("%d,&array[%d]=%p,%d\n",i,i,p+i,*(p+i));
		}
		
		printf("*****************\n");
		for(i=0;i<M;i++)
		{
			printf("%d,&array[%d]=%p,%d\n",i,i,p,*p);
			p++;
		}

	return 0;
}
