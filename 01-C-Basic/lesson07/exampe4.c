#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
#include<malloc.h>  
#define LEN 20//定义常量LEN
#define LEN_CITY 40//城市最大长度
#define LEN_ADDRESS 200//详细地址最大长度
#define LEN_PHONE_NUMBER 11//电话号码长度
struct address
{
	char city[LEN_CITY];//城市
	char address[LEN_ADDRESS];//详细地址
	unsigned long zipcode;//区号
	char tel[LEN_PHONE_NUMBER];//电话号码
};

struct student
{
	int id;//学号
	char name[LEN];//姓名
	char sex[LEN];//性别
	unsigned int age;//年龄
	struct address addr;//地址
};

int main()
{
	//结构体嵌套使用案例
	struct student stu;
	struct student *p;
	p = &stu;
	//给stu变量赋值
	stu.id = 001;
	strcpy(stu.name,"陈秋婷");
	strcpy(stu.sex,"女");
	stu.age = 22;
	strcpy(stu.addr.city,"深圳");
	strcpy(stu.addr.address,"南山区软件产业基地4A");
	stu.addr.zipcode = 518057;
	strcpy(stu.addr.tel,"13699847781");
	

	printf("%d\t %s\t %s\t %d\t %s\t %s\t %ld\t %s\n",stu.id,stu.name,stu.sex,stu.age,stu.addr.city,stu.addr.address,stu.addr.zipcode,stu.addr.tel);
	printf("%d\t %s\t %s\t %d\t %s\t %s\t %ld\t %s\n",p->id,p->name,p->sex,p->age,p->addr.city,p->addr.address,p->addr.zipcode,p->addr.tel);
	return 0;
}





































