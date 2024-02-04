#include<stdio.h>
#include<stdio.h>
int main()
{
	//指向指针的指针变量
	int x,y;
	int *p;//int * 型的指针变量p
	int **pp;//指向指针的指针变量PP

	p = &x;//p指向了变量x
	pp = &p;//pp指向了指针变量p
	
	printf("打印地址信息: \n");
	printf("变量x的地址: %p\n",&x);	
	printf("变量y的地址: %p\n",&y);
	printf("int *型指针变量p的地址: %p\n",p);
	printf("指向指针的指针变量pp的地址: %p\n",pp);	
	
	printf("\n");
	printf("*pp = %p,p = %p,&x = %p\n",*pp,p,&x);

	**pp = 3;//*pp 为pp指向的内存单元的值，即指针变量p，对p取*运算，得到x的值	
	printf("赋值后的x=%d\n",x);
	
	*pp = &y;//等价与 p = &y
	**pp = 1024;
	printf("y = %d\n",y);

	return 0;
}
