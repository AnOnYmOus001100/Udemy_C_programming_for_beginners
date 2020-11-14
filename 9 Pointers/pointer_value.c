#include<stdio.h>

int main()
{
	int number = 10, *pnumber = NULL; // a pointer
	pnumber = &number;

	printf("numbers value is: %d \n",number);
	printf("numbers address is: %p \n\n",&number);

	printf("pnumber's value is: %p \n",pnumber);
	printf("pnumber's address is: %p \n",(void *)&pnumber);
	printf("pnumber's size is: %zd bytes \n",sizeof(pnumber));
	printf("numbers value, deferencing pnumber: %d \n",*pnumber);

	return 0;
}

