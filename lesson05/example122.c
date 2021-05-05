#include<stdio.h>

int max(int,int);

int main()
{
		int a,b,c,max_;
		printf("请输入a,b,c:\n");
		scanf("%d,%d,%d",&a,&b,&c);
		max_ = max(max(a,b),c);
		printf("max=%d\n",max_);
		return 0;
}

int max(int a,int b)
{
	return a > b? a: b;
}
