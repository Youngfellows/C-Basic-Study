#include<stdlib.h>
#include<stdio.h>
#define MIN 100
#define MAX 999
int main()
{
		int num,sum;
		int ge,shi,bai;
		num = MIN;
		while(num<=MAX)
		{
				bai = (num/100)%10;
				shi = (num/10)%10;
				ge = (num/1)%10;
				if(bai*bai*bai+shi*shi*shi+ge*ge*ge==num)
				{
						printf("%d\n",num);
				}
				num++;
		}
	return 0;
}
