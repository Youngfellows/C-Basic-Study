#include<stdio.h>
#include<stdlib.h>

#define SIZE 128

int main()
{
		FILE *in,*out;
		char ch;
		char infile[SIZE];
		char outfile[SIZE];
		char *pin,*pout;
		pin = infile;
		pout = outfile;

		printf("请输入要复制文件的名字:");
		//scanf("%s",infile);
		scanf("%s",pin);

		
		printf("输出要保存文件的名字:");
		getchar();//消耗回车
		//scanf("%s",outfile);
		fgets(pout,SIZE,stdin);
		

		//打开文件
		//if((in = fopen(infile,"r")) == NULL)
		if((in = fopen(pin,"r")) == NULL)
		{
			printf("打开文件错误!!\n");
			exit(0);
		}

		if((out = fopen(outfile,"w")) == NULL)
		{
			printf("打开文件错误!!!\n");
			exit(0);
		}

		//从输入文件读入一个字符
		ch = fgetc(in);
		//循环写入到输出文件
		while(!feof(in))
		{
			fputc(ch,out);//写入文件
			putchar(ch);//输出到屏幕
			ch = fgetc(in);//继续读
		}

		//输出换行
		putchar('\n');
		//putchar(10);

		//关闭流
		fclose(in);
		fclose(out);
		return 0;
}
