#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
}s1; 
int loop_detection ( struct node * head );
struct node * head = NULL;
int main ( void )
{ 
	struct node * temp = NULL;
	struct node * new_node = NULL;
	int num;
	int i;
	int store;
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
	temp = head;
	head -> next = head;
	store = loop_detection ( head );
	if ( store == 0 ) {
		printf("loop detected\n");
	} else {
		printf("loop not detected\n");
	}
		
	//printf("Data in ll\n");
	/*while ( temp !=  NULL ) {
		printf("%d\n", temp -> data );
		temp = temp -> next;
	}*/
	return 0;
}

int loop_detection ( struct node * head )
{
	struct node *slow = NULL;
	struct node *fast = NULL;
	slow = head;
	fast = head -> next;
	while ( fast != NULL ) {
		slow = slow -> next;
		fast = fast -> next -> next;
		if ( slow == fast ) {
				return 0;
		}
	}
	return 1;
}	
		
		
