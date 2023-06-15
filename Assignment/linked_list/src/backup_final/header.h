#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
 };
struct double_node {
    struct double_node *previous;
	int data;
    struct double_node *next;
};
int insert_beginning( struct node *head );
int insert_position ( struct node *head );
int insert_end ( struct node *head );
int display ( struct node *temp );
int display_double ( struct double_node *temp );
int insert_before_position ( struct node *head );
int insert_after_position ( struct node *head );
int insert_in_middle ( struct node *head, int store );
int insert_in_penultimate ( struct node *head, int num );
int delete_at_beginning ( struct node *head );
int delete_at_end ( struct node *head, int num );
int delete_at_position ( struct node *head, int num );
int delete_before_position ( struct node *head, int num );
int delete_after_position ( struct node *head, int num );
int delete_at_middle ( struct node *head, int store );
int delete_at_penultimate ( struct node *head, int num );

int double_insert_beginning( struct double_node *head );
int double_insert_position ( struct double_node *head );
int double_insert_end ( struct double_node *head );
int double_insert_before_position ( struct double_node *head );
int double_insert_after_position ( struct double_node *head );
int double_insert_in_middle ( struct double_node *head, int store );
int double_insert_in_penultimate ( struct double_node *head, int num );
int double_delete_at_beginning ( struct double_node *head );
int double_delete_at_end ( struct double_node *head, int num );
int double_delete_at_position ( struct double_node *head, int num );
int double_delete_before_position ( struct double_node *head, int num );
int double_delete_after_position ( struct double_node *head, int num );
int double_delete_at_middle ( struct double_node *head, int store );
int double_delete_at_penultimate ( struct double_node *head, int num );

int circular_insert_beginning( struct node *head );
int circular_insert_position ( struct node *head );
int circular_insert_end ( struct node *head );
int display_circular ( struct node *temp );
int circular_insert_before_position ( struct node *head );
int circular_insert_after_position ( struct node *head );
int circular_insert_in_middle ( struct node *head, int store );
int circular_insert_in_penultimate ( struct node *head, int num );
int circular_delete_at_beginning ( struct node *head );
int circular_delete_at_end ( struct node *head, int num );
int circular_delete_at_position ( struct node *head, int num );
int circular_delete_before_position ( struct node *head, int num );
int circular_delete_after_position ( struct node *head, int num );
int circular_delete_at_middle ( struct node *head, int store );
int circular_delete_at_penultimate ( struct node *head, int num );


int display_double_circular ( struct double_node *temp );
int circular_double_insert_beginning( struct double_node *head );
int circular_double_insert_position ( struct double_node *head );
int circular_double_insert_end ( struct double_node *head );
int circular_double_insert_before_position ( struct double_node *head );
int circular_double_insert_after_position ( struct double_node *head );
int circular_double_insert_in_middle ( struct double_node *head, int store );
int circular_double_insert_in_penultimate ( struct double_node *head, int num );
int circular_double_delete_at_beginning ( struct double_node *head );
int circular_double_delete_at_end ( struct double_node *head, int num );
int circular_double_delete_at_position ( struct double_node *head, int num );
int circular_double_delete_before_position ( struct double_node *head, int num );
int circular_double_delete_after_position ( struct double_node *head, int num );
int circular_double_delete_at_middle ( struct double_node *head, int store );
int circular_double_delete_at_penultimate ( struct double_node *head, int num );
