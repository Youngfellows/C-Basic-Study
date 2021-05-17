#include<stdio.h>

#define MIN 100
#define MAX 1000

int main()
{
		//输出水仙花数
		int number;
		int hundred;//百位
		int ten;//十位
		int indiv;//个位

		printf("输出所以的水仙花数:\n");
		for(number = MIN; number < MAX; number++)
		{
			hundred = number / 100;
			ten = (number % 100) / 10;
			indiv = number % 10;

			//水仙花数
			
			if(number == (hundred * hundred * hundred + ten * ten * ten + indiv * indiv * indiv))
			{
				printf("%d\t",number);
			}
		}
		putchar('\n');

		return 0;
}
