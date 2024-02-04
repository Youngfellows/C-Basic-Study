#include<stdio.h>

#define N 128

void cpy(char *s1,char *s);

int main()
{
		char s1[N],s[N];
		char *p1,*p;
		p1 = s1;
		p = s;

		printf("请输入一个字符串:\n");
		fgets(p1,N,stdin);
		cpy(p1,p);
		printf("字符串中的元音字符是:\n");
		fputs(p,stdout);
		putchar('\n');
		return 0;
}

/**
 * @brief 拷贝元音字符
 * 
 * @param s1 字符串
 * @param s 返回拷贝后的元音字符串
 */
void  cpy(char *s1,char *s)
{
		int i,j;
		for(i = 0,j = 0; *(s1 + i) != '\0'; i++)
		{
			if(  *(s1 + i) == 'a'
				|| *(s1 + i) == 'A'								
				|| *(s1 + i) == 'e'								
				|| *(s1 + i) == 'E'								
				|| *(s1 + i) == 'i'								
				|| *(s1 + i) == 'I'								
				|| *(s1 + i) == 'o'								
				|| *(s1 + i) == 'O'								
				|| *(s1 + i) == 'u'								
				|| *(s1 + i) == 'U')
			{
				*(s + j) = *(s1 + i);
				j++;
			}
		}
}

