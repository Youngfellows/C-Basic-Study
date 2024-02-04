#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请输入两个字符串s1和s2:\n");
	char s1[30], s2[30];
	//gets(s1);//字符串输入方式一，包含空格
	fgets(s1,30,stdin);//stdin 意思是键盘输入
	scanf("%s",s2);//字符数组输入方式二，不含空格

	//puts(s1);//输出字符串
	fputs(s1,stdout);//stdout输出
	puts(s2);

	return 0;
}
