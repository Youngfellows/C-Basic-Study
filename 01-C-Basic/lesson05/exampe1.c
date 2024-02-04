#include<stdio.h>
#include<stdlib.h>

int max(int,int);//函数声明
int main()
{
	int a,b;
	int *pa,*pb;//int *型指针变量pa,pb;
	int m;//最大值
	pa = &a;
	pb = &b;
	
	printf("请输入两个整数a和b: \n");
	scanf("%d %d",pa,pb);
	
	printf("输出a=%d,b=%d\n",*pa,*pb);
	
	m = max(*pa,*pb);
	printf("\n最大值是: m = %d\n",m);
	return 0;
}

//函数定义
int max(int a,int b)
{
	return a>b?a:b;
}
