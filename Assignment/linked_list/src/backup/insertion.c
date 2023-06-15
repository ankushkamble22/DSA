#include"../hdr/header.h"
int main (void) 
{
	struct node *head = NULL;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	int i;
	int num;
	int choice;
	int store;
	printf("Enter the number of elements\n");
	scanf("%d", &num);
	store = ( num / 2);
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
	printf ("Enter the choice:\n1. insert_beginning\n2. insert_end\n3. insert_position\n4. insert_before_position\n5. insert_after_position\n6.insert_in_middle\n7. insert_in_penultimate\n8. delete_at_beginning\n9. delete_at_end\n10. delete_at_position\n11. delete_before_position\n12. delete_after_position\n13. delete_at_middle\n14. delete_at_penultimate\n\n");
	printf("Enter:\n");
	scanf ("%d", &choice);
	switch ( choice ) {
		case 1:
			insert_beginning ( head );
			break;
		case 2:
			insert_end ( head );
			break;
		case 3:
			insert_position ( head );
			break;
		case 4:
			insert_before_position ( head );
			break;
		case 5:
			insert_after_position ( head );
			break;
		case 6:
			insert_in_middle ( head, store );
			break;
		case 7:
			insert_in_penultimate ( head, num );
			break;
		case 8:
			delete_at_beginning ( head );
			break;
		case 9:
			delete_at_end ( head, num );
			break;
		case 10:
			delete_at_position ( head, num );
			break;
		case 11:
			delete_before_position ( head, num );
			break;
		case 12:
			delete_after_position ( head, num );
			break;
		case 13:
			delete_at_middle ( head, store );
			break;
		case 14:
			delete_at_penultimate ( head, num );
			break;
		default:
			printf("Wrong entry!!!!!!\n");
	}
	return 0;
}






