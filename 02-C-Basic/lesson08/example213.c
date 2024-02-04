#include<stdio.h>

#define LEN 50
#define SIZE 20

int main()
{
				//输入一个字符串,内含数字和非数字,例如: a123x456 78960% 302bad 7896
				//将其中的连续数字作为一个整数放到数组中
				char str[LEN];//字符串
				char *pstr;
				int number[SIZE];//数字数组
				int *pa;
				int digit;//单个数字
				int digit_count;//数字个数
				int i;
				int j;//统计数字个数
				int k;
				int m;
				int el0;//累乘因子
				pstr = str;
				printf("请输入一个字符串:\n");
				fgets(pstr,LEN,stdin);
				//printf("%s\n",pstr);
				pa = number;
				digit_count = 0;
				i = 0;
				j = 0;

				while(*(pstr + i) != '\0')
				{
								if((*(pstr + i) >= '0') && (*(pstr + i) <= '9') )
								{
												j++;//统计数字个数
								}else
								{
												if(j > 0)	
												{
																digit = *(pstr + i - 1) - 48;//将个位数赋值给digit
																k = 1;
																while(k < j)
																{
																				el0 = 1;
																				for(m = 1; m <= k; m++)
																				{
																								el0 = el0 * 10;//每一位的累乘因子
																				}
																				digit = digit + (*(pstr + i - 1 - k) - 48) * el0;//将该位数的数值累加
																				k++;
																}
																*pa = digit;//为数组赋值
																digit_count++;
																pa++;
																j=0;
												}
								}
								i++;
				}

				printf("共有%d个数字:\n",digit_count);
				i = 0;
				pa = &number[0];
				for(i = 0; i < digit_count; i++)
				{
								printf("%d\t",*(pa + i));
				}
				printf("\n");

				return 0;
}
