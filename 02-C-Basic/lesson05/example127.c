#include<stdio.h>
#include<string.h>

#define SIZE 30


char * password(char *,int);


int main()
{
		char pwd[SIZE] = "China";//定义字符串pwd
		char *p;//定义字符型指针变量p
		p = pwd;//字符型指针变量p,指向字符串pwd
		p = password(p,strlen(pwd));
		printf("%s\n",p);
		return 0;
}

/**
 * @brief 对字符串进行加密
 * 
 * @param src 字符串
 * @param size 字符串长度
 * @return char* 返回加密后的字符串
 */
char * password(char *src,int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		src[i] = src[i]+4;//字符串加密
	}

	return src;
}
