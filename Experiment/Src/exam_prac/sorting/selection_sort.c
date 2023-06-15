#include<stdio.h>
#define SIZE 10
int swap ( int arr [ ], int i, int min ); 
int main ( void )
{
	int arr [ SIZE ];
	int num;
	int i , j;
	int min;
	printf("Enter the number of elements\n");
	scanf ("%d", &num );
	printf("Enter the elements\n");
	for ( i = 0; i < num; i++ ) {
		scanf ("%d", &arr [ i ] );
	}
	for ( i = 0; i < num -1; i ++ ) {
			min = i;
		for ( j = i + 1; j < num ; j++ ) {
			if ( arr [ j ] < arr [ min ] ) {
					min =  j;
			}
		}
		if ( min != i ) {
			swap ( arr, i, min);
		}
	}
	printf("elements after sorting\n");
	for ( i = 0; i < num; i++ ) {
		printf ("%d\n", arr [ i ] );
	}
	return 0;
}

int swap ( int arr [ ], int i, int min ) 
{
	int temp;
	temp = arr [ i ];
	arr [ i ] = arr [ min ];
	arr [ min ] = temp;
	return 0;
}
	
