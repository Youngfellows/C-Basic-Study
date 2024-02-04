#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<=100;x++)
	{
		printf("%d\n",x);
		if(x==15)
		{
			break;
		}
	}
	return 0;
}
