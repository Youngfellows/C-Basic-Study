#include<stdio.h>
#include<stdlib.h>
#define LEN 20
//定义一个结构体
struct student
{
	int id;//学号
	char name[LEN];//姓名
	char sex[LEN];//性别(男、女)
	double score;//成绩
};

int main()
{
	//结构体实例
	//定义一个结构体变量
	struct student stu1 = {001,"秋桐","男",95.5};
	struct student stu2 = {002,"小雨","女",88.5};
	struct student stu3 = {003,"秋香","女",92.5};
	
	struct student *p1,*p2,*p3;//指向结构体的指针变量
	p1 = &stu1;//指向结构体的指针变量p指向结构体变量stu1
	p2 = &stu2;//指向结构体的指针变量p指向结构体变量stu2
	p3 = &stu3;//指向结构体的指针变量p指向结构体变量stu3
	printf("通过三种方式来引用结构体变量\n");
	printf("ID\t Name\t Sex\t Score\n");
	
	printf("%d\t %s\t %s\t %.1f\n",stu1.id,stu1.name,stu1.sex,stu1.score);	
	printf("%d\t %s\t %s\t %.1f\n",(*p2).id,(*p2).name,(*p2).sex,(*p2).score);	
	printf("%d\t %s\t %s\t %.1f\n",p3->id,p3->name,p3->sex,p3->score);	
	
	return 0;
}

























