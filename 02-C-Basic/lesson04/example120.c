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

void read();


int main()
{

		//以二进制块读写数据
		struct Student stu[SIZE];
		int i;

		printf("请输入%d个学生信息:\n",SIZE);
		printf("学号 姓名 年龄 地址:\n");	
		for(i=0;i<SIZE;i++)
		{
				scanf("%d %s %d %s",&stu[i].number,stu[i].name,&stu[i].age,stu[i].addr);
		}

		save(stu,SIZE);

		read();


		return 0;
}

void save(struct Student *p,int size)
{
		FILE *fp;
		int i;
		char *fileName = "./stu.dat";

		//打开文件
		if((fp = fopen(fileName,"wb")) == NULL)
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

void read()
{
		char *fileName = "./stu.dat";
		struct Student stu[SIZE];
		FILE *fp;
		int i;
		if((fp = fopen(fileName,"rb")) == NULL)
		{
				printf("打开文件错误!\n");
				return;
		}

		for(i=0;i<SIZE;i++)
		{
				//读取一行信息,赋值给结构体数组元素
				if(	fread(&stu[i],sizeof(struct Student),1,fp) == 1)
				{
						printf("%5d %-15s %4d %-15s\n",stu[i].number,stu[i].name,stu[i].age,stu[i].addr);
				}else
				{
					if(feof(fp))
					{
						fclose(fp);
						return;
					}
					printf("读取文件错误!\n");
				}
		}
		fclose(fp);
}

