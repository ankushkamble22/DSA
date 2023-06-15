#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int display ( int queue [ ], int *front, int *rear, int num );
int enque ( int queue [ ], int *front, int *rear, int num );
int deque ( int queue [ ], int *front, int *rear, int num );
int main ( void )
{
	int queue [ SIZE ];
	int num,f = -1,r = -1;
	int *front = &f;
	int *rear = &r;
	int choice;
	printf("Enter the number of elements \n");
	scanf ("%d", &num);
	while ( 1 ) {
		printf("Enter your choice \n1.enque\n2.dequeue\n3.display\n\n");
		scanf ("%d", &choice);
		switch ( choice ) {
			case 1:
				enque ( queue, front, rear, num );
				break;
			case 2:
				deque ( queue, front, rear, num );
				break;
			case 3:
				display ( queue, front, rear, num );
				break;
			case 4:
				exit ( 0 );
				break;
			default:
				printf("wrong entry\n");
				break;
		}
	}
	return 0;
}

int enque ( int queue [ ], int *front, int *rear, int num )
{
	int var;
	if ( ( *front == -1) && ( *rear == - 1 ) ) {
		*front = 0;
		*rear = 0;
	}
	if (( (*rear + 1 ) % num ) == *front ) {
		printf("Overflow\n");
	} else {
		printf("Enter the element to enqued\n");
		scanf("%d", &var );
		queue [ *rear ] = var;
		*rear = ( ( *rear + 1 ) % num );
	}
}

int deque ( int queue [ ], int *front, int *rear, int num )
{
	if ( ( *front == -1) && ( *rear == - 1 ) ) {
		printf("Underflow\n");
	} else if (*front == *rear) {
			*front = -1;
			*rear = -1;
	} else {
		*front = ((*front + 1) % num);
	} 		
}

int display ( int queue [ ], int *front, int *rear, int num )
{
	int i;
	if (( *front == -1 ) && ( *rear == -1 ) ){
		printf("Queue is empty\n");
	} else {
		printf("Elements in queue are\n");
		for ( i = (*front); i < (*rear); i++ ) {
			printf("%d\n", queue [ i ] );
		}
	}
	return 0;
}
		
	
	
	










	
	
	
