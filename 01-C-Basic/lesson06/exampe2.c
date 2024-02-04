#include<stdio.h>
//定义一个外部函数，求最大值
extern int max(int a,int b)
{
	return a>b?a:b;
}
