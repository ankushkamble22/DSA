#include"../hdr/header.h"
int insert_beginning ( struct node *head )
{
	int i;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	if ( head == NULL ) {
		printf("Head ptr is null");
		exit ( EXIT_FAILURE );
	} else {
		new_node = (struct node*) malloc(sizeof(struct node));
		printf ("Enter the data to be entered at beginning: \n");
		scanf ("%d", &new_node -> data);
		temp = head;
		head = new_node;
		new_node -> next = temp;
 		temp = head;
		printf("After inserting data at beginning\n");
		display ( temp );
	}
	return 0;
}

int insert_end ( struct node *head )
{
	int i;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the data to inserted at last: \n");
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( temp -> next != NULL ) {
		temp = temp -> next;
	}
	temp -> next = new_node;
 	temp = head;
	printf("After inserting data at end\n");
	display ( temp );
	return 0;
}

int insert_position ( struct node *head )
{
	int i = 2;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int pos;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the position at which data to entered\n");
	scanf ("%d", &pos);
	printf ("Enter the data to inserted at %d position: \n", pos);
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( i < pos ) {
		temp = temp -> next;
		i++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
 	temp = head;
	printf("After inserting data at %d position:\n", pos);
	display ( temp );
	return 0;
}

int insert_before_position ( struct node *head )
{
	int i = 3;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int pos;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the position before which data to entered\n");
	scanf ("%d", &pos);
	printf ("Enter the data to inserted before %d position: \n", pos);
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( i < pos ) {
		temp = temp -> next;
		i++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
 	temp = head;
	printf("After inserting data at %d position:\n", pos-1);
	display ( temp );
	return 0;
}

int insert_after_position ( struct node *head )
{
	int i = 1;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int pos;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the position after which data to entered\n");
	scanf ("%d", &pos);
	printf ("Enter the data to inserted after %d position: \n", pos);
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( i < pos ) {
		temp = temp -> next;
		i++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
 	temp = head;
	printf("After inserting data at %d position:\n", pos+1);
	display ( temp );
	return 0;
}

int insert_in_middle ( struct node *head, int store )
{
	int i = 1;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the data to inserted in the middle position: \n");
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( i < store ) {
		temp = temp -> next;
		i++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
 	temp = head;
	printf("After inserting data in the middle:\n");
	display ( temp );
	return 0;
}

int insert_in_penultimate ( struct node *head, int num )
{
	int i = 2;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	temp = head;
	new_node = (struct node*) malloc(sizeof(struct node));
	printf ("Enter the data to inserted in the penultimate node: \n");
	scanf ("%d", &new_node -> data);
	new_node -> next  = NULL;
	while ( i < num ) {
		temp = temp -> next;
		i++;
	}
	new_node -> next = temp -> next;
	temp -> next = new_node;
 	temp = head;
	printf("After inserting penultimate node:\n");
	display ( temp );
	return 0;
}

int delete_at_beginning ( struct node *head )
{
	struct node *temp = NULL;
	temp = head;
	temp = temp -> next;
 	head = temp;
	printf("After deleting beginning node:\n");
	display ( temp );
	return 0;
}

int delete_at_end ( struct node *head, int num )
{
	register int i = 2;
	struct node *temp = NULL;
	temp = head;
	while ( i < num ) {
		temp = temp -> next;
		i++;
	}
	temp -> next = NULL;
 	temp = head;
	printf("After deleting beginning node:\n");
	display ( temp );
	return 0;
}

int delete_at_position ( struct node *head, int num )
{
	register int i = 1;
	struct node *temp = NULL;
	struct node *previous = NULL;
	short int pos;
	temp = head;
	previous = head;
	printf ("Enter the position at which data to deleted\n");
	scanf ("%hd", &pos);
	if ( pos < 0 || pos > num) {
		printf("Enter invalid position\n");
		exit ( EXIT_FAILURE );
	} else {
		while ( i < pos ) {
			previous = temp;
			temp = temp -> next;
			i++;
	}
	previous -> next = temp -> next;
 	temp = head;
	printf("After deleting node at %hd position:\n", pos);
	display ( temp );
	}
	return 0;
}

int delete_before_position ( struct node *head, int num )
{
	register int i = 1;
	struct node *temp = NULL;
	struct node *previous = NULL;
	short int pos;
	temp = head;
	previous = head;
	printf ("Enter the position before which data to deleted\n");
	scanf ("%hd", &pos);
	if ( pos < 1 || pos > num) {
		printf("Entered invalid position\n");
		exit ( EXIT_FAILURE );
	} else {
		while ( i < pos - 1 ) {
			previous = temp;
			temp = temp -> next;
			i++;
	}
	previous -> next = temp -> next;
 	temp = head;
	printf("After deleting node before %hd position:\n", pos);
	display ( temp );
	}
	return 0;
}

int delete_after_position ( struct node *head, int num )
{
	register int i = 1;
	struct node *temp = NULL;
	struct node *previous = NULL;
	short int pos;
	temp = head;
	previous = head;
	printf ("Enter the position after which data to deleted\n");
	scanf ("%hd", &pos);
	if ( pos < 1 || pos >= num) {
		printf("Entered invalid position\n");
		exit ( EXIT_FAILURE );
	} else {
		while ( i < pos + 1 ) {
			previous = temp;
			temp = temp -> next;
			i++;
	}
	previous -> next = temp -> next;
 	temp = head;
	printf("After deleting node after %hd position:\n", pos);
	display ( temp );
	}
	return 0;
}

int delete_at_middle ( struct node *head, int store )
{
	register int i = 0;
	struct node *temp = NULL;
	struct node *previous = NULL;
	temp = head;
	previous = head;
	while ( i < store ) {
		previous = temp;
		temp = temp -> next;
		i++;
	}
	previous -> next = temp -> next;
 	temp = head;
	printf("After deleting node at middle :\n");
	display ( temp );
	return 0;
}

int delete_at_penultimate ( struct node *head, int num )
{
	register int i = 1;
	struct node *temp = NULL;
	struct node *previous = NULL;
	temp = head;
	previous = head;
	while ( i < num - 1 ) {
		previous = temp;
		temp = temp -> next;
		i++;
	}
	previous -> next = temp -> next;
 	temp = head;
	printf("After deleting node at penultimate :\n");
	display ( temp );
	return 0;
}

int display ( struct node * temp )
{
	while ( temp != NULL ) {
			printf("%d\n", temp -> data);
			temp = temp ->next;
		}
	printf("done\n\n");
	return 0;
}
