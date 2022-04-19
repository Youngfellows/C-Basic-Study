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
int _days(struct Date date);

int main()
{
		int days;
		struct Date date;
		printf("请输入(年,月,日):\n");
		scanf("%d,%d,%d",&date.year,&date.month,&date.day);
		days = _days(date);
		printf("%d/%d/%d是一年中的第%d天\n",date.year,date.month,date.day,days);

		return 0;
}


/**
 * @brief 是否是闰年
 * 
 * @param date 时间结构体
 * @return int 
 */
int leap(struct Date date)
{
		if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
		{
				return 1;
		}
		return 0;
}


/**
 * @brief 指定日期是一年中的第x天
 * 
 * @param date 时间结构体
 * @return int 返回一年中的第x天
 */
int _days(struct Date date)
{
		int day_tab[LEN] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		int days;
		int i;
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
		return days;
}
