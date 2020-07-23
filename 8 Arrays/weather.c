/* To calculate the average yearly rainfall  from given monthly rainfall data of 5 years.*/

#include<stdio.h>
#include<stdlib.h>

#define MONTHS 12
#define YEARS 5

int main()
{

	// initiallise rainfall data
	float rain[YEARS][MONTHS] = 
	{
		{4.3,4.1,4.2,3.8,3.2,3.5,5.2,6.3,6.1,3.6,3.7,2.8},
		{3.7,4.2,5.5,6.1,4.9,5.3,2.9,3.2,6.2,3.9,4.4,4.6},
		{5.6,4.2,3.7,4.1,1.8,2.7,3.6,5.2,3.8,4.6,5.3,2.8},
		{3.7,4.6,5.2,6.3,2.9,3.4,5.7,4.5,6.1,3.7,5.1,2.6},
		{4.5,4.3,5.1,3.9,4.3,5.2,6.3,2.7,3.6,2.8,4.6,3.6},
	};

	int year, month;
	float total, subtotal;

	printf (" YEAR\t\tRAINFALL  (inches)\n\n");

	for (year = 0; year < YEARS; year++)
	{
		for (month = 0; month < MONTHS; month++);
		{
			subtotal += rain[year][month];
		}
		printf ("%5d \t\t%15.1f\n", 2010 + year, subtotal);
		total += subtotal;
	}

	printf ("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
		
	return 0;
}
