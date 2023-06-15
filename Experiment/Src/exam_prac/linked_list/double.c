#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *previous;
	int data;
	struct node * next;
}s1; 
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
//	temp = head;
//	printf("Data in ll\n");
//	while ( temp !=  NULL ) {
//		printf("%d\n", temp -> data );
//		temp = temp -> next;
//	}
	
	printf("Reverse in ll\n");
	while ( temp !=  head ) {
		printf("%d\n", temp -> data );
		temp = temp -> previous;
	}
	
	
	return 0;
}
	
	
		
