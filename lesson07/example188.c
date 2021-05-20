#include<stdio.h>
#include<string.h>

#define N 128

void count(char *s,int *upper,int *lower,int *digit,int *space,int *other);

int main()
{
		char s[N];
		char *p;
		int upper,lower,digit,space,other;
		upper = lower = digit = space = other = 0;
		p = s;
		printf("请输入一个字符串:\n");
		fgets(p,N,stdin);
		count(p,&upper,&lower,&digit,&space,&other);
		printf("大写字母:%d,小写字母:%d,数字:%d,空格:%d,其他:%d\n",upper,lower,digit,space,other);

		return 0;
}

void count(char *s,int *upper,int *lower,int *digit,int *space,int *other)
{
	 char *pt;
	 int len = strlen(s);
	 char ch;
	 for(pt = s; pt < s + len; pt++)
	 {
			ch = *pt;
			printf("%c",ch);
			if(ch >= 'A' && ch <= 'Z')
			{
				(*upper)++;
			}else if(ch >= 'a' && ch <= 'z')
			{
				(*lower)++;
			}else if(ch >= '0' && ch <= '9')
			{
				(*digit)++;
			}else if(ch == ' ')
			{
				(*space)++;
			}else
			{
				(*other)++;
			}
	 }
	
	printf("大写字母:%d,小写字母:%d,数字:%d,空格:%d,其他:%d\n",*upper,*lower,*digit,*space,*other);
}
