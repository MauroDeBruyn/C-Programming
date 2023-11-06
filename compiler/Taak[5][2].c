/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Schrijf een programma dat 2 getallen inleest en daarna optelt.
  Het resultaat print je uit.
*/

#include <stdio.h>

int main(void)
{
  int getal1 = 0;
  int getal2 = 0;
  int resultaat = 0;

  scanf("%d %d", &getal1, &getal2);

  resultaat = getal1 + getal2;
  printf("%d", resultaat);

  return 0;
}
