/*
    Maak enkel gebruik van while-loops
*/
#include <stdio.h>

int main( void )
{
	int getal = 0;
  int j = 0;
  int i = 0;
	printf( "Geef een getal tussen 0 en 100 :" );
	(void)scanf( "%d", &getal );
	printf( "De tafels van %d zijn :\n", getal );
	while(i < 25)
	{
    j = 0;

		while(j < 100)
		{
			printf( "%d x %2d = %4d | ", getal, i + j, getal * ( i + j ) );

      j += 25;
		}
		printf( "\n" );

    i++;
	}
	return 0;
}
