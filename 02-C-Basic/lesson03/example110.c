#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30
#define LEN 3
#define COUNT 2

struct Student
{
		long number;
		char name[SIZE];
		float score[LEN];//三门功课成绩
		float aver;//平均成绩
};

void input(struct Student stu[]);
struct Student max(struct Student stu[]);
void print(struct Student stud);

int main()
{
		struct Student stu[COUNT];
		struct Student *p;
		p = stu;//指针变量p指向数组的首元素stu[0]
		input(p);
		print(max(p));

		return 0;
}

void input(struct Student stu[])
{
		int i;
		printf("请输入各个学生信息:\n");
		printf("学号 姓名 三门功课的成绩\n");
		for(i=0;i<COUNT;i++)
		{
				printf("请输入第%d个学生成绩\n",i);
				scanf("%ld %s %f %f %f",&stu[i].number,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
				stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
		}
}

struct Student max(struct Student stu[])
{
		int i;
		int max_index = 0;
		for(i=0;i<COUNT;i++)
		{
			if(stu[max_index].aver < stu[i].aver)
			{
				max_index = i;
			}
		}

		return stu[max_index];
}

void print(struct Student stud)
{
		printf("平均成绩最高的学生是:\n");
		printf("学号\t姓名\t平均\t语文\t数学\t物理\n");
		printf("%ld\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stud.number,stud.name,stud.aver,stud.score[0],stud.score[1],stud.score[2]);
}

