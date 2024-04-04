#include<stdio.h>
main()
{
	int year=2020;
	
	while(year<=2040)
	{
		if(year%4==0)
		{
			printf("%d\n",year);
		}
		year++;
	}
}