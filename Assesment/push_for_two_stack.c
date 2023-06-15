#include<stdio.h>
#define SIZE 20
int display_for_stack1 ( int stack [ ], int top1);	
int display_for_stack2 ( int stack [ ], int top2, int num);	
int push ( int stack [ ], int *top1, int *top2 ); 
int main ( void )
{
	int stack [ SIZE ];
	int top1;
	int top2;
	int choice;
	int num;
	printf("Enter the number of elements\n");
	scanf("%d", &num);
	top1 = 0;
	top2 = num -1;
	while ( 1 ) {
		printf("\nEnter your choice\n1.push\n2.dispay for stack 1\n3.dispay for stack 1\n4.exit\n\n");
		scanf("%d", &choice );
		switch ( choice ) {
			case 1:
				push ( stack, &top1, &top2 );
				break;
			case 2:
				display_for_stack1 ( stack, top1 );
				break;
			case 3:
				display_for_stack2 ( stack, top2, num );
				break;
			case 4:
				return 0;
			default:
				printf("\nOops your entry is wrong\n");
				break;
		}
	}
	return 0;
}

int push ( int stack [ ], int *top1, int *top2 ) 
{
	int choice;
	if ( *top1 > *top2 ) {
		printf("\n!!!!!!STACK OVERFLOW!!!!!!\n");
		return -1;
	}
	printf("\nEnter your choice\n1.Stack 1\n2.Stack 2\n\n");
	scanf("%d", &choice );
	switch ( choice ) {
		case 1:
			printf("\nEnter the element to be pushed in stack 1\n");
			scanf("%d", &stack [ *top1 ]);
			(*top1)++;
			break;
		case 2:
			printf("\nEnter the element to be pushed in stack 2\n");
			scanf("%d", &stack [ *top2 ]);
			(*top2)--;
			break;
		default:
			printf("\nOops your entry is wrong\n");
			break;
	}
	return 0;
}	

int display_for_stack1 ( int stack [ ], int top1 )	
{
	int i;
	printf("\nElements of stack 1\n");
	for ( i = 0; i < top1; i++ ) {
		printf("%d\n", stack [ i ] );
	}
	return 0;
} 	
		
int display_for_stack2 ( int stack [ ], int top2, int num )	
{
	int i;
	printf("\nElements of stack 2\n");
	for ( i = num - 1; i > top2; i-- ) {
		printf("%d\n", stack [ i ] );
	}
	return 0;
}
 

 
		
		
		

	
	
