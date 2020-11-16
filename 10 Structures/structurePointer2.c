#include <stdio.h>
#include <stdlib.h>

// creating a structure of pointers
struct intPtrs
{
	int *p1;
	int *p2;
};


int main()
{
	struct intPtrs pointers;

	int i1 = 100, i2;

	// assigning p1 and p2 the address of i1 and i2 repectively
	pointers.p1 = &i1;
	pointers.p2 = &i2;
	// assigning p2 the value of -97
	*pointers.p2 = -97;
	
	printf("i1 = %i, *pointers.p1 = %i\n",i1, *pointers.p1);
	printf("i2 = %i, *pointers.p2 = %i\n",i2, *pointers.p2);
	
	return 0;
}
