#include"../Hdr/header.h"
int main (void)
{
	int n,j, temp = 0;
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	int arr[n], i, min ;
	printf("Enter the elements of array: \n");
	for ( i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
 	for ( i = 0; i < n ; i++) {
			min = i;
		for ( j = i + 1 ; j < n ; j++) {
			if ( arr [ j ] < arr [ min ]) {
					min = j;
			}
		}
		if ( min != i) {
				temp = arr [ i ];
					arr [ i ] = arr [ min ];
					arr [ min ] = temp ;
				}	
	}
	
	printf("\n");
	for ( i = 0; i < n; i++) {
		printf ("%d", arr[i]);
	}
}
				  
