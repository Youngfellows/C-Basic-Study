#include<stdlib.h>
#include<stdio.h>
int main()
{
		int array[5] = {11,22,33,44,55};
		int i;
		int *pm;
		pm = array;
		for(i=0;i<5;i++)
		{
			printf("%d,&array[%d]=%p,%d\n",i,i,&array[i],array[i]);
		}

		printf("*****************\n");
		for(i=0;i<5;i++)
		{
			printf("%d,pm=%p,%d\n",i,pm,*pm);
			pm ++;
		}
	return 0;
}
