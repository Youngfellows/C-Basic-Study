#include<stdio.h>
#include<string.h>

#define LEN 128

char * inverse(char *s);

int main()
{
		//把字符串反序号存放
		char s1[LEN],s2[LEN];
		char *p1,*p2;
		p1 = s1;
		p2 = s2;
		printf("请输入一个字符串:\n");
		fgets(p1,LEN,stdin);
		fputs(p1,stdout);
		putchar('\n');

		p2 = inverse(p1);
		printf("转换后:\n");
		fputs(p2,stdout);
		putchar('\n');

		return 0;
}

/**
 * @brief 转置字符串
 * 
 * @param s 字符串
 * @return char* 返回转换后的字符串首地址
 */
char * inverse(char *s)
{
		printf("字符串长度:%ld\n",strlen(s));
		int len = strlen(s);
		int i,j;
		char ch;
		for(i = 0,j = len; i < len / 2; i++,j-- )
		{
			ch = s[i];
			s[i] = s[j - 1];
			s[j - 1] = ch;
		}
		return s;
}
