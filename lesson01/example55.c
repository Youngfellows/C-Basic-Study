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
		fgets(psrc,SIZE,stdin);

		printf("请输入字符串2:\n");
		fgets(pdest,SIZE,stdin);
		pr = strcat(pdest,psrc);
		fputs(pdest,stdout);
		fputs(psrc,stdout);
		printf("result:%s\n",pr);
		return 0;
}

