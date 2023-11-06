#include <stdio.h>

int main( void )
{
	// while loop
	printf( "\n+------------+\n| while loop |\n+------------+\n" );
	while( 0 )
	{
		printf( "while( 0 ) \t\t\t\t\t\t nope \t\t@ %d\n", __LINE__ );
	}

	while( 0 )
	{
		printf( "while( 1 ) \t\t\t\t\t\t fuck \t\t@ %d\n", __LINE__ );
	}

	int expression = 42;
	printf( "\nexpression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );
	while( expression )
	{
		printf( "while( %2d ) \t\t\t\t\t\t yup \t\t@ %d\n", expression, __LINE__ );
		expression--;
	}
	printf( "expression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	expression = 0;
	printf( "\nexpression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );
	while( expression < 42 )
	{
		printf( "while( %2d < 42 ) \t\t\t\t\t yup \t\t@ %d\n", expression, __LINE__ );
		expression++;
	}
	printf( "expression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	// do-while loop
	printf( "\n+---------------+\n| do-while loop |\n+---------------+\n" );
	printf( "\n" );
	do
	{
		printf( "do...while( 0 ) \t\t\t\t\t once \t\t@ %d\n", __LINE__ );
	} while( 0 );

	expression = 0;
	printf( "\nexpression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );
	do
	{
		printf( "do...while( %2d < 42 ) \t\t\t\t yup \t\t@ %d\n", expression, __LINE__ );
		expression++;
	} while( expression < 42 );
	printf( "expression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	// for loop
	printf( "\n+----------+\n| for loop |\n+----------+\n" );
	printf( "\n" );
	for( expression = 0; expression < 42; expression++ )
	{
		printf( "for( init ; %2d < 42 ; iteration ) \t yup \t\t@ %d\n", expression, __LINE__ );
	}
	printf( "expression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	printf( "\n" );
	for( expression = 1; expression < 42; expression += 2 )
	{
		printf( "for( init ; %2d < 42 ; it += 2 ) \t yup \t\t@ %d\n", expression, __LINE__ );
	}
	printf( "expression = %d; \t\t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	// loop in loop
	printf( "\n+--------------+\n| loop in loop |\n+--------------+\n" );
	for( int rij = 0; rij < 20; rij++ )
	{
		for( int kolom = 0; kolom < 60; kolom++ )
		{
			printf( "." );
		}
		printf( "\n" );
	}

	printf( "\n" );
	for( int rij = 0; rij < 20; rij++ )
	{
		for( int kolom = 0; kolom < 60; kolom++ )
		{
			printf( ( rij + kolom ) % 2 == 0 ? "#" : "_" );
		}
		printf( "\n" );
	}

	printf( "\n" );
	for( int rij = 0; rij < 20; rij++ )
	{
		for( int kolom = 0; kolom < 15; kolom++ )
		{
			printf( "%4d", rij * 15 + kolom );
		}
		printf( "\n" );
	}

	printf( "\n" );
	for( int rij = 0; rij < 20; rij++ )
	{
		for( int kolom = 0; kolom < 15; kolom++ )
		{
			printf( "%4d", rij + kolom * 20 );
		}
		printf( "\n" );
	}

	printf( "\n" );
	for( int y = -10; y < 10; y++ )
	{
		for( int x = -30; x < 30; x++ )
		{
			if( y == (int)( x * x * x / 512.0 - x * x / 64.0 - x / 1.5 + 1 ) )
			{
				printf( "#" );
			}
			else
			{
				printf( "." );
			}
		}
		printf( "\n" );
	}

	// break
	printf( "\n+-------+\n| break |\n+-------+\n" );
	while( 1 )
	{
		printf( "while( 1 ) \t\t\t\t\t\t oh noes ! \t@ %d\n", __LINE__ );
		break;
	}

	expression = 0;
	printf( "\nexpression = %d; \t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );
	while( expression < 42 )
	{
		printf( "while( %2d < 42 ) \t\t\t\t yup \t\t@ %d\n", expression, __LINE__ );
		if( expression > 16 )
		{
			break;
		}
		expression++;
	}
	printf( "expression = %d; \t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	for( int rij = 0; rij < 20; rij++ )
	{
		for( int kolom = 0; kolom < 60; kolom++ )
		{
			printf( "." );
			if( ( rij * kolom ) > 128 )
			{
				break;
			}
		}
		printf( "\n" );
	}

	// continue
	printf( "\n+----------+\n| continue |\n+----------+\n" );
	expression = 0;
	printf( "\nexpression = %d; \t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );
	while( expression < 42 )
	{
		printf( "while( %2d < 42 ) \t\t\t\t yup \t\t@ %d\n", expression, __LINE__ );
		expression++;
		if( expression > 16 && expression < 32 )
		{
			continue;
		}
		printf( "after if continue \t\t\t\t yup \t\t@ %d\n", __LINE__ );
	}
	printf( "expression = %d; \t\t\t\t\t \t\t@ %d\n", expression, __LINE__ );

	return 0;
}
