#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	
	printf("Enter a string to reverse: ");
	gets(str);
	str_reverse(str);

	return 0;
}

// function to reverse a string
void str_reverse(char str[])
{
	char reversed[50];
	
	int len = strlen(str);

	for(int i=len-1,j=0; i >= 0; i--,j++)
	{
		reversed[j] = str[i];
	}
	printf("The reversed string is %s",reversed);
}
