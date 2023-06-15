#include"../hdr/header.h"
int main (void)
{	
	int array [ SIZE ] ;
	int stack [ size ] ;
    int num;
	register int i;
  	printf ("Enter the number of elements in array: \n");
  	scanf ("%d", &num);
	read_array (num, array );
	push_stack ( stack, array);
	pop_stack ( stack );
	printf("Elements of array:\n");
	for ( i = 0; i < num; i++) {
		printf("element: %d\n", array [ i ]);
	}
	return 0;
}

