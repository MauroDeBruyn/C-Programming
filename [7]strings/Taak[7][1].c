#include <stdio.h>
#include <string.h>

int main( void )
{
	// declare input
  char input[150] = " ";

	printf( "Geef een woord : " );
	(void)scanf( "%s", input );
	printf( "Dit woord bevat %d characters.\n", strlen(input) );
	return 0;
}
