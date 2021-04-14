#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ROW 3
#define COLUMN 10
#define LEN 10
#define SIZE 3

int main()
{
		char str[ROW][COLUMN];//存放字符串的二维数组
		char temp[LEN];
		int i,j,min;
		FILE *fp;

		printf("请输入字符串:\n");
		for(i=0;i<SIZE;i++)
		{
				gets(str[i]);
		}

		//排序
		for(i=0;i<SIZE-1;i++)
		{
			min = i;
			for(j=i+1;j<SIZE;j++)
			{
				//比较字符串
				if(strcmp(str[min],str[j]) > 0)
				{
					min = j;
				}
			}

			if(min != i)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[min]);
				strcpy(str[min],temp);
			}

		}


		//保存到文件
		if((fp = fopen("./string.dat","w")) == NULL)
		{
			printf("打开文件失败\n");
			exit(0);
		}

		printf("结果是:\n");
		for(i=0;i<SIZE;i++)
		{
			fputs(str[i],fp);
			fputs("\n",fp);
			printf("%s\n",str[i]);
		}

		return 0;
}

