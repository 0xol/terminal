#include <raylib.h>
#include <screen.h>
#include <config.h>

int main(void) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "");
    SetExitKey(KEY_NULL);
    SetTargetFPS(60);
    loadConfig("config.term");
    while (!WindowShouldClose()) {
        BeginDrawing();
        mainGraphics();
        EndDrawing();
    }
}