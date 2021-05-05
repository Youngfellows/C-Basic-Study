#include<stdio.h>
#include<string.h>

#define SIZE 30


char * password(char *,int);


int main()
{
		char pwd[SIZE] = "China";
		char *p;
		p = pwd;
		p = password(p,strlen(pwd));
		printf("%s\n",p);
		return 0;
}

char * password(char *src,int size)
{
	int i;
	for(i = 0;i < size;i++)
	{
		src[i] = src[i]+4;
	}

	return src;
}
