/*
  Compileer de code via commandline en noem het ouput bestand main.exe

  Maak gebruik van Continue of Break in je volgend programma. Laat de gebruiker een start en stop waarde ingeven. Check eerst dat de stopwaarde groter is je dan de startwaarde. Hierna gaan we in stappen van 3 tellen van start naar stop. Zorg ervoor dat je laatste waarde nooit groter is dan de stopwaarde.
  Zorg ervoor dat je over elke waarde tussen start en stop heen ittereert, maar enkel de +3 afprint.

  bv:
  Startwaarde = 8
  Stopwaarde = 15

  Output:
  8
  11
  14
*/

#include <stdio.h>

int main(void)
{
  int startWaarde = 0;
  int stopWaarde = 0;

  scanf("%d %d", &startWaarde, &stopWaarde);

  while (startWaarde <= stopWaarde)
    {
      printf("%d\n", startWaarde);
      startWaarde += 3;

      if (startWaarde > stopWaarde)
      {
        break;
      }
    }

  return 0;
}
