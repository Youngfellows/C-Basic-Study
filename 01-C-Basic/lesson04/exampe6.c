#include<stdio.h>
#include<stdlib.h>
int main()
{
	//强制类型转换会报错

	char *pc;
	int *p;
	int m;
	printf("char * 型指针变量P的地址: %p\n",pc);
	printf("int * 型指针变量P的地址: %p\n",p);
	printf("变量m的地址: %p,其值: m = %d\n",&m,m);
	
	p = (int *)pc;//字符型指针变量强制转换为整型指针变量
	printf("int * 型指针变量P的地址: %p\n",pc);
	
	 pc = &m;//指针变量pc指向整型变量m
	*pc = 6;//对pc指向的内存赋值6
	printf("赋值后 m = %d\n",m);

	return 0;
}
