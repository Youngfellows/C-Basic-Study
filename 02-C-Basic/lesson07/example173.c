#include<stdio.h>

#define N 80

int main()
{
		int i;
		int n;
		char origin[N];//原文,字符串
		char *pori;
		char *ptran;

		pori = origin;//字符型指针变量pori指向字符串origin
		ptran = pori;//字符型指针变量ptran指向字符串origin

		printf("请输入原文:\n");
		fgets(pori,N,stdin);
		//fputs(pori,stdout);
		
		i = 0;
		while(*pori != '\0')
		{
			putchar(*pori);
			if(*pori >= 'A' && *pori <= 'Z')
			{
				*pori = 155 - *pori;
			}else if(*pori >= 'a' && *pori <= 'z')
			{
				*pori = 219 - *pori;
			}else
			{
				*pori = *pori;
			}

			//指针往下移动
			pori++;
		}

		printf("密码是:\n");
		fputs(ptran,stdout);
		putchar('\n');
		return 0;
}
