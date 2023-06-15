#include<stdio.h>
int main (void) 
{
	FILE *ptr = NULL;
	FILE * fptr = NULL;
	char name_1 [ 20 ];
	char name_2 [ 20 ];
	char temp [ 20 ];
	ptr = fopen ( "names.txt", "r+");
	if ( ptr == NULL ) {
		printf ("Error in opening file");
		exit ("EXIT_FAILURE");
	} else {
		fscanf( ptr, "%s", temp);
		for ( i = 0; i < 7; i++) {   
			fscanf( fptr, "%s", temp);
		}
		
