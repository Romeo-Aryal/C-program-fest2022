#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  int gdriver, gmode;
  int x, y, radius;
  gdriver =DETECT;
  initgraph(&gdriver, &gmode, "d:\\turboc3\\bgi");
  setcolor(CYAN);
  x = 200;
  y = 300;
  radius = 100;

  circle(x, y, radius);

  getch();
  closegraph();
  return 0;
}
