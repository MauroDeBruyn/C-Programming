/*

Laat je programma van een "bell curve" maken van de ogen van een dobbelsteen.

Elke # staat voor dat er 10 keer een aantal ogen is gegooid.
De gebruiker kan zelf kiezen hoe vaak er met de dobbelsteen gegooid zal worden.
Hierna zal de bell curve geprint worden. Maak gebruik van de standaard of
afrondings regels (5 of hoger wordt afgerond naar een #)


bvb
1:#
2:##
3:####
4:##
5:#
6:#



*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(NULL));

  int dobbelsteen[6] = {0};
  int roll = 0;

  printf("Hoe vaak wil je met de dobbelstenen gooien: \n");
  (void) scanf("%d", &roll);

  for(int i = 0; i < roll; i++)
    {
      int randNum = rand() % 6;
      dobbelsteen[randNum] += 1;
    }

//max value voor bell curve
  int max = dobbelsteen[0];

  for(int i = 1; i < 6; i++)
    {
      if(dobbelsteen[i] > max)
      {
        max = dobbelsteen[i];
      }
    }

  //print bell curve
  for(int i = 0; i < 6; i++)
    {
      printf("%d: ", i + 1);

      int numSymbols = (dobbelsteen[i] * 10 + max -1 ) / max;

      for(int j = 0; j < numSymbols; j++)
        {
          printf("#");
        }
      printf("\n");
    }

  return 0;
}
