#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

int main()
{
		int array[SIZE];
		int i;
		int *p;
		p = array;

		printf("请输入%d个元素:\n",SIZE);
		for(i=0;i<SIZE;i++,p++)
		{
			//scanf("%d",&array[i]);
			scanf("%d",p);
		}


		printf("打印数组元素:\n");
		//for(i=0;i<SIZE;i++)
		//{
			//printf("%d\t",array[i]);
		//	printf("%d\t",*(array+i));
		//}
		
		//for(p=array;p<(array+SIZE);p++)
		//{
		//	printf("%d\t",*p);
		//}
		
		p = array;
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",*(p+i));
		}


		
		printf("\n");
		return 0;
}
