#include <stdio.h>

int main()
{
	// file pointer of type FILE and varables lines set to 0 and c for parsing characters
	FILE *fp;
	int lines = 0, c;
	
	// opening file in read mode
	fp = fopen("file.txt","r");
	
	// if fp is NULL then cannot open file
	if(fp == NULL)
	{
		printf("Unable to open file");
		return -1;
	}
	
	// parsing through the characters in file
	while((c = fgetc(fp)) != EOF)
	{
		if(c == '\n')
			lines++;
	}
	
	// close file
	fclose(fp);
	// setting file pointer to NULL
	fp = NULL;
		
	// print result	
	printf("The number of lines are: %d",lines);
	
	return 0;
}
