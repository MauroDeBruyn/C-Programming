/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Maak gebruik van een while functie in het volgende programma. Je staat aan een zebrapad en zou graag willen oversteken, hoe vaak kijk je "Links & Rechts"?  Uit automatisme kijk je altijd 1 keer, maar hoe vaak extra hangt van de gebruiker af. Print de tekst elke keer als je kijk.
*/

#include <stdio.h>

int main(void)
{
  int USER = 0;
  int c = 0;

  scanf("%d", &USER);

  while(c <= USER)
    {
      printf("Links & Rechts\n");
      c++;
    }

  return 0;
}
