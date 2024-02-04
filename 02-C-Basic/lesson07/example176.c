#include<stdio.h>

#define N 100

int strcmp(char *s1,char *s2);

int main()
{
		//比较两个字符串
		char s1[N],s2[N];
		int result;
		printf("请输入字符串s1:\n");
		fgets(s1,N,stdin);
		printf("请输入字符串s2:\n");
		fgets(s2,N,stdin);

		result = strcmp(s1,s2);
		if(result > 0)
		{
				printf("字符串s1大于s2...\n");
		}else if(result < 0)
		{
				printf("字符串s1小于s2...\n");
		}else
		{
				printf("字符串s1等于s2...\n");
		}

		return 0;
}

/**
 * @brief 比较两个字符串
 * 
 * @param s1 字符串s1
 * @param s2 字符串s2
 * @return int 比较结果
 */
int strcmp(char *s1,char *s2)
{
		int result;
		char *p1 = s1;
		char *p2 = s2;
		while(*p1 == *p2 && *p1 != '\0')
		{
				p1++;
				p2++;
		}

		if(*p1 == '\0' && *p2 == '\0' )
		{
				result = 0;
		}else
		{
				result = *p1 - *p2;
		}
		printf("result = %d\n",result);
		return result;
}
