#include<stdio.h>

int main()
{
		double profit;//利润
		double bon1;//100000元节点奖金
		double bon2;//200000元节点奖金
		double bon4;//400000元节点奖金
		double bon6;//600000元节点奖金
		double bon10;//1000000元节点奖金
		double bonus;//奖金

		bon1 = 100000*(10.0/100);
		bon2 = bon1 + 100000*(7.5/100);
		bon4 = bon2 + 200000*(5/100);
		bon6 = bon4 + 200000*(3/100);
		bon10 = bon4 + 400000*(1.5/100);
		printf("bon1=%.2f\n",bon1);
		printf("bon2=%.2f\n",bon2);
		printf("bon4=%.2f\n",bon4);
		printf("bon6=%.2f\n",bon6);
		printf("bon10=%.2f\n",bon10);
		

		printf("请输入利润:");
		scanf("%lf",&profit);
		if(profit <= 100000)
		{
				bonus = profit*(10.0/100);
		}else if(profit <= 200000)
		{
				bonus = bon1 + (profit - 100000) * (7.5 / 100);
		}else if(profit <= 400000)
		{	
				bonus = bon2 + (profit - 200000) * (5 / 100);
		}else if(profit <= 600000)
		{
				bonus = bon4 + (profit - 400000) * (3 / 100);
		}else if(profit <= 1000000)
		{
				bonus = bon6 + (profit - 600000) * (1.5 / 100);
		}else
		{
				bonus = bon10 + (profit - 1000000) * (1 / 100);
		}
		
		printf("利润%.2f的奖金是%.2f\n",profit,bonus);

		return 0;
}
