#include <stdio.h>

int main( void )
{
	int getal1 = 0;
	char operatie = '+';
	int getal2 = 0;
	int uitkomst = 0;
	printf( "Geef 2 gehele getallen in en een operatie zonder spaties : " );
	(void)scanf( "%d%c%d", &getal1, &operatie, &getal2 );
	/*test elke mogelijke operatie (+, -, *, /) door te testen of de variabele operatie gelijk is aan '+' enz. */
  switch(operatie)
    {
    case '+':
      uitkomst = getal1 + getal2;
      break;

    case '-':
      uitkomst = getal1 - getal2;
      break;

    case '*':
      uitkomst = getal1 * getal2;
      break;

    case '/':
      uitkomst = getal1 / getal2;
      break;

    default:
      break;
    }
	printf( "Uitkomst = %d", uitkomst );
	return 0;
}
