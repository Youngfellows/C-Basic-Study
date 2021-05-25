#include<stdio.h>

#define N 128

void counts(char *s,int *upper,int *lower,int *space,int *digit,int *other);

int main()
{		
		char s[N];
		char *p;
		int upper,lower,space,digit,other;
		p = s;
		upper = lower = space = digit = other = 0;
		printf("请输入一个字符串:\n");
		fgets(p,N,stdin);
		counts(p,&upper,&lower,&space,&digit,&other);
		printf("大写字母:%d,小写字母:%d,空格:%d,数字:%d,其他:%d\n",upper,lower,space,digit,other);

		return 0;
}

void counts(char *s,int *upper,int *lower,int *space,int *digit,int *other)
{
	char *pt = s;
	while(*pt != '\0')
	{
		if(*pt >= 'A' && *pt <= 'Z')
		{
			(*upper)++;
		}else if(*pt >= 'a' && *pt <= 'z')
		{
			(*lower)++;
		}else if(*pt >= '0' && *pt <= '9')
		{
			(*digit)++;
		}else if(*pt == ' ')
		{
			(*space)++;
		}else
		{
			(*other)++;
		}
		pt++;
	}
}
