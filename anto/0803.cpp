#include <iostream>
#include <graphics.h>
#include <winbgim.h>

int main()
{
//  int gd = DETECT, gm;
//  initgraph(&gd, &gm, "");
  initwindow(1920,1080); int x = 1920, y = 1080, r;
  for (r = 25; r <= 700; r += 20)
      circle(x, y, r);
  getch(); closegraph(); return 0;
}
