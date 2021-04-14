#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COLUMN 10
#define SIZE 3
#define LEN 10

int main()
{
	//读取一个文件
	FILE *fp;
	int i;
	char str[ROW][COLUMN];
	if((fp = fopen("./string.dat","r")) == NULL)
	{
		printf("打开文件错误!\n");
		exit(0);
	}

	i = 0;
	while(fgets(str[i],10,fp) != NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(fp);

	return 0;
}
