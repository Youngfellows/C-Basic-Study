#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

void sort(char *name[],int size);
void print(char *name[],int size);

int main()
{
		//定义指针数组
		char *name[] = {
		"Follow me",
		"BASIC",
		"Great Wall",
		"FORTRAN",
		"Computer design"
		};

		sort(name,SIZE);
		print(name,SIZE);

		return 0;
}

void sort(char *name[],int size)
{
	char *temp;
	int i,j,min;
	for(i=0;i<size-1;i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(strcmp(name[min],name[j])>0)
			{
					min = j;
			}
		}

		if(min != i)
		{
			temp = name[i];
			name[i] = name[min];
			name[min] = temp;
		}
	}

}

void print(char *name[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%s\n",name[i]);
	}
}
