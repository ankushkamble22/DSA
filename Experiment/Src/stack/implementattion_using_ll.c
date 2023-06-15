#include<stdio.h>
#define size 5
struct node {
	int data;
	struct node *next;
};
int create_L_L( stack [ ], top, 4);
int main (void)
{
	int stack [ size ];
	int top;
	//push ( 4 );
	//pop ();
	//push ( 2 );
	//peek ( );
}

int create_L_L( stack [ ], top, 4)
{
	printf ("Enter the number of elements: \n");
	scanf ("%d", &num);
	for ( i = 0; i < num; i++ ) {
		new_node = (struct node *) malloc(sizeof(struct node));
		printf ("Enter the data into stack \n");
		scanf ( "%d", &new_node -> data );
		if ( head == NULL ) {
			head = new_node;
			temp = new_node;
		} else {
			temp -> next = new_node;
			temp = temp -> next;
		}
	}
	return 0; 
}
