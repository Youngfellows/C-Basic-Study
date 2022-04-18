#include<stdlib.h>
#include<stdio.h>

int main()
{
		char *str = "I Love China!!!";//定义字符型指针变量str,str指向字符串
		str = "I love taiwan!!!!";//str从新指向字符串
		printf("%s\n",str);
		printf("%c\n",str[4]);
		printf("%p\n",str);
		printf("%p\n",&str[1]);
	return 0;
}
