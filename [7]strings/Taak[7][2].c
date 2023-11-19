// Hoe veel control characters zitter er in de joke?
//
// HINT: https://en.cppreference.com/w/c/string/byte/iscntrl
//
// Verwachte output:
// Er zitten n control characters in de joke.

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

#include "joke.h"

int main( void )
{
  int controlCharCount = 0;
	for( uint16_t i = 0; i <= strlen( joke ); i++ )
	{
		//printf( "%c", joke[i] ); -> uncomment als je de joke wilt zien. Zet terug in comment voordat je je test runt.
    if(iscntrl(joke[i]) != 0)
    {
      controlCharCount++;
    }
	}

  printf("Er zitten %d control characters in de joke.", controlCharCount);

	return 0;
}
