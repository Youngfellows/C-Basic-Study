#include<stdio.h>

int main()
{
		double s;//结果
		double tn = 1;//每一项
		int i;
		for(i = 1;i <= 20; i++)
		{
			tn = tn * i;
			s = s + tn;
		}
		printf("1!+2!+3!+...+20!=%22.15e\n",s);

		return 0;
}
