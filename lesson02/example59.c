#include<stdio.h>
#include<stdlib.h>

void swap(int *,int *);

int main()
{
		int a,b;
		int *point1,*point2;
		point1 = &a;
		point2 = &b;
		printf("请输入a:\n");
		scanf("%d",&a);
		printf("请输入b:\n");
		scanf("%d",&b);
		
		printf("前:a=%d,b=%d\n",a,b);
		swap(point1,point2);
		printf("后:a=%d,b=%d\n",a,b);
		
		return 0;
}

void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
