#include<stdio.h>
#include<stdlib.h>

void copy_string(char *from,char *to);

int main()
{
		char a[] ="I am a student.";
		//char b[] ="You are a teacher.";
		char b[sizeof(a)/sizeof(char)];//定义字符串b,大小与字符串a相同
		//char *p1 = a;
		//char *p2 = b;
		printf("a:%s\n",a);
		printf("b:%s\n",b);

		copy_string(a,b);

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
		//while(*to++ = *from++)
		while((*to++ = *from++) != '\0')
		{

		}
		*to = '\0';
}
