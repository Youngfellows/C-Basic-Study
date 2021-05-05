#include<stdio.h>
#include<math.h>

int main()
{
		float d = 300000;
		float p = 6000;
		float r = 0.01;
		float month;

		month = log10(p/(p-d*r))/log10(1+r);
		printf("month=%6.1f\n",month);

		return 0;
}
