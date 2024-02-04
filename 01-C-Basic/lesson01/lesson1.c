#include<stdio.h>
int main()
{
	int x = 15;
	int y = x++;
	int z = 8;
	int s = ++z;
	printf("x=%d,y=%d,z=%d,s=%d",x,y,z,s);

	//条件表达式样
	int a,b,c;
	a=3;
	b=4;
	c=5;
	printf("\na=%d,b=%d,c=%d\n",a,b,c);
	
	int result;
	result = a>b?a:b;
	printf("result=%d\n",result);

	if(a>b)
	{
		result = a;
	}else{
		result = b;
	}
	printf("result=%d\n",result);

	return 0;
}












































