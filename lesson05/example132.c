#include<stdio.h>

int main()
{
		char c1,c2;
		int i1,i2;
		printf("请输入两个整数i1和i2:\n");
		scanf("%d,%d",&i1,&i2);
		c1 = i1;
		c2 = i2;

		printf("按字符输出结果:");
		printf("%c,%c\n",i1,i2);

		printf("按ASCII码输出结果为:");
		printf("%d,%d\n",c1,c2);
		return 0;
}
