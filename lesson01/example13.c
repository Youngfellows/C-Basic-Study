#include<stdio.h>
#include<stdlib.h>
int main()
{
		int age = 23;
		#if(age==23)
			printf("age is 23\n");
		#else
			printf("age not is 23\n");
		#endif
		return 0;
}
