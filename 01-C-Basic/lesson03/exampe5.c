#include<stdlib.h>
#include<stdio.h>
int main()
{
	//字符数组(初始化1)
	char s1[5]={'h','e','l','l','0'};	
	int i;	
	printf("%s\n",s1);
	
	printf("打印每个字符: \n");
	for(i=0;i<5;i++)
	{
		printf("%c ",s1[i]);
	}
	
	printf("\n");
	//字符数组(初始化2)
	char s2[] = "www.aispeech.com";
	printf("%s\n",s2);

	return 0;
}
