#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 30//字符串的最多长度

int main()
{
	//输入一个字符串，判断字符是否是数字字符
	printf("输入一个字符串，判断字符是否是数字字符\n");
	char s1[LEN];
	char *p;//定义一个指向字符的指针变量
	int i;
	p = s1;//字符指针遍历p指向字符串s1
	//fgets(s1,LEN,stdin);//字符串输入方式1,含有空格
	fgets(p,LEN,stdin);//字符串输入方式1,含有空格
	//scanf("%s",s1);//字符串输入方式1,不含有含有空格
	
	//fputs(s1,stdout);//字符串输出方式1
	//puts(s1);

	//遍历字符串
	for(i=0;*p != 0;p++)
	{
		//printf("字符%c%s数字\n",*p,isdigit(*p)?"是":"不是");//是否为数字字符
		//printf("字符%c%s英文字母或数字\n",*p,isalnum(*p)?"是":"不是");//是否英文字母或数字
		printf("字符%c%s小写字母\n",*p,islower(*p)?"是":"不是");//是否为小写字母
		//printf("字符%c%s大写字母\n",*p,isupper(*p)?"是":"不是");//是否为大写字母
		//printf("字符%c%s空格字符\n",*p,isspace(*p)?"是":"不是");//是否为空格字符
		//printf("字符%c%s控制字符\n",*p,iscntrl(*p)?"是":"不是");//是否为控制字符
 		
	}

	//fputs(s1,stdout);//字符串输出方式1
	
	return 0;
}
