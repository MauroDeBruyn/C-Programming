/*
  Compileer de code via commandline en noem het ouput bestand main.exe

 Schrijf een aparte functie dat de macht berekend van een bepaald getal.
 Gebruiker zal het getal en de macht opgegeven. (Gebruik geen MATH library, maar wel juist gebruikte iteratie functies)

 bv:
 2 5
 output:
 32
*/

#include <stdio.h>

int power(int base, int exp);

int main(void)
{
  int base = 0;
  int exp = 0;

  scanf("%d %d", &base, &exp);
  printf("%d", power(base, exp));

  return 0;
}

int power(int base, int exp)
{
  int result = 1;
  for(int i = 0; i < exp; i++)
    {
      result *= base;
    }

  return result;
}
