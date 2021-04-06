#include<stdlib.h>
#include<stdio.h>

enum week
{
		SUN,MON,TUE,WED,THU,FRI,SAT
};

int main()
{
		enum week w1,w2;
		w1 = MON;
		w2 = FRI;
		printf("w1:%d\t w2:%d\n",w1,w2);
		return 0;
}
