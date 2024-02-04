#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COLUMN 4
int main()
{
	//求出二维数组中的最大元素
	//指针数组
	int array[ROW][COLUMN] = {{11,3,27,5},{32,2,49,26},{4,9,31,30}};
	int *p1,*p2;//int * 型指针变量p1,p2
	int **p;//指向指针的指针变量p
	int i,j,max,lineMax;//lineMax行最大值
	int arrayMax[ROW];//保存每行最大元素的数组
	p = &p2;//p指向p2
	
	//打印二维数组元素
	for(i=0;i<ROW;i++)
	{
		p1 = &array[i][COLUMN-1];//p1指向最后一个元素
		lineMax = array[i][0];//假使每一行的第一个元素最大
		for(p2 = &array[i][0];p2<=p1;p2++)//p2指向每一行的第一个元素
		{
			printf("%d ",**p);//打印二维数组
			if(**p > lineMax)
			{
				lineMax = **p;
			}
		}
		arrayMax[i] = lineMax;		
		printf("第%d行的最大值是: %d\n",i,lineMax);
		
	}

	//遍历最大值元素的数组
	//求一维数组中的最大值
	printf("\n最大值元素数组:\n");
	p1 = arrayMax;
	max = arrayMax[0];
	for(i=0;i<ROW;i++)
	{
		printf("%d ",*(p1+i));
		if(*(p1+i) > max)
		{
			max = *(p1+i);
		}
	}
	printf("\n二维数组中的最大值: max = %d\n",max);
	
	

	return 0;
}


























