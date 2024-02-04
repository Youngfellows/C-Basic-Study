#include<stdio.h>
#include<stdlib.h>
int main()
{
		printf("请输入两个字符串s1和s2:\n");
		char s1[40],s2[40];
		//gets(s1);
		//gets(s2);
		//printf("%s\n",s1);
		//printf("%s\n",s2);

		fgets(s1,40,stdin);
		fgets(s2,40,stdin);
		puts(s1);
		puts(s2);
		fputs(s1,stdout);
		fputs(s2,stdout);
		return 0;
}
