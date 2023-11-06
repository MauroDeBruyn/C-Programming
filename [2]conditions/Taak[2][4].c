#include <stdio.h>

int main( void )
{
	int getal = 0xf00d; //<-- hexadecimal !
	int gok;
	printf( "Raad eens : " );
	(void)scanf( "%d", &gok );

	/* indien de gok te laag is */
  if(gok < getal)
  {
		printf("Het getal is hoger !\n");
  }

	/* anders indien de gok te hoog is */
  else if(gok > getal)
  {
		printf("Het getal is lager !\n");
  }

	/* anders */
  else
  {
		printf("Juist !\n");
  }
	return 0;
}
