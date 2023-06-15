#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int push ( int stack [ ], int top, int num ); 
int pop ( int stack [ ], int top, int num ); 
int peek ( int stack [ ], int top, int num ); 
int display ( int stack [ ], int top, int num );
int main ( void )
{
	int stack  [ SIZE ];
	int num;
	int top = -1;
	int choice;
	printf("Enter the number of elements\n");
	scanf ( "%d", &num);
	while ( 1 ) {
		printf("Enter your choice\n1. push\n2. pop\n3.peek\n4.display\n5.exit\n");
		scanf ("%d", &choice );
		switch ( choice ) {
			case 1:
				top = push ( stack, top, num );
				break; 
			case 2:
				top = pop ( stack, top, num );
				break; 
			case 3:
				top = peek ( stack, top, num );
				break; 
			case 4:
				display ( stack, top, num );
				break; 
			case 5:
				exit ( EXIT_SUCCESS );
			default:
				printf("Wrong input\n");
				break;
		}
	}
	return 0;
}

int push ( int stack [ ], int top, int num ) 
{
	int number;
	top++;
	if ( top >= num ) {
		printf("overflow\n");
	} else {
		printf("Enter the element to be pushed\n");
		scanf ("%d", &number );
		stack [ top ] = number;
	}
	return top;
}

int pop ( int stack [ ], int top, int num ) 
{
	if ( top == -1 ) {
		printf("underflow\n");
	} else {
		top--;
	}
	return top;
}
		 
int peek ( int stack [ ], int top, int num ) 
{
	if ( top == - 1 ) {
		printf("stack is empty\n");
	} else {
		printf("Peek element is %d\n", stack [ top ]);
	}
	return top;
}
		
int display ( int stack [ ], int top, int num )
{
	int i;
	printf("Element is \n");
	for ( i = top; i >= 0; i-- ) {
		printf("%d\n", stack [ i ]);
	} 
	return 0;
}
	
