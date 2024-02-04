#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30
#define LEN 3
#define COUNT 2

struct Student
{
		long number;//学号
		char name[SIZE];//姓名
		float score[LEN];//三门功课成绩
		float aver;//平均成绩
};

void input(struct Student stu[]);
struct Student max(struct Student stu[]);
void print(struct Student stud);

int main()
{
		struct Student stu[COUNT];//结构体数组
		struct Student *p;
		p = stu;//结构体指针变量p指向结构体数组的首元素stu[0]
		input(p);
		print(max(p));

		return 0;
}

/**
 * @brief 输入结构体数组元素
 * 
 * @param stu 结构体数组的首地址
 */
void input(struct Student stu[])
{
		int i;
		printf("请输入各个学生信息:\n");
		printf("学号 姓名 三门功课的成绩\n");
		for(i=0;i<COUNT;i++)
		{
				printf("请输入第%d个学生成绩\n",i);
				scanf("%ld %s %f %f %f",&stu[i].number,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
				stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;//计算平均成绩
		}
}

/**
 * @brief 找出成绩最好的学生
 * 
 * @param stu 结构体数组
 * @return struct Student  成绩最好的学生
 */
struct Student max(struct Student stu[])
{
		int i;
		int max_index = 0;//记录成绩最好学生的索引
		for(i=0;i<COUNT;i++)
		{
			if(stu[max_index].aver < stu[i].aver)
			{
				max_index = i;
			}
		}

		return stu[max_index];
}

/**
 * @brief 打印结构体变量
 * 
 * @param stud 学生结构体变量
 */
void print(struct Student stud)
{
		printf("平均成绩最高的学生是:\n");
		printf("学号\t姓名\t平均\t语文\t数学\t物理\n");
		printf("%ld\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",stud.number,stud.name,stud.aver,stud.score[0],stud.score[1],stud.score[2]);
}

