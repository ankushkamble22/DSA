#include"../hdr/header.h"
int main ( void ) {
	create_linked_list ( );
	return 0;
}

int create_linked_list ( void )
{
	int num;
	register int i;
	struct node * new_node = NULL;
	struct node * head = NULL;
	struct node * temp = NULL;
	printf ("Enter the number of elements\n");
	scanf ("%d", &num);
		for ( i = 0; i < num; i++) {
			new_node = (struct node *) malloc(sizeof(struct node));
			printf ("Enter the data:\n");
			scanf ("%d", &new_node ->data);
		if ( head == NULL) {
			head = new_node;
			temp = new_node;
		} else {
			temp ->next = new_node;
			temp = temp -> next;
			new_node -> next = NULL;
			}
		}
		copy_to_file ( head );
		return 0;
}

int copy_to_file ( struct node * head )
{
	FILE *fptr = NULL;
 	struct node * temp = NULL;
	temp = head; 
	fptr = fopen ( "data.db", "w+" );
	if ( fptr == NULL ) {
		printf ("Error in opening file!!!!!!!!");
		exit ( EXIT_FAILURE );
	} else {
		fprintf ( fptr, "%s", "MEMBERS OF LINKED LIST\n\n");
		while ( temp -> next != NULL ) {
			fprintf ( fptr, "%d\n", temp -> data );
			temp = temp -> next;
		}
	}
	fclose ( fptr );
	read_from_file ( );
	return 0;
}

int read_from_file ( void )
{
	register int i;
	FILE *fptr = NULL;
	int arr [ 10 ];
	int str [ 10 ];
	fptr = fopen ( "data.db", "r+" );
	if ( fptr == NULL ) {
		printf ("Error in opening file!!!!!!!!");
		exit ( EXIT_FAILURE );
	} else {
		printf("Data elements in file:\n");
		for ( i = 0; i < 6; i++) {
			str [ i ] = fscanf ( fptr, "%d", arr);
			printf("%d\n", str [ i ] );
		}
	}
	fclose ( fptr );
	return 0;
}
