#include<stdlib.h>
#include<stdio.h>

int main()
{
		char *str = "I Love China!!!";
		str = "I love taiwan!!!!";
		printf("%s\n",str);
		printf("%c\n",str[4]);
		printf("%p\n",str);
		printf("%p\n",&str[1]);
	return 0;
}
