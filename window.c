#include "house.h"
#include<stdio.h>


void window_update_graphics (char *house, const int *state, int x, int y)
{
  int wbw = 11;
  int hw = 3;
  int countx;
  int county;
  char *window;
  char *close;
  window = "#";
  close = " ";
  if(*state == 1)
  {
    if(x == 0)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11]= *window ;
          house[69*9 + 11]= *window ;
          house[69*10 + 11]= *window ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11]= *window ;
          house[69*15 + 11]= *window ;
          house[69*16 + 11]= *window ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11]= *window ;
          house[69*21 + 11]= *window ;
          house[69*22 + 11]= *window ;
          countx++;county++;
        }
      }
    }
    else if(x == 1)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11 + 11 + 7] = *window ;
          house[69*9 + 11 + 11 + 7] = *window ;
          house[69*10 + 11 +11 + 7] = *window ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11 + 11 + 7] = *window ;
          house[69*15 + 11 + 11 + 7] = *window ;
          house[69*16 + 11 + 11 + 7] = *window ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11 + 11 + 7]= *window ;
          house[69*21 + 11 + 11 + 7]= *window ;
          house[69*22 + 11 + 11 + 7]= *window ;
          countx++;county++;
        }
      }
    }
    else if(x == 2)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*9 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*10 + 11 + 11 + 11 + 7 + 7]= *window ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*15 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*16 + 11 + 11 + 11 + 7 + 7]= *window ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*21 + 11 + 11 + 11 + 7 + 7]= *window ;
          house[69*22 + 11 + 11 + 11 + 7 + 7]= *window ;
          countx++;county++;
        }
      }
    }
  }
  else if(*state == 0)
  {
    if(x == 0)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11]= *close ;
          house[69*9 + 11]= *close ;
          house[69*10 + 11]= *close ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11]= *close ;
          house[69*15 + 11]= *close ;
          house[69*16 + 11]= *close ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11]= *close ;
          house[69*21 + 11]= *close ;
          house[69*22 + 11]= *close ;
          countx++;county++;
        }
      }
    }
    else if(x == 1)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11 + 11 + 7] = *close ;
          house[69*9 + 11 + 11 + 7] = *close ;
          house[69*10 + 11 +11 + 7] = *close ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11 + 11 + 7] = *close ;
          house[69*15 + 11 + 11 + 7] = *close ;
          house[69*16 + 11 + 11 + 7] = *close ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11 + 11 + 7]= *close ;
          house[69*21 + 11 + 11 + 7]= *close ;
          house[69*22 + 11 + 11 + 7]= *close;
          countx++;county++;
        }
      }
    }
    else if(x == 2)
    {
      if(y == 0)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*8 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*9 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*10 + 11 + 11 + 11 + 7 + 7]= *close ;
          countx++;county++;
        }
      }
      else if(y == 1)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*14 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*15 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*16 + 11 + 11 + 11 + 7 + 7]= *close ;
          countx++;county++;
        }
      }
      else if(y == 2)
      {
        for(countx = 0; countx < wbw || county < hw ; house++)
        {
          house[69*20 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*21 + 11 + 11 + 11 + 7 + 7]= *close ;
          house[69*22 + 11 + 11 + 11 + 7 + 7]= *close ;
          countx++;county++;
        }
      }
    }
  }
}


/* Toggles the state of the window @ coordinates (x, y) in the game
 * state array.
 *
 *   This function modifies the `state` array by toggling the value
 *   corresponding to the window at the provided coordinates (x, y).  If
 *   the current value is 1, then it will be toggled to 0.  Likewise, if
 *   the current value is 0, then it will be toggled to 1.
 *
 * Parameters:
 *   state -- pointer to the game state array
 *
 *       x -- the horizontal coordinate of the window for which the
 *            state will be updated (zero indexed, with 0 being
 *            the left column and 2 being the right column)
 *
 *       y -- the vertical coordinate of the window for which the
 *            state will be updated (zero indexed, with 0 being
 *            the top row and 2 being the bottom row)
 */
void window_toggle_state (int *state, int x, int y)
{
  int i = (x+1) + (y*3) - 1;
  if(state[i] == 0){state[i]=1;}else if(state[i] == 1){state[i]=0;}
}


