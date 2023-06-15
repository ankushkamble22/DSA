#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#define SIZE 5
int display ( int queue [ ], int *front, int *rear );
int enque ( int queue [ ], int *front, int *rear );
int dequeue ( int queue [ ], int *front, int *rear );
int main ( void )
{
	int queue [ SIZE ];
	int front = -1;
	int rear = -1;
	int choice;
	while ( 1 ) {
		printf ( "Enter your choice\n");
		__fpurge ( stdin );
		scanf ( "%d", &choice );
			switch ( choice ) {
				case 1 :
					rear = enque ( queue, &front, &rear );
				case 2 :
					front = dequeue ( queue, &front, &rear );
					break;
				case 3 :	
					display ( queue, &front, &rear );
					break;
				case 4 :
					exit ( EXIT_SUCCESS );
				default:
					printf("wrong entry\n");
					exit ( EXIT_SUCCESS );
			}	
	}
	return 0;
}

int enque ( int queue [ ], int *front, int *rear )
{
	int num;
	printf ("Enter the number to be enqued\n");
	__fpurge ( stdin );
	scanf ("%d", &num ); 
	if ( *rear == SIZE - 1 ) {
		printf("Overflow");
		exit ( EXIT_FAILURE );
	} else if ( *front == - 1 && *rear == - 1 ) {
		*front = 0;
		*rear = 0;
		queue [ *rear ] = num;
		printf("enque = %d\n", queue [ *rear ] );
	} else {
		*rear++;
		queue [ *rear ] = num;
	}
//	display ( queue, front, rear );
	return 0;
}

int dequeue ( int queue [ ], int *front, int *rear )
{
	if ( *front == SIZE - 1 ) {
		printf("Underflow");
		exit ( EXIT_FAILURE );
	} else {
		*front--;
	}
	return 0;
}

int display ( int queue [ ], int *front, int *rear )
{
	int i;
	for ( i = *front; i <= *rear; i++ ) {
		printf("number:%d\n", queue [ *rear ]);
	}
	return 0;
}  
