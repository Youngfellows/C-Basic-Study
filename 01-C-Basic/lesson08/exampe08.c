#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define SIZE 128//缓冲区长度

void strCpy1();//复制全部字符串
void strCpy2();//复制部分字符
void strCpy3();//复制部分字符
void strCpy4();//覆盖原有字符,保留部分字符

int main()
{
	
	strCpy1();//复制全部字符串
	strCpy2();//复制部分字符
	strCpy3();//复制部分字符
	strCpy4();//覆盖原有字符,保留部分字符


	return 0;
}

//复制全部字符串
void strCpy1()
{
	//字符串复制3
	char src[] = "Linux C is very good!";
	char des[SIZE];
	char *psrc,*pdes,*pres;//char * 型指针变量
	psrc = src;//psrc指向src字符串
	pdes = des;
	
	printf("psrc地址:%p\n",psrc);
	printf("pdes地址:%p\n",pdes);
	
	pres = memcpy(pdes,psrc,strlen(src));
	des[strlen(psrc)] = '\0';//字符串结束标志	
	printf("pres地址:%p\n",pres);
	printf("复制后的字符串是:%s\n",pdes);	
}

//复制部分字符
void strCpy2()
{
	//字符串复制3
	char src[] = "Linux C is very good!";
	char des[SIZE];
	char *psrc,*pdes,*pres;//char * 型指针变量
	psrc = src;//psrc指向src字符串
	pdes = des;
	
	printf("psrc地址:%p\n",psrc);
	printf("pdes地址:%p\n",pdes);
	
	pres = memcpy(pdes,psrc,5);
	des[5] = '\0';//字符串结束标志	
	printf("pres地址:%p\n",pres);
	printf("复制后的字符串是:%s\n",pdes);	
}


//复制部分字符
void strCpy3()
{
	//字符串复制3
	char src[] = "Linux C is very good!";
	char des[SIZE];
	char *psrc,*pdes,*pres;//char * 型指针变量
	psrc = src;//psrc指向src字符串
	pdes = des;
	
	printf("psrc地址:%p\n",psrc);
	printf("pdes地址:%p\n",pdes);
	
	pres = memcpy(pdes,psrc+11,4);
	des[4] = '\0';//字符串结束标志	
	printf("pres地址:%p\n",pres);
	printf("复制后的字符串是:%s\n",pdes);	
}


//覆盖原有字符,保留部分字符
void strCpy4()
{
	char src[] = "Linux C is very good!";
	char des[] = "**********************************";
	char *psrc,*pdes,*pres;//char * 型指针变量
	psrc = src;//psrc指向src字符串
	pdes = des;
	
	printf("psrc地址:%p\n",psrc);
	printf("pdes地址:%p\n",pdes);
	
	pres = memcpy(pdes,psrc,strlen(psrc));
	printf("pres地址:%p\n",pres);
	printf("复制后的字符串是:%s\n",pdes);		
}













