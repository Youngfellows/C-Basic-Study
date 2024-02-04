#include<stdio.h>
#include<stdlib.h>

#define SIZE 10//数组大小

int main()
{
    int *p;
    int i,sum;

    //分配内存空间
    p = (int *)malloc(SIZE*sizeof(int));

    if(p==NULL)
    {
        printf("malloc error\n");
    }else
    {
        sum = 0;
        for(i=0;i<SIZE;i++)
        {
            *(p+i)=i;
            sum += *(p+i);
        }

        free(p);//释放内存
    }

    printf("sum = %d\n",sum);

    return 0;
}

