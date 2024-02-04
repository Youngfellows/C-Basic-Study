#include<stdlib.h>
#include<stdio.h>
int main()
{
		char s1[5]={'h','e','l','l','o'};
		int i;
		printf("%s\n",s1);
		char s2[]="www.baidu.com";
		for(i=0;i<sizeof(s1)/sizeof(s1[0]);i++)
		{
			printf("%c",s1[i]);
			if (i == sizeof(s1)/sizeof(s1[0]) - 1)
			{
				printf("\n");	
			}	
		}
		printf("%s\n",s2);
		return 0;
}
