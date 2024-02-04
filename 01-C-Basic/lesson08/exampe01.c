#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[] = "深圳A软件2C1I产业基地2B";
	int i;
	for(i=0;str[i]!=0;i++)
	{
		//判断字符是否是字母
		if(isalpha(str[i]))
		{
			printf("%d : %c \n",i,str[i]);
		}	
	}
	return 0;
}
