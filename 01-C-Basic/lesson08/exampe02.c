#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//判断字符是否为数字
	//char ch = 'A';
	//printf("%c %s是数字\n",ch,isdigit(ch)?"是":"不是");

	//输入一个字符串，判断字符是否是数字
	int str;
	printf("输入一个字符串，判断字符是否是数字\n");
	for(;;)
	{
		str = getchar();//重键盘获取一个字符
		printf("%c %s数字\n",str,isdigit(str)?"是":"不是");
	}
	return 0;
}
