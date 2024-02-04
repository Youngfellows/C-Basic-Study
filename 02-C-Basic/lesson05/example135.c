#include<stdio.h>

int main()
{	
		int x;
		int y;
		printf("请输入参数x:");
		scanf("%d",&x);

		if(x>=10)
		{
				y = 3*x-11;
		}else if(x>=1)
		{
				y = 2*x -1;
		}else{
				y = x;
		}

		printf("y=%d\n",y);
		return 0;

}
