#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
		char input;
		while(1)
		{
			fflush(stdin);
			printf("请输入一个字符:\n");	
			input = getchar();
			getchar();//消除换行或者回车
			//scanf("%c",&input);
			printf("%c %s数字\n",input,isdigit(input)?"是":"不是");
		}
		
		return 0;
}
