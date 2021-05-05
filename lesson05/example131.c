#include<stdio.h>

int main()
{
		char c1,c2;
		int i1,i2;
		printf("请输入两个字符c1和c2:\n");
		scanf("%c,%c",&c1,&c2);
		i1 = c1;
		i2 = c2;

		printf("按字符输出结果:");
		printf("%c,%c\n",i1,i2);

		printf("按ASCII码输出结果为:");
		printf("%d,%d\n",c1,c2);
		return 0;
}
