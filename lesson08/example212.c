#include<stdio.h>

#define M 2
#define N 3
#define LEN 10

void input_course(char (*pcourse)[LEN],int len);
void print_course(char (*pcourse)[LEN],int len);
void input_number_2_score(int *pnum,float *pscore,int m,int n);
void print_score(int *pnum,float *pscore,int m,int n);
void avscore(float *pscore,float *paver,int m,int n);//保存每个学生的平均成绩
void avcourse1(char (*pcourse)[LEN],float *pscore,int m,int n);//保存第一门功课的平均成绩
void print_avscore(float *aver,int n);
void fali2(char (*pcourse)[LEN],int *pnum,float *pscore,float *aver,int m,int n);//找出2门功课不及格的学生
void good(char (*pcourse)[LEN],int *pnum,float *pscore,float *aver,int m,int n);//3门功课85分以上或者平均分90分以上

int main()
{
		//一个班级，4个学生，5门功课
		//1. 求第一门功课的平均分
		//2. 找出2门以上功课不及格的学生,并输出他们的学号好全部成绩及平均分
		//3. 找出平均成绩90分以上或者全部成绩85分以上的学生

		float score[M][N];//4个学生的5门功课成绩二维数组
		int num[M];//保存4个学生的学号的数组
		char  course[N][LEN];//5门功课名称
		float aver[M];//保存每个学生平均成绩的数组
		int *pnum;//指向学号的指针变量
		float *pscore;//指向分数的指针变量
		float *paver;//指向平均成绩的指针变量
		char (*pcourse)[LEN];//指向一维数组的指针变量,数组中的每一个元素是char [LEN],即是字符串

		pcourse = course;
		input_course(pcourse,N);

		printf("请输入学号和成绩:\n");
		pnum = &num[0];
		pscore = &score[0][0];
		input_number_2_score(pnum,pscore,M,N);

		printf("=================%d个学生的%d门功课成绩如下=======================\n",M,N);
		printf("学号\t");
		print_course(pcourse,N);
		print_score(pnum,pscore,M,N);

		printf("====================================================================\n");
		paver = aver;
		avscore(pscore,paver,M,N);//保存每个学生的平均成绩
		print_avscore(aver,N);
		//avcourse1(char (*pcourse)[LEN],float *pscore,int m,int n);//保存第一门功课平均成绩
		avcourse1(pcourse,pscore,M,N);
		fali2(pcourse,pnum,pscore,aver,M,N);//找出2门功课不及格的学生
		good(pcourse,pnum,pscore,aver,M,N);//3门功课85分以上或者平均分90分以上
		return 0;
}

/**
 * @brief 输入五门功课的名称
 * 
 * @param pcourse 指针数组,指向一个二维数组的每一行
 *
 * @param len 二维数组的行数
 */
void input_course(char (*pcourse)[LEN],int len)
{
		int i;
		printf("请输入课程名称:\n");
		for(i = 0; i < len; i++)
		{
				scanf("%s",pcourse[i]);
		}
}

void print_course(char (*pcourse)[LEN],int len)
{
		int i;
		for(i = 0; i < len; i++)
		{
				if(i==0)
				{
						printf("%s",*(pcourse+i));

				}else
				{
						printf("\t%s",*(pcourse+i));	
				}
		}
		printf("\n");
}

/**
 * @brief 输入学号和成绩
 * 
 * @param pnum 学号数组
 * @param pscore 成绩数组
 * @param m 
 * @param n 
 */
void input_number_2_score(int *pnum,float *pscore,int m,int n)
{
		int *ptnum = pnum;
		float *ptscore = pscore;
		int i;
		int j;
		for(i = 0; i < m; i++)
		{		
				printf("请输入第%d个学生信息:\n",i);
				printf("number[%d]=",i);
				scanf("%d",ptnum + i);
				for(j = 0; j < n; j++)
				{
						printf("score[%d][%d]=",i,j);
						scanf("%f",ptscore + n * i + j);
				}

				printf("\n");
		}
}

void print_score(int *pnum,float *pscore,int m,int n)
{
		int i,j;
		for(i = 0; i < m; i++)
		{
				printf("%d\t",*(pnum+i));
				for(j = 0; j < n; j++)
				{
						printf("%.2f\t",*(pscore + n * i + j));
				}
				printf("\n");
		}
}

//保存每个学生的平均成绩
void avscore(float *pscore,float *paver,int m,int n)
{
		int i,j;
		float sum;
		float average;
		for(i = 0; i < m; i++)
		{
				sum = 0.0;
				for(j = 0; j < n; j++)
				{
						sum = sum + (*(pscore + n * i + j));
				}
				average = sum / n;
				*(paver + i) = average;
		}
}

void avcourse1(char (*pcourse)[LEN],float *pscore,int m,int n)
{
		int i;
		float sum;
		float average1;
		sum = 0.0;
		for(i = 0; i < m; i++)
		{	printf("%.2f\n",*(pscore + n * i));
				sum = sum + (*(pscore + n * i));
		}
		average1 = sum / m;
		printf("课程:%s,平均分是:%.2f\n",*pcourse,average1);
}

void print_avscore(float *aver,int n)
{
		printf("平均成绩:\n");
		int i;
		for(i = 0; i < n; i++)
		{
				printf("%.2f\t",*(aver + i));
		}
		printf("\n");
}

//找出2门功课不及格的学生
void fali2(char (*pcourse)[LEN],int *pnum,float *pscore,float *aver,int m,int n)
{
		int i;
		int j;
		int k;
		int label;
		printf("================2门功课不及格的学生信息如下=====================\n");
		printf("学号\t");
		for(i = 0; i < n;i++)
		{
			printf("%s\t",*(pcourse + i));
		}
		printf("average\n");
		for(i = 0; i < m; i++)
		{
			label = 0;
			for(j = 0; j < n; j++)
			{
				if(*(pscore + n * i + j) < 60.0)
				{
					label ++;
				}
			}

			if(label >= 2)
			{
				printf("%d\t",*(pnum + i));
				for(k = 0; k < n; k++)
				{
					printf("%.2f\t",*(pscore + n * i + k));
				}

				printf("%.2f\n",*(aver + i));
			}
		}
		printf("\n");
}

//3门功课85分以上或者平均分90分以上
void good(char (*pcourse)[LEN],int *pnum,float *pscore,float *aver,int m,int n)
{
		int i,j,k;
		int number;
		printf("======================优秀学生信息如下=======================\n");
		printf("学号\t");
		for(i = 0; i < n; i++)
		{
			printf("%s\t",*(pcourse + i));
		}
		printf("average\n");
		for(i = 0; i < m; i++)
		{
			number = 0;
			for(j = 0; j < n; j++)
			{
				if(*(pscore + n * i + j) > 85.0)
				{
					number++;
				}
			}

			if(number == n || (*(aver + i) >= 90))
			{
				printf("%d\t",*(pnum + i));
				for(k = 0; k < n; k++)
				{
					printf("%.2f\t",*(pscore + n * i + k));
				}
				printf("%.2f\n",*(aver + i));
			}
		}
}


