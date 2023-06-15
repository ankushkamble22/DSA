#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
}s1; 
struct node* check_palin ( struct node* head );
struct node * head = NULL;
int main ( void )
{ 
	struct node * temp = NULL;
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
		} else {
			temp -> next = new_node;
			temp = temp -> next;
		}
	}
	temp = head;
	temp = check_palin ( head );
	printf("temp------> %p", temp);	
	if ( temp != NULL ) {
		printf("linked list is a palindrome\n");
	} else {
		printf("linked list is not a palindrome\n");
	}
		
	return 0;
}

struct node* check_palin ( struct node* head )
{
	struct node* mid = NULL;
	struct node* fast = NULL;
	struct node* pre = NULL;
	fast = head;
	mid = head;
	pre = head;
	while ( fast != NULL && fast -> next != NULL ) {
		fast = fast -> next -> next;
		mid = mid -> next;
	}
	fast = mid -> next;
	mid -> next = NULL;
	pre = NULL;
	mid = fast;
	while ( mid != NULL ) {
		fast = mid -> next;
		mid -> next = pre;
		pre = mid;
		mid = fast;
	}
	/*while ( head != NULL ) {
		printf("heah = %d\t", head -> data );
		head = head -> next;
	}
	while ( pre != NULL ) {
		printf("pre = %d\n", pre -> data );
		pre = pre -> next;
	}*/
	mid = head;
	while ( mid -> next != NULL && pre -> next != NULL ) {
		if ( mid -> data != pre -> data ) {
			return NULL;
		}
		mid = mid -> next;
		pre = pre -> next;
	}
	return head;
}
	 	
