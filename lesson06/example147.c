#include<stdio.h>
#include<string.h>

#define SIZE 1024

int main()
{
		int digit;//输入的一个数字
		int number;//位数
		int sn = 0;//和
		int tn = 0;//每一项
		int i = 0;
		char result[SIZE];//定义字符串
		char temp[SIZE];
		printf("请输入一个整数和位数:\n");
		scanf("%d,%d",&digit,&number);
		while(i < number)
		{
			tn = tn + digit;
			sn = sn + tn;
			digit = 10 * digit;
			i++;
			sprintf(temp,"%d",tn);//将int型数据转换为字符串
			printf("%s\n",temp);
			strcat(result,temp);//字符串拼接
			if (i < number)
			{	
				strcat(result,"+");
			}
		}
		//printf("a+aa+aaa+aaaa+...=%d\n",sn);
		printf("%s=%d\n",result,sn);

		return 0;
}
