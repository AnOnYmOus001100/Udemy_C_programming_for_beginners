/* use pointer to print the address of pointer, value of pointer and value at the address the pointer is pointing to. */

#include <stdio.h>

int main()
{
	// initializing val to 5 and *p to NULL
	int val = 5, *p=NULL;

	// assigning the address of val to p
	p = &val;

	printf("The address of pointer is %p\n",&p);
	printf("The value of pointer is %p\n",p);
	printf("The value at the address the pointer is pointing is %d\n",*p);
	return 0;
}
