#include<stdio.h>
#include<string.h>

#define N 3
#define SIZE 20

struct Employee
{
		long number;//职工号
		char name[SIZE];//姓名
		float salary;//工资
};

void input_info(struct Employee *pemployee,int len);
void print_info(struct Employee *pemployee,int len);
void sort(struct Employee *pemployee,int len);
void search_by_number(struct Employee *pemployee,int len,long *num,struct Employee *em);

int main()
{
		struct Employee employees[N];//结构体数组
		struct Employee *p;//结构体指针变量p,p指向结构体数组employees
		long number;
		struct Employee employee;
		p = employees;

		printf("请输入%d个雇员的信息:\n",N);
		input_info(p,N);
		printf("雇员信息如下:\n");
		print_info(p,N);

		printf("排序后:\n");
		sort(p,N);
		print_info(p,N);

		printf("请输入要查找雇员的员工号:\n");
		scanf("%ld",&number);
		search_by_number(p,N,&number,&employee);
		printf("员工:%ld,姓名:%s,工资:%.2f\n",employee.number,employee.name,employee.salary);

		return 0;
}

void input_info(struct Employee *pem,int len)
{
		struct Employee *pt;
		int i = 0;
		//for(i = 0; i < len; i++)
		//{
		//	printf("请输入第%d个雇员的员工号,姓名,工资:\n",i);
		//	scanf("%ld,%s,%f",&emps[i].number,emps[i].name,&emps[i].salary);
		//}
		char ename[SIZE];

		for(pt = pem; pt < pem + len; pt++,i++)
		{
				printf("请输入第%d个职员信息\n",i);
				printf("工号:");
				scanf("%ld",&(pt->number));
				//getchar();
				printf("姓名:");
				//fgets(ename,SIZE,stdin);
				scanf("%s",ename);
				strcpy(pt->name,ename);
				//getchar();
				printf("工资:");
				scanf("%f",&(pt->salary));
		}

}

void print_info(struct Employee *pemployee,int len)
{
		struct Employee *pt;
		printf("员工工号\t 姓名\t 工资\n");
		for(pt = pemployee; pt < pemployee + len; pt++)
		{
				//printf("%ld\t%s\t%.2f\n",(*pt).number,(*pt).name,(*pt).salary);
				printf("%ld\t%s\t%.2f\n",pt->number,pt->name,pt->salary);
		}
}

void sort(struct Employee *pemployee,int len)
{
		struct Employee *pt;
		int i,j;
		int min;
		struct Employee temp;
		pt = pemployee;
		for(i = 0; i < len; i++)
		{
				min = i;
				for(j = i + 1; j < len; j++)
				{
						if((*(pt + j)).number < (*(pt + min)).number)
						{
								min = j;
						}
				}
				if(min != i)
				{
						temp =*(pt + i);
						*(pt + i) = *(pt + min);
						*(pt + min) = temp;
				}
		}
}

/**
 * @brief 查找指定工号的员工
 * 
 * @param pemployee 结构体数组
 * @param len 数组长度
 * @param num 工号
 * @param em 指定工号的员工指针变量
 */
void search_by_number(struct Employee *pemployee,int len,long *num,struct Employee *em)
{
		printf("number:%ld\n",*num);
		struct Employee *pt;
		for(pt = pemployee; pt < pemployee + len; pt++)
		{
				printf("%ld\n",pt->number);
				if(pt->number == *num)
				{
						*em = *pt;
						break;
				}
		}
}
