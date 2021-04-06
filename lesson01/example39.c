#include<stdio.h>
#include<stdlib.h>

#define LEN 20

struct student
{
		int id;
		char *name;
		char *sex;
		double score;
};

int main()
{
		struct student stu1 = {001,"秋桐","男",95.5};
		struct student stu2 = {002,"小雨","女",88.5};
		struct student stu3 = {003,"秋香","女",92.5};

		struct student *p1,*p2,*p3;
		p1 = &stu1;
		p2 = &stu2;
		p3 = &stu3;

		printf("ID\t Name\t Sex\t Score\n");
		printf("%d\t %s\t %s\t %.1f\n",stu1.id,stu1.name,stu1.sex,stu1.score);
		printf("%d\t %s\t %s\t %.1f\n",(*p2).id,(*p2).name,(*p2).sex,(*p2).score);
		printf("%d\t %s\t %s\t %.1f\n",p3->id,p3->name,p3->sex,p3->score);

		return 0;
}
