#include<stdio.h>

#define N 2
#define LEN 20
#define M 4

struct Student
{
		char num[LEN];//学号
		char name[LEN];//姓名
		float score[M];//成绩数组
		float ave;//平均分
};

void input(struct Student stu[]);
void print(struct Student stu[]);
void print2(struct Student stu);
struct Student good(struct Student stu[]);//找出成绩最好的学生

int main()
{
		struct Student stu[N];
		struct Student good_stu;
		printf("请输入%d个学生信息:\n",N);
		input(stu);
		printf("学生成绩信息如下:\n");
		print(stu);
		
		good_stu = good(stu);
		printf("成绩最高的学生信息如下:\n");
		print2(good_stu);

		return 0;
}

void input(struct Student stu[])
{
		int i;
		int j;
		float average;//平均分
		float sum;//总分
		printf("学号\t姓名\t成绩1\t成绩2\t成绩3\n");
		for(i = 0; i < N; i++)
		{
				printf("请输入第%d个学生信息:\n",i);
				printf("学号:");
				scanf("%s",stu[i].num);
				printf("姓名:");
				scanf("%s",stu[i].name);
				sum = 0;
				for(j = 0; j < M; j++)
				{
						printf("score %d:",j + 1);
						scanf("%f",&stu[i].score[j]);
						sum += stu[i].score[j];
				}
				average = sum / M;
				stu[i].ave = average;
		}
}

void print(struct Student stu[])
{
		int i;
		int j;
		printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
		for(i = 0; i < N; i++)
		{
				printf("%s\t%s\t",stu[i].num,stu[i].name);
				for(j = 0; j < M; j++)
				{
						printf("%.2f\t",stu[i].score[j]);
				}
				printf("%.2f\n",stu[i].ave);
		}
}

void print2(struct Student stu)
{
		int j;
		printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
		printf("%s\t%s\t",stu.num,stu.name);
		for(j = 0; j < M; j++)
		{
				printf("%.2f\t",stu.score[j]);
		}
		printf("%.2f\n",stu.ave);
}


//找出成绩最好的学生
struct Student good(struct Student stu[])
{
		float max;//最高分
		int maxi;//最高分的索引
		int i;
		max = stu[0].ave;
		maxi = 0;
		for(i = 0; i < N; i++)
		{
				if(max < stu[i].ave)
				{
						max = stu[i].ave;
						maxi = i;
				}
		}
		return stu[maxi];
}























