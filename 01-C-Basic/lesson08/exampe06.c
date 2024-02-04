#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 128//缓冲区长度

int main()
{
	//复制字符串
	char src[] = "Linux C is very good!";//源字符串
	char des[SIZE];//目标字符串
	char *psrc,*pdes,*pres;//char *指针变量psrc,pdes,p
	psrc = src;
	pdes = des;

	//复制字符串
	printf("psrc的地址:%p\n",psrc);
	printf("pdes的地址:%p\n",pdes);

	pres = strcpy(pdes,psrc);
	printf("pres的地址:%p\n",pres);
	printf("字符串des是: %s\n",des);	
		
	return 0;
}
