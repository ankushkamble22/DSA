#include<stdio.h>
#include<stdlib.h>
struct node *rev_ll ( struct node *head );
struct node {
	int data;
	struct node * next;
}s1; 
struct node * head = NULL;
int main ( void )
{ 
	struct node * temp = NULL;
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
		} else {
			temp -> next = new_node;
			temp = temp -> next;
		}
	}
//	head = rev_ll ( head );
	temp = head;
	printf("Data in ll\n");
	while ( temp !=  NULL ) {
		printf("%d\n", temp -> data );
		temp = temp -> next;
	}
	return 0;
}

struct node *rev_ll ( struct node *head )
{
	struct node *new_node = NULL;
	struct node *current = NULL;
	struct node *previous = NULL;
	new_node = head -> next;
	current = head;
	while ( new_node != NULL ) {
		current -> next = previous;
		new_node -> next = current;
		previous = current;
		current = new_node;
		new_node = new_node -> next;
		printf("hi\n");
	}
	current -> next = previous;
	head = current;
	while ( head != NULL ) {
		printf("data %d\n", head -> data );
	}
	return 0;
}
	
	
		
