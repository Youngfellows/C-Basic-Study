#include<stdio.h>
#include<string.h>

#define LEN 128

int htoi(char *s);

int main()
{
		char s[LEN];
		char *ps;
		ps = s;
		int number;
		printf("请输入一个十六进制字符串:\n");
		scanf("%s",ps);
		//fputs(ps,stdout);

		number = htoi(ps);
		printf("十六进值:0x%s,的十进制是:%d\n",ps,number);

		return 0;
}

//16进制转化为10进制
int htoi(char *s)
{
		int i,j;
		int n;
		int len = strlen(s);
		char *pt = s;
		int number = 0;
		printf("len=%d\n",len);
		for(i = 0; i < len; i++)
		{
			//putchar(*pt);
			//转化为10进制
			if(*pt > '0' && *pt <= '9')
			{
				n = *pt - '0';
			}
			else if(*pt >= 'a' && *pt <= 'z')
			{
				n = 10 + *pt - 'a';
			}
			else if(*pt >= 'A' && *pt <= 'Z')
			{
				n = 10 + *pt - 'A';
			}
			printf("%d\t",n);

			for(j = 0; j < len - i - 1; j++)
			{
				n = n * 16;
			}
			number += n;
			pt++;
		}
		putchar('\n');
		return number;
}
