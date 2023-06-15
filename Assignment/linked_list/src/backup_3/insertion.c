#include"../hdr/header.h"
int main (void) 
{
	struct node *head = NULL;
	struct node *temp = NULL;
	struct node *new_node = NULL;
	struct double_node *head_double = NULL;
	struct double_node *temp_double = NULL;
	struct double_node *new_node_double = NULL;
	int i;
	int num;
	int choice_1;
	int choice_2;
	int choice_3;
	int store;
	int entry;
	printf ("Enter the number of elements\n");
	scanf ("%d", &num);
	store = ( num / 2);
	printf ("Enter :!!!!!\n1. singly linked list\n2. doubly linked list\n3. circular single linked list\n\n");
	scanf ("%d", &entry);
	if ( entry == 1) {
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
		scanf ("%d", &choice_1);
		switch ( choice_1 ) {
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
	} else if ( entry == 2 ) {
		printf ("\n!!!!!!!!\nEnter the data:\n");
		for ( i = 0; i < num; i++) {
			new_node_double = (struct double_node *) malloc(sizeof(struct double_node));
			scanf ("%d", &new_node_double ->data);
			new_node_double -> next = NULL;
			new_node_double -> previous = NULL;
			if ( head_double == NULL) {
				head_double = new_node_double;
				temp_double = new_node_double;
			} else {
				temp_double ->next = new_node_double;
				new_node_double -> previous = temp_double;
				temp_double = temp_double -> next;
			}
		}
		temp_double = head_double;
		printf ("\nEnter the choice:\n1. insert_beginning\n2. insert_end\n3. insert_position\n4. insert_before_position\n5. insert_after_position\n6.insert_in_middle\n7. insert_in_penultimate\n8. delete_at_beginning\n9. delete_at_end\n10. delete_at_position\n11. delete_before_position\n12. delete_after_position\n13. delete_at_middle\n14. delete_at_penultimate\n\n");
		printf("Enter:\n");
		scanf ("%d", &choice_2);

		switch ( choice_2 ) {
			case 1:
				double_insert_beginning ( head_double );
				break;
			case 2:
				double_insert_end ( head_double );
				break;
			case 3:
				double_insert_position ( head_double );
				break;
			case 4:
				double_insert_before_position ( head_double );
				break;
			case 5:
				double_insert_after_position ( head_double );
				break;
			case 6:
				double_insert_in_middle ( head_double, store );
				break;
			case 7:
				double_insert_in_penultimate ( head_double, num );
				break;
			case 8:
				double_delete_at_beginning ( head_double );
				break;
			case 9:
				double_delete_at_end ( head_double, num );
				break;
			case 10:
				double_delete_at_position ( head_double, num );
				break;
			case 11:
				double_delete_before_position ( head_double, num );
				break;
			case 12:
				double_delete_after_position ( head_double, num );
				break;
			case 13:
				double_delete_at_middle ( head_double, store );
				break;
			case 14:
				double_delete_at_penultimate ( head_double, num );
				break;
			default:
				printf("Wrong entry!!!!!!\n");
		}
	} else if ( entry == 3) {
		printf ("Enter the data:\n");
		for ( i = 0; i < num; i++) {
			new_node = (struct node *) malloc(sizeof(struct node));
			scanf ("%d", &new_node ->data);
			new_node -> next = NULL;
		if ( head == NULL) {
			head = new_node;
			temp = new_node;
		} else {
			temp ->next = new_node;
			temp = temp -> next;
			}
		}
		temp -> next = head;
		temp = head;
      	//display_circular ( head );
		//exit ( EXIT_SUCCESS );
		printf ("Enter the choice:\n1. insert_beginning\n2. insert_end\n3. insert_position\n4. insert_before_position\n5. insert_after_position\n6.insert_in_middle\n7. insert_in_penultimate\n8. delete_at_beginning\n9. delete_at_end\n10. delete_at_position\n11. delete_before_position\n12. delete_after_position\n13. delete_at_middle\n14. delete_at_penultimate\n\n");
		printf("Enter:\n");
		scanf ("%d", &choice_3);
		switch ( choice_3 ) {
			case 1:
				circular_insert_beginning ( head );
				break;
			case 2:
				circular_insert_end ( head );
				break;
			case 3:
				circular_insert_position ( head );
				break;
			case 4:
				circular_insert_before_position ( head );
				break;
			case 5:
				circular_insert_after_position ( head );
				break;
			case 6:
				circular_insert_in_middle ( head, store );
				break;
			case 7:
				circular_insert_in_penultimate ( head, num );
				break;
			case 8:
				circular_delete_at_beginning ( head );
				break;
			case 9:
				circular_delete_at_end ( head, num );
				break;
			case 10:
				circular_delete_at_position ( head, num );
				break;
			case 11:
				circular_delete_before_position ( head, num );
				break;
			case 12:
				circular_delete_after_position ( head, num );
				break;
			case 13:
				circular_delete_at_middle ( head, store );
				break;
			case 14:
				circular_delete_at_penultimate ( head, num );
				break;
			default:
				printf("Wrong entry!!!!!!\n");
		}
	} else {
		printf ("Wrong entry !!!!!!!!");
		exit ( EXIT_FAILURE );
	}
	return 0;
}




