#include<stdio.h>
#include<math.h>

void greater_than_zero(float a,float b,float disc,float *x1,float *x2);
void equal_to_zero(float a,float b,float disc,float *x1,float *x2);
void smaller_than_zero(float a,float b,float disc,float *p,float *q);

int main()
{	
		//编译: gcc example179.c -lm
		float a,b,c;//系数
		float x1,x2;//根
		float disc;//判别式
		float p,q;//虚部,实部
		printf("求方程 a*x*x + b*x + c = 0等根\n");
		printf("请输入a,b,c三个数:\n");
		scanf("%f,%f,%f",&a,&b,&c);
		disc = b * b - 4 * a * c;
		if(disc > 0)
		{	
				greater_than_zero(a,b,disc,&x1,&x2);
				printf("x1=%f,x2=%f\n",x1,x2);
		}else if(disc == 0)
		{
				equal_to_zero(a,b,disc,&x1,&x2);
				printf("x1=%f,x2=%f\n",x1,x2);
		}else
		{
				smaller_than_zero(a,b,disc,&p,&q);
				printf("x1=%f+%fi;x2=%f-%fi\n",p,q,p,q);
		}


		return 0;
}

void greater_than_zero(float a,float b,float disc,float *x1,float *x2)
{
		*x1 = (-b + sqrt(disc)) / (2 * a);
		*x2 = (-b - sqrt(disc)) / (2 * a);
}

void equal_to_zero(float a,float b,float disc,float *x1,float *x2)
{
		*x1 = *x2 = (-b) / (2 * a);
}

void smaller_than_zero(float a,float b,float disc,float *p,float *q)
{
		*p = -b / (2 * a);
		*q = sqrt(-disc) / (2 * a);
}
