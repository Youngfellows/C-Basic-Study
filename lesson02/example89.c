#include<stdlib.h>
#include<stdio.h>

int main()
{
		char *a,str[120];
		a = str;
		printf("请输入一个字符串:\n");
		//scanf("%s",a);
		fgets(a,120,stdin);
		printf("你输入的是:\n%s\n",a);
	return 0;
}
