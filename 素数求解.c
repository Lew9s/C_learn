#include<stdio.h>             //#include<math.h>
int main()
{
	int i=0;
	int count=0; 
	for(i=100;i<=200;i++)
	{
		//素数判断
		//试除法(优化方法：开平方；删去偶数)
		//产生2到i-1比较 
		int j=0;
		for(j=2;j<i;j++)      //for (j=2;j<sqrt(i);j++) 
		{
			if(i%j ==0)
			{
				break;
			}
		 } 
		 if(j==i)            //if(j==sqrt(i)
		 {
		 	 count++;
			 printf("%d",i);
		 }
	}
	printf("\ncount=%d\n",count);
	return 0;
}
