#include <stdio.h>
#include <assert.h>

int main( void )
{
	// Maak een array met 100 getallen die aflopen tot en met 0
  int array[100];

  for(int i = 0; i < 100; i++)
    {
      array[i] = 99 - i;
    }

  for( int i = 0; i < 100; i++ )
  {
    printf( "array[%d] = %d\n", i, array[i] );
  }

	assert( array[8] == 91 );
	assert( array[42] == 57 );
	assert( array[69] == 30 );
	assert( array[99] == 0 );

	return 0;
}
