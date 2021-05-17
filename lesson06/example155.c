#include<stdio.h>
#include<math.h>

int main()
{
		//用迭代法求平方根
		float a;
		float x0;
		float x1;//平方根
		
		printf("请输入:");
		scanf("%f",&a);

		x0 = a / 2;
		x1 = (x0 + a / x0)/2;

		do
		{
				x0 = x1;
				x1 = (x0 + a / x0)/2;
		}while(fabs(x0 - x1) >= 1e-5);

		printf("数字%5.2f的平方根是%8.5f\n",a,x1);
		return 0;
}
