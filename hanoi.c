#include<stdio.h>
int main()
{
	void hanoi(int n,char one,char two,char three);
	//��hanoi����������
	int m;
	printf("input the number of disks:");
	scanf("%d",&m);
	printf("The step to move %d disks:\n",m);
	hanoi(m,'A','B','C');
}


void hanoi(int n,char one,char two,char three)  //����hanoi����
//��n���̴�one������two�����Ƶ�three��
{    void move(char x,char y);  //��move����������
     if (n==1)
	     move(one,three);
	 else 
	 {    hanoi(n-1,one,three,two);
	      move(one,three);
	      hanoi(n-1,two,one,three);
	  } 
 } 
 void move(char x,char y)   //����move���� 
 {    printf("%c to %c\n",x,y);} 
