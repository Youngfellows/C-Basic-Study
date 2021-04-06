#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define AMOUNT 2
#define LEN 20

struct student
{
		int id;
		char name[LEN];
		char sex[LEN];
		double score;
};

int main()
{
		struct student stu[AMOUNT];
		struct student *p[AMOUNT];
		struct student *pt;
		int i,j,k;
		double total = 0.0;

		printf("请输入%d个学生成绩:\n",AMOUNT);
		printf("ID\t 姓名\t 性别\t 成绩\n");

		for(i=0;i<AMOUNT;i++)
		{
				p[i] = &stu[i];
				scanf("%d %s %s %lf",&stu[i].id,stu[i].name,stu[i].sex,&stu[i].score);
				total += p[i]->score;
		}
		printf("total:%2.f\n",total);


		for(i=0;i<AMOUNT-1;i++)
		{
				for(j=i+1;j<AMOUNT;j++)
				{
						if((p[i]->score) > (p[j]->score))
						{
							pt = p[i];
							p[i] = p[j];
							p[j] = pt;
						}
				}
		}

		for(i=0;i<AMOUNT;i++)
		{
			printf("%d\t %s\t %s\t %.2f\n",(*p[i]).id,(*p[i]).name,(*p[i]).sex,(*p[i]).score);
		}


		return 0;
}
