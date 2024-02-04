#include<stdio.h>
#include<stdlib.h>
int max(int ,int);//函数声明
int main()
{
	int i,j,sum;
	int *pi,*pj;
	pi = &i;
	pj = &j;
	printf("请输入两个整数i和j: \n");
	scanf("%d %d",&i,&j);
	printf("1 &i = %p，&j = %p\n",pi,pj);
	
	sum = max(*pi,*pj);
	printf("sum = %d\n",sum);
	return 0;
}

//函数定义
int max(int i,int j)
{
	printf("2 &i = %p ,&j = %p\n",&i,&j);
	return i+j;
}
