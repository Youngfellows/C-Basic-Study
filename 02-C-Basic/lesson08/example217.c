#include<stdio.h>

#define M 50

void sort(int **p,int n);

int main()
{
		//用指向指针的指针对n个整数排序并输出
		int i;
		int n;//数组大小
		int data[M];//一维数组
		int *pdata[M];//指针数组,pdata是一个数组,数组中的每一个元素是int *类型,也就是数组中存放的是int变量的地址
		int **p;//指向指针的指针变量
		printf("请输入n,小于%d\n",M);
		scanf("%d",&n);
		while(n < 0 || n > M)
		{
				printf("请从新输入n,小于%d\n",M);
				scanf("%d",&n);
		}

		//将第i个元素的地址赋予指针数组pdata中的第i个元素
		for(i = 0; i < n; i++)
		{
				pdata[i] = &data[i];
		}

		//为数组元素赋值,通过指针数组间接赋值
		for(i = 0; i < n; i++)
		{
			printf("data[%d]=",i);
			scanf("%d",pdata[i]);
		}

		//将指向指针的指针变量指向指针数组
		p = pdata;

		//排序
		sort(p,n);

		printf("排序后,原data数组:\n");
		for(i = 0; i < n; i++)
		{
				printf("%d\t",data[i]);
		}
		putchar('\n');

		printf("排序后,指针数组指向的元素:\n");
		for(i = 0; i < n; i++)
		{
				printf("%d\t",*pdata[i]);
		}
		putchar('\n');

		return 0;
}

void sort(int **p,int n)
{
		int i;
		int j;
		int *temp;//临时指针变量,改变指针数组的指向
		for(i = 0; i < n; i++)
		{
				for(j = i + 1; j < n; j++)
				{
						//比较后,交换整数地址
						if(**(p + i) > **(p + j))
						{
								temp = *(p + i);
								*(p + i) = *(p + j);
								*(p + j) = temp;
						}
				}
		}
}

