#include<stdlib.h>
#include<stdio.h>
enum week
{
	SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
};//定义一个枚举类型

int main()
{
	enum week w1,w2;//定义枚举变量w1,w2
	w1 = MONDAY;
	w2 = FRIDAY;
	printf("w1 + w2 = %d\n",(w1+w2));
	return 0;
}
