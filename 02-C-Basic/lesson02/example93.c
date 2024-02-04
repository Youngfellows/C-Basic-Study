#include<stdio.h>
#include<stdlib.h>

int max(int,int);
int min(int,int);
int func(int (*p)(int,int),int,int);//函数指针作为函数的参数

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
				p = max;//函数指针p指向函数max
		}else if(num == 2)
		{
				p = min;//函数指针p指向函数min
		}

		result = func(p,x,y);//通过函数指针调用函数

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
 * @brief 函数指针作为函数的参数
 * 
 * @param p 函数指针
 * @param a 
 * @param b 
 * @return int 
 */
int func(int (*p)(int,int),int a,int b)
{
	//通过函数指针调用函数
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
