#include<stdio.h>

int main()
{
	char str[50], str1[50], str2[50], result[100];


	printf("Enter the string to count characters: ");
	gets(str);
	
	printf("Number of characaters in the string is %d",count_char(str));

	printf("\nEnter first string: ");
	gets(str1);
	printf("\nEnter a second string: ");
	gets(str2);
	
	str_concat(str1,str2,result);

	return 0;
}

// function to count character in  a strng
int count_char(char str[])
{
	int count_char = 0;

	while(str[count_char] != '\0')
	{
		count_char++;
	}

	return count_char;
}

// function to concatenate two strings
void str_concat(char str1[], char str2[], char result[])
{
	int i = 0,j = 0;
	while(str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}

	while(str2[j] != '\0')
	{
		result[i+j] = str2[j];
		j++;
	}

	printf("\nThe resultant string is %s",result);
}
