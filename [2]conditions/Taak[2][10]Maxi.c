/*
  Maak gebruik van de kennis die je de afgelopen weken geleerd hebt.
*/

#include <stdio.h>

int main(void) {

  int getal1 = 100;
  long int getal2 = 0;
  char character = '0';

  /* Vergelijk de grote van getal 1 en 2 */
  if (getal1 < getal2) {
    printf("DataType van getal 1 is groter dan getal 2\n");
  } else {
    printf("DataType van getal 2 is groter dan getal 1\n");
  }
  /* expression ? .. : .. */
  printf("Het karakter 0 heeft een grotere waarde dan 30?: %c\n", character > 30 ? 'J' : 'N');

  /* Maak de vergelijking werkend zodat de print statements kloppen */
  if (0xBED < 0xF00D) {
    printf("Eten is belangrijker dan slapen\n");
  } else {
    printf("Slapen is belangrijker dan eten\n");
  }

  return 0;
}
