/*
  Declareer de functie trickOrTreat(). Deze functie zal afwisselend Trick of Treat printen.

  Voorbeeld
  =========
  Hoeveel keer wil je trick or treat doen? 5
  Trick
  Treat
  Trick
  Treat
  Trick
*/

#include <stdio.h>

int trickOrTreatVar = 0;
void trickOrTreat();

int main( void )
{
	printf( "Hoeveel keer wil je trick or treat doen? " );

	int trickOrTreatNumber = 0;
	(void)scanf( "%d", &trickOrTreatNumber );

	for( int i = 0; i < trickOrTreatNumber; i++ )
	{
		trickOrTreat();
	}
	return 0;
}

void trickOrTreat()
{
  if(trickOrTreatVar == 0)
  {
    printf("Trick\n");
    trickOrTreatVar = 1;
  }

  else
  {
    printf("Treat\n");
    trickOrTreatVar = 0;
  }
}
