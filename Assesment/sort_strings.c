#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
#define BUFFER 20
int strings_sort ( char **cprt, int num );
int strcopy ( char *cptr1 , char *cptr2 );
int strcompare ( char *cptr1, char *cptr2 );
int main ( void )
{
	char **cptr = NULL;
	int i;
	int num;
	printf("Enter the number of string\n");
	scanf("%d", &num );
	cptr = ( char **) malloc ( num *( sizeof ( char *)));
	for ( i = 0; i < num; i++ ) {
		*( cptr + i ) = ( char *) malloc ( BUFFER *( sizeof ( char )));
		printf("Enter the string %d\n",i );
		__fpurge ( stdin );
		fgets ( *( cptr + i ), BUFFER, stdin );
	}
	strings_sort ( cptr, num );
	printf("\n!!!!!!!Strings after sorting!!!!!!!!\n" );
	for ( i = 0; i < num; i++ ) {
		printf ( "%s", *( cptr + i ));
	}
	for ( i = 0; i < num; ++i ) {
		free ( *(cptr + i) );
	}
	free ( cptr );
	return 0;
}

int strings_sort ( char **cptr, int num )
{
	int i;
	int j;
	char buffer [ BUFFER ];
	for ( i = 0; i < num; i++ ) {
		for ( j = 0; j < num; j++ ) {
			if ( strcmp ( *(cptr + i ), *( cptr + j ) ) < 0) {
				strcpy ( buffer, *( cptr + i ) );
				strcpy ( *( cptr + i ),*( cptr + j ));
				strcpy ( *( cptr + j ), buffer );
			}
		}
	}
	return 0;
}

int strcompare ( char *cptr1, char *cptr2 )
{
	while ( *cptr1 != '\0' && *cptr2 != '\0' )
	{
		if ( *cptr1 == *cptr2 ) {
			cptr1++;
			cptr2++;
		} else if ( *cptr1 > *cptr2 ) {		
			return 1;
		} else {
			return -1;
		}
	}
	return 0;
}

int strcopy ( char *cptr1 , char *cptr2 )
{
	while ( *cptr2 != '\0' ) {
		*cptr1++ = *cptr2++;
	}
	return 0;
}
	
				
			
				
