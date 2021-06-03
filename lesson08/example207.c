#include<stdio.h>
#include<string.h>

#define M 4
#define N 15

void input(char s[][N],int m,int n);
void print(char s[][N],int m,int n);
void sort(char s[][N],int m,int n);

int main()
{
		//对字符串进行排序
		//1. 用字符型二维数组
		char str[M][N];
		printf("请输入%d个字符串:\n",M);
		input(str,M,N);
		printf("排序前:\n");
		print(str,M,N);

		printf("排序后:\n");
		sort(str,M,N);
		print(str,M,N);

		return 0;
}

void input(char s[][N],int m,int n)
{
		int i;
		for(i = 0; i < m; i++)
		{
				scanf("%s",s[i]);
		}
}

void print(char s[][N],int m,int n)
{
		int i;
		for(i = 0; i < m; i++)
		{
				printf("%s\n",s[i]);
		}
}

void sort(char s[][N],int m,int n)
{
		int i,j;
		char *p;
		char temp[N];
		p = temp;

		for(i = 0; i < m; i++)
		{
				for(j = i; j < m; j++)
				{
						if(strcmp(s[j],s[j+1]) > 0)
						{
								strcpy(p,s[j]);
								strcpy(s[j],s[j+1]);
								strcpy(s[j+1],p);
						}
				}
		}
}
