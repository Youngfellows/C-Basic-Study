#include<stdio.h>
#include<string.h>

#define N 128

void copynstr(char *s1,char *s2,int n);

int main()
{
		char s1[N];
		char s2[N];
		int n;
		char *p1,*p2;
		p1 = s1;
		p2 = s2;
		printf("请输入一个字符串:\n");
		fgets(p1,N,stdin);
		//getchar();
		printf("请输入要拷贝的起始位置:\n");
		scanf("%d",&n);
		while(strlen(p1) < n)
		{
				printf("开始拷贝的位置超过了字符串长度,请重新输入:\n");
				scanf("%d",&n);
		}

		copynstr(p1,p2,n);
		printf("源字符串:%s\n",p1);
		printf("拷贝字符串:%s\n",p2);

		return 0;
}

/**
 * @brief 拷贝s1字符串的n个字符到s2字符串
 * 
 * @param s1 
 * @param s2 
 * @param n 开始拷贝字符位置
 */
void copynstr(char *s1,char *s2,int n)
{
		int i;
		i = 0;
		//先跳过n前面个字符
		while(i < n - 1)
		{
				i++;
				s1++;
		}

		//开始拷贝n之后的字符
		while(*s1 != '\0')
		{
				*s2 = *s1;
				s1++;
				s2++;
		}
		*s2 = '\0';
}
