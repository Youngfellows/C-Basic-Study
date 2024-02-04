#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define LEN 128

int main()
{
		char str1[LEN],str2[LEN];
		char *p1,*p2;
		p1 = str1;
		p2 = str2;
		int result;
		printf("请输入字符串1:\n");
		fgets(p1,LEN,stdin);
		printf("请输入字符串2:\n");
		fgets(p2,LEN,stdin);

		result = strcmp(p1,p2);//比较字符串是否相同
		//result = strncmp(p1,p2,5);
		//result = strcasecmp(p1,p2);
		//result = strncasecmp(p1,p2,5);
		if(result == 0)
		{
				printf("str1 == str2\n");
		}else if(result > 0)
		{
				printf("str1 > str2\n");
		}else
		{
				printf("str1 < str2\n");
		}


		return 0;
}
