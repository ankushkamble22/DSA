#include"../hdr/header.h"
int main ( void )
{
	int stack [ SIZE ];
	int top = -1;
	int choice;
	printf ("Enter the choice\n1. push\n2. pop\n3. diplay\n");
	scanf ("%d", &choice );
	switch ( choice )
	{
		case 1:
			push_stack ( stack, top );
			break;
		case 2:
			pop_stack ( stack, top );
			break;
		case 3:
			display ( stack, top);
			break;
		default:
			printf ("Wrong choice !!!!!!!!");
			break;
	}
	return 0;
}
	
