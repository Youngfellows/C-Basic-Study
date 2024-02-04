#include<stdio.h>
#include<stdlib.h>

int max(int,int);

int main()
{
	int (*p)(int,int);//定义一个函数指针p,函数指针指向函数
	int x,y,result;
	printf("请输入x和y:\n");
	scanf("%d,%d",&x,&y);
	
	p = max;//函数指针指向max函数
	
	//result = max(x,y);
	result = (*p)(x,y);//使用函数指针调用函数
	printf("max=%d\n",result);
	return 0;
}

/**
 * @brief 定义函数
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int max(int a,int b)
{
	return a > b?a:b;
}
