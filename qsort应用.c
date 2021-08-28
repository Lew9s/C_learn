#include<stdio.h>
/*void bubble_sort(int arr[],int sz)//冒泡排序 
{
	int i =0;
	for(i=0;i<sz-1;i++)
	{
		int j =0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}*/

/*void qsort(void *base,    //目标数组的起始位置 
             size_t num,    //数组元素 
		     size_t width,  //元素大小（字节） 
		     int(*cmp)(const void *e1, const void *e2)
		     //比较方法的函数，e1，e2为需要比较的两个元素的地址
			   要求e1小于e2返回<0,等于返回0，大于返回>0 
		   )*/

//void* 类型的指针 可以接受任意类型的地址
//void* 类型的指针 不能进行解引用操作
//void* 类型的指针 不能进行+-整数的操作 

int cmp_int(const void *e1,const void *e2)
{
	//比较两个整形值的大小 
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void *e1,const void *e2)
{
	//比较两个浮点型数据大小
	if( *(float*)e1 == *(float*)e2 )
	    return 0;
	else if(*(float*)e1 < *(float*)e2)
	    return -1;
	else
	    return 1;
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_struct(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i =0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}

void test2()
{
	float f[]={9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
	int sz = sizeof(f)/sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i =0;
	for(i=0;i<sz;i++)
	{
		printf("%f ",f[i]);
	}
}

void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz =sizeof(s)/sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct);
	
}

int main()
{
	test1();//qsort对整型数组的排序 
	test2();//qsort对浮点型数组的排序 
	test3();//qsort对结构体类型数组排序 
	return 0;
}
