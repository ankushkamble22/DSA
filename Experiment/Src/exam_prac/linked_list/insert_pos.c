#include<stdio.h>
#include<stdlib.h>
struct node * insert_pos ( struct node * temp );
struct node {
	int data;
	struct node * next;
}s1; 
int main ( void )
{ 
	struct node * head = NULL;
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
	head = insert_pos ( head );
	temp = head;
	printf("Data in ll\n");
	while ( temp !=  NULL ) {
		printf("%d\n", temp -> data );
		temp = temp -> next;
	}
	return 0;
}

struct node * insert_pos ( struct node * temp )
{
	int pos;
	struct node* head = NULL;
	struct node* new_node = NULL;
	struct node* temp_2 = NULL;
	head = temp;
	printf("Enter the position\n");
	scanf ("%d", &pos );
	new_node = (struct node *) malloc ( sizeof ( struct node ));
	new_node -> data = 29;
	printf("Enter the position\n");
	while ( pos - 1 ) {
		temp = temp -> next;
		pos--;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
	return head;
}
	










	
		
