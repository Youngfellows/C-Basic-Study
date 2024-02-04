#include<stdlib.h>
#include<stdio.h>
#define SIZE 5

int main()
{
		int a[SIZE] = {33,44,17,28,39};
		int **p;//定义指向指针的指针变量p,p指向int *元素,int * 又是一个指针变量,可以指向int 类型数据
		int i;
		int *num[SIZE];//定义一个指针数组,数组中的每一个元素都是int *类型的,也就是数组中的每一个元素可以指向一个int类型的数组元素
		for(i=0;i<SIZE;i++)
		{
			num[i] = &a[i];//为指针数组元素赋值
		}

		p = num;//指向指针的指针变量p,指向指针数组的首元素
		for(i=0;i<SIZE;i++)
		{
			printf("%d\t",**p);
			p++;//移动指针的指向
		}
		printf("\n");
		return 0;
}
