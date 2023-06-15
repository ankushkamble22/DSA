#include<stdio.h>
#define SIZE 20
int swap ( int *start, int *end );
int quick_sort ( int arr [ ], int start, int end );
int position ( int arr [ ], int start, int end );
int main ( void )
{
	int arr [ SIZE ];
	int num;
	int start = 0;
	int end;
	int i;
	printf("Enter the number of elements\n");
	scanf ( "%d", &num );
	printf("Enter the elements\n");
	for ( i = 0; i < num; i++ ) {
		scanf ( "%d", &arr [i] );
	}
	end = num - 1;
	quick_sort ( arr, start, end );
	for ( i = 0; i < num; i++ ) {
		printf ( "%d", arr [i] );
	}
	return 0;
}

int quick_sort ( int arr [ ] , int start, int end )
{
	int loc;
	if ( start < end ) {
		loc = position ( arr, start, end );
		quick_sort ( arr, start, loc - 1 );
		quick_sort ( arr, loc + 1, end );
	}
	return 0;
}

int position ( int arr [ ], int start, int end )
{
	int pivot;
	pivot = *( arr + start );
	while ( start < end ) {
		while ( *(arr + start ) < pivot ) {
			start++;
		}
		while ( *(arr + end ) > pivot ) {
			end--;
		}
		if ( start < end ) {
			swap ( arr + start, arr + end );
		} else if ( start > end ) {
			swap ( arr + end , &pivot );
		}
		return end;
	}
	return 0;
}

int swap ( int *start, int *end )
{
	int temp;
	temp = *start;
	*start = *end;
	*end = temp;
	return 0;
}

		

		























	
