
#include <stdio.h>
#include "ezinput.h"
#include "house.h"
#include "window.h"


int solved (const int *state)
{
  int i;
  for(i=0;state[i]==0;i++);
  if(i==10) return 1;
  printf("%d",i);
  return 0;
}


int main ()
{
  char choice;

  char house[] =
  "                                             ______________          "
  "                                            |______________|         "
  "      _______________________________________|            |_____     "
  "     '                                       |____________|     `    "
  "    |                                                           |    "
  "    '-----------------------------------------------------------'    "
  "    |           1                 2                 3           |    "
  "    |     +-----------+     +-----------+     +-----------+     |    "
  "    |     |           |     |           |     |           |     |    "
  "    |     |           |     |           |     |           |     |    "
  "    |     |           |     |           |     |           |     |    "
  "    |     +-----------+     +-----------+     +-----------+     |    "
  "    |           4                 5                 6           |    "
  "    |     +-----------+     +-----------+     +-----------+     |    "
  "    |     |           |     |           |     |           |     |    "
  "    |     |           |     |           |     |           |     |    "
  "  _ |     |           |     |           |     |           |     |    "
  " |#||     +-----------+     +-----------+     +-----------+     |    "
  " |_||           7                 8                 9           |    "
  "  `-|     +-----------+     +-----------+     +-----------+     |    "
  "    -     |           |     |           |     |           |     |    "
  "    '     |           |     |           |     |           |     |    "
  "    '     |           |     |           |     |           |     |    "
  "   o'     +-----------+     +-----------+     +-----------+     |    "
  "    '                                                           |    "
  "____'___________________________________________________________'____";


  int state[] = { 1, 1, 0,
                  1, 1, 0,
                  1, 0, 0 };


  house_init (house, state);

  while (1) {
    house_display (house);

    if (solved (state)) {
      printf ("Congratulations!  You won!\n");
      break;
    }

    do {
      printf ("Choose a Window (0 to exit): ");
      choice = ezinput();
    } while (choice < '0' || choice > '9');

    if (choice == '0')
      break;

    choice -= '0';


    window_toggle (state, house, choice);
  }

  printf ("Goodbye!\n");

  return 0;
}