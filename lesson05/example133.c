#include<stdio.h>

int max(int *,int *);

int main()
{

		int a,b,c;
		int _max;
		int *p;
		p = &_max;

		printf("请输入a,b,c:\n");
		scanf("%d,%d,%d",&a,&b,&c);
	    _max = max(&a,&b);
		_max = max(p,&c);
		printf("max=%d\n",_max);

		return 0;
}

int max(int *a,int *b)
{
	return *a>*b?*a:*b;
}
