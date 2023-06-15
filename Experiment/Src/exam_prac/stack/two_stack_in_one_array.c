#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int pop1 ( int stack [ ], int top1, int mid );
int push1 ( int stack [ ], int top1, int mid );
int peek1 ( int stack [ ], int top1, int mid );
int display1 ( int stack [ ], int top1, int mid );
int pop2 ( int stack [ ], int top2, int num );
int push2 ( int stack [ ], int top2, int num );
int peek2 ( int stack [ ], int top2, int num );
int display2 ( int stack [ ], int top2, int num );
int stack_1 ( int stack [ ] , int top1, int mid );
int stack_2 ( int stack [ ] , int top2, int num );
int main ( void )
{
	int stack [ SIZE ];
	int buffer [ SIZE ];
	int top1;
	int top2;
	int num;
	int mid;
	int i;
	int choice;
	printf("Enter the number elements for array\n");
	scanf("%d", &num );
	top1 = -1;
	mid = num / 2 - 1;
	top2 = mid;
	while ( 1 ) {
		printf("Enter on which stack youb want perform \n");
		scanf("%d", &choice);
		switch ( choice ){
			case 1: 
				top1 = stack_1 ( stack, top1, mid );
				printf("top in main = %d\n", top1 );
				break;   
			case 2: 
				top2 = stack_2 ( stack, top2, num );
				break;
			case 3:
				return 0;   
			default:
				printf("Wrong entry\n");
		}
	}
	return 0;
}

int stack_1 ( int stack [ ] , int top1, int mid )
{
	int choice;
	printf("Enter your choice\n1.push\n2.pop\n3.peek\n4.display");
	scanf("%d", &choice );
	switch ( choice ) {
		case 1: 
			top1 = push1 ( stack, top1, mid );
			printf("top 1 in stack = %d\n", top1 );
			break;
		case 2: 
			top1 = pop1 ( stack, top1, mid );
			break;
		case 3: 
			top1 = peek1 ( stack, top1, mid );
			break;
		case 4: 
			display1 ( stack, top1, mid );
			break;
		default:
			printf("Wrong entry\n");
	}
	return top1;
}

int stack_2 ( int stack [ ], int top2, int num )
{
	int choice;
	printf("Enter your choice\n1.push\n2.pop\n3.peek\n4.display");
	scanf("%d", &choice );
	switch ( choice ) {
		case 1: 
			top2 = push2 ( stack, top2, num );
			break;
		case 2: 
			top2 = pop2 ( stack, top2, num );
			break;
		case 3: 
			top2 = peek2 ( stack, top2, num );
			break;
		case 4: 
			display2 ( stack, top2, num );
			break;
		default:
			printf("Wrong entry\n");
	}
	return top2;
}

int pop1 ( int stack [ ], int top1, int mid )
{
	if ( top1 < 0 ) {
		printf("Overflow\n");
		exit ( EXIT_FAILURE );
	} else {
		top1--;
	}
	return top1;
}

int pop2 ( int stack [ ], int top2, int num )
{
	if ( top2 < num / 2 ) {
		printf("Overflow\n");
		exit ( EXIT_FAILURE );
	} else {
		top2--;
	}
	return top2;
}

int push1 ( int stack [ ], int top1, int mid )
{
	int var;
	top1++;
	if ( top1 >= mid) {
		printf("Overflow\n");
		exit ( EXIT_FAILURE );
	} else {
		printf("Enter the element to be pushed\n");
		scanf("%d", &var );
		stack [ top1 ] = var; 
	}
	printf("top in push = %d\n", top1 );
	return top1;
}
		
int push2 ( int stack [ ], int top2, int num )
{
	int var;
	top2++;
	if ( top2 >= num) {
		printf("Overflow\n");
		exit ( EXIT_FAILURE );
	} else {
		printf("Enter the element to be pushed\n");
		scanf("%d", &var );
		stack [ top2 ] = var; 
	}
	return top2;
}

int peek1 ( int stack [ ], int top1, int mid )
{
	printf("Element = %d\n", stack [ top1 ] );
	return top1;
}

int peek2 ( int stack [ ], int top2, int num )
{
	printf("Element = %d\n", stack [ top2] );
	return top2;
}

int display1 ( int stack [ ], int top1, int mid )
{
	int i;
	printf("Elements of stack 1\n");
	for ( i = top1; i <= 0 ; i-- ) {
		printf("%d\n", stack [ i ] );
	}
	return 0;
}

int display2 ( int stack [ ], int top2, int num)
{
	int i;
	printf("Elements of stack 1\n");
	for ( i = top2; i < num / 2 ; i-- ) {
		printf("%d\n", stack [ i ] );
	}
	return 0;
}

		



























































	
	
		
			 
























	
