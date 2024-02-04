#include<stdio.h>
#include<stdlib.h>
int max(int,int);//函数声明
int main()
{
	//函数指针
	int a,b,m;
	int *pa,*pb;
	int (*p)(int,int);//函数指针变量p	
	pa = &a;
	pb = &b;
	printf("函数指针变量的地址:p = %p\n",p);
	p = &max;//函数指针变量p指向函数max
	printf("函数指针变量的地址:p = %p,函数max的地址: max = %p\n",p,&max);

	printf("请输入两个整数a和b: \n");
	scanf("%d %d",pa,pb);
	
	m = max(*pa,*pb);
	printf("最大值: m = %d\n",m);

	printf("请输入两个整数a和b: \n");
	scanf("%d %d",pa,pb);
	m = p(*pa,*pb);
	printf("最大值: m = %d\n",m);

	return 0;
}

//函数定义
int max(int a,int b)
{
	return a>b?a:b;
}
