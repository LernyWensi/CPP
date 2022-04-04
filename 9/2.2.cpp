#include <graphics.h>

using namespace std;

void motionEllipse(int startX, int startY, int stepX, int stepY, int endX, int endY)
{
  int i, j;

  for (i = 0, j = 0; abs(i) < endX || abs (j) < endY; i += stepX, j += stepY)
  {
    setcolor(RED);
    ellipse(startX + i, startY + j, 30, 30, 50, 20);

    if (kbhit()) break;

    delay(10);
    setcolor(WHITE);
    ellipse(startX + i, startY + j, 30, 30, 50, 20);
  }
}
int main()
{
  initwindow(10200, 900);
  setcolor(WHITE);
  floodfill(1, 1, BROWN);

  while (!kbhit())
  {
    motionEllipse(50, 450, 5, -5, 200, 200);
    motionEllipse(250, 250, 5, 5, 200, 300);
    motionEllipse(550, 550, 5, -5, 200, 200);
    motionEllipse(750, 350, 5, 5, 200, 350);
  }

  getch();
  closegraph();
}