#include<stdio.h>
#include<string.h>

#define N 10

//冒泡排序
void bubble_sort(char *s);

int main()
{
		char s[N];
		char *p;
		p = s;
		printf("请输入一个字符串:\n");
		fgets(p,N,stdin);
		while(strlen(p) > N)
		{
			printf("输入的字符串太长了,从新输入:\n");
			fgets(p,N,stdin);
		}
		bubble_sort(p);
		fputs(p,stdout);

		return 0;
}

void bubble_sort(char *s)
{
	int i,j;
	char temp;
	int len = strlen(s);
	for(i = 0; i < len - 1; i++)
	{
		for(j = 0; j < len - i; j++)
		{
			//两两比较
			if(*(s + j) < *(s + (j + 1)))
			{
				temp = *(s + j);
				*(s + j) = *(s + (j + 1));
				*(s + (j + 1)) = temp;
			}
		}
	}
}




