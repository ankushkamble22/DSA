#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int insert_begining ( struct node *head, int num);
int insert_middle ( struct node *head, int num);
int insert_end ( struct node *head, int num);
int main (void) 
{
	struct node *head = NULL;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int i, num;
	printf("Enter the number the elements\n");
	scanf("%d", &num);
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
	temp = head;
	for ( i = 0; i < num; i++) {
		printf("element: %d\n", temp -> data);
		temp = temp ->next;
	}
	insert_begining ( head, num );
//	insert_end ( head, num );
//	insert_middle ( head, num );
	return 0;
}

int insert_begining ( struct node *head, int num)
{
	int i;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	if ( head == NULL ) {
		printf("Head ptr is null");
		exit ( EXIT_FAILURE );
	} else {
		new_node = (struct node*) malloc(sizeof(struct node));
		printf ("Enter the data: \n");
		scanf ("%d", &new_node -> data);
		temp = head;
		head = new_node;
		new_node -> next = temp;
 		temp = head;
		printf("After inserting data at beginning\n");
		for ( i = 0; i <= num ; i++) {
			printf("element: %d\n", temp -> data);
			temp = temp ->next;
		}
		insert_end ( head, num );
	}
	return 0;
}

int insert_end ( struct node *head, int num)
{
	int i;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	if ( head == NULL ) {
		printf("Head ptr is null");
		exit ( EXIT_FAILURE );
	} else {
		new_node = (struct node*) malloc(sizeof(struct node));
		printf ("Enter the data: \n");
		scanf ("%d", &new_node -> data);
		//while ( temp -> next != NULL ) {
		for ( i = 0; i < num; i++) {
			temp -> next;
			printf("next: %p\t", temp -> next);
		}
		printf("\n");
			temp = new_node;
	//		new_node -> next  = NULL;
		}
 		temp = head;
		printf("After inserting data at end\n");
		for ( i = 0; i < num ; i++) {
	//	while ( temp -> next != NULL ) {
			printf("element: %d\n", temp -> data);
			temp = temp ->next;
		}
	//	insert_middle ( head, num );
		printf("done\n");
		
	return 0;
}


int insert_middle ( struct node *head, int num)
{
	int i = 1, pos;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	if ( head == NULL ) {
		printf("Head ptr is null");
		exit ( EXIT_FAILURE );
	} else {
		printf ("Enter the position of new node\n");
		scanf ("%d", &pos);
		new_node = (struct node*) malloc(sizeof(struct node));
		printf ("Enter the data: \n");
		scanf ("%d", &new_node -> data);
		new_node->next = NULL;
		while ( i < pos ) {
			temp = temp -> next;
			i++;
		}
		new_node -> next = temp -> next;
	//	temp -> next = new_node;
		}
 		temp = head;
		printf("After inserting data at middle\n");
		for ( i = 0; i < num; i++) {
			printf("element: %d\n", temp -> data);
			temp = temp ->next;
		}
		
	return 0;
}






