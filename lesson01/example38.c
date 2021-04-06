#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * my_strcpy(char *dest,const char *src)
{
		int i;
		int size;
		printf("%s\n",src);
		size = strlen(src);
		//size = sizeof(src)/sizeof(src[0]);
		printf("size:%d\n",size);
		for(i=0;i<size;i++)
		{
				if(src[i] != '\0')
				{
						dest[i] = src[i];
				}else
				{
						dest[i] = '\0';
				}
		}
		return dest;
}

int main()
{	
		char *src = "www.google.com";
		//char dest[100];
		char *dest = malloc(100);
		my_strcpy(dest,src);
		printf("%s\n",dest);
		return 0;
}
