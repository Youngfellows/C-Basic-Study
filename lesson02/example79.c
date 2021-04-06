#include<stdio.h>
#include<stdlib.h>

void copy_string(char from[],char to[]);

int main()
{
		char a[] ="I am a student.";
		char b[] ="You are a teacher.";
		printf("a:%s\n",a);
		printf("b:%s\n",b);
	
		copy_string(a,b);

		printf("a:%s\n",a);
		printf("b:%s\n",b);

		return 0;
}

void copy_string(char from[],char to[])
{
	int i = 0;
	while(from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
