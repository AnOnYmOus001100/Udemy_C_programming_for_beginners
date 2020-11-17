#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *fp = NULL;
	fpos_t position;
	
	fp = fopen("file.txt","w+");
	fgetpos(fp, &position);
	fputs("Hello, World!", fp);
	
	fsetpos(fp, &position);
	fputs("This is going to override previous content",fp);
	fclose(fp);
	
	return(0);
}
