#include<stdio.h>

#define N1 80
#define N2 40

int main()
{
		//拼接两个字符串
		char s1[N1];
		char s2[N2];
		int i,j;
		printf("请输入字符串s1:\n");
		fgets(s1,N1,stdin);

		//getchar();//吃掉一个换行

		printf("请输入字符串s2:\n");
		fgets(s2,N2,stdin);

		fputs(s1,stdout);
		fputs(s2,stdout);

		i = 0;
		j = 0;
		while(s1[i] != '\0')
		{
			i++;
		}

		while(s2[j] != '\0')
		{
			s1[i++] = s2[j++];
		}
		s1[i] = '\0';
		
		printf("拼接后的字符串是:\n");
		fputs(s1,stdout);
		putchar('\n');

		return 0;
}

