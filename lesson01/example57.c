#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
		char *p1 = "-134";
		char *p2 = "oxff";
		int sum = 0;
		
		char *p3 = "1111";
		char *p4 = "123";
		char *p5 = "8d";
	    char *p6 = "123.45789";


		sum = atoi(p1) + atoi(p2);
		printf("%d\n",sum);
		printf("%ld\n",strtol(p3,NULL,2));
		printf("%ld\n",strtol(p3,NULL,10));
		printf("%ld\n",strtol(p3,NULL,16));
	return 0;
}
