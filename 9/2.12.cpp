#include <graphics.h>

using namespace std;

void drawNumber(int x, int y)
{
  moveto(x,y);

  lineto(x + 30, y);
  lineto(x + 30, y + 30);
  lineto(x, y + 30);
  lineto(x, y + 60);
  lineto(x + 30, y + 60);

  x += 60;

  moveto(x, y);

  lineto(x, y + 60);

  x += 30;

  moveto(x + 30, y);

  lineto(x, y);
  lineto(x, y + 60);
  lineto(x + 30, y + 60);
  lineto(x + 30, y + 30);
  lineto(x, y + 30);
}

void motionNumber(int startX, int startY, int stepX, int stepY, int endX, int endY)
{
  int i, j;

  for (i = 0, j = 0; abs(i) < endX || abs (j) < endY; i+=stepX, j+=stepY)
  {
    setcolor(RED);
    drawNumber(startX + i, startY + j);

    if (kbhit()) break;
    
    delay(1);
    setcolor(WHITE);
    drawNumber(startX + i, startY + j);
  }
}

int main()
{
  initwindow(1024, 900);
  setcolor(WHITE);
  floodfill(1, 1, BROWN);

  while (!kbhit())
  {
    motionNumber(50, 50, 10, 0, 750, 0);
    motionNumber(800, 50, -10, 10, 50, 750);
    motionNumber(50, 800, 10, 0, 750, 0);
    motionNumber(800, 800, -10, -5, 50, 400);
  }

  getch();
  closegraph();
}