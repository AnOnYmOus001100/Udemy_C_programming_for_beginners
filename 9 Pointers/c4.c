/* use dynamic memory allocation to allocate memory on input string and print it */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p_str = NULL;
	int limit;
	
	printf("Enter limit of string: \n");
	scanf("%d",&limit);
	
	p_str = (char *) malloc(limit * sizeof(char));
	
	if(p_str != NULL)
	{
		printf("Enter some text: \n");
		scanf(" ");	
		gets(p_str);
		
		printf("The string is: %s\n",p_str);
	}
	
	free(p_str);
	p_str = NULL;
	return 0;
}
