#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b)
{
		printf("a:%d,b:%d\n",a,b);
		return a + b;
}

int main()
{
		int i,j,result;
		int *pa,*pb;
		pa = &i;
		pb = &j;
		printf("请输入i和j:\n");
		scanf("%d %d",pa,pb);
		result = sum(*pa,*pb);
		printf("sum=%d\n",result);
	return 0;
}
