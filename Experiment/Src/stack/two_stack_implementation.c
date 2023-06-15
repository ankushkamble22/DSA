#include"../hdr/header.h"
int main ( void)
{
	int stack [ SIZE ];
	int top1;
	int top2;
	int num;
	int choice;
	printf("Enter the size of array\n");
	scanf("%d", &num);
	top1 = 0;
	top2 = num - 1;
	while ( 1 ) {
		printf("\nEnter your choice\n1.push\n2.pop\n3.peek\n4.display for stack 1\n5.display for stack 2\n6.Exit\n\n");
		scanf("%d", &choice);
		switch ( choice ) {
			case 1:
				push ( stack, &top1, &top2 );
				break;
			case 2:
				pop ( stack, &top1, &top2, num );
				break;
			case 3:
				peek ( stack, &top1, &top2, num );
				break;
			case 4:
				display1 ( stack, top1 );
				break;
			case 5:
				display2 ( stack, top2, num );
				break;
			case 6:
				return 0;
			default:
				printf("!!!!!!!!Oops Wrong Entry!!!!!!!!\n");
				break;
		}
	}
	return 0;
}
	
int push ( int stack [ ], int *top1, int *top2 ) 
{
	int choice;
	if ( *top1 > *top2 ) {
			printf("\n!!!!!!Stack Overflow!!!!!!\n");
			return -1;
	} else {
		printf("\nElement to be pushed in:\n1.stack 1\n2.stack 2\n\n");
		scanf("%d", &choice);
		switch ( choice ) {
			case 1:
				printf("\nEnter the element to be pushed\n");
				scanf("%d", &stack [*top1 ] );
				(*top1)++;
				break;
			case 2:
				printf("\nEnter the element to be pushed\n");
				scanf("%d", &stack [*top2 ] );
				(*top2)--;
				break;
			default :
				printf("\n!!!!!!!!Oops Wrong Entry!!!!!!!!\n");
				break;
			}
	}
	return 0;
}

int pop ( int stack [ ], int *top1, int *top2, int num )
{
	int choice;
	printf("\nChoose a stack to perform pop\n1.stack 1\n2.stack 2\n\n");
	scanf("%d", &choice);
	switch ( choice ) {
		case 1:
			if ( (*top1) <= 0 ) {
				printf("!!!!!!!Stack 1 Underflow!!!!!!!!\n");
				return -1;
			} else {
				(*top1)--;
			}
			break;
		case 2:
			if ( (*top2) >= num - 1 ) {
				printf("!!!!!!!Stack 2 Underflow\n");
				return -1;
			} else {
				(*top2)++;
			}
			break;
		default:
			printf("!!!!!!!!Oops Wrong Entry!!!!!!!\n");
			break;
	}
	return 0;
}

int peek ( int stack [ ], int *top1, int *top2, int num )
{
	int choice;
	printf("\nEnter the choice\n1.stack 1\n2.stack 2\n\n");
	scanf("%d", &choice );
	switch ( choice ) {
		case 1:
			if ( (*top1) < 0 ) {
				printf("!!!!!!Stack 1 Underflow!!!!!!!\n");
				return -1;
			} else {
				printf("\nPeek element of stack 1 = %d\n", stack [ *top1 - 1 ] );
			}
			break;
		case 2:
			if ( (*top2) > num - 1 ) {
				printf("!!!!!!!!Stack 2 Underflow!!!!!!!!\n");
				return -1;
			} else {
				printf("\nPeek element of stack 2 = %d\n", stack [ *top2 + 1 ] );
			}
			break;
		default :
			printf("!!!!!!!Oops Wrong Entry!!!!!!\n");
			break;
	}
	return 0;
}

int display1 ( int stack [ ], int top1 )
{
	int i;
	printf("--------------------\nElements of stack 1\n");
	for (  i = top1 - 1; i >= 0; i-- ) {
		printf("%d\n", stack [ i ] ); 
	}
	return 0;
}
	
int display2 ( int stack [ ], int top2, int num )
{
	int i;
	printf("--------------------\nElements of stack 2\n");
	for (  i = top2 + 1; i < num; i++ ) {
		printf("%d\n", stack [ i ] );
	}
	return 0;
}

						
			
 
		
		
		

		
