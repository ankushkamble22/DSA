#include<stdio.h>
#include<stdlib.h>
#define N 5
int main (void) 
{
	int stack [ 4 ];
	int top = -1;
	int arr [ N ];
	int i; 
	printf("Enter the value: \n");
	for ( i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	if ( top != 3){
		for ( i = 0; i < 5 ; i++) {
		top++;
		stack [ top ] = arr[i];
		}
	} 
	if(top > 3)
		printf("Overflow");
		exit (EXIT_FAILURE);
	
	for ( i = 0; i < N; i++) {
	printf("top_value:%d\n", stack [top]);
	top--;
	}
}
