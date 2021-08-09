#include<stdio.h>

#define N 80

int main()
{
		int i;
		int n;
		char origin[N];//原文
		char tran[N];//密码
		char *pori;
		char *ptran;
		char *pt;

		pori = origin;
		ptran = tran;
		pt = ptran;

		printf("请输入原文:\n");
		fgets(pori,N,stdin);
		//fputs(pori,stdout);
		
		i = 0;
		while(*pori != '\0')
		{
			putchar(*pori);
			if(*pori >= 'A' && *pori <= 'Z')
			{
				*ptran = 155 - *pori;
			}else if(*pori >= 'a' && *pori <= 'z')
			{
				*ptran = 219 - *pori;
			}else
			{
				*ptran = *pori;
			}

			//指针往下移动
			pori++;
			ptran++;
		}

		printf("密码是:\n");
		fputs(pt,stdout);
		putchar('\n');
		return 0;
}
