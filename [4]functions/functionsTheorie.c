#include <stdio.h>

// Function Declarations / Prototyping
void printLijn( void );
void printPXL( void );
void printVolgnummer( void );
void printGetal( int getal );
void printGetalAantalKeer( int getal, int aantal );
int geefAntwoord( void );
int vraagGetal( void );
int som( int alfa, int beta );
float afronden( float getal, int cijfers );
void veranderLocalWaarde( int local );
void veranderGlobalWaarde( void );

int defined_function_call( int value )
{
	printf( "defined_function_call( %d )\n", value++ );
	return value++;
}

int declared_function_call( int value );

int function_call( int value )
{
	printf( "function_call( %d )\n", value++ );
	defined_function_call( value++ );
	// undeclared_function_call( value++ );
	declared_function_call( value++ );
	return value++;
}

int undeclared_function_call( int value )
{
	printf( "undeclared_function_call( %d )\n", value++ );
	return value++;
}

int declared_function_call( int value )
{
	printf( "declared_function_call( %d )\n", value++ );
	return value++;
}

/*































*/
// Main Function

int global;

int main( void )
{
	// Function calls
	// Stateless / immutable function
	printLijn();
	printPXL();
	printLijn();

	// Statefull function
	printVolgnummer();
	printVolgnummer();
	printVolgnummer();
	printVolgnummer();
	printLijn();

	// Function with parameter (input)
	printGetal( 42 );
	printGetal( 69 );
	printGetal( 42 + 69 );
	int geheelGetal = 16;
	printGetal( geheelGetal );
	printLijn();

	// Function with multiple parameters (inputs)
	printGetalAantalKeer( 32, 8 );
	printLijn();

	// Function with return value (output)
	geheelGetal = geefAntwoord();
	printGetal( geheelGetal );
	geheelGetal = vraagGetal();
	printGetal( geheelGetal );
	geheelGetal = vraagGetal();
	printGetal( geheelGetal );
	printLijn();

	// Function with input and output
	geheelGetal = som( 42, 69 );
	printGetal( geheelGetal );
	printGetal( som( 1, 3 ) );
	geheelGetal = som( 32, som( 16, som( 8, 4 ) ) );
	printGetal( geheelGetal );
	printLijn();

	// Type in functions
	printf( "Kommagetal = %f\n", afronden( 42.069, 3 ) );
	printf( "Kommagetal = %f\n", afronden( 42.069, 2 ) );
	printf( "Kommagetal = %f\n", afronden( 42.069, 1 ) );
	printf( "Kommagetal = %f\n", afronden( 42.069, 0 ) );
	printLijn();

	// Scope of variables
	{
		int scope = 42;
		printf( "In scope = %d\n", scope );
	}
	// printf( "Out scope = %d\n", scope );
	for( int i = 0; i < 8; i++ )
	{
		printf( "In scope = %d\n", i );
	}
	// printf( "Out scope = %d\n", i );
	printLijn();

	// Local scope == stack variable
	int local = 64;
	printGetal( local );
	veranderLocalWaarde( local );
	printGetal( local );
	printLijn();

	// Program scope == global variable
	global = 256;
	printGetal( global );
	veranderLocalWaarde( global );
	printGetal( global );
	veranderGlobalWaarde();
	printGetal( global );
	printLijn();

	// Function declarations & prototyping
	int value = 1024;
	value = function_call( value++ );
	printGetal( value );
	printLijn();

	return 0;
}

/*































*/
// Function Definitions

void printLijn( void )
{
	printf( "----------------------------------------------------------------\n\n" );
}

void printPXL( void )
{
	printf( "PPPP  X   X  L   \n" );
	printf( "P   P  X X   L   \n" );
	printf( "PPPP    X    L   \n" );
	printf( "P      X X   L   \n" );
	printf( "P     X   X  LLLL\n" );
}

int volgnummer = 0;
void printVolgnummer( void )
{
	printf( "Volgnummer = %d\n", ++volgnummer );
}

void printGetal( int getal )
{
	printf( "Getal = %d\n", getal );
}

void printGetalAantalKeer( int getal, int aantal )
{
	for( int i = 0; i < aantal; i++ )
	{
		printGetal( getal );
	}
}

int geefAntwoord( void )
{
	return 42;
}

int vraagGetal( void )
{
	int getal;
	printf( "Geef een geheel getal : " );
	(void)scanf( "%d", &getal );
	return getal;
}

int som( int alfa, int beta )
{
	return alfa + beta;
}

float afronden( float getal, int cijfers )
{
	int product = 1;
	for( int i = 0; i < cijfers; i++ )
	{
		product *= 10;
	}
	getal *= product;
	getal += 0.5;
	getal = (int)getal;
	getal /= product;
	return getal;
}

void veranderLocalWaarde( int local )
{
	local = 128;
	printGetal( local );
}

void veranderGlobalWaarde( void )
{
	global = 512;
	printGetal( global );
}
