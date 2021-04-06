#include<stdio.h>
#include<stdlib.h>

void copy_string(char *from,char *to);

int main()
{
		char a[] ="I am a student.";
		char b[] ="You are a teacher.";
		//char *p1 = a;
		//char *p2 = b;
		printf("a:%s\n",a);
		printf("b:%s\n",b);

		copy_string(a,b);

		printf("a:%s\n",a);
		printf("b:%s\n",b);

		return 0;
}

void copy_string(char from[],char to[])
{
		//while(*to++ = *from++)
		while((*to++ = *from++) != '\0')
		{

		}
		*to = '\0';



}