/* Toggles the state and, correspondingly, updates the graphics for the
 * window @ coordinates (x, y).
 *
 *   Given the zero indexed coordinates (x, y) of a window, this
 *   function ensures that the corresponding element in the game state
 *   array is toggled appropriately and that the graphics corresponding
 *   to that window are updated appropriately to reflect the new state.
 *
 *   Hint: call other functions you have written to make this easier.
 *
 * Parameters:
 *   state -- pointer to the game state array
 *
 *   house -- pointer to characters representing the house
 *
 *       x -- the horizontal coordinate of the window for which the
 *            state will be updated (zero indexed, with 0 being
 *            the left column and 2 being the right column)
 *
 *       y -- the vertical coordinate of the window for which the
 *            state will be updated (zero indexed, with 0 being
 *            the top row and 2 being the bottom row)
 */
void window_update (int *state, char *house, int x, int y)
{
  house_init (house, state);
}


/* Toggles the lights based on the user's window selection.
 *
 *   Given the user's choice of window number, this function updates the
 *   corresponding window's (or windows') state and graphics, as
 *   necessary.
 *
 *   Hints:
 *     -- A primary job of this function will be to convert the choice
 *        of the user into the zero indexed (x, y) coordinates of a
 *        window.
 *
 *     -- Converting between `choice` and the (x, y) coordinates will
 *        probably be easier if you internally number the windows
 *        starting at zero (i.e. 0 thru 8 instead of 1 thru 9).
 *
 *     -- This function will need to call one other function
 *        (perhaps multiple times).
 *
 *   For Step 2, this function will only toggle the window
 *   corresponding to the user's selection.
 *
 *   For Step 3, this function will toggle the selected window
 *   and its neighbors (as described above in the instructions).
 *
 * Parameters:
 *    state -- pointer to the game state array
 *
 *    house -- pointer to characters representing the house
 *
 *   choice -- integer corresponding to the user's window selection
 *             (an integer value within the range 1 to 9)
 */
void window_toggle (int *state, char *house, int choice)
{
  int x,y;
  if(choice == 1)
  {
    x=0;y=0;window_toggle_state(state,x,y);
    x=1;y=0;window_toggle_state(state,x,y);
    x=0;y=1;window_toggle_state(state,x,y);
  }
  else if(choice == 2)
  {
    x=1;y=0;window_toggle_state(state,x,y);
    x=0;y=0;window_toggle_state(state,x,y);
    x=2;y=0;window_toggle_state(state,x,y);
    x=1;y=1;window_toggle_state(state,x,y);
  }
  else if(choice == 3)
  {
    x=2;y=0;window_toggle_state(state,x,y);
    x=1;y=0;window_toggle_state(state,x,y);
    x=2;y=1;window_toggle_state(state,x,y);
  }
  else if(choice == 4)
  {
    x=0;y=1;window_toggle_state(state,x,y);
    x=0;y=0;window_toggle_state(state,x,y);
    x=1;y=1;window_toggle_state(state,x,y);
    x=0;y=2;window_toggle_state(state,x,y);
  }
  else if(choice == 5)
  {
    x=1;y=1;window_toggle_state(state,x,y);
    x=0;y=1;window_toggle_state(state,x,y);
    x=1;y=0;window_toggle_state(state,x,y);
    x=2;y=1;window_toggle_state(state,x,y);
    x=1;y=2;window_toggle_state(state,x,y);
  }
  else if(choice == 6)
  {
    x=2;y=1;window_toggle_state(state,x,y);
    x=2;y=0;window_toggle_state(state,x,y);
    x=2;y=2;window_toggle_state(state,x,y);
    x=1;y=1;window_toggle_state(state,x,y);
  }
  else if(choice == 7)
  {
    x=0;y=2;window_toggle_state(state,x,y);
    x=1;y=2;window_toggle_state(state,x,y);
    x=0;y=1;window_toggle_state(state,x,y);
  }
  else if(choice == 8)
  {
    x=1;y=2;window_toggle_state(state,x,y);
    x=1;y=1;window_toggle_state(state,x,y);
    x=0;y=2;window_toggle_state(state,x,y);
    x=2;y=2;window_toggle_state(state,x,y);
  }
  else if(choice == 9)
  {
    x=2;y=2;window_toggle_state(state,x,y);
    x=2;y=1;window_toggle_state(state,x,y);
    x=1;y=2;window_toggle_state(state,x,y);
  }
  window_update (state,house,x,y);

}