#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	//向内存申请10个整型的空间
	int* p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		//打印错误原因
		printf("%s\n",strerror(errno)); 
	 } 
	 else
	 {
	 	//正常使用空间
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
	 return 0;
}
