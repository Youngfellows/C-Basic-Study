#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 128

int main()
{
		char src[SIZE];
		char *psrc,*pc,*pr;
		char find;
		
		psrc = src;
		
		printf("请输入一个字符串:\n");
		fgets(psrc,SIZE,stdin);
		fputs(psrc,stdout);

		printf("请输入要查找的字符:\n");
		pc = &find;
		scanf("%c",&find);
		//pr = index(psrc,*pc);
		//pr = rindex(psrc,*pc);
		//pr = strchr(psrc,*pc);
		pr = strrchr(psrc,*pc);
		printf("result: %ld\n",(pr-psrc+1));
		printf("result: %s\n",pr);

		return 0;
}

