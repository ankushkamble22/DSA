#include<stdio.h>
#define SIZE 10
int main ( void )
{
	int arr [ SIZE ];
	int num;
	int i , j;
	int temp;
	printf("Enter the number of elements\n");
	scanf ("%d", &num );
	printf("Enter the elements\n");
	for ( i = 0; i < num; i++ ) {
		scanf ("%d", &arr [ i ] );
	}
	for ( i = 0; i < num - 1; i++ ) {
		if ( arr [ i ] > arr [ i + 1 ] ) {
			for ( j = i; j >= 0; j-- ) {
				if ( arr [ j ] > arr [ j + 1 ] ) {
					temp = arr [ j + 1 ];
					arr [ j + 1 ] = arr [ j ];
					arr [ j ] = temp;
				}
			}
		}
	}
	printf("elements after sorting\n");
	for ( i = 0; i < num; i++ ) {
		printf ("%d\n", arr [ i ] );
	}
	return 0;
}
			   
