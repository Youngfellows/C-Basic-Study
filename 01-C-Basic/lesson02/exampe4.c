#include<stdio.h>
int main()
{
	int x;
	int y=6;
	int sum=0;
	for(x=0;x<=y;x++)
	{
		if(x%2 != 0)
		{
		   continue;//求偶数的和	
		}
		sum += x;
	}
	printf("sum = %d\n",sum);
	return 0;
}
