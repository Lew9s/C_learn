#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i=0;
	for (i=0;i<sz-1;i++)//�������ڸ���-1 
	{
		int flag=1;//������һ��Ҫ����������Ѿ����� 
		//ÿһ��ð������
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//������������ݲ���ȫ���� 
			}
		 } 
		 if (flag==1)
		 {
		 	break;
		 }
	}
}

int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	//��arr�ų����� 
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
