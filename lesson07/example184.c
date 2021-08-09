#include<stdio.h>

#define N 128

void concatenate(char *s1,char *s2,char *s);

int main()
{	
		char s1[N],s2[N];
		char s[N];
		char *p1,*p2,*p;
		p1 = s1;
		p2 = s2;
		p = s;
		
		printf("请输入字符串s1:\n");
		fgets(p1,N,stdin);
		printf("请输入字符串s2:\n");
		fgets(p2,N,stdin);

		concatenate(p1,p2,p);
		printf("拼接后的字符串是:\n");
		fputs(p,stdout);

		return 0;
}


void concatenate(char *s1,char *s2,char *s)
{
		int i,j;
		for(i = 0; *(s1 + i) != '\0'; i++)
		{
			if(*(s1 + i) != '\n')	
			{
				*(s + i) = *(s1 + i);
			}else
			{
				*(s + i) = ' ';
			}
		}

		for(j = 0; *(s2 + j) != '\0';j++)
		{
			*(s + (i + j)) = *(s2 + j);
		}
		*(s + i + j) = '\0';
}
