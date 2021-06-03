#include<stdio.h>

#define LEN 128

int strcmp(char *s1,char *s2);

int main()
{
		//实现两个字符串的比较
		char str1[LEN];
		char str2[LEN];
		char *s1;
		char *s2;
		int result;
		s1 = str1;
		s2 = str2;
		printf("请输入字符串s1:\n");
		fgets(s1,LEN,stdin);
		printf("请输入字符串s2:\n");
		fgets(s2,LEN,stdin);
		fputs(s1,stdout);
		fputs(s2,stdout);
		
		result = strcmp(s1,s2);
		printf("result=%d\n",result);

		return 0;
}

int strcmp(char *s1,char *s2)
{
		int i;
		i = 0;
		while(*(s1 + i) == *(s2 + i))
		{
			i++;
			if(*(s1 + i) == '\0')
			{
				return 0;
			}
		}

		return (*(s1 + i) - *(s2 + i));
}
