#include<stdio.h>
#define LEN_FIVE 5
#define LEN_FOUR 4
#define LEN_THREE 3
#define LEN_TWO 2
#define LEN_ONE 1

int get_place(int number);//获取位数
void get_array_place(int number,int *p,int size);
void print_place(int *p,int size);//打印每一位数字

int main()
{
		int number;//数字
		int indiv;//个位
		int ten;//十位
		int hundred;//百位
		int thousand;//千位
		int ten_thousand;//万位
		int place;//位数
		int array_five[LEN_FIVE];
		int array_four[LEN_FOUR];
		int array_three[LEN_THREE];
		int array_two[LEN_TWO];
		int array_one[LEN_ONE];
		int *p;//指针变量指向数组首元素

		printf("请输入一个整数(0-99999):");
		scanf("%d",&number);
		while(number > 99999 || number < 0)
		{
				printf("输入有错误,请从新输入一个整数(0-99999):");
				scanf("%d",&number);
		}

		place = get_place(number);
		printf("位数:%d\n",place);

		//为数组元素赋值
		switch(place)
		{
				case LEN_FIVE:
						p = array_five;//指向数组5
						break;
				case LEN_FOUR:
						p = array_four;
						break;
				case LEN_THREE:
						p = array_three;
						break;
				case LEN_TWO:
						p = array_two;
						break;
				case LEN_ONE:
						p = array_one;
						break;
		}

		get_array_place(number,p,place);
		
		//打印
		print_place(p,place);
		return 0;
}

int get_place(int number)
{
		int place;
		if(number > 9999)
		{
				place = 5;
		}else if(number > 999)
		{
				place = 4;
		}else if(number > 99)
		{
				place = 3;
		}else if(number > 9)
		{
				place = 2;
		}else 
		{
				place = 1;
		}

		return place;
}

//为数组元素赋值
void get_array_place(int number,int *p,int size)
{
		int ten_thousand;
		int thousand;
		int hundred;
		int ten;
		int indiv;
		printf("number:%d,size:%d\n",number,size);

		ten_thousand =(int)(number / 10000);
		thousand = (int)(number - ten_thousand * 10000)/1000;
		hundred = (int)(number - ten_thousand * 10000 - thousand * 1000)/100;
		ten = (int)(number - ten_thousand * 10000 - thousand * 1000 - hundred * 100)/10;
		indiv = number % 10;
		printf("%d-%d-%d-%d-%d\n",ten_thousand,thousand,hundred,ten,indiv);

		switch(size)	
		{
				case LEN_FIVE:
						p[0] = ten_thousand;
						p[1] = thousand;
						p[2] = hundred;
						p[3] = ten;
						p[4] = indiv;
						break;
				case LEN_FOUR:
						p[0] = thousand;
						p[1] = hundred;
						p[2] = ten;
						p[3] = indiv;
						break;
				case LEN_THREE:
						p[0] = hundred;
						p[1] = ten;
						p[2] = indiv;
						break;
				case LEN_TWO:
						p[0] = ten;
						p[1] = indiv;
						break;
				case LEN_ONE:
						p[1] = indiv;
						break;
		}
}

void print_place(int *p,int size)
{
		int i;
		int *pt = p;
		printf("正序打印:");
		for(i = 0;i < size; i++,p++)
		{
				printf("%d\t",*p);
		}
		printf("\n");

		printf("逆序打印:");
		for(i = size-1;i >= 0; i--)
		{
			printf("%d\t",pt[i]);
		}
		printf("\n");
}
