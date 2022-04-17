#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief 拷贝字符串
 * 
 * @param dest 目标字符串
 * @param src 源字符串
 * @return char* 拷贝后的目标字符串的指针变量,也就是拷贝后的字符串
 */
char * my_strcpy(char *dest,const char *src)
{
		int i;
		int size;
		printf("%s\n",src);
		size = strlen(src);//计算字符串的长度
		//size = sizeof(src)/sizeof(src[0]);
		printf("size:%d\n",size);
		for(i=0;i<size;i++)
		{
				if(src[i] != '\0')//字符串结束标志
				{
						dest[i] = src[i];
				}else
				{
						dest[i] = '\0';//字符串结束标志
				}
		}
		return dest;
}

int main()
{		
		//定义字符指针变量src,src指向字符串
		char *src = "www.google.com";
		//char dest[100];
		char *dest = malloc(100);//申请100个字节大小的内存空间
		my_strcpy(dest,src);
		printf("%s\n",dest);
		return 0;
}
