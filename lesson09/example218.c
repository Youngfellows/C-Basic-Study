#include<stdio.h>

#define LEN 13

//定义结构体
struct Date
{
	int year;
	int month;
	int day;
};

int leap(struct Date date);

int main()
{
		int i;
		int days;
		struct Date date;
		int day_tab[LEN] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		printf("请输入(年,月,日):\n");
		scanf("%d,%d,%d",&date.year,&date.month,&date.day);
		days = 0;
		for(i = 1; i < date.month; i++ )
		{
			days = days + day_tab[i];
		}
		days = days + date.day;
		if(leap(date) && date.month >= 3)
		{
			days = days + 1;
		}
		printf("%d/%d/%d是一年中的第%d天\n",date.year,date.month,date.day,days);

		return 0;
}

int leap(struct Date date)
{
		if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
		{
				return 1;
		}
		return 0;
}
