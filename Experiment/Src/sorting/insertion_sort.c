//#include"../Hdr/header.h"
#include<stdio.h>
int main(void) 
{
	int n,j, temp = 0;
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	int arr[n], i;
	printf("Enter the elements of array: \n");
	for ( i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++) {
			if ( arr[i] > arr[i+1] ) {
				for ( j = i; j >= 0; j--) {
					if ( arr[j+1] < arr[j]) {
						temp = arr[ j + 1];
						arr[ j + 1] = arr[ j ];
						arr[ j ] = temp;
					}
			}
		}
	}
	printf("\n");
	for ( i = 0; i < n; i++) {
		printf ("%d\n", arr[i]);
	}
}

	
