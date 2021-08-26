#include<stdio.h>
int check_sys()
{
	int a=1;
	char*p=(char*)&a;
	if(*p==1)
	    return 1;
	else
	    return 0;
}

int main()
{
	//写一段代码告诉我们当前机器的字节序
	//返回1，小端
	//返回0，大端
	int ret=check_sys(); 
	if (ret==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
