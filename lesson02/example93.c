#include<stdio.h>
#include<stdlib.h>

int max(int,int);
int min(int,int);
int func(int (*p)(int,int),int,int);

int main()
{
		int (*p)(int,int);
		int x,y,num,result;
		printf("请输入x和y:\n");
		scanf("%d,%d",&x,&y);

		printf("请输入数字num:\n");
		scanf("%d",&num);

		if(num == 1)
		{
				p = max;
		}else if(num == 2)
		{
				p = min;
		}

		result = func(p,x,y);

		if(num == 1)
		{
				printf("max=%d\n",result);
		}else if(num == 2)
		{
				printf("min=%d\n",result);
		}
		return 0;
}

int func(int (*p)(int,int),int a,int b)
{
	return (*p)(a,b);
}


int max(int a,int b)
{
		return a > b?a:b;
}

int min(int a,int b)
{
		return a>b?b:a;
}
