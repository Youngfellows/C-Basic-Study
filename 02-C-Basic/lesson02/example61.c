#include<stdio.h>
#include<stdlib.h>

void swap(int *,int *);
void sort(int *,int *,int *);

int main()
{
		int a,b,c;
		int *point1,*point2,*point3;
		point1 = &a;
		point2 = &b;
		point3 = &c;
		printf("请输入a:\n");
		//scanf("%d",&a);
		scanf("%d",point1);
		printf("请输入b:\n");
		scanf("%d",&b);
		printf("请输入c:\n");
		scanf("%d",&c);
		
		printf("前:a=%d,b=%d,c=%d\n",a,b,c);
		printf("前:*point1=%d,*point2=%d,*point3=%d\n",*point1,*point2,*point3);
		printf("前:point1=%p,point2=%p,point3=%p\n",point1,point2,point3);
		printf("前:&a=%p,&b=%p,&c=%p\n",&a,&b,&c);
		sort(point1,point2,point3);
		printf("后:a=%d,b=%d,c=%d\n",a,b,c);
		printf("后:*point1=%d,*point2=%d,*point3=%d\n",*point1,*point2,*point3);
		printf("后:point1=%p,point2=%p,point3=%p\n",point1,point2,point3);
		printf("后:&a=%p,&b=%p,&c=%p\n",&a,&b,&c);
		return 0;
}

/**
 * @brief 排序,参数是指针变量,地址
 * 
 * @param q1 指针变量q1,地址
 * @param q2 指针变量q2,地址
 * @param q3 指针变量q3,地址
 */
void sort(int *q1,int *q2,int *q3)
{
		if(*q1 < *q2)
		{
				swap(q1,q2);
		}

		if(*q1 < *q3)
		{
				swap(q1,q3);
		}

		if(*q2 < *q3)
		{
			swap(q2,q3);
		}
}

/**
 * @brief 交换两个变量的值
 * 
 * @param p1 指针变量q1,地址
 * @param p2 指针变量q2,地址
 */
void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
