#include<stdio.h>
#include<stdlib.h>
int main()
{
	//指针的运算
	int array[5] = {120,110,119,250,380};
	int i;
	int *pm;//指针变量pm
	pm = array;//指针变量pm指向数组array的首元素array[0]
	//pm = &array[0];//指针变量pm指向数组array的首元素array[0]

	printf("打印每个元素的地址: \n");
	for(i=0;i<5;i++)
	{
	  printf("第%d个元素的地址: &array[%d]=%p,元素是: %d\n",i,i,&array[i],array[i]);
	}

	printf("通过指针变量移动来遍历数组元素\n");
	printf("数组元素的首地址: array = %p,指针的地址: pm = %p\n",array,pm);
	for(i=0;i<5;i++)
	{
	   printf("第%d个元素的地址: pm=%p,元素是: %d\n",i,pm,*pm);
	   pm ++;
	}

	return 0;
}
