#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 128

int main()
{
		char src[SIZE],dest[SIZE];
		char *psrc,*pdest,*pr;
		psrc = src;
		pdest = dest;
		
		printf("请输入字符串1:\n");
		fgets(psrc,SIZE,stdin);//输入字符串src

		printf("请输入字符串2:\n");
		fgets(pdest,SIZE,stdin);//输入字符串dest
		pr = strcat(pdest,psrc);//字符串拼接
		fputs(pdest,stdout);
		fputs(psrc,stdout);
		printf("result:%s\n",pr);
		return 0;
}

