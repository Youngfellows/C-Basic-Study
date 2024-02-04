#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

void sort(char *name[],int size);
void print(char *name[],int size);

int main()
{
		//定义指针数组name,数组中的每一个元素是char *类型,也就是每一个元素都指向一个字符串
		char *name[] = {
		"Follow me",
		"BASIC",
		"Great Wall",
		"FORTRAN",
		"Computer design"
		};

		sort(name,SIZE);
		print(name,SIZE);

		return 0;
}

/**
 * @brief 通过指针数组来引用二维数组
 * 
 * @param name 指针数组name,数组中的每一个元素都是char *类型,也就是每一个数组元素都指向一个字符串
 * @param size 二维数组的行数
 */
void sort(char *name[],int size)
{
	char *temp;//char * 型指针变量指向字符串
	int i,j,min;
	for(i=0;i<size-1;i++)
	{
		min = i;//记录最小行的位置
		for(j=i+1;j<size;j++)//和下一行比较
		{
			if(strcmp(name[min],name[j])>0)
			{
					min = j;
			}
		}

		//交换指针数组中每一个元素的指针指向
		if(min != i)
		{
			temp = name[i];
			name[i] = name[min];
			name[min] = temp;
		}
	}
}

/**
 * @brief 通过指针数组来引用二维数组
 * 
 * @param name 指针数组name,数组中的每一个元素都是char *类型,也就是每一个数组元素都指向一个字符串
 * @param size 二维数组的行数
 */
void print(char *name[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%s\n",name[i]);//name[i]其实就是每一个元素的首地址,也就是指针指向
	}
}
