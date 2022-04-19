#include<stdio.h>

#define N 5

int main()
{
		char star[N] = "*****";//定义字符串
		char *ps = star;//字符型指针变量ps指向字符串star
		int i,j,k;
		//printf("%s\n",ps);
		char space = ' ';
		for(i = 0; i < N; i++)
		{
			printf("\n");
			for(j = 1;j <= i; j++)
			{
				putchar(space);//打印空格
			}
			fputs(ps,stdout);//打印字符串
		}
		printf("\n");

		return 0;
}

