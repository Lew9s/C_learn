#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n",strerror(errno)); 
	 } 
	 else
	 {
	 	//����ʹ�ÿռ�
		int i = 0;
		for(i=0;i<10;i++)
		{
			*(p+i)=i;
		} 
		for(i=0;i<10;i++)
		{
			printf("%d ",*(p+i));
		}   
	 }
	 //����̬����Ŀռ䲻��ʹ�õ�ʱ��
	 //��Ӧ�û�������ϵͳ
	 free(p);
	 p = NULL; 
	 return 0;
}
