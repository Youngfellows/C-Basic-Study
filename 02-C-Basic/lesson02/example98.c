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
		
		char **p;//指向指针的指针变量p,p指向char *类型,也就是p可以指向包含字符串二维数组
		int i;

		sort(name,SIZE);

		print(name,SIZE);

		printf("*************\n");
		for(i=0;i<SIZE;i++)
		{
			p = name + i;//指向指针的指针变量p,指向二维数组的第i行
			//p = &name[i];
			printf("%s\n",*p);
		}

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
	char *temp;
	int i,j,min;
	for(i=0;i<size-1;i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(strcmp(name[min],name[j])>0)
			{
					min = j;
			}
		}

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
		printf("%s\n",name[i]);
	}
}
