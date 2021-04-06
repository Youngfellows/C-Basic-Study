#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 128

int main()
{
		char src[SIZE],split[SIZE];
		char *psrc,*ps,*pr;
		psrc = src;
		ps = split;
		
		printf("请输入字符串1:\n");
		fgets(psrc,SIZE,stdin);

		printf("请输入字符串2:\n");
		fgets(ps,SIZE,stdin);
		
		pr = strtok(psrc,ps);
		printf("%s\n",pr);


		return 0;
}

