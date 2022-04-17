#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 100

int main()
{
		char s1[LEN];//定义字符串s1
		char *p;//定义字符型指针变量p
		p = s1;//字符型指针变量p指向s1字符串
		int i;
		printf("请输入一个字符串:\n");
		fgets(s1,LEN,stdin);//输入字符串
		fputs(p,stdout);//打印字符串
		puts(p);//打印字符串
		
		for(i=0;*p != '\0';p++)
		{
				printf("%c %s digit\n",*p,isdigit(*p)?"Yes":"No");
				printf("%c %s upper\n",*p,isupper(*p)?"Yes":"No");
				printf("%c %s space\n",*p,isspace(*p)?"Yes":"No");
				printf("%c %s cntrl\n",*p,iscntrl(*p)?"Yes":"No");
				printf("%c %s digit\n",*p,isdigit(*p)?"Yes":"No");
		}                             

	return 0;
}
