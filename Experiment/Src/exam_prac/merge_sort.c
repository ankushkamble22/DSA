#include<stdio.h>
#define SIZE 20
int merge_divide ( int arr [ ], int start, int end );
int merge_all ( int arr	[ ], int start, int mid, int end );
int temp [ SIZE ];
int main ( void )
{
	int arr [ SIZE ];
	int i;
	int num;
	int start = 0;
	int end;
	printf("Enter the number of elements\n");
	scanf ("%d", &num );
	printf("Enter elements\n");
	for ( i = 0; i < num; i++ ) {
		scanf ("%d", &arr [ i ] );
	}
	end = num -1;
	merge_divide ( arr, start, end );
	printf("After sorting number of elements\n");
	for ( i = 0; i < num; i++ ) {
		printf ("%d\n", arr [ i ] );
	}
	return 0;
}

int merge_divide ( int arr [ ], int start, int end )
{
	int mid;
	if ( start < end ){
		mid = ( start + end ) / 2;
		merge_divide ( arr, start, mid );
		merge_divide ( arr, mid + 1, end );
		merge_all ( arr, start, mid, end );
	}
	return 0;
}


int merge_all ( int arr	[ ], int start, int mid, int end )
{
	int i = start;
	int j = mid + 1;
	int k = start;
	while ( i <= mid && j <= end ) {
		if ( arr [ i ] <= arr [ j ] ) {
			temp [ k ] = arr [ i ];
			i++;
		} else {
			temp [ k ] = arr [ j ];
			j++;
		}
		k++;
	}
	if ( i > mid ) {
		while ( j <= end ) {
			temp [ k ] = arr [ j ];
			j++;
			k++;
		}
	} else {
		while ( i <= end ) {
			temp [ k ] = arr [ i ];
			i++;
			k++;
		}
	}
	for ( k = start; k <= end; k++ ) {
		arr [ k ] = temp [ k ];
	}
	return 0;
}

	 


















