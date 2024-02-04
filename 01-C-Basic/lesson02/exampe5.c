#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请输入一个整数a和b:\n");
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("输入c和d:\n");
	scanf("%d %d",&c,&d);
	printf("a=%d,b=%d,a+b=%d\n",a,b,(a+b));
	printf("c乘d=%d\n",(c*d));
	return 0;
}
