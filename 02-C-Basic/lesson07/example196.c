#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void convert(int num,char *s,int *len);

int main()
{
	//用递归法,将一个整数转化为字符串
	int number;
	int len = 0;
	char s[128];
	char *p;
	p = s;
	printf("请输入一个整数:\n");
	scanf("%d",&number);
	if(number < 0)
	{
		putchar('-');
		putchar(' ');
		number = - number;
	}
	convert(number,p,&len);
	*(p+len+1) = '\0';
	printf("\nlen=%d,%s\n",len,p);

	putchar('\n');
}

/**
 * @brief 将一个整数转化为字符串
 * 
 * @param num 整数
 * @param s 字符串
 * @param len 转换后的字符串长度
 */
void convert(int num,char *s,int *len){
	int i;
	char ch[2];
	if((i = num / 10) != 0)
	{
		(*len)++;
		printf("\n----%d,len=%d---\n",i,*len);
		convert(i,s,len);
		printf("\n****%d****\n",i);
	}
	else
	{
		(*len)++;
		printf("\n****end,len=%d*****\n",*len);	
	}
	//putchar(num % 10 + '0');
	//putchar(' ');
	snprintf(ch,2,"%d",num % 10);
	printf("\n**%s**\n",ch);
	strcat(s,ch);
	//printf("\nxxxx %s\n",s);
}

