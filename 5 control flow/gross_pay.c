/* To calculate the gross salary per week, given
* basic pay is 12$/hr
* Overtime (excess of 40 hours) = time and half
* Tax rate:
	* 15% of the first $300
	* 20% of the next $150
	* 25% of the rest
* Input: Numbers of hours
*/

#include<stdio.h>

int main()
{
	int hrs_worked;
	float  basic_pay = 12.00,  gross_pay, overtime = 0.0, net_pay, tax;

	//input prompt for number of hours worked
	printf ("Enter the numbers of hours worked: ");
	scanf ("%d",&hrs_worked);

	//gross pay is the total pay without any taxes deducted
	if (hrs_worked > 40)
		overtime = hrs_worked - 40;
	//calculating gross pay
	gross_pay = hrs_worked*basic_pay + overtime*(basic_pay/2);

	//tax calculation
	// for first $300
	if (gross_pay <= 300)
		tax = 0.15*gross_pay;
	// for next $150
	else if (gross_pay > 300 && gross_pay <= 450)
			{
				tax = 300*0.15;
				tax = tax + (gross_pay-300)*0.20;
			}
	// for rest amount
	else if (gross_pay > 450)
		{
			tax = 300*0.15;
			tax = tax + 150*0.20;
			tax = tax + (gross_pay-450)*0.25;
		}

	//calculating net pay
	net_pay = gross_pay - tax;
	
	//printing the details
	printf ("\nThe gross pay is $%f\ntaxes are $%f and \nnet pay is $%f\n", gross_pay,tax,net_pay);

	return 0;
}
