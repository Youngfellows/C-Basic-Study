#include<stdio.h>
int main()
{
		int array[3];
		array[0]=11;
		array[1]=22;
		array[2]=33;
		int i,temp;
		temp = array[1];
		array[1] = array[2];
		array[2] = temp;
		for(i=0;i<3;i++)
		{
			printf("array[%d]=%d\n",i,array[i]);
		}
	return 0;
}
