/*
  Schrijf een programma dat een zin inleest. Deze opsplitst in aparte woorden en opslaat in een nieuwe   variable. Hierna print je het 4de, 6de en 9de woord af.

*/



#include <stdio.h>
#include <string.h>

#define WORDLENGTH 50
#define SENTENCELENGTH 15


int main(void)
{
  //fill array with 0
  char zin[WORDLENGTH][SENTENCELENGTH];

  for(int i = 0; i < WORDLENGTH; i++)
    {
      for(int j = 0; j < SENTENCELENGTH; j++)
        {
          zin[i][j] = 0;
        }
    }

  //put user input into array
  char userInput[WORDLENGTH * SENTENCELENGTH];
  int wordCount = 0;
  int wordIndex = 0;

  fgets(userInput, sizeof(userInput), stdin);

  for(int i = 0; i < strlen(userInput); i++)
    {
      if(userInput[i] == ' ')
      {
        wordCount++;
        wordIndex = i;
      }
      zin[wordCount][i - (wordIndex + 1)] = userInput[i];
    }
    //print test results from array
  printf("%s %s %s", zin[3], zin[5], zin[8]);

  return 0;
}
