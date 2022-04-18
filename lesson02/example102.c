#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

void check(int *);

int main()
{
		int *p1;
		int i;
		p1 = (int *)malloc(SIZE*sizeof(int));
		printf("请输入%d个分数:\n",SIZE);
		for(i=0;i<SIZE;i++)
		{
			scanf("%d",p1+i);
		}
		check(p1);
		
		printf("\n");
		return 0;
}

/**
 * @brief 找出不及格的数组元素
 * 
 * @param p int *类型的指针变量p1,p1可以指向元素是int类型的数组元素
 */
void check(int *p)
{
	int i;
	printf("不及格的分数是:");
	for(i=0;i<SIZE;i++,p++)
	{
		if(*p < 60)
		{
			printf("%d\t",*p);
		}
	}
}
