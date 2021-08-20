#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i=0;
	for (i=0;i<sz-1;i++)//趟数等于个数-1 
	{
		int flag=1;//假设这一趟要排序的数据已经有序 
		//每一趟冒泡排序
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag=0;//本趟排序的数据不完全有序 
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
	//对arr排成升序 
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
