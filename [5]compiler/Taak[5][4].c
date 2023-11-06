/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Vroeger in het lageronderwijs hebben we leren hoofdrekenen. Ondertussen zijn jullie ouder en wijzer en kan je dit de computer voor je laten doen. Vraag aan de gebruiker een getal tussen 0 en 10. Print hiervan de tafel (De tafel van x)
*/

#include <stdio.h>

int main(void)
{
  int getal = 0;
  (void)scanf("%d", &getal);

  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", getal * i);
  }

  return 0;
}
