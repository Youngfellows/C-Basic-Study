#include<stdio.h>
#include<string.h>

#define BUFFER_SIZE 30

void input(char *s1,char *s2,char *s3);
void sort(char *s1,char *s2,char *s3);
void swap(char *s1,char *s2);

int main()
{
		//输入三个字符串,按照从小到大的顺序输出
		char s1[BUFFER_SIZE],s2[BUFFER_SIZE],s3[BUFFER_SIZE];
		char *p1,*p2,*p3;
		p1 = s1;
		p2 = s2;
		p3 = s3;

		printf("请输入3个字符串:\n");
		input(p1,p2,p3);
		printf("排序后:\n");
		sort(p1,p2,p3);
		fputs(p1,stdout);
		fputs(p2,stdout);
		fputs(p3,stdout);

		return 0;
}

void input(char *s1,char *s2,char *s3)
{
		fgets(s1,BUFFER_SIZE,stdin);
		fgets(s2,BUFFER_SIZE,stdin);
		fgets(s3,BUFFER_SIZE,stdin);
}


void sort(char *s1,char *s2,char *s3)
{
		if(strcmp(s1,s2) > 0)
		{
			swap(s1,s2);
		}

		if(strcmp(s1,s3) > 0)
		{
			swap(s1,s3);
		}

		if(strcmp(s2,s3) > 0)
		{
			swap(s2,s3);
		}
}

/**
 * @brief 交换两个字符串的值
 * 
 * @param s1 
 * @param s2 
 */
void swap(char *s1,char *s2)
{
		char temp[BUFFER_SIZE];
		strcpy(temp,s1);
		strcpy(s1,s2);
		strcpy(s2,temp);
}
