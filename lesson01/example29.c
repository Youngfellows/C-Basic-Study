#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b);

int main()
{
		int i = 3;
		int j = 4;
		int *pa = &i;
		int *pb = &j;
		printf("main:pa=%p,pb=%p\n",pa,pb);
		printf("1 main:*pa=%d,*pb=%d\n",*pa,*pb);
		swap(pa,pb);
		printf("main:pa=%p,pb=%p\n",pa,pb);
		printf("2 main:*pa=%d,*pb=%d\n",*pa,*pb);
		return 0;
}

void swap(int *a,int *b)
{
		printf("swap:a=%p,b=%p\n",a,b);
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}
