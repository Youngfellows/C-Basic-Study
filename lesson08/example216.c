#include<stdio.h>
#include<string.h>

#define LEN 30
#define M 5

void sort(char **p);

int main()
{
		int i;
		char str[M][LEN];//二维字符数组
		char *pstr[M];//指针数组,数组中每个元素存放的是一个字符串的首地址
		char **p;//指向指针的指针,二级指针

		//将第i个字符串的首地址赋值给指针数组pstr的第i个元素
		for(i = 0; i < M; i++)
		{
				pstr[i] = str[i];
		}

		printf("请输入%d个字符串:\n",M);
		for(i = 0; i < M; i++)
		{
				//scanf("%s",pstr[i]);
				fgets(pstr[i],LEN,stdin);
		}
		p = pstr;//指向指针的指针变量,指向指针数组
		sort(p);
		

		printf("排序后,原字符串:\n");
		for(i = 0; i < M; i++)
		{
				fputs(str[i],stdout);
				//putchar('\n');
		}

		printf("排序后,指针数组:\n");
		for(i = 0; i < M; i++)
		{
				fputs(pstr[i],stdout);
		}

		return 0;
}

/**
 * @brief 
 * 
 * @param p 二级指针,p是指向char *指针的指针变量
 */
void sort(char **p)
{
		int i;
		int j;
		char *temp;//临时指针变量,改变指针数组的指向
		for(i = 0; i < M; i++)
		{
				for(j = i + 1; j < M; j++)
				{
						if(strcmp(*(p + i),*(p + j)) > 0)
						{
								temp = *(p + i);
								*(p + i) = *(p + j);
								*(p + j) = temp;
						}
				}
		}
}


