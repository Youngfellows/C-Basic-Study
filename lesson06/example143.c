#include<stdio.h>

#define ROW 5
#define COLUMN 6

void method1();
void method2();
void method3();

int main()
{
		method1();
		printf("\n============================\n");
		method2();
		printf("\n============================\n");
		method3();
		printf("\n");
		return 0;
}

void method1()
{
	int i,j,n=0;
	for(i = 1; i < ROW; i++)
	{
		for(j = 1; j < COLUMN;j++,n++)
		{
			if(n % 5 == 0)
			{
					printf("\n");
			}
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
}

void method2()
{
	int i,j,n=0;
	for(i = 1; i < ROW; i++)
	{
		for(j = 1; j < COLUMN;j++,n++)
		{
			if(n % 5 == 0)
			{
					printf("\n");
			}
			if(i == 3 && j == 1)
			{
				break;//结束内层的for循环
			}
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
}

void method3()
{
	int i,j,n=0;
	for(i = 1; i < ROW; i++)
	{
		for(j = 1; j < COLUMN;j++,n++)
		{
			if(n % 5 == 0)
			{
					printf("\n");
			}
			if(i == 3 && j == 1)
			{
				printf("\t");
				continue;//结束本次循环,继续下次循环
			}
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
}
