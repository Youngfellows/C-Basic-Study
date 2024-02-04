#include<stdlib.h>
#include<stdio.h>

#define SIZE 128

int main()
{
		char *a,str[SIZE];
		a = str;//字符型指针变量a,指向字符串str
		printf("请输入一个字符串:\n");
		//scanf("%s",a);
		fgets(a,SIZE,stdin);
		printf("你输入的是:\n%s",a);
	return 0;
}
