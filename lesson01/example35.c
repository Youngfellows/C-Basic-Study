#include<stdio.h>
#include<stdlib.h>

int recursion(int);

int main()
{
		int number,result;
		int *pa;
		pa = &number;
		printf("请输入number:\n");
		scanf("%d",pa);
		result = recursion(*pa);
		printf("result=%d\n",result);

		return 0;
}


int recursion(int a)
{
		if(a==1)
		{
			return 1;
		}else{
				return a*recursion(a-1);
		}
}
