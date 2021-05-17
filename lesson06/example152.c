#include<stdio.h>

#define N 20

int main()
{
		//求前20项和:2/1,3/2,5/3,8/5,....
		double numerator;//分子
		double denominator;//分母
		double sum;//求和
		double temp;
		int i;
		numerator = 2;
		denominator = 1;
		sum = 0;
		
		for(i = 1; i <= 20; i++)
		{
			sum = sum + (numerator / denominator);
			temp = numerator;
			numerator = numerator + denominator;
			denominator = temp;
		}

		printf("2/1+3/2+5/3+8/5+...的前20项的和是:%16.10f\n",sum);

		return 0;
}
