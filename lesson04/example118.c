#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COLUMN 1024
#define SIZE 3
#define LEN 1024

int main()
{
	//读取一个文件
	FILE *fp;
	int i;
	char str[ROW][COLUMN];
	char *fileName = "./string.dat";
	if((fp = fopen(fileName,"r")) == NULL)
	{
		printf("打开文件错误!\n");
		exit(0);
	}

	i = 0;
	while(fgets(str[i],LEN,fp) != NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);

	return 0;
}
