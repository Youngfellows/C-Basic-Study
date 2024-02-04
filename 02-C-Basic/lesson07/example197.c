#include<stdio.h>

#define LEN 12

//计算日期是一年中的第几天
int sum_day(int month,int day);
//是否是闰年
int leap(int year);

int main()
{
		int year,month,day;
		int days;
		printf("请输入日期(year,month,day):\n");
		scanf("%d,%d,%d",&year,&month,&day);
		printf("%d/%d/%d\n",year,month,day);
		days = sum_day(month,day);
		if(leap(year) && month > 2)
		{
				days += 1;
		}

		printf("days=%d\n",days);

		return 0;
}

//计算日期是一年中的第几天
int sum_day(int month,int day)
{
		int day_tab[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
		int i;
		for(i = 0; i < month; i++)
		{
				day = day + day_tab[i];
		}
		return day;
}

//是否是闰年
int leap(int year)
{
		int leap;
		leap == (year % 4 == 0) && (year % 100 != 0) || year % 400 == 0;
		
		return leap;
}

