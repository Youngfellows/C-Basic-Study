#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    //字母大小写转换
    char array[] = "Linux c is very good!";//字符串
    char *p;
    int i;
    p = array;
    printf("字符串大小%ld\n%s\n",sizeof(array),array);

    for(i=0;i<sizeof(array);i++)
    {
        array[i] = toupper(array[i]);//转换为大写
    }

    //printf("%s\n",array);//输入转换后的字母
    fputs(p,stdout);

    for(i=0;i<sizeof(array);i++)
    {
        array[i] = tolower(array[i]);//转换为小写
    }
    //printf("%s\n",array);//输入转换后的字母
    fputs(p,stdout);

    return 0;
}