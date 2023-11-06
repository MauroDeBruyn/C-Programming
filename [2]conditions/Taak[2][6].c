#include <stdio.h>

int main( void )
{
	int getal = 0;
	printf( "Geef een geheel getal in : " );
	(void)scanf( "%d", &getal );

	int aantal_cijfers = 0;

	/*voer een reeks van testen uit, of gebruik een gelinkte conditionele operator voor :
	    tussen de 0 en 10 --> 1 cijfer
	    tussen de 10 en 100 --> 2 cijfers
	    tussen de 100 en 1000 --> 3 cijfers
	    tussen de 1000 en 10000 --> 4 cijfers
	*/
  if(getal >= 0 && getal < 10)
  {
    aantal_cijfers = 1;
    printf( "Het getal bestaat uit %d cijfers", aantal_cijfers );
  }

  else if(getal >= 10 && getal < 100)
  {
    aantal_cijfers = 2;
    printf( "Het getal bestaat uit %d cijfers", aantal_cijfers );
  }

  else if(getal >= 100 && getal < 1000)
  {
    aantal_cijfers = 3;
    printf( "Het getal bestaat uit %d cijfers", aantal_cijfers );
  }

  else if(getal >= 1000 && getal < 10000)
  {
    aantal_cijfers = 4;
    printf( "Het getal bestaat uit %d cijfers", aantal_cijfers );
  }

  else
  {
    printf( "Het getal is te groot !" );
  }

	return 0;
}
