#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *previous;
	int data;
	struct node * next;
}s1; 
struct node* insert_pos ( struct node* head );
int main ( void )
{ 
	struct node * temp = NULL;
	struct node * head = NULL;
	struct node * new_node = NULL;
	int num;
	int i;
	printf("Enter the number of elements\n" );
	scanf ( "%d", &num );	
	for ( i = 0; i < num; i++ ) {
		new_node = ( struct node *) malloc ( sizeof ( struct node ));	
		printf("Enter the data for %d node\n", i );
		scanf ( "%d", &new_node -> data); 
		new_node -> next = NULL;
		if ( head == NULL ) {
			head = new_node;
			temp = head;
			head -> previous = NULL;
		} else {
			temp -> next = new_node;
			new_node -> previous = temp;
			temp = temp -> next;
		}
	}
	head = insert_pos ( head );
	temp = head;
	printf("Reverse in ll\n");
	while ( temp !=  NULL ) {
		printf("%d\n", temp -> data );
		temp = temp -> next;
	}	
	return 0;
}
	
struct node* insert_pos ( struct node* head )
{
	struct node* temp = NULL;
	struct node* new_node = NULL;
	temp = head;
	int pos;
	printf("Enter the position\n");
	scanf ("%d", &pos);
	new_node = ( struct node* ) malloc ( sizeof ( struct node ));
	printf("Enter the data:\n");
	scanf ("%d", &new_node -> data );
	while ( --pos ) {
		temp = temp -> next;
		pos;
	}
	new_node -> next = temp -> next;
	new_node -> previous = temp;
	temp -> next= new_node;
	return head;
}
	
	
	




	
		
