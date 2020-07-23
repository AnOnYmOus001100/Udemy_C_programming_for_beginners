/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: To find all the prime numbers from 3 to 100, store them in an array and print them.
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
	// variable declaration and intialising primes with 0
	int i , j, p, primes[50] = {0}, pos = 2;
	bool ifPrime;	// ifPrime is a boolean variable

	
	// first two prime numbers
	primes[0] = 2;
	primes[1] = 3;

	// checking for prime numbers and storing in primes array
	// skipping even numbers and starting loop from 5
	for (i = 5; i <= 100; i += 2)
	 {
		ifPrime = true;

		for (j = 1; ifPrime && i/primes[j] >= primes[j]; ++j)
			if (i%primes[j] == 0 )
			  ifPrime == false;

		if (ifPrime == true)
		{
		 primes[pos] = i;
		 ++pos;
		}
	 }	 

	// printing values of primes array
	for (int k = 0; k < pos; ++k)
		printf (" %d ",primes[k]);

return 0;
}
