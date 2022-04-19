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

/**
 * @brief 字符串比较函数
 * 
 * @param s1 字符串s1
 * @param s2 字符串s2
 * @return int 比较结果
 */
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
