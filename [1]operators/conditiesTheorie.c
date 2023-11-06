#include <stdio.h>

int main( void )
{
	// Declaration & initialisation
	const int decimal = 42;       // initialized with Decimal Number Literal
	const int hexadecimal = 0x42; // initialized with Hexadecimal Number Literal
	const int octal = 042;         // initialized with Octal Number Literal
	printf( "Initialized     decimal = %8d\n", decimal );
	printf( "Initialized hexadecimal = %8d\n", hexadecimal );
	printf( "Initialized       octal = %8d\n", octal );
	int alfa = hexadecimal; // initialized with other value
	int beta;               // uninitialized
	printf( "Initialized        alfa = %8d\n", alfa );
	printf( "Initialized        beta = %8d\n", beta );
	beta = octal; // Direct assignment
	printf( "Initialized        beta = %8d\n\n", beta );

	// Declaration only (uninitialized)
	int som;
	int verschil;
	int product;
	int deling;
	int rest;

	// Arithmetic operators
	som = alfa + beta;      // Addition
	verschil = alfa - beta; // Subtraction
	product = alfa * beta;  // Multiplication
	deling = alfa / beta;   // Division
	rest = alfa % beta;     // Modulo

	printf( "alfa + beta   = %d + %d = %8d   = som\n", alfa, beta, som );
	printf( "alfa - beta   = %d - %d = %8d   = verschil\n", alfa, beta, verschil );
	printf( "alfa * beta   = %d * %d = %8d   = product\n", alfa, beta, product );
	printf( "alfa / beta   = %d / %d = %8d   = deling\n", alfa, beta, deling );
	printf( "alfa %% beta   = %d %% %d = %8d   = rest\n\n", alfa, beta, rest );

	// Assignment operators
	alfa = decimal;   // Direct assignment
	som += alfa;      // Addition assignment
	verschil -= alfa; // Subtraction assignment
	product *= alfa;  // Multiplication assignment
	deling /= alfa;   // Division assignment
	rest %= alfa;     // Modulo assignment

	printf( "alfa = decimal          = %8d\n", alfa );
	printf( "som += alfa             = %8d\n", som );
	printf( "verschil -= alfa        = %8d\n", verschil );
	printf( "product *= alfa         = %8d\n", product );
	printf( "deling /= alfa          = %8d\n", deling );
	printf( "rest %%= alfa            = %8d\n\n", rest );

	// Increment and decrement operators
	printf( "Values                alfa    beta\n" );
	beta = alfa; // Direct assignment
	printf( "beta = alfa;    -->   %4d    %4d\n", alfa, beta );
	beta = alfa++; // Postfix increment
	printf( "beta = alfa++;  -->   %4d    %4d\n", alfa, beta );
	beta = ++alfa; // Prefix increment
	printf( "beta = ++alfa;  -->   %4d    %4d\n", alfa, beta );
	beta = alfa--; // Postfix decrement
	printf( "beta = alfa--;  -->   %4d    %4d\n", alfa, beta );
	beta = --alfa; // Prefix decrement
	printf( "beta = --alfa;  -->   %4d    %4d\n\n", alfa, beta );

	// scanf("%d", &alfa);
	// Operator Precedence & Associativity & bigger Expressions
	int expression = -1 + ( som * ( product % rest ) + deling ) / ( alfa - 0xb ) + 007; // step 0
	printf( "expression  {step 0}    = %8d\n", expression );
	expression /= expression; // step 1
	printf( "expression  {step 1}    = %8d\n", expression );
	expression--; // step 2
	printf( "expression  {step 2}    = %8d\n", expression );
	expression = 10000 / expression; // step 3
	printf( "expression  {step 3}    = %8d\n", expression );
	expression = 42 + ( 10000 / expression ) + 42; // step 4
	printf( "expression  {step 4}    = %8d\n", expression );
	expression += 10000; // step 5
	printf( "expression  {step 5}    = %8d\n", expression );
	expression = alfa; // step 6
	printf( "expression  {step 6}    = %8d\n\n", expression );

	// Type Casting & Implicit Conversions
	alfa = hexadecimal;
	beta = octal;
	float kommagetal = 42; // step 1
	printf( "kommagetal  {step 1}    = %8d\n", kommagetal );
	kommagetal = 1.23456; // step 2
	printf( "kommagetal  {step 2}    = %8.6f\n", kommagetal );
	kommagetal = alfa / beta; // step 3
	printf( "kommagetal  {step 3}    = %8.6f\n", kommagetal );
	kommagetal = (float)alfa / beta; // step 4
	printf( "kommagetal  {step 4}    = %8.6f\n", kommagetal );
	kommagetal = alfa / (float)beta; // step 5
	printf( "kommagetal  {step 5}    = %8.6f\n", kommagetal );
	kommagetal = (float)alfa / (float)( beta - beta ); // step 6
	printf( "kommagetal  {step 6}    = %8.6f\n\n", kommagetal );

	return 0;
}
