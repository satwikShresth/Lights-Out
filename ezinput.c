

#include <stdio.h>
#include <unistd.h>
#include <termios.h>

#define BACKSPACE 0x7F

char ezinput()
{
  struct termios t;
  char c, ret = 0;
  static int init = 0;

  if (!init) {
    init = 1;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
  }

  while (1) {
    c = (char)getchar();
    if (!ret) {
      ret = (c < ' ' || c > '~') ? 0 : (putchar(c), c);
    } else {
      switch(c) {
      case '\n':
        putchar('\n');
        return ret;
      case BACKSPACE:
        ret = 0;
        printf("\b \b");
        fflush(stdout);
      }
    }
  }
}