#include<stdio.h>

#define LEN 5
#define NO_FIND -1
#define FIND_OK 0

void input(int array[],int len);
void print(int array[],int len);
void sort(int array[],int len);
int binary_search(int array[],int len,int number,int *pos);

int main()
{
		//折半查找数组中的指定元素位置
		int array[LEN];
		int number;//查找的数组
		int pos;//位置
		int sign;//是否查找到的标记
		int local;//查找到的位置
		printf("请输入一个数组:\n");
		input(array,LEN);
		printf("排序前:\n");
		print(array,LEN);
		sort(array,LEN);
		printf("排序后:\n");
		print(array,LEN);

		printf("请输入要查找的数字:\n");
		scanf("%d",&number);
		sign = binary_search(array,LEN,number,&local);
		if(sign != NO_FIND)
		{
				printf("查找到%d在位置%d\n",number,local);
		}else
		{
				printf("未查找到数字%d\n",number);
		}

		return 0;
}

void input(int array[],int len)
{
		int i;
		for(i = 0; i < len; i++)
		{
				printf("array[%d]=",i);
				scanf("%d",&array[i]);
		}
}

void print(int array[],int len)
{
		int i;
		for(i = 0; i < len; i++)
		{
				printf("%d\t",array[i]);
		}
		printf("\n");
}

void sort(int array[],int len)
{
		int i,j,temp;
		int min;
		for(i = 0; i < len; i++)
		{
				min = i;
				for(j = i + 1; j < len; j++)
				{
						if(array[j] < array[min])
						{
								min = j;
						}
				}

				//交换
				if(min != i)
				{
						temp = array[i];
						array[i] = array[min];
						array[min] = temp;
				}
		}
}

int binary_search(int array[],int len,int number,int *pos)
{
		int start;//起始位置
		int end;//终点位置
		int mid;//中间位置
		int sign = NO_FIND;//是否找到的标记

		start = 0;
		end = len - 1;
		mid = (start + end ) / 2;

		while(start <= end)
		{
				if(number == array[mid])
				{
						//找到了
						sign = FIND_OK;
						*pos = mid;
						break;
				}else if(number > array[mid])
				{
					start = mid + 1;
				}
				else if(number < array[mid])
				{
					end = mid - 1;
				}
				mid = (start + end) / 2;
		}
		return sign;
}
