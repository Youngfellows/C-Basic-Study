#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
		char address[] = "深圳市南山区软件产业基地4A二栋B座";
		int i;
		for(i=0;i<strlen(address);i++)
		{
			if(isalpha(address[i]))
			{
				printf("%c is alpha ...\n",address[i]);
			}
		}
		return 0;
}
