#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 50

char *find(char *p,char c);

int main()
{
		char str[SIZE];
		char *p;
		char c;
		char *pc,*pf;
		p = str;
		pc = &c;

		printf("请输入字符串:\n");
		fgets(str,SIZE,stdin);
		fputs(p,stdout);

		printf("请输入要查找的字符:\n");
		scanf("%c",&c);

		pf = find(p,*pc);
		printf("%c &c:%p\n",*pc,pf);
		printf("%c in %d\n",*pc,pf-p+1);
		return 0;
}

char *find(char *p,char c)
{
		while(*p != '\0')
		{
				if(*p != c)
				{
						p++;
				}else
				{
						return p;
				}

		}
		return NULL;
}
