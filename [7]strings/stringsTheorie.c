#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( void )
{
	// Array of numbers
	char stringByNumbers[] = { 72, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100, 33, 0 };
	printf( "stringByNumbers = %s\n", stringByNumbers );
	getchar();

	// Array of characters
	char stringByCharacterLiterals[] = { 'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'm', 'e', '.', '\0' };
	printf( "stringByCharacterLiterals = %s\n", stringByCharacterLiterals );
	getchar();

	// String literal
	char stringLiterals[] = "Life should be,";
	printf( "stringLiterals = %s\n", stringLiterals );
	getchar();

	// Array of strings
	char stringArray[3][9] = { "fun", "for", "everyone" };
	printf( "stringArray = %s %s %s\n", stringArray[0], stringArray[1], stringArray[2] );
	getchar();

	// String length function
	char string[] = "Hogeschool";
	printf( "string = %s ; sizeof = %lu ; strlen = %lu\n", string, sizeof( string ), strlen( string ) );
	getchar();

	// String copy function
	// string = "PXL";
	strcpy( string, "PXL" );
	printf( "string = %s ; sizeof = %lu ; strlen = %lu\n", string, sizeof( string ), strlen( string ) );
	getchar();

	// String compare function
	// if( string == "PXL" )
	if( strcmp( string, "PXL" ) == 0 )
	{
		printf( "%s == \"PXL\"  --> strcmp = %d\n", string, strcmp( string, "PXL" ) );
	}
	if( strcmp( string, "XIOS" ) < 0 )
	{
		printf( "%s < \"XIOS\"  --> strcmp = %d\n", string, strcmp( string, "XIOS" ) );
	}
	if( strcmp( string, "PHL" ) > 0 )
	{
		printf( "%s > \"PHL\"  --> strcmp = %d\n", string, strcmp( string, "PHL" ) );
	}
	getchar();

	// read string
	char input[100];
	printf( "\nGeef eens wat tekst : " );
	(void)scanf( "%s", input );
	printf( "input = %s ; sizeof = %lu ; strlen = %lu\n", input, sizeof( input ), strlen( input ) );
	if( strlen( input ) >= 100 )
	{
		printf( "\nstring = %s ; sizeof = %lu ; strlen = %lu\n", string, sizeof( string ), strlen( string ) );
		printf( "\nstringArray = %s %s %s\n", stringArray[0], stringArray[1], stringArray[2] );
		printf( "stringLiterals = %s\n", stringLiterals );
		printf( "stringByCharacterLiterals = %s\n", stringByCharacterLiterals );
		printf( "stringByNumbers = %s\n", stringByNumbers );
	}
	getchar();

	// atoi = array to integer
	printf( "\nGeef eens een getal : " );
	(void)scanf( "%s", input );
	printf( "input = %s ; sizeof = %lu ; strlen = %lu ; input als integer = %d\n", input, sizeof( input ), strlen( input ), atoi( input ) );
	printf( "input als string + 1 = %s ; input als integer + 1 = %d\n", input + 1, atoi( input ) + 1 );
	getchar();

	// Put this in top when removing the last zero
	// char test[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	// printf( "test = %s\n\n", test );
	return 0;
}
