/*
Print de tekst verborgen in de hexidecimale variabelen. De vars zijn 64 bit.
Print de 1'n als # en de 0'en als een spatie

*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(void)
{
  uint64_t Tekst[32] = {
      0x1F800000000000 , 0x1057C211878000 , 0x10510212480000  , 0x10510214278000 ,
      0x105102D7E04000 , 0x10510334284000 , 0x1F910214278000 , 0x0 , 0x0 ,
      0x1F3F0000000000 , 0x10A00000000000 , 0x10BE0000000000 , 0x10A00000000000 ,
      0x10A00000000000 , 0x1F3F0000000000 , 0x0 , 0x0 , 0x100C18F9E7DF80 ,
      0x10122422011000 , 0x10214221E11F00 , 0x103F7E20111000 , 0x10214222111000 ,
      0x1FA14221E11F80 , 0x0 , 0x0 , 0x108C4287C60C42 , 0x19922481091244 ,
      0x16A1188110A178 , 0x10BF18811FBF48 , 0x10A1248110A144 , 0x10A1428110A142 ,
  0x0};

  for(int i = 0; i < 31; i++)
    {
      for(int j = 1; j < 64; j++)
        {
          uint64_t bitmap = pow(2, 64 - j);

          if((Tekst[i] & bitmap) > 0)
          {
            printf("#");
          }
          else
          {
            printf(" ");
          }
        }
      printf(" \n");
    }
  return 0;
}
