#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128//缓冲区大小


int main()
{
	//查找字符(从前向后查找)
	//char array[] = "Linux c is very good!";//字符串array
	char array[SIZE];
	char *p,*pc,*p1;//char *型指针变量p,pc
	char find;
	pc = array;//pc指向字符串array

	printf("请输入一个字符串:\n");
	fgets(pc,SIZE,stdin);//输入字符串
	
	printf("请输入要查找的字符:\n");
	p1 = &find;//p只想字符
	//scanf("%c",p1);
	find = getchar();

	//fputs(pc,stdout);//输出字符串	
	//printf("要查找的字符是%c\n",*p1);
	
	//p = index(pc,'g');//查找字符
	p = index(pc,*p1);//在字符串中查找字符
	printf("查找到的字符%c的地址%p\n查找到的字符串是%s\n",*p1,p,p);
	return 0;
}
