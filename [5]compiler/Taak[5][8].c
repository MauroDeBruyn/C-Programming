/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Maak een functie een random getal tussen 0 en 10 genereerd. Laat hierna de gebruiker 5 keer proberen om het getal te raden. Bij elke poging zeg je "Hoger" of "Lager". Als de gebruiker het juist heeft dan zeg je dat het "correct" geraden is.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  srand(time(NULL));
  int random_number = rand() % 10;
  int USER = 0;

  for(int i = 0; i < 5; i++)
    {
      scanf("%d", &USER);

      if(USER == random_number)
      {
        printf("correct\n");
        break;
      }

      else if(USER < random_number)
      {
        printf("Hoger\n");
      }

      else
      {
        printf("Lager\n");
      }
    }

  return 0;
}
