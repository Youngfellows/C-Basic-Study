#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30
#define LEN 3
#define TOTAL_COUNT 10

struct Person
{
	char name[SIZE];
	int count;//得票数
};


int main()
{
		struct Person leader[LEN] = {{"chen",0},{"zhang",0},{"wang",0}};
		int i,j;
		char leader_name[SIZE];
		for(i=0;i<TOTAL_COUNT;i++)
		{
			printf("请输入您要投票人名字:");
			//fgets(leader_name,SIZE,stdin);
			//fputs(leader_name,stdout);
			scanf("%s",leader_name);
			for(j=0;j<LEN;j++)
			{
				if(strcmp(leader_name,leader[j].name) == 0)
				{
						leader[j].count++;
						printf("%s得增加1票!!!\n",leader[j].name);
				}
			}
		}

		printf("投票结果:\n");
		printf("姓名\t投票\n");
		for(i=0;i<LEN;i++)
		{
			printf("%s\t%d\n",leader[i].name,leader[i].count);
		}


		return 0;
}

