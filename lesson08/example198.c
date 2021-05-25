#include<stdio.h>

void sort(int *p1,int *p2,int *p3);
void swap(int *p1,int *p2);

int main()
{
		int n1,n2,n3;
		int *p1,*p2,*p3;
		p1 = &n1;
		p2 = &n2;
		p3 = &n3;

		printf("请输入n1,n2,n3:\n");
		scanf("%d,%d,%d",p1,p2,p3);
		sort(p1,p2,p3);
		printf("排序后:\n");
		printf("%d,%d,%d\n",*p1,*p2,*p3);
		return 0;
}

//交互两个数
void sort(int *p1,int *p2,int *p3)
{
	if(*p1 > *p2)
	{
		swap(p1,p2);
	}

	if(*p1 > *p3)
	{
		swap(p1,p3);
	}

	if(*p2 > *p3)
	{
		swap(p2,p3);
	}

}

void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

