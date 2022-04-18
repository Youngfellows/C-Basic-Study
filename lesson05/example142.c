#include<stdio.h>
#include<math.h>

#define RADIUS 2

float distance(float x,float y,float cx,float cy);

int main()
{
		//编译指令: gcc example142.c -lm
		//各个点坐标
		float x1 = 2;
		float y1 = 2;
		float x2 = -2;
		float y2 = 2;
		float x3 = -2;
		float y3 = -2;
		float x4 = 2;
		float y4 = -2;

		//输入点坐标
		float x,y;
		//距离各个点坐标
		float d1,d2,d3,d4;
		float height = 10;

		printf("请输入一个点(x,y):");
		scanf("%f,%f",&x,&y);

		d1 = distance(x,y,x1,y1);
		d2 = distance(x,y,x2,y2);
		d3 = distance(x,y,x3,y3);
		d4 = distance(x,y,x4,y4);
		printf("d1:%.2f\n",d1);
		printf("d2:%.2f\n",d2);
		printf("d3:%.2f\n",d3);
		printf("d4:%.2f\n",d4);

		if(d1 > RADIUS && d2 > RADIUS && d3 > RADIUS && d4 > RADIUS)
		{
				height = 0;
				printf("(%f,%f)点在墙外,高度为%f\n",x,y,height);
		}

		if(d1 < RADIUS)
		{
				printf("(%f,%f)在点(%f,%f)附近,外墙高度为%f\n",x,y,x1,y1,height);
		}

		if(d2 < RADIUS)
		{
				printf("(%f,%f)在点(%f,%f)附近,外墙高度为%f\n",x,y,x2,y2,height);
		}

		if(d3 < RADIUS)
		{
				printf("(%f,%f)在点(%f,%f)附近,外墙高度为%f\n",x,y,x3,y3,height);
		}

		if(d4 < RADIUS)
		{
				printf("(%f,%f)在点(%f,%f)附近,外墙高度为%f\n",x,y,x4,y4,height);
		}

		return 0;
}

/**
 * @brief 求两点之间的距离
 * 
 * @param x x坐标
 * @param y y坐标
 * @param cx x坐标
 * @param cy x坐标
 * @return float 两点之间的距离
 */
float distance(float x,float y,float cx,float cy)
{
		float d = (x - cx)*(x - cx) + (y - cy)*(y - cy);
		return sqrt(d);
}
