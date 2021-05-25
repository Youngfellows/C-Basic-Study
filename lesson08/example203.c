#include<stdio.h>

#define LEN 128

void length(char *s,int *len);

int main()
{
		char s[LEN];
		char *p;
		int len;
		p = s;
	
		printf("请输入一个字符串:\n");
		fgets(p,LEN,stdin);
		length(p,&len);
		printf("字符串长度是:len=%d\n",len);
		return 0;
}


void length(char *s,int *len)
{
		int i = 0;
		char *pt = s;
		while(*pt != '\0')
		{
			pt++;
			i++;
		}
		*len = i;
}
