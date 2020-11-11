/* 
	Author: AnOnYmOus001100
	Date: 26/07/2020

	Description: write three functions
	
	* gcd - find gcd of two non-negative integer values and return result
 	  - takes two ints as parameters
	
	* absolute value function - find absolute value of a number 
	  - float parameter, return float

	* square root function - calculate square root of a function
	  - one int parameter
	  - if negative argument is passed then a message is displayed and return -1
	  - should use absoluteValue

*/

#include<stdio.h>
#include<math.h>

int gcd(int n1, int n2)
{
	int gcd;

	// finding the gcd
	for (int i = 1; i <= n1 && i <= n2; ++i)
	{
		if (n1%i == 0 && n2%i == 0)
			gcd = i;
	}	

	return gcd;
}

float absoluteValue(float n)
{
	if (n < 0)
		n = -n;
	
	return n;
}

int squareroot(int n)
{
	int srt;

	if (n < 0)
	{
		printf ("\nSquare of negative is not possible.");
		return -1;
	}

	srt = pow(absoluteValue(n),0.5);

	return srt;
}

int main()
{

	int ch, num,  num1, num2, res;
	float fnum, fres;

	printf ("Enter your choice: \n1. Find gcd.\n2. Find Absolute value\n3. Find squareroot. \n");
	scanf ("%d",&ch);

	if (ch == 1)
	{
		printf ("\nEnter two non-negative integers to find gcd: ");
		scanf("%d %d",&num1,&num2);
		
		res = gcd(num1,num2);
		printf ("\nThe gcd of %d and %d is %d",num1,num2,res);
	}

	else if (ch == 2)
	{
		printf ("\nEnter a number to find absolute value: ");
		scanf ("%f",&fnum);

		fres = absoluteValue(fnum);
		printf ("\nThe absolute value of %f is %f",fnum,fres);
	}	

	else if (ch == 3)
	{
		printf ("\nEnter a number to find square root: ");
		scanf ("%d",&num);

		res = squareroot(num);
		if (res == -1)
			printf ("\nNegative number entered.");
		else
			printf ("\nThe square root of %d is %d",num,res);
	}

	else
		printf ("\nInvalid choice.");

	
	return 0;
}
