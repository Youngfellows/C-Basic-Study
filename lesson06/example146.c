#include<stdio.h>

int main()
{
		char ch;
		int letters = 0;//字母
		int space = 0;//空格
		int digit = 0;//数字
		int other = 0;//其他
		printf("请输入一行字符:\n");
		while((ch = getchar()) != '\n')
		{
			if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			{
					letters++;
			}else if(ch == ' ')
			{
					space++;
			}else if(ch >= '0' && ch <= '9')
			{
				digit++;
			}else
			{
				other++;
			}
		}
		printf("字母数:%d,空格数:%d,数字数:%d,其他:%d\n",letters,space,digit,other);

		return 0;
}
