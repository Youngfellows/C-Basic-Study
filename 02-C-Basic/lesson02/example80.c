#include<stdio.h>
#include<stdlib.h>

void copy_string(char *from,char *to);

int main()
{
		char a[] ="I am a student.";
		char b[sizeof(a)/sizeof(char)];
		char *p1 = a;
		char *p2 = b;
		printf("a:%s\n",a);
		printf("b:%s\n",b);
		printf("a:%s\n",p1);
		printf("b:%s\n",p2);
	
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
	while(*from != '\0')
	{
		*to = *from;
		from++;
		to++;
	}
	*to = '\0';
}
