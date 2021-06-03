#include<stdio.h>
#include<math.h>

//函数指针
float integral(float (*p)(float x),float a,float b,int n);
float fsin(float x);
float fcos(float x);
float fexp(float x);

int main()
{
		//编译: gcc example210.c -lm
		//用矩形法求定积分
		//使用函数指针
		float a1,a2,a3;
		float b1,b2,b3;
		float c;
		float (*p)(float x);//函数指针
		int n = 30;

		printf("请输入a1,b1:\n");
		scanf("%f,%f",&a1,&b1);

		printf("请输入a2,b2:\n");
		scanf("%f,%f",&a2,&b2);

		printf("请输入a3,b3:\n");
		scanf("%f,%f",&a3,&b3);

		p = fsin;
		c = integral(p,a1,b1,n);
		printf("sin(x)的积分是:%f\n",c);

		p = fcos;
		c = integral(p,a2,b2,n);
		printf("cos(x)的积分是:%f\n",c);

		p = fexp;
		c = integral(p,a3,b3,n);
		printf("exp(x)的积分是:%f\n",c);

		return 0;
}

float integral(float (*p)(float x),float a,float b,int n)
{
		int i;
		float x;//x坐标
		float h;//高
		float s;//面积
		h = (b - a) / n;
		x = a;
		s = 0;
		for(i = 1; i <= n; i++)
		{
				x = x + h;
				s = s + (*p)(x) * h;
		}
		return s;
}

float fsin(float x)
{
		return sin(x);
}

float fcos(float x)
{
		return cos(x);
}

float fexp(float x)
{
		return exp(x);
}
