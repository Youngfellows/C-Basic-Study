#include<stdio.h>
#include<string.h>

#define N 128

void insert(char *s);

int main()
{
		//输入一个字符串,在字符之间插入一个空格
		char s[N];
		printf("请输入一个字符串:\n");
		fgets(s,N,stdin);
		insert(s);
		fputs("最终字符串:\n",stdout);
		fputs(s,stdout);
		return 0;
}

void insert(char *s)
{
		int i;
		for(i = strlen(s); i > 0; i--)
		{
			*(s + 2 * i) = *(s + i);
			*(s + (2 * i - 1)) = ' ';
		}
}
