#include<stdio.h>
#include<string.h>

#define M 4
#define N 15

void input(char *p[N],int m,int n);
void print(char *p[N],int m,int n);
void sort(char *p[N],int m,int n);

int main()
{
		//对字符串进行排序
		//1. 用指针数组处理
		char str[M][N];
		char *p[M];
		int i;
		for(i = 0; i < M; i++)
		{
			p[i] = str[i];
		}
		
		printf("请输入%d个字符串:\n",M);
		input(p,M,N);
		printf("排序前:\n");
		print(p,M,N);

		printf("排序后:\n");
		sort(p,M,N);
		print(p,M,N);

		return 0;
}

void input(char *p[N],int m,int n)
{
		int i;
		for(i = 0; i < m; i++)
		{
				scanf("%s",p[i]);
		}
}

void print(char *s[N],int m,int n)
{
		int i;
		for(i = 0; i < m; i++)
		{
				printf("%s\n",s[i]);
		}
}

void sort(char *s[M],int m,int n)
{
		int i,j;
		char temp[N];
		char *pt;
		pt = temp;

		for(i = 0; i < m; i++)
		{
				for(j = i; j < m; j++)
				{
						//printf("%d\n",j);
						if((j + 1 < m) && strcmp(*(s+j),*(s+j+1)) > 0)
						{
								//strcpy(pt,*(s+j));
								//strcpy(*(s+j),*(s+j+1));
								//strcpy(*(s+j+1),pt);
								pt = *(s+j);
								*(s+j) = *(s+j+1);
								*(s+j+1) = pt;
								//printf("--%s\n",*(s+j));
								//printf("**%s\n",*(s+j+1));
						}
				}
		}
}
