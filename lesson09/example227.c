#include<stdio.h>
#include<string.h>

#define SIZE 128

void my_strcat1();
void my_strcat2();

int main()
{
    my_strcat1();
    my_strcat2();
    return 0;
}

/**
 * @brief 字符串拼接
 * 
 */
void my_strcat1(){
   char destination[SIZE]={"I love"};
   char *blank = " ", *c = "www.dotcpp.com";
   strcat(destination, blank);
   strcat(destination, c);
   printf("%s\n", destination);
}

/**
 * @brief 字符串拼接
 * 
 */
void my_strcat2(){
    char str[SIZE];
    strcpy(str,"these ");
    strcat(str,"strings ");
    strcat(str,"are ");
    strcat(str,"concatenated.");
    puts(str);
}