#include <stdio.h>
#include <limits.h>
#include <stdint.h>

#define INT_VALUE 12345678901234567890UL
#define WIDTH "20"
#define FLOAT_VALUE 1234567890.123456789012345678901234567890L
#define PRECISION "40"

int main( void )
{
	//// INTEGERS ////
	// 8-bit
	char charVar = INT_VALUE;
	signed char signedCharVar = INT_VALUE;
	unsigned char unsignedCharVar = INT_VALUE;
	// 16-bit
	short shortVar = INT_VALUE;
	short int shortIntVar = INT_VALUE;
	signed short signedShortVar = INT_VALUE;
	signed short int signedShortIntVar = INT_VALUE;
	unsigned short unsignedShortVar = INT_VALUE;
	unsigned short int unsignedShortIntVar = INT_VALUE;
	// 32-bit
	int intVar = INT_VALUE;
	signed signedVar = INT_VALUE;
	signed int signedIntVar = INT_VALUE;
	unsigned unsignedVar = INT_VALUE;
	unsigned int unsignedIntVar = INT_VALUE;
	// 32-bit on Windows and 64-bit on Linux (x86_64)
	long longVar = INT_VALUE;
	long int longIntVar = INT_VALUE;
	signed long signedLongVar = INT_VALUE;
	signed long int signedLongIntVar = INT_VALUE;
	unsigned long unsignedLongVar = INT_VALUE;
	unsigned long int unsignedLongIntVar = INT_VALUE;
	// 64-bit
	long long longLongVar = INT_VALUE;
	long long int longLongIntVar = INT_VALUE;
	signed long long signedLongLongVar = INT_VALUE;
	signed long long int signedLongLongIntVar = INT_VALUE;
	unsigned long long unsignedLongLongVar = INT_VALUE;
	unsigned long long int unsignedLongLongIntVar = INT_VALUE;

	//// FLOATING POINTS ////
	// 32-bit
	float floatVar = FLOAT_VALUE;
	// 64-bit
	double doubleVar = FLOAT_VALUE;
	// extended precision
	long double longDoubleVar = FLOAT_VALUE;

	printf( "\n+----------+\n| INTEGERS |\n+----------+\n"
	        "size = %d value = %" WIDTH "hhd type = char\n"
	        "size = %d value = %" WIDTH "hhd type = signed char\n"
	        "size = %d value = %" WIDTH "hhu type = unsigned char\n"
	        "size = %d value = %" WIDTH "hd type = short\n"
	        "size = %d value = %" WIDTH "hd type = short int\n"
	        "size = %d value = %" WIDTH "hd type = signed short\n"
	        "size = %d value = %" WIDTH "hd type = signed short int\n"
	        "size = %d value = %" WIDTH "hu type = unsigned short\n"
	        "size = %d value = %" WIDTH "hu type = unsigned short int\n"
	        "size = %d value = %" WIDTH "ld type = int\n"
	        "size = %d value = %" WIDTH "ld type = signed\n"
	        "size = %d value = %" WIDTH "ld type = signed int\n"
	        "size = %d value = %" WIDTH "lu type = unsigned\n"
	        "size = %d value = %" WIDTH "lu type = unsigned int\n"
	        "size = %d value = %" WIDTH "ld type = long\n"
	        "size = %d value = %" WIDTH "ld type = long int\n"
	        "size = %d value = %" WIDTH "ld type = signed long\n"
	        "size = %d value = %" WIDTH "ld type = signed long int\n"
	        "size = %d value = %" WIDTH "lu type = unsigned long\n"
	        "size = %d value = %" WIDTH "lu type = unsigned long int\n"
	        "size = %d value = %" WIDTH "lld type = long long\n"
	        "size = %d value = %" WIDTH "lld type = long long int\n"
	        "size = %d value = %" WIDTH "lld type = signed long long\n"
	        "size = %d value = %" WIDTH "lld type = signed long long int\n"
	        "size = %d value = %" WIDTH "llu type = unsigned long long\n"
	        "size = %d value = %" WIDTH "llu type = unsigned long long int\n",
	        sizeof( charVar ), charVar, sizeof( signedCharVar ), signedCharVar, sizeof( unsignedCharVar ), unsignedCharVar, sizeof( shortVar ), shortVar, sizeof( shortIntVar ), shortIntVar, sizeof( signedShortVar ), signedShortVar,
	        sizeof( signedShortIntVar ), signedShortIntVar, sizeof( unsignedShortVar ), unsignedShortVar, sizeof( unsignedShortIntVar ), unsignedShortIntVar, sizeof( intVar ), intVar, sizeof( signedVar ), signedVar, sizeof( signedIntVar ), signedIntVar,
	        sizeof( unsignedVar ), unsignedVar, sizeof( unsignedIntVar ), unsignedIntVar, sizeof( longVar ), longVar, sizeof( longIntVar ), longIntVar, sizeof( signedLongVar ), signedLongVar, sizeof( signedLongIntVar ), signedLongIntVar,
	        sizeof( unsignedLongVar ), unsignedLongVar, sizeof( unsignedLongIntVar ), unsignedLongIntVar, sizeof( longLongVar ), longLongVar, sizeof( longLongIntVar ), longLongIntVar, sizeof( signedLongLongVar ), signedLongLongVar,
	        sizeof( signedLongLongIntVar ), signedLongLongIntVar, sizeof( unsignedLongLongVar ), unsignedLongLongVar, sizeof( unsignedLongLongIntVar ), unsignedLongLongIntVar );

	printf( "\n+----------------+\n| FLOATING POINT |\n+----------------+\n"
	        "size = %2d value = %" WIDTH "." PRECISION "f type = float\n"
	        "size = %2d value = %" WIDTH "." PRECISION "lf type = double\n"
	        "size = %2d value = %" WIDTH "." PRECISION "Lf type = long double\n",
	        sizeof( floatVar ), floatVar, sizeof( doubleVar ), doubleVar, sizeof( longDoubleVar ), longDoubleVar );

	printf( "\n+--------+\n| LIMITS |\n+--------+\n"
	        "CHAR_MIN  = %20d \t\t CHAR_MAX   = %20d \n"
	        "SCHAR_MIN = %20d \t\t SCHAR_MAX  = %20d \n"
	        "            %20d \t\t UCHAR_MAX  = %20u \n"
	        "SHRT_MIN  = %20d \t\t SHRT_MAX   = %20d \n"
	        "            %20d \t\t USHRT_MAX  = %20u \n"
	        "INT_MIN   = %20d \t\t INT_MAX    = %20d \n"
	        "            %20d \t\t UINT_MAX   = %20u \n"
	        "LONG_MIN  = %20lld \t\t LONG_MAX   = %20lld \n"
	        "            %20lld \t\t ULONG_MAX  = %20llu \n"
	        "LLONG_MIN = %20lld \t\t LLONG_MAX  = %20lld \n"
	        "            %20lld \t\t ULLONG_MAX = %20llu \n",
	        CHAR_MIN, CHAR_MAX, SCHAR_MIN, SCHAR_MAX, 0, UCHAR_MAX, SHRT_MIN, SHRT_MAX, 0, USHRT_MAX, INT_MIN, INT_MAX, 0, UINT_MAX, LONG_MIN, LONG_MAX, 0, ULONG_MAX, LLONG_MIN, LLONG_MAX, 0, ULLONG_MAX );

	//// STDINT ////
	// 8-bit
	int8_t int8_tVar = INT_VALUE;
	uint8_t uint8_tVar = INT_VALUE;
	int16_t int16_tVar = INT_VALUE;
	uint16_t uint16_tVar = INT_VALUE;
	int32_t int32_tVar = INT_VALUE;
	uint32_t uint32_tVar = INT_VALUE;
	int64_t int64_tVar = INT_VALUE;
	uint64_t uint64_tVar = INT_VALUE;

	printf( "\n+--------+\n| STDINT |\n+--------+\n"
	        "size = %d value = %" WIDTH "hhd type = int8_t\n"
	        "size = %d value = %" WIDTH "hhu type = uint8_t\n"
	        "size = %d value = %" WIDTH "hd type = int16_t\n"
	        "size = %d value = %" WIDTH "hu type = uint16_t\n"
	        "size = %d value = %" WIDTH "ld type = int32_t\n"
	        "size = %d value = %" WIDTH "lu type = uint32_t\n"
	        "size = %d value = %" WIDTH "lld type = int64_t\n"
	        "size = %d value = %" WIDTH "llu type = uint64_t\n",
	        sizeof( int8_tVar ), int8_tVar, sizeof( uint8_tVar ), uint8_tVar, sizeof( int16_tVar ), int16_tVar, sizeof( uint16_tVar ), uint16_tVar, sizeof( int32_tVar ), int32_tVar, sizeof( uint32_tVar ), uint32_tVar, sizeof( int64_tVar ), int64_tVar,
	        sizeof( uint64_tVar ), uint64_tVar );

	uint32_t temp = *( (uint64_t *)( (void *)&floatVar ) );
	printf( "\n+-------------+\n| HEXADECIMAL |\n+-------------+\n"
	        " 8-bit hex = %#018hhx\n"
	        "16-bit hex = %#018hx\n"
	        "32-bit hex = %#018x\n"
	        "64-bit hex = %#018llx\n"
	        "int hex    = %#010x\n"
	        "float hex  = %#010a\n",
	        INT_VALUE, INT_VALUE, INT_VALUE, INT_VALUE, temp, floatVar );

	return 0;
}
