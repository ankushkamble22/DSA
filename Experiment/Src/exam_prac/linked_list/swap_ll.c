#include<stdio.h>
#include<stdlib.h>
int fun ( void );
struct node {
	int data;
	struct node * next;
}s1; 
struct node *swap ( struct node * head ); 
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
	head = swap ( head );
	temp = head;
	printf("Data in ll\n");
	while ( temp !=  NULL ) {
		printf("%d\n", temp -> data );
		temp = temp -> next;
	}
	return 0;
}

struct node *swap ( struct node * head ) 
{
	int pos_1, pos_2, i;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	struct node *new_2 = NULL;
	struct node *temp_2 = NULL;
	temp = head;
	new_2 = head;
	new_node = head;
	printf("Enter the positions to be swaped\n");
	scanf ( "%d%d", &pos_1, &pos_2 );
	while ( new_2 != NULL ) {
		++i;
		if ( i == pos_1 ){
			printf("hi");
			new_node = new_2;
		} else if ( i == ( pos_2 + 1 )) {
			temp = new_2;
		}
		new_2 = new_2 -> next;
	}
	temp_2 = new_node -> next;
	new_node -> next = temp;
	temp_2 -> next = temp -> next;
	temp -> next = temp_2;
	return head;
}
	
		
