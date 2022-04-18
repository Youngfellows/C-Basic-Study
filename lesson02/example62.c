#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

int main()
{
		int array[SIZE];
		int i;
		int *p;
		p = array;//int 型指针变量p,指向int型数组array

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
		
		//指针变量p从新指向数组的首元素
		//for(p=array;p<(array+SIZE);p++)
		//{
		//	printf("%d\t",*p);
		//}
		
		p = array;//指针变量p从新指向数组的首元素
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",*(p+i));
		}


		
		printf("\n");
		return 0;
}
