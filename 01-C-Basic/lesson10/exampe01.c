#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128//缓冲区大小

int main()
{
	//字符串拼接
	char src[SIZE];//要拼接的字符串
	char des[SIZE];//被拼接的字符串
	char *ps,*pd;//char *指针变量ps,pd
	ps = src;//ps指向src
	pd = des;//pd指向des

	printf("请输入要拼接的字符串:\n");
	//fgets(ps,SIZE,stdin);//输入字符串src
	scanf("%s",ps);
	
	printf("请输入被拼接的字符串:\n");
	//fgets(pd,SIZE,stdin);//输入字符串des
	scanf("%s",pd);

	//fputs(ps,stdout);//输出字符串src
	//fputs(pd,stdout);//输出字符串des	

	strcat(pd,ps);//字符串拼接
	
	printf("拼接之后的字符串是:%s\n",pd);
	printf("拼接之后的原字符串:%s\n",ps);	


	return 0;
}

