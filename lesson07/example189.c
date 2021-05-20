#include<stdio.h>
#include<string.h>

#define N 128
#define ALPHA 1
#define NO_ALPHA 0


//找出字符串中最长单词的位置
int longest(char *s,int *start,int *leng);

//是否是字母
int alphabetic(char ch);


int main()
{
		//输出字符串中最长单词
		char s[N];
		char *p;
		int i;
		int start;//最长单词的起始位置
		int len;//最长单词的长度
		p = s;
		start = len = -1;
		printf("请输入一个字符串:\n");
		fgets(p,N,stdin);
		printf("最长的单词是:\n");
		longest(p,&start,&len);
		for(i = start;i < start + len;i++)
		{
				putchar(*(p+i));
		}
		putchar('\n');
		return 0;
}

int longest(char *s,int *start,int *leng)
{		int flag;//是否开始一个单词
		int len;//当前单词的字符数
		int length;//上一个最长单词的字符数
		int point;//当前单词的起始位置
		int place;//上一个最长单词的起始位置
		int i;
		int size = strlen(s);
		flag = 1;//开启一个单词
		len = length = 0;
		for(i = 0; i < size; i++)
		{
				if(alphabetic(*(s + i)))
				{
						if(flag)
						{
								//已经开始一个单词
								point = i;
								flag = 0;//单词未开始
								len++;
						}else
						{
								len++;//累计单词字符个数
						}
				}else
				{
						//非字符,单词开始
						flag = 1;
						if(len >= length)
						{
								length = len;//记录最长的单词长度
								place = point;//记录最长单词的起始位置
								len = 0;
						}
				}
		}
		
		//赋值
		*start = place;
		*leng = length;
		return place;
}

int alphabetic(char ch)
{
		if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		{
				return ALPHA;
		}
		return NO_ALPHA;
}
