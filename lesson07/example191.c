#include<stdio.h>
#include<math.h>

float solut(float a,float b,float c,float d);

int main()
{
		//编译: gcc example191.c -lm
		//用牛顿迭代法求方程的根
		//a*x*x*x + b*x*x + c*x + d = 0;

		float a,b,c,d;
		float x;
		printf("请输入系数a,b,c,d:\n");
		scanf("%f,%f,%f,%f",&a,&b,&c,&d);
		
		x = solut(a,b,c,d);
		printf("方程:%.2f*x*x*x + %.2f*x*x + %.2f*x + %.2f = 0的根x=%f\n",a,b,c,d,x);

		return 0;
}

float solut(float a,float b,float c,float d)
{
	float x = 1;
	float x0;
	float f;//方程
	float f1;//导数
	do{
		x0 = x;
		f = ((a * x0 + b) * x0 + c) * x0 + d;
		f1 = (3 * a * x0 + 2 * b) * x0 + c;
		x = x0 - f / f1;
	}while(fabs(x - x0) > 1e-3);
	return x;
}
