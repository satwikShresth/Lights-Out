#ifndef _house_h_
#define _house_h_

#define HOUSE_WIDTH   69
#define HOUSE_HEIGHT  26
#define WINDOW_WIDTH  11
#define WINDOW_HEIGHT  3


void house_display (const char *house);
void house_init (char *house, const int *state);

#endif