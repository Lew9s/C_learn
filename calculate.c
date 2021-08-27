#include<stdio.h>
void menu()
{
	printf("******************\n");
	printf("***1.add  2.sub***\n");
	printf("***3.mul  4.div***\n");
	printf("***   0.exit   ***\n");
	printf("******************\n");
}

int Add(int x,int y)
{
	return x+y;
}

int Sub(int x,int y)
{
	return x-y;
}

int Mul(int x,int y)
{
	return x*y;
}

int Div(int x,int y)
{
	return x/y;
}

int main()
{
	int input = 0;
	int x=0;
	int y=0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		printf("请输入两个操作数:>");
		scanf("%d%d",&x,&y);
		switch(input)
		{
			case 1:
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("%d\n",Sub(x,y));
				break;
			case 3:
				printf("%d\n",Mul(x,y));
				break;
			case 4:
				printf("%d\n",Div(x,y));
				break;
			case 0:
			    printf("退出\n");
				break;
			default:
			    printf("错误\n");
				break;	
		}
	}while(input);
}
