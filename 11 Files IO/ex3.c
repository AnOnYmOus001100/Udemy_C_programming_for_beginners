#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *fp;
	int year;
	char str1[10], str2[10], str3[10];
	
	fp = fopen("file.txt","w+");	
	if(fp == NULL) {
		fputs("Hello how are you",fp);
		rewind(fp);
	}
	
	fscanf(fp, "%s %s %s %d",str1,str2,str3,&year);
	
	printf("Read string1 |%s|\n",str1);
	printf("Read string2 |%s|\n",str2);
	printf("Read string3 |%s|\n",str3);
	printf("Read Integer |%d|\n",year);
	
	fclose(fp);
	
	return(0);
} // end of main
