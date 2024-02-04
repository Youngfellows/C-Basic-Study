#include<stdio.h>
#include<string.h>
int main()
{
	//字符串初始化
	char array[] = "Linux C is very good!";
	char *p;//char *型指针变量p
	p = array;
	printf("%s\n",array);	

	//memset(array,'L',5);//字符串的前5个字符设置成L
	memset(p,'H',5);//字符串array的前5个字符设置成H
	printf("%s\n",array);
	
	//bzero(p,5);//字符串的前5个字符清零
	memset(p,0,5);//字符串的前5个字符清零	
	printf("%s\n",array);
	return 0;
}
