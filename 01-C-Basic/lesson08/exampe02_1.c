#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//判断字符是否为数字
	//char ch = 'A';
	//printf("%c %s是数字\n",ch,isdigit(ch)?"是":"不是");

	//输入一个字符串，判断字符是否是数字
	char str[1024];
	char *p;
	p = str;
	printf("输入一个字符串，判断字符是否是数字\n");
	fgets(p,1024,stdin);
	printf("%s\n",p);
	for(;*p != '0';p++)
	{
		printf("%c %s数字\n",*p,isdigit(*p)?"是":"不是");	
	}

	return 0;
}
