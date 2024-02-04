#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 128//缓冲区大小

int main()
{
	char array[SIZE],charr[SIZE];//字符串array
	char *p,*pres;//char *指针变量p,pres
	char *ch;//分割符
	p = array;//p指向array字符串
	ch = charr;//ch指向charr字符串
	
	printf("请输入字符串array：\n");
	fgets(p,SIZE,stdin);//输入字符串array
	
	printf("请输入要分割的字符:\n");
	fgets(ch,SIZE,stdin);//输入字符串array

	pres = strtok(p,ch);//分割字符串

	while(pres != NULL)
	{
		printf("%s\n",pres);//输出分割后的子串
		pres = strtok(NULL,ch);
	}
	printf("分割后的array字符串:%s\n",p);
	
	return 0;
}

