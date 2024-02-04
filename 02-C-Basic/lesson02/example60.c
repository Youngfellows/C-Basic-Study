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
		printf("前:*point1=%d,*point2=%d\n",*point1,*point2);
		printf("前:&a=%p,&b=%p\n",&a,&b);
		printf("前:point1=%p,point2=%p\n",point1,point2);
		swap(point1,point2);
		printf("后:a=%d,b=%d\n",a,b);
		printf("后:*point1=%d,*point2=%d\n",*point1,*point2);
		printf("后:&a=%p,&b=%p\n",&a,&b);
		printf("后:point1=%p,point2=%p\n",point1,point2);
		
		return 0;
}

/**
 * @brief 交换变量,传递地址,只是交换了局部变量,没有改变元素值
 * 
 * @param p1 地址1
 * @param p2 地址2
 */
void swap(int *p1,int *p2)
{
	int *temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
}
