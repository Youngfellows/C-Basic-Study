#include<stdio.h>

int main()
{
		char c1,c2;
		printf("请输入两个字符c1和c2:\n");
		c1 = getchar();
		c2 = getchar();
		printf("使用putchar输出结果:");
		putchar(c1);
		putchar(c2);
		printf("\n");

		printf("使用print输出结果:");
		printf("%c%c\n",c1,c2);
		return 0;
}
