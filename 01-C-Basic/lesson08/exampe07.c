#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char src[]="Linux C is very good!";
	char *psrc,*pdest;//char *指针变量psrc,pres
	psrc = src;
	//复制字符串2
	printf("字符串  src 的地址:%p\n",src);
	printf("指针变量psrc的地址:%p\n",psrc);
	
	pdest = strdup(psrc);
	printf("复制后的pdest字符串地址是:%p\n",pdest);
	printf("复制后的pdest字符串是:%s\n",pdest);
		

	return 0;
}
