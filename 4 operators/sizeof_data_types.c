//prints out the size of different data types in C

#include<stdio.h>

int main()

{
	printf ("Size of int: %zd,\nchar: %zd,\nlong: %zd,\nlong long: %zd,\ndouble: %zd,\nlong double: %zd\n",sizeof(int),sizeof(char),sizeof(long),sizeof(long long),sizeof(double), sizeof(long double));
	
	return 0;
}
