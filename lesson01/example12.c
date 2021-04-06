#include<stdlib.h>
#include<stdio.h>
#define GET_ARRAY_LEN(array,len){len=(sizeof(array)/sizeof(array[0]));}
#define GET_TWO_ARRAY_LEN(array,rows,columns){rows=(sizeof(array)/(sizeof(array[0])));columns=(sizeof(array[0])/(sizeof(array[0][0])));}
int main()
{
		int arr[]={2,3,4,5,6,1,7};
		int len;

		int score[2][4]={{1,2,3,4},{5,6,7,8}};
		char s1[]={'b','a','i','d','u'};
		char s2[]="www.google.com";
		int rows,columns;

		GET_ARRAY_LEN(arr,len);
		printf("len=%d\n",len);

		GET_ARRAY_LEN(s1,len);
		printf("len=%d\n",len);

		GET_ARRAY_LEN(s2,len);
		printf("len=%d\n",len);
		
		GET_TWO_ARRAY_LEN(score,rows,columns);
		printf("rows=%d,columns=%d\n",rows,columns);

	return 0;
}
