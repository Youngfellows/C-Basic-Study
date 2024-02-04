#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 128

int main()
{
		char src[SIZE];
		char *psrc,*pc,*pr;
		char find;
		psrc = src;//字符型指针变量指向字符串src
		
		printf("请输入一个字符串:\n");
		fgets(psrc,SIZE,stdin);
		fputs(psrc,stdout);

		printf("请输入要查找的字符:\n");
		pc = &find;//字符型指针变量指向字符find
		//scanf("%c",&find);
		find = getchar();
		//find = getc(stdin);
		//pr = index(psrc,*pc);
		//pr = rindex(psrc,*pc);
		//pr = strchr(psrc,*pc);
		pr = strrchr(psrc,*pc);
		printf("result: %ld\n",(pr-psrc+1));
		printf("result: %s\n",pr);

		return 0;
}

