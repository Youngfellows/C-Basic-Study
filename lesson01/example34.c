#include<stdio.h>
#include<stdlib.h>

extern int avg();

int main()
{	
	//编译gcc example34.c example33.c 
	int a,b,result;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("请输入a和b:\n");
	scanf("%d %d",pa,pb);
	result = avg(*pa,*pb);
	printf("result=%d\n",result);
	return 0;
}
