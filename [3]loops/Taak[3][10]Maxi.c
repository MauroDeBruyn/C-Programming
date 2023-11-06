/*
  Pi kan benaderd worden door de volgende formule:

  PI = 4x(1-(1/3)+(1/5)-(1/7)+(1/9)-(1/11)+(1/13)-...)

  Schrijf een programma dat deze benadering uitrekent met instelbare lengte for-lus/while counting-lus.
  Bereken ook het verschil tussen uw benadering en het getal PI uit de math.h library van c (M_PI) en print deze uit.
*/

#include <stdio.h>
#include <math.h>

int main( void )
{
  double pi = 0;
  int lengtePiBerekening = 0;
  printf( "Geef de lengte van de gewenste PI berekening: " );
  (void)scanf( "%d", &lengtePiBerekening );

  // HINT : maak gebruik van conditional operator voor de +/-
  for( int i = 1; i < lengtePiBerekening + 1; i++ )
    {
      pi = pi + pow(-1, i) * ((float)1 / ((2.0 * (float)i) -1));
    }

  pi *= -4;
  printf( "PI = %f\n", pi );
  printf( "M_PI - PI = %f\n", M_PI - pi );

  return 0;
}
