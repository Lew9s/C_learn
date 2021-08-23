#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("%p\n",arr);//首元素地址 
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr);
	//数组名不代表首元素地址的情况 
	//1.&arr- &数组名不是首元素地址-数组名表示整个数组 - &数组名 取出的是整个数组的地址 
	//2.sizeof（arr）- sizeof（数组名） - 数组名表示整个数组 - sizeof（数组名）计算的是整个数组的大小 
	
	return 0;
}
