/* find the length of string using pointer arithmatic */

#include <stdio.h>

int len(char const *start)
{
	// declaring end pointer
	char const *end;
	// assigning end pointer to start pointer
	end = start;
	// iterating through the string
	while(*end)
		end++;

	// subtracting start pointer from end pointer to find length
	return end-start;
}

int main()
{
	char str[] = "Hello";

	printf("The length of string is %d\n",len(&str));
		
	return 0;
}
