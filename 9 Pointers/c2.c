/* use pointer to square a number by itself */

#include <stdio.h>

// function to square
void square(int *p)
{
	*p = (*p * *p);
}

int main()
{
	int num = 5;
	
	// calling square function with address of num
	square(&num);
	printf("%d\n",num);

	return 0;	
}
