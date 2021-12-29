#include<stdio.h>
void main() 
{
    void move(int *a, int n, int m);
    int a[15];
    int n, m, i;
    scanf("%d %d", &n,&m);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    move(a, n, m);
    printf("%d",a[0]);
    for (i = 1; i < n; i++) 
	{
        printf(" %d", a[i]);
    }

}

void move(int *a, int n, int m) 
{
    int b[15]={0},i;
    for(i=0;i<n;i++)
    {
    	*(b+i)=*(a+i);
	}
    for(i=0;i<n-m;i++)
    {
    	*(a+m+i)=*(b+i);
	}
	for(i=0;i<m;i++)
	{
		*(a+i)=*(b+n-m+i);
	}
}
    
    

