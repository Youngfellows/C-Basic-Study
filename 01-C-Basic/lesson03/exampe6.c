#include<stdio.h>
#include<stdlib.h>
#define GET_ARRAY_LEN(array,len) {len = (sizeof(array)/sizeof(array[0]));}//计算维数组的长度
#define GET_TWO_ARRAY_LEN(array,rows,columns) {rows = ((sizeof(array))/(sizeof(array[0])));columns = ((sizeof(array[0]))/(sizeof(array[0][0])));}
int main()
{
	//1、计算一维数组的长度
	int arr[]={2,4,5,6,9};
	int len;
	
	int scores[2][3]={{33,44,55},{98,71,64}};//二维数组
	int columns;//列数
	int rows;//行数

	//printf("szizeof(arr)=%d ,sizeof(arr[0])=%d ",sizeof(arr),sizeof(arr[0]));
	//len = sizeof(arr)/sizeof(arr[0]);
	//printf("数组的长度是: len = %d\n",len);
	
	//宏定义来计算数组的长度
	GET_ARRAY_LEN(arr,len);
	printf("整形数组的长度是: len = %d \n",len);

	//2、计算字符数组的长度
	char s1[] = "www.aispeech.com";
	GET_ARRAY_LEN(s1,len);
	printf("字符数组的长度是: len = %d \n",len);
	
	char s2[] = {'b','a','i','d','u'};
	GET_ARRAY_LEN(s2,len);
	printf("字符数组的长度是: len = %d \n",len);

	//3.计算二维数组的长度
	//32位编译器上int类型数据占用4个字节
	//printf("int类型数据占用字节大小: size = %d \n",sizeof(int));
	//printf("二维数组占用字节大小: size = %d \n",sizeof(scores));
	//printf("首行数据占用字节大小: size = %d \n",sizeof(scores[0]));
	//printf("二维数组的列数: columns = %d \n",(sizeof(scores[0])/(sizeof(scores[0][0]))));	
	//printf("二维数组的行数: rows = %d \n",sizeof(scores)/(sizeof(scores[0])));	

	GET_TWO_ARRAY_LEN(scores,rows,columns);
	printf("行数: %d ,列数: %d ",rows,columns);

	return 0;
}
