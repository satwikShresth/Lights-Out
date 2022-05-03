#include <stdio.h>
#include "house.h"
#include "window.h"


void house_display (const char *house)
{
  int x, y;

  for (y=0; y<HOUSE_HEIGHT; y++, printf("\n"))
    for (x=0; x<HOUSE_WIDTH; x++)
      printf ("%c", house[HOUSE_WIDTH * y + x]);
}



void house_init (char *house, const int *state)
{
  const int *p;
  p = state;
  int x, y;
  for (y=0; y<3; y++)
    for (x=0; x<3; x++)
    {
      window_update_graphics (house, p, x, y);
      p++;
    }
}