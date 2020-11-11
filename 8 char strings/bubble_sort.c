/* Program to implement bubble sort */

#include<stdio.h>
#include<string.h>

int main()
{	
	int arr[50], size, i;
	
	printf("\nHow many elements: ");
	scanf("%d",&size);
	printf("Enter array elements to sort using bubble sort: ");
	for(i = 0; i < size; i++)
		scanf("%d",&arr[i]);
	
	// calling bubble sort function
	bubble_sort(arr,size);

	printf("\nThe sorted array is: \n");
	for(i = 0; i < size; i++)
		printf(" %d",arr[i]);

	return 0;
}

//swap function
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// bubble sort function sorts array
void bubble_sort(int arr[], int n)
{
	int i, j; 
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}
