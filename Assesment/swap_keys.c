#include<stdio.h>
struct node {
	int data;
	struct node* next;
};

int main ( void )
{
	struct node *head = NULL;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int num;
	int i;
	printf("Enter the number of nodes\n");
	scanf ("%d", &num );
	for ( i = 0; i < num; i++ ) {
		new_node = ( struct node *) malloc ( num *( sizeof ( struct node )));
		printf("Enter the data for node %d\n", i );
		scanf("%d", &new_node -> data );
		new_node -> next = NULL;
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

int swap_keys ( struct node *head )
{
	int key1;
	int key2;
	printf("Enter key 1\n");
	scanf("%d", &key1 );
	printf("Enter key 2\n");
	scanf("%d", &key2 );
	while ( key1 ) {
		
	
			 
	
	
	 
