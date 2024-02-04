#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	//字符串复制4,内存可以重叠
	char src[] = "Linux C is very good!";
	char *p;//char *型指针变量
	p = src;//p指向src字符串
	
	memmove(p,p+11,strlen(p) - 11);//复制字符串
	src[strlen(p) - 11] = '\0';//字符串结束
	printf("%s\n",p);

	return 0;
}
