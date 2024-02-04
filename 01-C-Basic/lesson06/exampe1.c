#include<stdio.h>
#include<stdlib.h>
extern int max();//声明函数引用外部函数
int main()
{
	//gcc编译执行如下命令 
	//gcc exampe1.c exampe2.c -0 exampe1.out

	//外部函数的引用
	int a,b;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	
	printf("请输入两个整数a和b: \n");
	scanf("%d %d",pa,pb);
	
	printf("您输入的数: a = %d ,b = %d\n",*pa,*pb);

	//调用外部函数求最大值
	printf("最大值是: %d\n",max(*pa,*pb));

	return 0;
}
