#include <stdio.h>

//prints all of Leap years  from 1000 to 2000
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++) 
	{
		//principles for judge one year whether is leap year or not
		//1. Divided by 4 with on remainder , Divide by 100 with reminder (能被4整除并且不能被100整除是闰年)
		//2.Divided by 400 with on remainder （能被400 整除的是闰年）
	
		if (year % 4 == 0 && year % 100 != 0) 
		{
			printf("%d ",year);
			count++;
		}
		else if (year%400 == 0) 
		{
			printf("%d ", year);
			count++;
		}

	}
	printf("\n%d\n", count);
	return 0;
}