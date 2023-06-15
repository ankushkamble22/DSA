#include"../Hdr/header.h"
int main(void) 
{
	int n,j, temp = 0;
	int *ptr;
	printf("Enter the number of elements \n");
	scanf("%d", &n);
	int arr[n], i;
	ptr = arr;
	printf("enter the elements of array: \n");
	for ( i = 0; i < n; i++) {
		scanf("%d", ( ptr + i));
	}
	for ( i = 0; i < n - 1; i++) {
		if ( *(ptr + i + 1) > *(ptr + i) ) {
		 	for ( j = i; j >= 0; j++) {
				if ( *(ptr + j + 1) < *(ptr + j)) {
					temp = *(ptr + 1);
					*(ptr + j + 1) = *(ptr + j);
					*(ptr + j) = temp;
				}
			}
		}
	}
	for ( i = 0; i < n; i++) {
		printf("%d", *(ptr + i));
	}
}

		
