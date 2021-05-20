#include<stdio.h>

//求n阶多项式的值
float polynomial(float x,int n);

int main()
{
		float x;
		int n;
		float result;
		printf("请输入x和n:\n");
		scanf("%f,%d",&x,&n);
		result = polynomial(x,n);
		printf("result=%f\n",result);
		return 0;
}

float polynomial(float x,int n)
{
		if(n == 0)
		{
				return 0;
		}else if(n == 1)
		{
				return x;
		}else
		{
				return (2 * n - 1) * x - polynomial(x,n-1) - (n - 1) * polynomial(x,n-2) / n;
		}
}

