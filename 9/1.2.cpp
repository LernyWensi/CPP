#include <graphics.h>

using namespace std;

void drawArc(int x, int y, int size)
{
    setlinestyle(0, 0, 15);
    arc(x, y, 0, 180, size);
}

int main()
{
    initwindow(1024, 1024);

    int x = 512;
    int y = 512;
    int size = 250;

    int colors[] = {4, RGB(255, 165, 0), 14, 2, 1, RGB(127, 0, 255), RGB(128, 0, 128)};

    for (int i = 0; i <= 6; ++i)
    {
        setcolor(colors[i]);
        drawArc(x, y, size);

        size -= 20;
    }

    getch();
    closegraph();
}
