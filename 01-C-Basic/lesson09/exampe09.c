#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128//缓冲区大小


int main()
{
	//在字符串中查找字符串
	char src[SIZE];//源字符串
	char des[SIZE];//要查找的字符串
	char *psrc,*pdes,*p;//char *型指针变量psrc,pdes,p是查找的结果
	psrc = src;//psrc指向src字符串
	pdes = des;//pdes指向des字符串
	
	printf("请输入源字符串: \n");
	fgets(psrc,SIZE,stdin);//输入字符串src
	//scanf("%s",src);
	
	printf("输入要查找的字符串:\n");
	//fgets(pdes,SIZE,stdin);//输入字符串des
	scanf("%s",des);

	//fputs(psrc,stdout);//输出字符串src
	//fputs(pdes,stdout);//输出字符串des

	p = strstr(src,des);//在字符串中查找字符串（验证有问题）
	//p = strstr("Linux c is very good!","is");//在字符串中查找字符串（验证有问题）
	
	printf("查找的字符串%s的地址是%p\n查找到字符串是%s\n",pdes,p,p);

	return 0;
}
