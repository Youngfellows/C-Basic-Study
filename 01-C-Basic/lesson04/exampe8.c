#include<stdio.h>
#include<stdlib.h>
#define M 5
int main()
{
	//数组 与 指针
	int array[M] = {12,33,24,75,89};
	int i;	
	int *p;//int *型指针变量p
	printf("指针变量p的地址:%p\n",p);
	printf("数组array的地址:%p\n\n",array);

	p = array;//指针变量p指向数组array
	printf("指针变量p的地址:%p\n",p);

	//数组元素的地址值
	for(i=0;i<M;i++)
	{
		printf("第%d个元素的地址&array[i]=%p,其值%d\n",i,&array[i],array[i]);
	}
	
	printf("\n指针遍历取出数组元素的值:\n");
	for(i=0;i<M;i++)
	{
		printf("第%d个元素的地址是&array[i]=%p,其值%d\n",i,p+i,*(p+i));
	}	
	

	return 0;
}
