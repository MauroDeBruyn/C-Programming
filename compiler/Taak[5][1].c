/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Zorg ervoor dat allemaal variabelen juist geïnitialiseerd zijn.
*/

#include <stdint.h>
#include <stdio.h>

char woord[] = "The";
float kommaGetal = 3.14;
int getal = 73;
int getal2 = 83;
unsigned long hexaGetal = 0xDEAD;

int main(void) {

  printf("%s %.2lf %c%c %lx\n", woord, kommaGetal, getal, getal2, hexaGetal);

  return 0;
}
