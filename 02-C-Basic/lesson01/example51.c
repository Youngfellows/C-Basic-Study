#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
		char str[] = "www.huawei.com,i love you!!!!";
		char *p;
		p = str;
		memmove(p,p+11,strlen(p)-11);//从第11个字符开始拷贝字符串
		str[strlen(p)-11] = '\0';
		fputs(p,stdout);
		return 0;
}
