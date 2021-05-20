#include<stdio.h>
#include<string.h>

#define N 128

void insert(char *s,char *s1);

int main()
{
		//输入一个字符串,在字符之间插入一个空格
		char s[N],s1[N];
		printf("请输入一个字符串:\n");
		fgets(s,N,stdin);
		insert(s,s1);
		fputs("最终字符串:\n",stdout);
		fputs(s1,stdout);
		return 0;
}

void insert(char *s,char *s1)
{
		int i,j;
		for(i = 0,j=0; i < strlen(s); i++)
		{
				*(s1 + j++) = *(s + i);
				*(s1 + j++) = ' ';
		}
}
