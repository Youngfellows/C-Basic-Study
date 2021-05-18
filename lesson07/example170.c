#include<stdio.h>

#define N 5

int main()
{
		char star[N] = "*****";
		char *ps = star;
		int i,j,k;
		//printf("%s\n",ps);
		char space = ' ';
		for(i = 0; i < N; i++)
		{
			printf("\n");
			for(j = 1;j <= i; j++)
			{
				putchar(space);
			}
			fputs(ps,stdout);
		}
		printf("\n");

		return 0;
}

