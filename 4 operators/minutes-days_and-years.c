#include<stdio.h>

int main()
{
	int minutes;
	double minutes_in_year, years;
	int  days;

	printf ("Enter minutes: ");
	scanf ("%d",&minutes);

	//number of minutes in a year
	minutes_in_year = 60 * 24 * 365;

	//calculating years
	years = minutes/minutes_in_year;

	//calculating days
	days =(int) minutes/(24*60);

	printf ("\n%d minutes equal %lf years and %d days.\n",minutes,years,days);

	return 0;
}
