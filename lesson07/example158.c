#include<stdio.h>
#include<math.h>

int main()
{
		//质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数（规定1既不是质数也不是合数）。
		//用筛选法求出100内的素数
		int i,j,n;
		int array[101];

		//赋值
		for(i = 1;i <= 100;i++)
		{
			array[i] = i;
		}

		//先挖掉a[1]=1
		array[1] = 0;

		for(i = 2; i < sqrt(100); i++)
		{
			for(j = i + 1; j <= 100; j++)
			{
				if(array[i] != 0 && array[j] != 0)
				{
					if(array[j] % array[i] == 0)
					{
						array[j] = 0;//挖掉非素数
					}
				}
			}
		}

		printf("\n");
		for(i = 2,n = 0; i <= 100; i++)
		{
			if(array[i] != 0)
			{
				printf("%5d",array[i]);
				n++;
			}

			if(n % 10 == 0)
			{
				printf("\n");
			}
		}

		printf("\n");

	return 0;
}

