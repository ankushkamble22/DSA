#include<stdio.h>
int binary ( int *ptr, int search, int n); 
int main (void) 
{
	register int i;
	int n, search, store;
	printf ("Enter the number of elements: ");
	scanf ("%d", &n);
	int *arr [n];
	printf ("Enter the element to be searched: ");
	scanf ("%d", &search);
	printf ("Enter the elements in array: \n");
	for ( i = 0; i < n; i++) {  
		scanf ("%d", *arr);
		arr+i;
	}
	store = binary ( arr, search, n);
	printf("\n");
	if ( store == 0) {
		printf(" %d is not present in the array\n", search);
	} else {
		printf(" %d is present at %d position\n", search, store);
	}
	return 0;
}
int binary ( int *ptr, int search, int n) {
	int 
	}
	return 0;
}
	
