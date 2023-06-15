#include<stdio.h>
int position( int *arr, int lb, int ub);
int swap ( int *start, int *end); 
int quick_sort (int * arr, int lb, int ub );
int main ( void )
{
	int arr [ 6 ];
	int i;
	printf("Enter the array elements\n");
	for ( i = 0; i < 6; i++ ) {
		scanf ( "%d", &arr [ i ] );
 	}
	quick_sort ( arr, 0, 5 );
	printf("After sorting the array elements!!!!!!!!\n");
	for ( i = 0; i < 6; i++ ) {
		printf ( "%d\n", arr [ i ] );
 	}
	return 0;
}
		
int quick_sort (int * arr, int lb, int ub )
{
	int loc;
	if ( lb < ub ) {
		loc = position( arr, lb, ub);
		quick_sort ( arr, lb, loc - 1 );
		quick_sort ( arr, loc + 1, ub );
	}
}

int position( int *arr, int lb, int ub)
{
	int pivot = *(arr + lb);
	int start, end;
	start = lb;
	end = ub;
	while ( start < end) {
		while ( *(arr + start) < pivot) {
			start++;
		}
		while ( *( arr + end ) > pivot) {
			end--;
		} 
		if ( start < end) {
			swap (( arr + start), (arr + end ));
		} else {
			swap (( arr + end ), (&pivot));
		}
	}
	return end;
}
		
int swap ( int *start, int *end) 
{
	int temp = 0;
	temp = *start;
	*start = *end;
	*end = temp;
}

