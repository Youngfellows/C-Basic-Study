#include<stdio.h>
#include<stdlib.h>

int max(int,int);

int main()
{
	int i,j,result;
	int *pa,*pb;
	int (*p)(int,int);//函数指针,指向函数
	pa = &i;
	pb = &j;
	p = &max;//函数指针,指向函数max
	printf("请输入a和b:\n");
	scanf("%d %d",pa,pb);
	result = (*p)(*pa,*pb);//函数指针调用函数
	printf("result=%d\n",result);
	return 0;
}


int max(int a,int b)
{
	return a>b?a:b;
}
