#include<stdio.h>
#include<stdlib.h>
int main()
{	
	//条件编译
	int is_execute = 8;

	printf("is_exxecute = %d\n",(is_execute ==7));

	#if (is_execute != 7)
		printf("哈哈哈，is_execute不为7\n");
	#else
		printf("哈哈哈，is_execute为7啦\n");
	#endif 
	
	return 0;
}
