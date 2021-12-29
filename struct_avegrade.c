#include<stdio.h>
struct stu
{
    int sno;
    float score[3];
    float average;
};

int main()
{
	struct stu a[3];
	int i,j;
	float max;
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[j].sno);
	    for(i=0;i<3;i++)
	    {
		    scanf("%f",&a[j].score[i]);
	    }
	    a[j].average = (a[j].score[0]+a[j].score[1]+a[j].score[2])/3;
	}
	max=a[0].average;
	printf("%.2lf",a[0].average);
	for(i=1;i<3;i++)
	{
		printf(" %.2lf",a[i].average);
		if(max<a[i].average)
		{
			max=a[i].average;
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		if(max==a[i].average)
		{
			printf("%d",a[i].sno);
			break;
		}
	}
	return 0;
}
