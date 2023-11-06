/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Vraag aan de gebruiker een getal. Gebruik dit getal in een do ... while functie om een x aantal keren het woord "vakantie" af te printen.
*/

#include <stdio.h>

int main(void)
{
  int getal = 0;
  scanf("%d", &getal);

  do
  {
    printf("vakantie\n");

    getal++;
  }while(getal > 0);

  return 0;
}
