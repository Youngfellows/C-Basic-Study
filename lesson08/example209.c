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
		char *p[M];//p[M]是一个数组,数组中的每一个元素是char * 类型,即数组中的每一个元素指向字符串
		int i;
		for(i = 0; i < M; i++)
		{
			p[i] = str[i];//对指针数组中的每一个元素赋值,即指向二维数组的每一行
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

/**
 * @brief 对二维数组进行排序
 * 
 * @param s 指针数组作为函数的参数
 * @param m 
 * @param n 
 */
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
