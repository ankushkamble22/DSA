#include<stdio.h>
int main (void) 
{
	register int i;
	int n, arr [ n ], search, low = 0, mid = 0, high;
	printf ("Enter the number of elements: ");
	scanf ("%d", &n);
	high = n - 1;
	printf ("Enter the elements in array: \n");
	for ( i = 0; i < n; i++) {  
		scanf ("%d", &arr [ i ]);
	}
	printf ("Enter the element to be searched: ");
	scanf ("%d", &search);
	//for ( i = 0; i < n; i++) {
	while ( low < high) {
		mid = ( low + high ) / 2;
		if ( search == arr [ mid ]) {
			printf(" %d is present at %d index\n", search, mid);
			break;
		}
		if ( search > arr [ mid ]) {
			 low = mid + 1;
		} else {
 //( search < arr [ mid ]) {
			 high = mid - 1;
		}
	}
	printf(" %d is present at %d index\n", search, mid);
	return 0;
}
	
