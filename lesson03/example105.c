#include<stdio.h>
#include<stdlib.h>

#define SIZE 30
#define LEN 5

struct Student
{
		int number;
		char name[SIZE];
		float score;
};

int main()
{
		struct Student stu[LEN] = 
		{{1000,"小明",78.8},
				{1001,"小花",88.5},
				{1002,"小华",65.5},
				{1003,"小燕",95.5},
				{1004,"小青",59.5}
		};

		struct Student temp;
		int i,j,max;

		//选择排序
		for(i=0;i<LEN-1;i++)
		{	
			max = i;
			for(j=i+1;j<LEN;j++)
			{
				if(stu[max].score < stu[j].score)
				{
					max = j;
				}
			}

			if(max != i)
			{
				temp = stu[max];
				stu[max] = stu[i];
				stu[i] = temp;
			}
		}

		printf("排序后学生信息:\n");
		printf("学号\t姓名\t成绩\n");
		for(i=0;i<LEN;i++)
		{
				printf("%d\t%s\t%.2f\n",stu[i].number,stu[i].name,stu[i].score);
		}


		return 0;
}
