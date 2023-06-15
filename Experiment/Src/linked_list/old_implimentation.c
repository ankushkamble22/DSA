#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(void)
{
	struct node *head = NULL;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int size;
	int i;
	printf ( "Enter the number of elements:\n");
	scanf("%d", &size);
	for ( i = 0; i < size; i++) {
		new_node = (struct node *) malloc(sizeof(struct node));
		printf ("Enter the data\n");
		scanf ("%d", &new_node ->data);
		new_node ->next = NULL;
		if ( head == NULL) {
			head = new_node;
			temp = new_node;
		} else {
			new_node -> next = new_node;
			temp = temp -> next;
		}
	}
	temp = head;
	for ( i = 0; i < size; i++) {
		printf("temp: %d\n", temp ->data);
		temp = temp ->next;
	}
}

	

