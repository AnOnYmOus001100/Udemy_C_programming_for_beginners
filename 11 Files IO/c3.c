#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = NULL;
	int  i=0, cnt = 0;
	
	// opening file
	fp = fopen("file.txt","r");
	
	if(fp == NULL)
		return -1;
		
	
	// move the file pointer to point to the end of file
	fseek(fp, 0, SEEK_END);
	
	// assign the current position of file pointer to cnt
	cnt = ftell(fp);
	
	while(i < cnt)
	{
		i++;
		fseek(fp, -i, SEEK_END);
		printf("%c",fgetc(fp));
	}
	
	printf("\n");	
		
	// close file
	fclose(fp);
	fp = NULL;

	return 0;
}
