#include<stdio.h>

#define OK_PRIME -1 //是素数
#define NO_PRIME 0 //不是素数

int prime(int *num);

int main()
{
		//判断一个数是否是素数
		int number;
		int flag;
		printf("请输入一个整数:\n");
		scanf("%d",&number);
		flag = prime(&number);
		if(flag == OK_PRIME)
		{
			printf("%d是素数...\n",number);
		}else
		{
			printf("%d不是素数...\n",number);
		}
		

		return 0;
}

/**
 * @brief 判断一个数是否是素数
 * 
 * @param num 传递指针变量,即地址
 * @return int 
 */
int prime(int *num)
{
		int flag = OK_PRIME;
		int i;
		for(i = 2; i < *num / 2; i++)
		{
				if(*num % i == 0)
				{
					flag = NO_PRIME;
					break;
				}
		}
		return flag;
}
