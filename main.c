#include "tigr.h"
#include "tigr_emscripten.h"

static Tigr* screen;

static void frame(void)
{

    tigrClear(screen, tigrRGB(30, 40, 50));
    tigrPrint(screen, tfont, 10, 10,
              tigrRGB(255,255,255),
              "TIGR + WebGL");
    tigrPlatformPresent(screen);
}

int main(void)
{
    screen = tigrBitmap(320, 200);
    tigrPlatformInit(screen);
    tigrSetMainLoop(frame);
    return 0;
}

