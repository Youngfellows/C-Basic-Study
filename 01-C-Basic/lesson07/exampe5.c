#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 20//常量
#define AMOUNT 2//学生数量
struct student
{
	int id;//学号
	char name[LEN];//姓名
	char sex[LEN];//性别
	double score;//成绩
};

int main()
{
	//使用结构体对班级中的学生成绩进行排序
	struct student stu[AMOUNT];//定义结构体数组
	struct student *pt;//定义结构体指针变量pt,临时变量
	struct student *p[AMOUNT];//指向结构体的指针构成的指针数组p
	int i,j,k;//k当前最低分的下标
	double total_score;//全班总成绩	
		
	printf("请输入%d个学生的成绩: \n",AMOUNT);
	printf("ID\t 姓名\t 性别\t 成绩\n");
	for(i=0;i<AMOUNT;i++)
	{
		scanf("%d %s %s %lf",&stu[i].id,stu[i].name,stu[i].sex,&stu[i].score);
		//scanf("%d %lf",&stu[i].id,&stu[i].score);

		p[i] = &stu[i];//指针数组p的第i个元素(指针)指向结构体数组的第i个元素
		//total_score += stu[i].score;//计算总成绩
		//total_score += (*p[i]).score;//计算总成绩
		total_score += p[i]->score;//计算总成绩
	}
	
	printf("总成绩是:%.2lf\n",total_score);
	
	//按成绩排序
	//选择排序法对成绩进行排序	
	for(i=0;i<AMOUNT-1;i++)//外层循环AMOUNT-1次
	{
		for(j=i+1;j<AMOUNT;j++)//逐个与后面的比较
		{
		    //printf("p[%d]->score = %.2lf, p[%d]->score = %.2lf\n",i,p[i]->score,j,p[j]->score);
		    //交换两个指向结构提的指针的指向
		    if((p[i]->score) > (p[j]->score))
		    {
				pt = p[i];
				p[i] = p[j];
				p[j] = pt;
		    }
		}
		//printf("\n----------\n");
	}
	
	printf("\n排序后的结果是:\n");
	for(i=0;i<AMOUNT;i++)
	{
		printf("%d\t %s\t %s\t %.2lf\n",(*p[i]).id,p[i]->name,(*p[i]).sex,p[i]->score);//结构体成员的输出
		//printf("%d\t %s\t %s\t %.2lf\n",p[i]->id,p[i]->name,p[i]->sex,p[i]->score);//结构体成员的输出
	}

	return 0;
}
































