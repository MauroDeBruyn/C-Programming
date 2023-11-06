/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Vandaag spelen we het spelletje hoger of lager in een corrupt casino.
  Het programma print een random getal tussen de 0 en 20. Hierna vraag het aan de speler of de volgende kaart hoger of lager is.
  Als de speler "L" van lager zegt dan zal het programma een random nummer blijven genereren totdat het hoger is dan is initieële waarde. Mocht de speler "H" van hoger ingeven dan is het andersom.

  Denk goed aan je uiterste waardes, want je kunt niet hoger dan 20 of lager dan 0 gaan. Dus dan speel je vals en zorg je dat die opnieuw 0 of 20 gokt.

  Eind goed al goed. "The house always wins ^-^"
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  int random_number = rand() % 20;
  int cheat = rand() % 20;
  char USER = 'A';

  scanf("%c", &USER);

  if(USER == 'L')
  {
    while(cheat > random_number)
      {
        cheat = rand() % 20;
      }
  }

  else if(USER == 'H')
  {
    while(cheat < random_number)
      {
        cheat = rand() % 20;
      }
  }

  else
  {
    printf("Unvalid input!");
  }

  printf("The house always wins ^-^");

  return 0;
}
