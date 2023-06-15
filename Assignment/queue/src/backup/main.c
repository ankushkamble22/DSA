#include"hdr/header.h"
int enqueue ( int queue[ ], int *rptr, int *fptr );
int dequeue ( int *fptr, int *rptr);
int main ( void )
{
	int queue [ SIZE ];
	int front = -1;
	int rear = -1;
	enqueue ( queue, &rear, &front );
	display ( queue, &rear, &front );
	dequeue(int *fptr, int *rptr)
	return 0;
}

int enqueue(int queue[ ], int *rptr, int *fptr )
{
	int val;
	if ( *rptr == size - 1) {
		printf(" Queue is full\n"); 
	} else {
		if( *fptr == - 1){
			*fptr = 0;
		}
		printf("enter value for queue:\n");
		scanf("%d",&val);
		(*rptr)++;
		queue[*rptr] = val;
	}
	return *fptr;
}

int dequeue(int *fptr, int *rptr)
{
	if( *fptr == -1){
	printf("Queue is empty\n");
	} else {
		(*fptr)++;
			if( *fptr > *rptr ) {
			*fptr = *rptr = -1;
			}
	}
}

int display( int queue[],int *rptr, int *fptr )
{
	printf( "\nelements are \n");
	for(int i = *fptr; i <= *rptr; i++){
		printf( "%d ", queue[i]);
	}
	printf("\n");
}	 	
