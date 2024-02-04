#include<stdio.h>
#include<stdlib.h>
#define M 13
int main()
{
	//选择排序法对数组从小到大排序输出
	int array[M] = {33,21,42,39,11,54,9,15,6,45,72,68,16};
	int i,j,temp;//temp是中间变量
	
	int *p;//int * 型指针变量p
	p = array;
	printf("排序前的数组是: \n");
	for(i=0;i<M;i++)
	{
	  printf("%d ",*(p+i));
	}
	printf("\n");

	//第1种方式排序
	for(i=0;i<M-1;i++)//外层需要对比12次
	{
		for(j=i+1;j<M;j++)
		{
		   	if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}			
		}
	}
	
	printf("第1种方式排序后的数组是: \n");
	for(i=0;i<M;i++)
	{
	  printf("%d ",*(p+i));
	}
	printf("\n");

	

	

	return 0;
}
