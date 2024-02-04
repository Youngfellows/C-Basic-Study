#include<stdio.h>
#include<stdlib.h>

#define SIZE 30
#define LEN 2

//类别
union Category
{
	int classs;//班级
	char position[SIZE];//职位
};

struct Person
{
	int number;//编号
	char sex;//性别
	char name[SIZE];//姓名
	char job;//工作
	union Category category;//类别
};


int main()
{
		struct Person person[LEN];
		int i;
		for(i=0;i<LEN;i++)
		{
			printf("请输入人的数据:\n");
			printf("编号 性别 姓名 工作\n");
			scanf("%d %c %s %c",&person[i].number,&person[i].sex,person[i].name,&person[i].job);
			if('s' == person[i].job)
			{
				printf("请输入班级号:");
				scanf("%d",&person[i].category.classs);
			}else if('t' == person[i].job)
			{
				//fgets(person[i].category.position,LEN,stdin);
				printf("请输入老师职位:");
				scanf("%s",person[i].category.position);
			}else
			{
				printf("输入职位错误");
			}
		}

		puts("\n");
		printf("编号    性别 姓名        工作 班级/职位\n");
		for(i=0;i<LEN;i++)
		{
			if(person[i].job == 's')
			{
				printf("%-6d%-4c%-10s%-4c%-10d\n",person[i].number,person[i].sex,person[i].name,person[i].job,person[i].category.classs);
			}else
			{
				printf("%-6d%-4c%-10s%-4c%-10s\n",person[i].number,person[i].sex,person[i].name,person[i].job,person[i].category.position);
			}
		}
		return 0;
}

