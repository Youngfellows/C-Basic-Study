#include<stdio.h>

int greatest(int u,int v);//求最大公约数
int least(int u,int v,int great);//最小公倍数

int main()
{
		int u,v;
		int great;//最大公约数
		int leas;//最小公倍数
		//求最大公约数和最小公倍数
		
		printf("请输入两个数u和v:\n");
		scanf("%d,%d",&u,&v);
		great = greatest(u,v);
		leas = least(u,v,great);
		printf("最大公约数:%d\n",great);
		printf("最小公倍数:%d\n",leas);

		return 0;
}
int greatest(int u,int v)
{
	int temp;
	int r;//余数
	if(v > u)
	{
		temp = u;
		u = v;
		v = temp;
	}

	while((r = u % v) != 0)
	{
		u = v;
		v = r;
	}

	//公约数
	return v;
}

int least(int u,int v,int great)
{
	return (u * v) / great;
}
