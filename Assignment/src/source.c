#include"../hdr/header.h"
int read_array ( int num, int array [ ] )
{
	register int i;
	printf("Enter the elements: \n");
	for ( i = 0; i < num; i++) {
		scanf ( "%d", &array [ i ]);
	}  
	return 0;
}

int push_stack ( int stack [ ], int array [ ] )
{
	register int i = size;
	int top = -1;
	top++;
	if ( top == size - 1) {		
		printf("overflow\n");
	} 
	for ( i = size - 1; i >= 0; i-- )
		{
			stack [ top ] = array [ i ];
			top++;
		}
	}
	display ( stack, top);	
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

int pop_stack ( int stack [ ] )
{
	int top = size - 1;
	if ( top < 0) {
		printf("Stack is empty:\n");
		printf("underflow:\n");
	} else {
		top--;
	}
	display ( stack [ ], top);	
	return 0;
}
	 

	
