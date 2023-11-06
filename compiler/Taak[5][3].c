/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Schrijf een programma dat gebruik maakt van de if else functie. Controleer of het ingegeven getal deelbaar is door 10. (rest = 0). Indien deelbaar print "Ja", anders "Nee".
*/

#include <stdio.h>

int main(void)
{
  int getal = 0;

  (void)scanf("%d", &getal);

  if(getal % 10 == 0)
  {
    printf("Ja");
  }

  else
  {
    printf("Nee");
  }

  return 0;
}
