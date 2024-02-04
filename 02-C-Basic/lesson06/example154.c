#include<stdio.h>

#define DAY 9

int main()
{
		//猴子吃桃问题,当天吃一半多一个,求第一天多少个桃子,最后一天剩下一个
		int day = DAY;
		int x1;//前一天桃子个数
		int x2;//后一天桃子个数
		x2 = 1;//最后一天剩下一个
		//采用倒退法

		while(day > 0)
		{
			x1 = (x2 + 1) * 2;//前一天
			x2 = x1;
			day--;
		}
		
		printf("总共有桃子%d个\n",x1);
		return 0;
}
