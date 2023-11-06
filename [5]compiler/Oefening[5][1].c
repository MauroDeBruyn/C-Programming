/*
  Schrijf een programma dat de gebruik vraagt om het aantal seconden in te geven. Het programma berekent dan hoeveel dagen, uren, minuten en seconden dit is.
*/
#include <stdio.h>
#include <stdint.h>

int main( void )
{
	uint64_t aantalSeconden = 0;
	uint16_t dagen = 0;
	uint8_t uren = 0;
	uint8_t minuten = 0;
	uint8_t seconden = 0;
	uint32_t rest = 0; // tussen de 0 en 86400 (excl.) > 65535 ! (credits to Niels)

	printf( "Geef het aantal seconden: " );
	(void)scanf( "%d", &aantalSeconden );

	// Bereken het aantal dagen
	dagen = aantalSeconden; // Bereken aantal dagen m.b.v. aantalSeconden
	rest = aantalSeconden;  // Bereken de restwaarde dat niet in een dag past
	printf( "Dagen = %d\n", dagen );

	// Bereken het aantal uren
	uren = rest; // Bereken aantal uren m.b.v. aantalSeconden die resteren
	rest = rest; // Bereken de restwaarde dat niet in een uur past
	printf( "Uren = %d\n", uren );

	// Bereken het aantal minuten
	minuten = rest; // Bereken aantal minuten m.b.v. aantalSeconden die resteren
	printf( "Minuten = %d\n", minuten );

	// Bereken het aantal seconden
	seconden = rest; // Bereken de restwaarde dat niet in een minuut past
	printf( "Seconden = %d", seconden );

	return 0;
}
