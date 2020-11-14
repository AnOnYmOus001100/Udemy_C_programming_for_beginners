#include<stdio.h>

void copyString(char *to, char *from)
{
	while(*from)	// the null character is equal to the value 0, so will jump out then
	  *to++ = *from++;

	*to = '\0';
}

int main()
{

	char string1[] = "A string to be copied.";
	char string2[50];

	copyString(string2, string1);
	printf("%s\n",string2);

	return 0;
)
