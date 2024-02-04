#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#define SIZE 128//缓冲区大小
#define N 5//比较前5个字符

int main()
{
	//比较字符串(忽略大小写)
	char array1[SIZE],array2[SIZE];//字符串array1,array2
	char *p1,*p2;//char *指针变量p1,p2
	int result;//比较结果
	p1 = array1;//p1指向字符串array1
	p2 = array2;//p2指向字符串array2
	
	printf("请输入字符串array1和array2:\n");
	fgets(p1,SIZE,stdin);//输入字符串array1
	fgets(p2,SIZE,stdin);//输入字符串array2
	
	fputs(p1,stdout);//输出字符串array1
	fputs(p2,stdout);//输出字符串array2

	//result = strncmp(p1,p2,N);//比较前5个字符
	//result = strcasecmp(p1,p2);//(忽略大小写)
	result = strncasecmp(p1,p2,N);//(忽略大小写,比较前5个字符)

	if(result == 0)
	{
		printf("array1 与 array2相等!\n");	
	}else if(result > 0)
	{
		printf("array1 大于 array2\n");	
	}else
	{
		printf("array1 小于 array2\n");
	}

	return 0;
}
