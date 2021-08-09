#include<stdio.h>

#define  LEN 5

void input(int *p,int len);
void print(int *p,int len);
void sort(int *p,int len);
int * insert(int *p,int len,int number);

int main()
{
		//将一个数据插入有序数组中
		int array[LEN - 1];
		int number;
		int *p;
		input(array,LEN - 1);
		printf("原始数据:\n");
		print(array,LEN - 1);

		sort(array,LEN - 1);
		printf("排序后数据:\n");
		print(array,LEN - 1);

		printf("请输入要插入的数据:\n");
		scanf("%d",&number);
		p =	insert(array,LEN,number);
		
		printf("插入后:\n");
		print(p,LEN);
		return 0;
}

void input(int *p,int len)
{
		int *pt;
		int i = 0;
		printf("请输入数组:\n");
		for(pt = p; pt < p + len; pt++,i++)
		{
				printf("array[%d]=",i);
				scanf("%d",pt);
		}
}

void print(int *p,int len)
{
		int *pt = p;
		for(;pt < p + len;pt++)
		{
				printf("%d\t",*pt);
		}
		printf("\n");
}

void sort(int *p,int len)
{
		int i,j,min;
		int temp;
		int *pt = p;
		for(i = 0;i < len;i++)
		{
				min = i;
				for(j = i + 1;j < len;j++)
				{
						if(*(pt + min) > *(pt + j))
						{
								min = j;
						}
				}

				if(min != i)
				{
						temp = *(pt + i);
						*(pt + i) = *(pt + min);
						*(pt + min) = temp;
				}
		}
}

int * insert(int *p,int len,int number)
{
		int i,j;
		int temp1,temp2;
		int *pt = p;
		int end = *(pt+(len-2));//最后一个
		printf("end=%d\n",end);
		if(number > end)
		{
			*(pt + len - 1) = number;
		}else
		{
			for(i =0; i < len - 1;i++)
			{
				printf("%d,%d\n",i,*(pt + i));
				if(*(pt + i) > number)
				{
					temp1 = *(pt + i);
					*(pt + i) = number;
					for(j = i + 1; j < len; j++)
					{
						temp2 = *(pt + j);
						*(pt + j) = temp1;
						temp1 = temp2;
					}
					break;
				}
			}
		}
		return pt;
}
