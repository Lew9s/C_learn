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
	//дһ�δ���������ǵ�ǰ�������ֽ���
	//����1��С��
	//����0�����
	int ret=check_sys(); 
	if (ret==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
