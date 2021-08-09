#include<stdio.h>
#include<string.h>

#define N 100

int main()
{
		char s1[N],s2[N];
		char *p1,*p2,*p;
		p1 = s1;
		p2 = s2;
		p = p2;

		printf("请输入字符串s1:\n");
		fgets(s1,N,stdin);

		//赋值字符串
		while(*p1 != '\0')
		{
			*p2++ = *p1++;
		}
		*p2 = '\0';

		printf("赋值后的字符串s2:\n");
		fputs(p,stdout);
		putchar('\n');

		return 0;
}

