#ifndef SCREEN_H
#define SCREEN_H

#include <raylib.h>

#define screenWidth GetScreenWidth()
#define screenHeight GetScreenHeight()

extern Font mainFont;

void mainGraphics(void);

#endif