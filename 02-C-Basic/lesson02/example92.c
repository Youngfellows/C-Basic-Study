#include<stdio.h>
#include<stdlib.h>

//函数申明
int max(int,int);
int min(int,int);

int main()
{
		int (*p)(int,int);//定义函数指针p,函数指针可以指向函数
		int x,y,num,result;
		printf("请输入x和y:\n");
		scanf("%d,%d",&x,&y);

		printf("请输入数字num:\n");
		scanf("%d",&num);

		if(num == 1)
		{
				p = max;//函数指针p指向max函数
		}else if(num == 2)
		{
				p = min;//函数指针p指向min函数
		}

		result = (*p)(x,y);//使用函数指针调用函数

		if(num == 1)
		{
				printf("max=%d\n",result);
		}else if(num == 2)
		{
				printf("min=%d\n",result);
		}
		return 0;
}

/**
 * @brief 函数定义,求最大值
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int max(int a,int b)
{
		return a > b?a:b;
}

/**
 * @brief 函数定义,求最小值
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int min(int a,int b)
{
		return a>b?b:a;
}
