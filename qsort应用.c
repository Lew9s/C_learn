#include<stdio.h>
/*void bubble_sort(int arr[],int sz)//ð������ 
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

/*void qsort(void *base,    //Ŀ���������ʼλ�� 
             size_t num,    //����Ԫ�� 
		     size_t width,  //Ԫ�ش�С���ֽڣ� 
		     int(*cmp)(const void *e1, const void *e2)
		     //�ȽϷ����ĺ�����e1��e2Ϊ��Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
			   Ҫ��e1С��e2����<0,���ڷ���0�����ڷ���>0 
		   )*/

//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//void* ���͵�ָ�� ���ܽ��н����ò���
//void* ���͵�ָ�� ���ܽ���+-�����Ĳ��� 

int cmp_int(const void *e1,const void *e2)
{
	//�Ƚ���������ֵ�Ĵ�С 
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void *e1,const void *e2)
{
	//�Ƚ��������������ݴ�С
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
	test1();//qsort��������������� 
	test2();//qsort�Ը�������������� 
	test3();//qsort�Խṹ�������������� 
	return 0;
}
