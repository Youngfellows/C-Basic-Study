#include<stdio.h>

#define MIN 2
#define MAX 1000

int main()
{
		//求完数: 因子之和等于该数
		int number;
		int sum;
		int i;

		for(number = MIN; number < MAX; number++)
		{
				sum = 0;
				for(i = 1; i < number; i++)
				{
						if((number % i) == 0)
						{
								//因子的和
								sum = sum + i;
						}
				}

				if(sum == number)
				{
					printf("%d是完数,它的因子是:",number);
					for(i = 1; i < number; i++)
					{
						if(number % i == 0)
						{
							printf("%d\t",i);
						}
					}
					printf("\n");
				}
		}

		return 0;
}

