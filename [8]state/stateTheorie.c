#include <stdio.h>

void stateMachine( void );

int main( void )
{
	// if ... with a lot of else ifs
	int expression = 2;
	if( expression == 1 )
	{
		printf( "if( expression == 1 )                           \t @ %d\n", __LINE__ );
	}
	else if( expression == 2 )
	{
		printf( "else if( expression == 2 )                      \t @ %d\n", __LINE__ );
	}
	else if( expression == 3 )
	{
		printf( "else if( expression == 3 )                      \t @ %d\n", __LINE__ );
	}
	else if( expression == 4 )
	{
		printf( "else if( expression == 4 )                      \t @ %d\n", __LINE__ );
	}
	else
	{
		printf( "else                                            \t @ %d\n", __LINE__ );
	}

	// Switch ... case
	switch( expression )
	{
	case 1:
		printf( "case 1:                                         \t @ %d\n", __LINE__ );
		break;
	case 2:
		printf( "case 2:                                         \t @ %d\n", __LINE__ );
		break;
	case 3:
		printf( "case 3:                                         \t @ %d\n", __LINE__ );
		break;
	case 4:
		printf( "case 4:                                         \t @ %d\n", __LINE__ );
		break;
	default:
		printf( "default:                                        \t @ %d\n", __LINE__ );
	}
	getchar();

	// Switch fall-through
	switch( 3 )
	{
	case 1:
		printf( "case 1:                                         \t @ %d\n", __LINE__ );
	case 2:
		printf( "case 2:                                         \t @ %d\n", __LINE__ );
	case 3:
		printf( "case 3:                                         \t @ %d\n", __LINE__ );
	case 4:
		printf( "case 4:                                         \t @ %d\n", __LINE__ );
	default:
		printf( "default:                                        \t @ %d\n", __LINE__ );
	}
	getchar();

	// Switch joined cases
	switch( 3 )
	{
	case 1:
	case 2:
		printf( "case 1 or 2:                                    \t @ %d\n", __LINE__ );
		break;
	case 3:
	case 4:
		printf( "case 3 or 4:                                    \t @ %d\n", __LINE__ );
		break;
	default:
		printf( "default:                                        \t @ %d\n", __LINE__ );
	}
	getchar();

	// Enumeration type
	enum identifier
	{
		ALFA,
		BETA,
		GAMMA
	} variable;
	variable = ALFA;
	printf( "enum identifier variable = %d\n", variable );
	getchar();

	variable = BETA;
	printf( "enum identifier variable = %d\n", variable );
	getchar();

	switch( variable )
	{
	case ALFA:
		printf( "case ALFA:                                      \t @ %d\n", __LINE__ );
		break;
	case BETA:
		printf( "case BETA:                                      \t @ %d\n", __LINE__ );
		break;
	case GAMMA:
		printf( "case GAMMA:                                     \t @ %d\n", __LINE__ );
		break;
	default:
		printf( "default:                                        \t @ %d\n", __LINE__ );
	}
	getchar();

	// Enumeration with values
	enum eurobankbiljet
	{
		GRIJS = 5,
		ROOD = 10,
		BLAUW = 20,
		ORANJE = 50,
		GROEN = 100,
		GEEL_BRUIN = 200,
		PAARS = 500
	};
	enum eurobankbiljet briefje = GEEL_BRUIN;
	printf( "enum eurobankbiljet briefje = %d\n", briefje );
	getchar();

	briefje = ORANJE;
	printf( "enum eurobankbiljet briefje = %d\n", briefje );
	getchar();

	briefje = GRIJS;
	printf( "enum eurobankbiljet briefje = %d\n", briefje );
	getchar();

	printf( "Som = %d\n", BLAUW + BLAUW + GRIJS + ORANJE + 3 * PAARS );
	getchar();

	stateMachine();

	return 0;
}

enum state
{
	STATE_1,
	STATE_2,
	STATE_3,
	STATE_4,
	STATE_5
};

void stateMachine( void )
{
	enum state huidigeStatus = STATE_1;
	int counter = 0;
	while( huidigeStatus != STATE_5 )
	{
		switch( huidigeStatus )
		{
		case STATE_1:
			printf( "State 1 (%d)\n", counter );
			counter++;
			if( counter % 5 == 0 )
			{
				huidigeStatus = STATE_2;
			}
			break;
		case STATE_2:
			printf( "State 2 (%d)\n", counter );
			counter *= 2;
			if( counter == 42 )
			{
				huidigeStatus = STATE_5;
			}
			else if( counter > 42 )
			{
				huidigeStatus = STATE_3;
			}
			break;
		case STATE_3:
			printf( "State 3 (%d)\n", counter );
			counter /= 3;
			if( counter > 24 )
			{
				huidigeStatus = STATE_1;
			}
			else
			{
				huidigeStatus = STATE_4;
			}
			break;
		case STATE_4:
			printf( "State 4 (%d)\n", counter );
			counter--;
			if( counter % 3 == 0 )
			{
				huidigeStatus = STATE_2;
			}
			break;
		default:
			printf( "Oh no ! Our state machine is broken !\n" );
			break;
		}
		// getchar();
	}
	printf( "Result == %d\n", counter );
}
