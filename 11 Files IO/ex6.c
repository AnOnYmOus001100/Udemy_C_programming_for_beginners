#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *fp;
	
	fp = fopen("file.txt","w+");
	
	if(!fp)
		fprintf(fp,"%s %s %s %s %d","Hello","my","number","is",555);
	
	fclose(fp);
	return(0);
}
