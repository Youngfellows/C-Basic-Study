#include<stdio.h>

#define N1 80
#define N2 40

int main()
{
		//拼接两个字符串
		char s1[N1];
		char s2[N2];
		char *p1,*p2,*p;
		p1 = s1;
		p2 = s2;
		p = p1;

		printf("请输入字符串s1:\n");
		fgets(p1,N1,stdin);
		//scanf("%s",p1);

		printf("请输入字符串s2:\n");
		fgets(p2,N2,stdin);
		//scanf("%s",p2);

		//fputs(s1,stdout);
		//fputs(s2,stdout);

		while(*p1 != '\0')
		{
			p1++;
		}

		while(*p2 != '\0')
		{
			*p1++ = *p2++;
		}
		*p1 = '\0';
		
		printf("拼接后的字符串是:\n");
		fputs(p,stdout);
		putchar('\n');

		return 0;
}

