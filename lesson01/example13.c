#include<stdio.h>
#include<stdlib.h>
int main()
{
		int age = 23;
		#if(age==23)
			printf("age is 23");
		#else
			printf("age not is 23");
		#endif
		return 0;
}
