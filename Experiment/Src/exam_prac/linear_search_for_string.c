#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#include<stdlib.h>
#define NUM 4
#define SIZE 20
int main ( void ) 
{
	char **cptr = NULL;
	char *temp = NULL;
	int i, j;
	cptr = ( char **) malloc ( NUM * ( sizeof ( char *)));
	temp = ( char *) malloc ( SIZE * ( sizeof ( char )));
	for ( i = 0; i < NUM; i++ ) {
		*( cptr + i ) = ( char *) malloc ( SIZE *( sizeof ( char )));
		printf("Enter the string %d \n", i );
		__fpurge ( stdin );
		fgets ( *(cptr + i), SIZE, stdin );
	}
	for ( j = 0; j < NUM ; j++ ) {
		for ( i = 0; i < NUM - 1; i++ ) {
			if ( strcmp ( *( cptr + i ), *( cptr + i + 1 ) ) > 0 ) {
				strcpy ( temp, *( cptr + i ) );
				strcpy ( *( cptr + i ), *( cptr + i + 1 ) );
				strcpy ( *( cptr + i + 1 ), temp );
			}
		}
	}
	printf("After sorting\n" );
	for ( i = 0; i < NUM; i++ ) {
		printf ( "%s", *(cptr + i));
	}
	return 0;
}
				
		


