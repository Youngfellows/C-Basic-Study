#include<stdio.h>

int main()
{	
		int n1 = 100;
		int n2 = 50;
		int n3 = 10;
		double result;
		double s1 = 0;
		double s2 = 0;
		double s3 = 0;
		int k;

		//分别计算
		for(k = 1;k <= n1;k++)
		{
			s1 = s1 + k;
		}
		
		for(k = 1;k < n2;k++)
		{
			s2 = s2 + k*k;
		}

		for(k = 1;k <= n3;k++)
		{
			s3 = s3 + 1 / k;
		}

		result = s1 + s2 + s3;
		printf("sum=%15.6f\n",result);

		return 0;
}
