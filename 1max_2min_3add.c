#include<stdio.h>
int main()
{    int fun(int x,int y,int(*p)(int,int));   //fun�������� 
     int max(int,int);                        //max�������� 
     int min(int,int);                        //min��������   
     int add(int,int);                        //add�������� 
     int a=34,b=-21,n;
     printf("please choose 1,2or3");
     scanf("%d",&n);                          //����1,2��3֮һ
	 if (n==1) fun(a,b,max);
	 else if (n==2) fun(a,b,min);
	 else if (n==3) fun(a,b,add);
	 return 0;
 } 
 int fun(int x,int y,int(*p)(int,int))
 {    int result;
      result=(*p)(x,y);
      printf("%d\n",result);   //������ 
 }
 int max(int x,int y)
 {    int z;
      if(x>y) z=x;
      else z=y;
           printf("max=");
           return (z);        //����ֵ�������еĴ��� 
 }
 
 int min(int x,int y)
 {    int z;
      if(x<y) z=x;
      else z=y;
      printf("min=");
      return(z);           //����ֵ�������е�С�� 
 }
 
 int add(int x,int y)
 {    int z;
      z=x+y;
      printf("sum=");
      return(z);           //����ֵ������֮�� 
 }