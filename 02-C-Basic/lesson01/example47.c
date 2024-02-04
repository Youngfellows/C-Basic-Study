#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 50

/**
 * @brief 声明函数,查找字符在字符串中的位置
 * 
 * @param p 
 * @param c 
 * @return char* 
 */
char *find(char *p,char c);

int main()
{
		char str[SIZE];
		char *p;
		char c;
		char *pc,*pf;
		p = str;//字符型指针变量p指向字符串str
		pc = &c;//字符型指针变量pc指向字符c

		printf("请输入字符串:\n");
		fgets(str,SIZE,stdin);
		fputs(p,stdout);

		printf("请输入要查找的字符:\n");
		scanf("%c",&c);

		pf = find(p,*pc);
		printf("%c &c:%p\n",*pc,pf);
		printf("%c in %d\n",*pc,pf-p+1);
		return 0;
}

/**
 * @brief 在字符串中查找字符
 * 
 * @param p 字符型指针变量p,字符串的首地址
 * @param c 查找的字符
 * @return char* 返回查找到的字符的地址
 */
char *find(char *p,char c)
{
		while(*p != '\0')
		{
				if(*p != c)
				{
						p++;
				}else
				{
						return p;
				}

		}
		return NULL;
}
