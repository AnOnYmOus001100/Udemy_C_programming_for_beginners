// testing goto in C

#include<stdio.h>

int main()
{
	int i = 1;
	start:
		printf (" %d\n",i);
		
		if (i == 5)
			goto end;
		i++;
	goto start;
	end:
	return 0;
}
