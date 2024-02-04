#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50//数组长度

//函数声明
char *find(char *p,char c);//查找字符c在字符串p中的位置
int main()
{
	//返回指针的函数
	printf("输入一个字符串:\n");
	char array[SIZE];//char型数组array
	char *p,*pc,*pfind;//char *型指针变量p,pc,pfind
	char c;//查找的字符
	p = array;//p指向数字array的首地址
	pc = &c;//pc指向字符c
	
	fgets(array,SIZE,stdin);//输入字符串,含有空格的	
	
	//fputs(array,stdout);//输出字符串

	printf("请输入要查找的字符:\n");
	//c = getchar();
	c = getc(stdin);
	//scanf("%c",pc);//输入字符c
	printf("%c\n",*pc);

	//查找字符
	pfind = find(p,*pc);
	printf("查找到变量%c的地址是%p\n",*pc,pfind);
	printf("查找到变量%c的位置是%d\n",*pc,pfind-p+1);
	

	return 0;
}


//返回字符在字符串中的位置
char *find(char *p,char c)//函数定义
{
	while(*p != '\0')
	{
		if(*p != c)
		{
			p++;//指针变量指向下一个字符 
		}else
		{
			return p;//返回指针的地址
		}
	}
	//没有找到，返回NULL
	return NULL;
	
}
