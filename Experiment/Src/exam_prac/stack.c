#include<stdio.h>
#include<stdio_ext.h>
#define SIZE 5
int push ( int stack [ ], int top );
int main ( void )
{
	int stack [ SIZE ];
	int i;
	int top = -1;
	top++;
	if ( top == SIZE - 1 ) {
		printf("Overflow\n");
		return -1;
	} else {
	for ( i = 0; i < SIZE; i++ ) {
		printf("Enter the value to be pushed:\n");
		__fpurge ( stdin );
		scanf("%d", &stack [ top ] );
		top++;
	}
	}
	//top--;
	push ( stack, top );
	return 0;
}

int push ( int stack [ ], int top )
{
	int i;
	if ( top == SIZE - 1 ) {
		printf("Overflow\n");
		return -1;
	} else {
		printf("Enter the data to be pushed");
		scanf("%d",&stack [ top ]);
		for ( i = 0; i < SIZE + 1; i++) {
			printf("Entered value: %d\n", stack [ top ]);
			top--;
		}
	}
	return 0;
}
		


































