/*
  Maak het spel hoger lager waarbij een random geheel getal tussen 0 en 100 gegenereerd wordt en de gebruiker dit getal moet raden. Schrijf de game logic in een aparte functie genaamd hogerLagerSpel() die je oproept vanuit de main. Het return type van de functie
  hogerLagerSpel() dient een integer te zijn die aangeeft hoeveel pogingen nodig waren om het getal te raden.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hogerLagerSpel();

int main(void)
{
  hogerLagerSpel();
}

int hogerLagerSpel()
{
  srand(time(NULL));
  int getal = rand() % 100;
  int pogingen = 0;
  int gok = 0;

  while (gok != getal)
    {
      pogingen++;

      printf("Geef een getal in: ");
      (void)scanf( "%d", &gok );

      if (gok < getal)
      {
          printf("Hoger\n");
      }

      else if(gok > getal)
      {
        printf("Lager\n");
      }

      else
      {
        printf("Je hebt het goed geraden in %d pogingen!", pogingen);
      }
    }

  return pogingen;
}
