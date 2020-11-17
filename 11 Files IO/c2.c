#include <stdio.h>

int main()
{
	FILE *fp, *fp2;
	int c;
	
	
	// opening a file in read mode
	fp = fopen("file1.txt","r");
	
	// check if file pointer is NULL return -1 and print unable to open file
	if(fp == NULL)
	{
		printf("Unable to open file.");
		return -1;
	}
	
	// opening a file in write in write mode
	fp2 = fopen("temp.txt","w+");
	
	// check if file pointer is NULL return -1 and print unable to open file
	
	if(fp2 == NULL)
	{
		printf("Unable to open file2.");
		return -1;
	}
	
	
	// reading from file and writing to temp
	while((c = fgetc(fp)) != EOF)
	{
		// if c is lowercase then convert to uppercase by subtracting 32
		if(islower(c))
			c = c-32;
		
			fputc(c,fp2);
	}
	
		
	// closing files
	fclose(fp);
	fclose(fp2);
	
	// rename temporary file (temp.txt) to original file (file1.txt)
	rename("temp.txt","file1.txt");
	// remove temp file
	remove("temp.txt");
	

	
	// display file contents of file1.txt
	fp = fopen("file1.txt","r");
	
	// check if file pointer is NULL return -1 and print unable to open file
	
	if(fp == NULL)
	{
		printf("Unable to open file.");
		return -1;
	}
	
	// parsing the characters and printing to stdout
	while((c = fgetc(fp)) != EOF)
		printf("%c",c);

	fclose(fp);	
	
	return 0;
}
