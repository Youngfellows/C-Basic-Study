#include<stdio.h>
#include<stdlib.h>
int main()
{
	//标准输入输出
	int a,b,c;
	printf("请输入a和b:\n");
	scanf("%d %d",&a,&b);
	printf("a+b=%d\n",(a+b));

	printf("请输入a和b:\n");
	scanf("%d    %d",&a,&b);
	printf("a*b=%d\n",(a*b));

	printf("25 is bigger than 14\n");
	scanf("%d is bigger than %d",&a,&b);
	printf("a-b=%d\n",(a-b));

	return 0;
}
