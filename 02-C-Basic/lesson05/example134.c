#include<stdio.h>
#include<math.h>

#define M 1000

int main()
{
		//编译gcc example134.c -lm
		int number,result;
		printf("请输入一个小于%d的整数number:",M);
		scanf("%d",&number);

		while(number<0||number>M)
		{
			printf("输入的数据不合法,请从新输入一个小于%d的整数number:",M);
			scanf("%d",&number);
		}

		result = sqrt(number);
		printf("result=%d\n",result);

		return 0;
}
