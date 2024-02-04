#include<stdio.h>

#define ROW 3
#define COLUMN 80

void input_text(char text[ROW][COLUMN],int row,int column);
void print_text(char text[ROW][COLUMN],int row,int column);
void statistics(char text[ROW][COLUMN],int row,int column,int *uppe,int *low,int *dig,int *spa,int *oth);

int main()
{		//定义一个字符串数组
		char text[ROW][COLUMN];
		int upper;
		int lower;
		int digit;
		int space;
		int other;
		printf("请输入一个%d行%d列的字符串:\n",ROW,COLUMN);
		input_text(text,ROW,COLUMN);
		print_text(text,ROW,COLUMN);
		statistics(text,ROW,COLUMN,&upper,&lower,&digit,&space,&other);
		printf("大写字母:%d,小写字母:%d,数字:%d,空格:%d,其他:%d\n",upper,lower,digit,space,other);
		return 0;
}

void input_text(char text[ROW][COLUMN],int row,int column)
{
		int i;

		for(i = 0; i < row; i++)
		{
				fgets(text[i],column,stdin);//输入一个字符串
		}
}

void print_text(char text[ROW][COLUMN],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
				fputs(text[i],stdout);//打印字符串
		}
}

/**
 * @brief 对字符串数组进行统计
 * 
 * @param text 字符串数组
 * @param row 行数
 * @param column 列数
 * @param uppe 大写字母个数
 * @param low 小写字母个数
 * @param dig 数字个数
 * @param spa 空格个数
 * @param oth 其他字符个数
 */
void statistics(char text[ROW][COLUMN],int row,int column,int *uppe,int *low,int *dig,int *spa,int *oth)
{
		int i,j;
		int ch;
		int upper,lower,digit,space,other;
		upper = lower = digit = space = other = 0;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column && text[i][j] != '\n';j++)
			{
				ch = text[i][j];
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











