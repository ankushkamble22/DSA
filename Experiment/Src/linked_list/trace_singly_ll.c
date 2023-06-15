#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
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
	return 0;
}
