#include<stdio.h>

int main()
{
		int dividend;//被除数
		int divider;//除数
		int remainder;//余数
		int temp;
		int common_multiple;//最小公倍数
		int common_divisor;//最大公约数
		int p;

		printf("请输入两个整数:\n");
		scanf("%d,%d",&dividend,&divider);
		if(dividend < divider)
		{
			temp = divider;
			divider = dividend;
			dividend = temp;
		}
		p = dividend * divider;

		//求最大公约数
		while(divider != 0)
		{
			remainder = dividend % divider;
			dividend = divider;
			divider = remainder;
			//printf("%d,%d,%d\n",remainder,dividend,divider);
		}
		common_divisor = dividend;
		printf("最大公约数是:%d\n",common_divisor);
		
		common_multiple = p / common_divisor;
		printf("最小公倍数是:%d\n",common_multiple);

		return 0;
}
