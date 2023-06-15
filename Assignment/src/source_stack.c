#include"../hdr/header.h"
int push_stack ( int stack [ ], int top )
{
	int value;
	top++;
	printf ( "Enter the data to be pushed: \n");
	scanf ("%d", &value);
	if ( top == size - 1) {		
		printf("overflow\n");
	} else { 
			stack [ top ] = value;
			top++;
	}
	main ( );
//	display ( stack, top);	
	return 0;
}

int display ( int stack [ ], int top)
{
	register int i;
	printf("Elements of stack:\n");
	for ( i = 0; i < top ; i++) {
		printf("element: %d\n", stack [ i ]);
	}
	return 0;
}

int pop_stack ( int stack [ ], int top )
{
	if ( top < 0) {
		printf("Stack is empty:\n");
		printf("underflow:\n");
		exit ( EXIT_FAILURE );
	} else {
		top--;
	}
//	display ( stack , top);	
	main ( );
	return 0;
}

