/*
  Schrijf een programma dat de deling van 2 gehele getallen, die door de gebruiker worden ingegeven, berekent en het resultaat print.
*/
#include <stdio.h>

int main( void )
{
	float getal1 = 0;
	float getal2 = 0;
	float result = 0;

	printf( "Geef 2 gehele getallen in: " );
	result = scanf( "%f %f", &getal1, &getal2 );

	printf( "%.0f / %.0f = %.2f\n", getal1, getal2, getal1 / getal2 );

	return 0;
}
