#include<stdio.h>

int main()
{
		int digit;//输入的一个数字
		int number;//位数
		int sn = 0;//和
		int tn = 0;//每一项
		int i = 0;
		printf("请输入一个整数和位数:\n");
		scanf("%d,%d",&digit,&number);
		while(i < number)
		{
			tn = tn + digit;
			sn = sn + tn;
			digit = 10 * digit;
			i++;
		}
		printf("a+aa+aaa+aaaa+...=%d\n",sn);

		return 0;
}
