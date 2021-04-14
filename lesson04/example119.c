#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
#define LEN 30

struct Student
{
		int number;
		char name[LEN];
		int age;
		char addr[LEN];
};

void save(struct Student *p,int size);

int main()
{

		//以二进制块读写数据
		struct Student stu[SIZE];
		int i;

		printf("请输入%d个学生信息:\n",SIZE);

		for(i=0;i<SIZE;i++)
		{
				scanf("%d %s %d %s",&stu[i].number,stu[i].name,&stu[i].age,stu[i].addr);
		}

		save(stu,SIZE);

		return 0;
}

void save(struct Student *p,int size)
{
		FILE *fp;
		int i;

		//打开文件
		if((fp = fopen("./stu.dat","wb")) == NULL)
		{
				printf("打开文件错误!");
				return;
		}

		for(i=0;i<size;i++)
		{
				if(fwrite(p,sizeof(struct Student),1,fp) != 1)
				{
						printf("写入错误!!\n");
				}
				p++;
		}
		fclose(fp);
}

