#include<stdio.h>
#include<stdlib.h>

int main()
{
		FILE *fp;
		char ch;
		char filename[30];
		char *pf = filename;//char *型指针变量pf,pf指向字符串filename

		printf("请输入要保存的文件名:");
		//scanf("%s",filename);
		fgets(pf,1024,stdin);
		
		//消化回车符号
		getchar();

		//打开文件
		//if((fp = fopen(filename,"w")) == NULL)
		if((fp = fopen(pf,"w")) == NULL)
		{
			printf("打开文件失败\n");
			exit(0);
		}

		printf("请输入存入文件的字符,并以#结束:\n");
	
		//接受键盘输入的一个字符
		ch = getchar();
		while(ch != '#')
		{
				//将字符写入到磁盘文件
				fputc(ch,fp);
				//输出到屏幕
				putchar(ch);

				//继续输入字符
				ch = getchar();
		}

		//关闭文件流
		fclose(fp);

		//输出换行
		putchar('\n');
		//putchar(10);
		return 0;
}
