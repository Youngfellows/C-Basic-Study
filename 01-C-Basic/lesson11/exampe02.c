#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 128//缓冲区大小

int main()
{
    //字母大小写转换
    printf("请输入一个字符串:\n");
    //char array[] = "Linux c is very good!";//字符串
    char array[SIZE];
    char *p;//char *指针变量p,pr
    int i = 0;
    p = array;//p指向array字符串

    fgets(p,SIZE,stdin);//输入字符串

    //fputs(p,stdout);//输出字符串
    printf("字符串大小%ld\n%s\n",sizeof(array),p);

    // for(i=0;i<sizeof(array);i++)
    // {
    //     //array[i] = toupper(array[i]);//转换为大写
    //     *(p+i) = toupper(*(p+i));
    // }

    while(*(p+i)!='\0')
    {
        *(p+i) = toupper(*(p+i));//转换为大写
        i++;
    }

    printf("%s\n",p);//输入转换后的字母

    // for(i=0;i<sizeof(array);i++)
    // {
    //     //array[i] = tolower(array[i]);//转换为小写
    //     *(p+i) = tolower(*(p+i));
    // }

    i = 0;
    while(*(p+i)!='\0')
    {
        *(p+i) = tolower(*(p+i));//转换为小写
        i++;
    }

    printf("%s\n",p);//输入转换后的字母

    return 0;
}