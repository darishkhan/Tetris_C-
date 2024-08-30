#include<raylib.h>

int main()
{
    InitWindow(300, 600, "Tetris by Darish");
    SetTargetFPS(60);
    while(WindowShouldClose() == false)
    {
        BeginDrawing();

        EndDrawing();
    }
    CloseWindow();
}