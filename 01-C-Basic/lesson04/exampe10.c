#include<stdio.h>
#include<stdlib.h>
#define M 5
int main()
{
	//选择排序法对数组从小到大排序输出
	//int array[M] = {33,21,42,39,11,54,9,15,6,45,72,68,16};
	int array[M];
	int i,j,temp;//temp临时变量
	int min;//记录最小值的位置
	int *p,*p1,*p2;//int * 型指针变量p,p1,p2
	p = array;//p指向数组array
	
	//输入数组
	p1 = array;//p1指向第一个元素
	p2 = &array[M-1];//P2指向最后一个元素

	printf("请输入一个%d大小的数组:\n",M);
	//for(i=0;i<M;i++)
	//{
	//	scanf("%d",p+i);
	//}

	for(;p1<=p2;p1++)
	{
		scanf("%d",p1);
	}	
	
	printf("\n输入的数组是:\n");
	for(i=0;i<M;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");

	//选择排序
	for(i=0;i<M-1;i++)//外层
	{
		min = i;//默认第一个最小
		for(j=i+1;j<M;j++)
		{
			if(*(p+min) > *(p+j))
			{
				min = j;//记录下最小值的位置
			}
		}
		
		//跑完一遍了，找到最小的一个位置，与开始遍历的地一个交换位置
		if(min != i)
		{
			temp = *(p+i);
			*(p+i) = *(p+min);
			*(p+min) = temp;
		}


	}
	
	printf("\n选择排序后的数组是:\n");
	for(i=0;i<M;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");

	return 0;
}




































