#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		void menu();
		void game();
		menu();
		printf("Choose your number:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("Good Bye.\n");
				break;
			default:
				printf("Please enter the correct number as prompted.\n");
				break;
		}
	}while(input); 
	return 0;
} 
void menu()
{
	printf("*******************\n");
	printf("******1.Play*******\n");
	printf("******0.Exit*******\n");
	printf("*******************\n");
}

void game()
{
	//1.���������
	int ret = 0;
	int guess = 0;
	//��ʱ���������������� 
	ret=rand()%100+1;//����1~100֮������� 
	//2.������ 
	while(1)
	{
		printf("Please input a number between 0 and 100:\n");
		scanf("%d",&guess);
		if (guess>ret)
		{
			printf("Too large, please try again.\n");
		}
		else if(guess<ret)
		{
			printf("Too small, please try again.\n");
		}
		else if(guess=ret)
		{
			printf("Bingo.\n");
			break;
		}
	}
}
