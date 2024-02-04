#include<stdio.h>
int main()
{
	int x = 0;
	goto L1;
	L1: printf("x=%d\n",x);
	return 0;
}
