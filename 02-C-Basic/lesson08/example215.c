#include<stdio.h>

#define LEN 12

int main()
{
		//通过指针数组来引用字符串
		char * month_name[LEN] = {"January","February","March","April","May","June","July",
				"August","September","October","November","December"};

		int number;
		char *month;
		printf("请输入(1-12)月份数字:\n");
		scanf("%d",&number);
		while(number < 0 || number > 12)
		{
			printf("请从新输入(1-12)月份数字:\n");
			scanf("%d",&number);
		}
		month = *(month_name + (number - 1));
		printf("%s\n",month);

		return 0;
}
