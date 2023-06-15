//#include"../hdr/header.h"
#include<stdio.h>
//int bubble_sort ( int *arr, int n);
int main (void) 
{
	int n,j, temp = 0;
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	int arr[n], i;
	printf("Enter the elements of array: \n");
	for ( i = 0; i < n; i++) {
		scanf ("%d", &arr[i]);
	}
	for ( i = 0; i < n - 1; i++) {
		for ( j = 0; j < n - 1; j++) {
				if ( arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
		}
	}
	printf("\n");
	for ( i = 0; i < n; i++) {
		printf ("%d\n", arr[i]);
	} 
//	bubble_sort ( arr, n);
//	printf("Sorted array: \n");
}
/*int bubble_sort ( int *arr, int n)
{
	int *ptr;
	int i, j, flag = 0, temp;
	ptr = arr + 1;
	for ( i = 0; i < n - 1; i++) {
	//	flag = 0;
		for ( j = 0; j < n - 1; j++) {
		//	if ( *(arr + j) > *( ptr + (j )) {
		//		temp = *( arr + j);
		//		*( arr + j) = *(ptr + (j+1));
		//		*( ptr + (j+1)) = temp;
		//		flag = 1; 
		//	}
			if ( *arr > *ptr) {
				temp = *arr;
				*arr = * ptr;
				*ptr = temp;
				arr++;
				ptr++;
		}
		}
	//	if ( flag == 0) {
	//		break ;
	//	}
	}
	for ( i = 0; i < n; i++) {
		printf ("%d", arr[i]);
	}
	return 0;
}
*/				
