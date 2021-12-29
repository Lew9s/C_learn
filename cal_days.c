#include <stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
int days(struct Date date)
{
	int num = 0;
	int two = 0;
	if (date.year % 4 == 0)
	{
		if (date.year % 100 != 0)
		{
			two = 29;
		}
		else
		{
			two = 28;
		}
		if (date.year % 400 == 0)
		{
			two = 29;
		}
	}
	if (date.year % 400 == 0)
	{
		two = 29;
	}
	
	switch (date.month)
	{
	case 1: num = 0; break;
	case 2:	num = 31; break;
	case 3: num = 31 + two; break;
	case 4: num = 31+31 + two; break;
	case 5: num = 30+ 31 + 31 + two; break;
	case 6: num = 31+ 30 + 31 + 31 + two; break;
	case 7: num = 30+ 31 + 30 + 31 + 31 + two; break;
	case 8: num = 31+ 30 + 31 + 30 + 31 + 31 + two; break;
	case 9: num = 31+ 31 + 30 + 31 + 30 + 31 + 31 + two; break;
	case 10:num = 30+ 31 + 31 + 30 + 31 + 30 + 31 + 31 + two; break;
	case 11: num = 31+ 30 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + two; break;
	case 12: num = 30+ 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 31 + two; break;
	}
	
	return num + date.day;
}

int main()
{
	struct Date a;
	scanf("%d %d %d", &a.year, &a.month, &a.day);
	printf("%d", days(a));
	return 0;
}
