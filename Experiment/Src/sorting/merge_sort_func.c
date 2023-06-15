//#include"../Hdr/header.h"
#include<stdio.h>
#define SIZE 30
int merge_divide (int arr [ ], int start, int end);
int merge_all ( int arr [], int start, int mid, int end);
int copy_temp ( int arr [] ,int size); 
int temp [ SIZE];
int main(void) 
{
	int size, i, start, end;
	printf("Enter the size of elements \n");
	scanf("%d", &size);
	int arr[SIZE];
	printf("Enter the elements of array: \n");
	for ( i = 0; i < size; i++) {
		scanf ("%d", &arr[i]);
	}
	start = 0;
	end = size-1;
	merge_divide (arr, start, end);
	//copy_temp ( arr,size ); 
	return 0;
	
}

int merge_divide (int arr [  ], int start, int end)
{
	int mid;
	if( start < end) {
		mid = ( start + end ) / 2 ;
		merge_divide (arr, start, mid);
		merge_divide (arr, mid + 1, end);
		merge_all (arr, start, mid, end);
	}
	return 0;
}

int merge_all (int arr [], int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;
	while ( i <= mid &&  j <= end) {
		if ( arr [ i ] <= arr [ j ]) {
			temp [ k ] = arr [ i ];
			i++;
		} else {
			temp [ k ] = arr [ j ];
			j++;
		}
		k++;
	}
	if ( i > mid ) {
		while ( j <= end) {
			temp [ k ] = arr [ j ];
			j++;
			k++;
		}
	} else {
		while ( i <= mid) {
			temp [ k ] = arr [ i ];
			i++;
			k++;
		}
	}
	for ( k = start ; k <= end; k++) 	{
		arr [ k ] = temp [ k ];
	}
	return 0;
}	

int copy_temp (int arr [], int size ) 
{	
	int d;
	printf("After merge sort:\n");
	for ( d = 0; d < size; d++) 	{
		printf ("%d\n", arr[ d ]);
	}
	printf("!!!!!!!!!!!!!!!!:\n");
	return 0;
}
