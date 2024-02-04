#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define LEN 128//缓冲区大小

int main()
{
	//比较字符串
	//char array1[] = "Linux c is very good!";
	//char array2[] = "linux c is very good!";
	
	char array1[LEN],array2[LEN];
	char *p1,*p2;//char *型变量p1,p2
	p1 = array1;//p1指向字符串array1
	p2 = array2;//p2指向字符串array2	
	int result;

	printf("请输入两个字符串array1和array2:\n");
	fgets(p1,LEN,stdin);//输入字符串array1
	fgets(p2,LEN,stdin);//输入字符串array2

	//比较字符串
	//printf("%s\n%s\n",array1,array2);
	fputs(p1,stdout);//输出字符串array1
	fputs(p2,stdout);//输出字符串array2
	
	//result = strcmp(array1,array2);	
	result = strcmp(p1,p2);	
	if(result == 0)
	{
		printf("array1与array2相等!\n");
	}else if(result > 0)
	{
		printf("array1大于array2\n");
	}else
	{
		printf("array1小于array2\n");
	}


	return 0;
}
