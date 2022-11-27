#include <raylib.h>
#include <screen.h>
#include <config.h>

Font mainFont;

void mainGraphics(void) {
    Vector2 x;

    x.x = 0;
    x.y = 0;
    
    

    DrawTextEx(mainFont, "sus", x, 32, 4, WHITE);
}