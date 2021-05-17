#include<stdio.h>

#define MAX 10

int main()
{
		double sn = 100;//高度
		double hn = sn / 2;//反弹高度
		int n;

		for(n = 2; n <= MAX; n++)
		{
			sn = sn + 2 * hn;
			hn = hn / 2;
		}
		printf("第%d次的反弹高度%f米\n",MAX,hn);
		printf("第%d次落地经过距离%f米\n",MAX,sn);

		return 0;
}
