#include<stdio.h>

#define N 2
#define LEN 20
#define M 4

struct Student
{
		char num[LEN];//学号
		char name[LEN];//姓名
		float score[M];//成绩数组
};

void input(struct Student stu[]);
void print(struct Student stu[]);


int main()
{
		struct Student stu[N];
		printf("请输入%d个学生信息:\n",N);
		input(stu);
		printf("学生成绩信息如下:\n");
		print(stu);
		return 0;
}

void input(struct Student stu[])
{
		int i;
		int j;
		printf("学号\t姓名\t成绩1\t成绩2\t成绩3\n");
		for(i = 0; i < N; i++)
		{
				printf("请输入第%d个学生信息:\n",i);
				printf("学号:");
				scanf("%s",stu[i].num);
				printf("姓名:");
				scanf("%s",stu[i].name);
				for(j = 0; j < M; j++)
				{
						printf("score %d:",j + 1);
						scanf("%f",&stu[i].score[j]);
				}
		}
}

void print(struct Student stu[])
{
		int i;
		int j;
		printf("学号\t姓名\t成绩1\t成绩2\t成绩3\n");
		for(i = 0; i < N; i++)
		{
				printf("%s\t%s\t",stu[i].num,stu[i].name);
				for(j = 0; j < M; j++)
				{
						printf("%.2f\t",stu[i].score[j]);
				}
				printf("\n");
		}
}


























