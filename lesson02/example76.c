#include<stdio.h>
#include<stdlib.h>
#define SIZE 128

int main()
{
		char a[] = "I am a Student.";//定义字符串a
		char b[SIZE];//定义字符串b
		int i;
		//拷贝字符串
		for(i=0;*(a+i)!='\0';i++)
		{
			*(b+i) = *(a+i);
		}
		*(b+i) = '\0';
		printf("a:%s\n",a);

		for(i=0;b[i]!='\0';i++)
		{
			printf("%c",b[i]);
		}
		printf("\n");

	return 0;
}
