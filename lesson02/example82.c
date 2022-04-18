#include<stdio.h>
#include<stdlib.h>

void copy_string(char *from,char *to);

int main()
{
		char a[] ="I am a student.";
		//char b[] ="You are a teacher.";
		char b[sizeof(a)/sizeof(char)];
		char *p1 = a;
		char *p2 = b;
		printf("a:%s\n",a);
		printf("b:%s\n",b);
	
		copy_string(p1,p2);

		printf("a:%s\n",a);
		printf("b:%s\n",b);

		return 0;
}


/**
 * @brief 拷贝字符串
 * 
 * @param from 源字符串
 * @param to 目标字符串
 */
void copy_string(char *from,char *to)
{
		for(;*from != '\0';from++,to++)
		{
			*to = *from;
		}
		*to = '\0';
}
