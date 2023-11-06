#include <stdio.h>

int main( void )
{
	// if statements
	printf( "\n+---------------+\n| if statements |\n+---------------+\n\n" );
	if( 0 )
	{
		printf( "if( 0 ) \t nope @ %d\n", __LINE__ );
	}

	if( 1 )
	{
		printf( "if( 1 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( 2 )
	{
		printf( "if( 2 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( 100 )
	{
		printf( "if( 100 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( -1 )
	{
		printf( "if( -1 ) \t yup @ %d\n\n", __LINE__ );
	}

	// Comparison operators
	printf( "\n+----------------------+\n| Comparison operators |\n+----------------------+\n\n" );
	int expression = 0;
	if( expression )
	{
		printf( "expression = 0; if( expression )      \t yup @ %d\n\n", __LINE__ );
	}

	expression = 1;
	if( expression )
	{
		printf( "expression = 1; if( expression )      \t yup @ %d\n\n", __LINE__ );
	}

	expression = 0;
	if( 0 == expression )
	{
		printf( "expression = 0; if( 0 == expression ) \t yup @ %d\n\n", __LINE__ );
	}

	expression = 0;
	if( expression == 0 )
	{
		printf( "expression = 0; if( expression == 0 ) \t yup @ %d\n\n", __LINE__ );
	}

	int alfa = 42;
	int beta = 42;
	int gamma = 100;

	if( alfa == beta )
	{
		printf( "if( alfa == beta )  \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa != beta )
	{
		printf( "if( alfa != beta )  \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa > beta )
	{
		printf( "if( alfa > beta )   \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa < beta )
	{
		printf( "if( alfa < beta )   \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa >= beta )
	{
		printf( "if( alfa >= beta )  \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa <= beta )
	{
		printf( "if( alfa <= beta )  \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa == gamma )
	{
		printf( "if( alfa == gamma ) \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa != gamma )
	{
		printf( "if( alfa != gamma ) \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa > gamma )
	{
		printf( "if( alfa > gamma )  \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa < gamma )
	{
		printf( "if( alfa < gamma )  \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa >= gamma )
	{
		printf( "if( alfa >= gamma ) \t nope @ %d\n\n", __LINE__ );
	}

	if( alfa <= gamma )
	{
		printf( "if( alfa <= gamma ) \t yup @ %d\n\n", __LINE__ );
	}

	if( gamma == beta )
	{
		printf( "if( gamma == beta ) \t nope @ %d\n\n", __LINE__ );
	}

	if( gamma != beta )
	{
		printf( "if( gamma != beta ) \t yup @ %d\n\n", __LINE__ );
	}

	if( gamma > beta )
	{
		printf( "if( gamma > beta )  \t yup @ %d\n\n", __LINE__ );
	}

	if( gamma < beta )
	{
		printf( "if( gamma < beta )  \t nope @ %d\n\n", __LINE__ );
	}

	if( gamma >= beta )
	{
		printf( "if( gamma >= beta ) \t yup @ %d\n\n", __LINE__ );
	}

	if( gamma <= beta )
	{
		printf( "if( gamma <= beta ) \t nope @ %d\n\n", __LINE__ );
	}

	// if...else statements
	printf( "\n+----------------------+\n| if...else statements |\n+----------------------+\n\n" );
	expression = 0;
	if( expression )
	{
		printf( "expression = 0; if( expression )                \t nope @ %d\n\n", __LINE__ );
	}
	else
	{
		printf( "expression = 0; if( expression ) ... else       \t yup @ %d\n\n", __LINE__ );
	}

	expression = 0;
	if( expression == 1 )
	{
		printf( "if                                              \t nope @ %d\n\n", __LINE__ );
	}
	else if( expression == 2 )
	{
		printf( "if ... else if                                  \t nope @ %d\n\n", __LINE__ );
	}
	else
	{
		printf( "if ... else if ... else                         \t yup @ %d\n\n", __LINE__ );
	}

	expression = 0;
	if( expression == 1 )
	{
		printf( "if                                              \t nope @ %d\n\n", __LINE__ );
	}
	else if( expression == 2 )
	{
		printf( "if ... else if                                  \t nope @ %d\n\n", __LINE__ );
	}
	else if( expression == 3 )
	{
		printf( "if ... else if ... else if                      \t nope @ %d\n\n", __LINE__ );
	}
	else if( expression == 0 )
	{
		printf( "if ... else if ... else if  ... else if         \t yup @ %d\n\n", __LINE__ );
	}
	else
	{
		printf( "if ... else if ... else if ... else if ... else \t nope @ %d\n\n", __LINE__ );
	}

	// Conditional (ternary) operator
	printf( "\n+----------------------+\n| Conditional operator |\n+----------------------+\n\n" );
	expression = 0;
	printf( "expression = 0; expression ? 1 : 2  == %d \t @ %d\n\n", expression ? 1 : 2, __LINE__ );

	expression = 1;
	printf( "expression = 1; expression ? 1 : 2  == %d \t @ %d\n\n", expression ? 1 : 2, __LINE__ );

	expression = -42;
	printf( "expression = -42; expression < 0 ? -expression : expression == %d \t @ %d\n\n", expression < 0 ? -expression : expression, __LINE__ );

	printf( "alfa > beta ? alfa : beta  == %d \t @ %d\n\n", alfa > beta ? alfa : beta, __LINE__ );

	int delta = alfa > beta ? alfa > gamma ? alfa : gamma : beta > gamma ? beta : gamma;
	printf( "delta == %d \t @ %d\n\n", delta, __LINE__ );

	delta = ( alfa > beta ) ? ( alfa > gamma ? alfa : gamma ) : ( beta > gamma ? beta : gamma );
	printf( "delta == %d \t @ %d\n\n", delta, __LINE__ );

	// Logical operators
	printf( "\n+-------------------+\n| Logical operators |\n+-------------------+\n\n" );
	int lhs;
	int rhs;

	expression = 0;
	if( !expression )
	{
		printf( "expression = 0; if( ! expression ) \t yup @ %d\n\n", __LINE__ );
	}

	expression = 1;
	if( !expression )
	{
		printf( "expression = 1; if( ! expression ) \t nope @ %d\n\n", __LINE__ );
	}

	lhs = 0;
	rhs = 0;
	if( lhs && rhs )
	{
		printf( "lhs = 0; rhs = 0; if( lhs && rhs ) \t nope @ %d\n\n", __LINE__ );
	}

	lhs = 0;
	rhs = 1;
	if( lhs && rhs )
	{
		printf( "lhs = 0; rhs = 1; if( lhs && rhs ) \t nope @ %d\n\n", __LINE__ );
	}

	lhs = 1;
	rhs = 0;
	if( lhs && rhs )
	{
		printf( "lhs = 1; rhs = 0; if( lhs && rhs ) \t nope @ %d\n\n", __LINE__ );
	}

	lhs = 1;
	rhs = 1;
	if( lhs && rhs )
	{
		printf( "lhs = 1; rhs = 1; if( lhs && rhs ) \t yup @ %d\n\n", __LINE__ );
	}

	lhs = 0;
	rhs = 0;
	if( lhs || rhs )
	{
		printf( "lhs = 0; rhs = 0; if( lhs || rhs ) \t nope @ %d\n\n", __LINE__ );
	}

	lhs = 0;
	rhs = 1;
	if( lhs || rhs )
	{
		printf( "lhs = 0; rhs = 1; if( lhs || rhs ) \t yup @ %d\n\n", __LINE__ );
	}

	lhs = 1;
	rhs = 0;
	if( lhs || rhs )
	{
		printf( "lhs = 1; rhs = 0; if( lhs || rhs ) \t yup @ %d\n\n", __LINE__ );
	}

	lhs = 1;
	rhs = 1;
	if( lhs || rhs )
	{
		printf( "lhs = 1; rhs = 1; if( lhs || rhs ) \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa == 42 && beta == 42 && gamma == 100 )
	{
		printf( "if( alfa == 42 && beta == 42 && gamma == 100 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa == 100 || beta == 42 || gamma == 42 )
	{
		printf( "if( alfa == 100 || beta == 42 || gamma == 42 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( alfa == 100 || alfa == 69 || alfa == 42 )
	{
		printf( "if( alfa == 100 || alfa == 69 || alfa == 42 ) \t yup @ %d\n\n", __LINE__ );
	}

	if( !( alfa == 100 || beta == 100 ) && gamma == 100 )
	{
		printf( "if( !( alfa == 100 || beta == 100 ) && gamma == 100 ) \t yup @ %d\n\n", __LINE__ );
	}

	return 0;
}
