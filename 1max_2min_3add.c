#include<stdio.h>
int main()
{    int fun(int x,int y,int(*p)(int,int));   //fun函数声明 
     int max(int,int);                        //max函数声明 
     int min(int,int);                        //min函数声明   
     int add(int,int);                        //add函数声明 
     int a=34,b=-21,n;
     printf("please choose 1,2or3");
     scanf("%d",&n);                          //输入1,2或3之一
	 if (n==1) fun(a,b,max);
	 else if (n==2) fun(a,b,min);
	 else if (n==3) fun(a,b,add);
	 return 0;
 } 
 int fun(int x,int y,int(*p)(int,int))
 {    int result;
      result=(*p)(x,y);
      printf("%d\n",result);   //输出结果 
 }
 int max(int x,int y)
 {    int z;
      if(x>y) z=x;
      else z=y;
           printf("max=");
           return (z);        //返回值是两数中的大者 
 }
 
 int min(int x,int y)
 {    int z;
      if(x<y) z=x;
      else z=y;
      printf("min=");
      return(z);           //返回值是两数中的小者 
 }
 
 int add(int x,int y)
 {    int z;
      z=x+y;
      printf("sum=");
      return(z);           //返回值是两数之和 
 }
