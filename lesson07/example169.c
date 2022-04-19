#include<stdio.h>

#define ROW 3
#define COLUMN 80

void input_text(char (*text)[COLUMN],int row,int column);
void print_text(char (*text)[COLUMN],int row,int column);
void statistics(char (*text)[COLUMN],int row,int column,int *uppe,int *low,int *dig,int *spa,int *oth);

int main()
{
		char ctext[ROW][COLUMN];
		char (*text)[COLUMN];//指向一维数组的指针变量,数组中的每一个元素都是字符串,也就是字符数组char[COLUMN]
		int upper;
		int lower;
		int digit;
		int space;
		int other;
		text = ctext;
		printf("请输入一个%d行%d列的字符串:\n",ROW,COLUMN);
		input_text(text,ROW,COLUMN);
		print_text(text,ROW,COLUMN);
		statistics(text,ROW,COLUMN,&upper,&lower,&digit,&space,&other);
		printf("大写字母:%d,小写字母:%d,数字:%d,空格:%d,其他:%d\n",upper,lower,digit,space,other);
		return 0;
}

void input_text(char (*text)[COLUMN],int row,int column)
{
		int i;

		for(i = 0; i < row; i++)
		{
				fgets(text[i],column,stdin);
		}
}

void print_text(char (*text)[COLUMN],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				fputs(text[i],stdout);
		}
}

void statistics(char (*text)[COLUMN],int row,int column,int *uppe,int *low,int *dig,int *spa,int *oth)
{
		char *pc;
		int i,j;
		int ch;
		int upper,lower,digit,space,other;
		upper = lower = digit = space = other = 0;
		for(i = 0; i < row; i++)
		{
				pc = text[i];//第i行
				for(; pc < text[i] + column && *pc != '\n'; pc++)
				{
						ch = *pc;
						if(ch >= 'A' && ch <= 'Z')
						{
								upper++;
						}else if(ch >= 'a' && ch <= 'z')
						{
								lower++;
						}else if(ch >= '0' && ch <= '9')
						{
								digit++;
						}else if(ch == ' ')
						{
								space++;
						}else
						{
								other++;
						}
				}
		}

		//赋值
		*uppe = upper;
		*low = lower;
		*dig = digit;
		*spa = space;
		*oth = other;
}











