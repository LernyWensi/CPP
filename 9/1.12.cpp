#include <graphics.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void drawStar(int x, int y)
{
    moveto(x, y);

    lineto(x - 18, y + 54);
    lineto(x - 80, y + 54);
    lineto(x - 30, y + 90);
    lineto(x - 50, y + 148);
    lineto(x, y + 112);
    lineto(x + 50, y + 148);
    lineto(x + 30, y + 90);
    lineto(x + 80, y + 54);
    lineto(x + 18, y + 54);
    lineto(x, y);
}

int main()
{
    srand(time(NULL));

    initwindow(1024, 200);

    int x = 100;
    int y = 10;

    for (int i = 0; i <= 4; ++i)
    {
        int color = RGB(rand() % 255, rand() % 255, rand() % 255);

        setcolor(color);
        setfillstyle(rand() % 12, color);

        drawStar(x, y);
        floodfill(x, y + 2, color);

        x += 200;
    }

    getch();
    closegraph();
}