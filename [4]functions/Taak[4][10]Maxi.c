/*
  In een comedy show wordt er een grap gemaakt in halloween thema.

  Maak de volgende opbouw in je programma:

  De comedian vraagt eerst of het publiek nog een grap wilt horen.
  - Personen zullen "random" antwoorden. Afhankelijk of er eerst 10 keer ja of
  nee is geantwoord, zal er het volgende gebeuren.

  - Indien ja: Verteld de comedian zijn grap
  - Indien nee: "Bone drop"

  De Ascii art is voorzien. Zorg dat deze apart hun eigen functies krijgen,
  vergeet ze ook niet te declaren.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAsciiJa(void);
void printAsciiNee(void);

int main(void) {
  int ja = 0;
  int nee = 0;
  int randAntwoord = 0;

  srand(time(NULL));

  printf("Willen jullie nog een grap horen?(J of N) \n");
  // Schrijf een lus om de random antwoorden te generen
  while(ja < 10 && nee < 10)
    {

      randAntwoord = rand() % 2;

      if(randAntwoord == 0)
      {
        nee++;
      }
      else
      {
        ja++;
      }
    }

  // Check of er eerder 10 ja's of nee's zijn gezegd
  if(ja > nee)
  {
    printf("Wat is een skelet zijn favoriete snack\n");
    // Print Ascii
    printAsciiJa();
  }

  else
  {
    printAsciiNee();
  }

}

// Ascii art

void printAsciiJa(void)
{
  // JA
  printf("   _____                                 _ __        \n");
  printf("  / ___/____  ____  ________       _____(_) /_  _____\n");
  printf("  \\__ \\/ __ \\/ __ `/ ___/ _ \\     / ___/ / __ \\/ ___/\n");
  printf(" ___/ / /_/ / /_/ / /  /  __/    / /  / / /_/ (__  ) \n");
  printf("/____/ .___/\\__,_/_/   \\___/    /_/  /_/_.___/____/  \n");
  printf("    /_/\n");

}

void printAsciiNee(void)
{
  // NEE
  printf(" _       _\n");
  printf("(_'-----'_)\n");
  printf("(_.'\"\"\"\"._)\n");
}

// DISCLAIMER: Het is logisch dat je slechts 1 test slaagd!
