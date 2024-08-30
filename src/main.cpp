#include<raylib.h>
#include "grid.h"

int main()
{
    Color darkGreen = {1, 50, 32, 255};
    InitWindow(300, 600, "Tetris by Darish");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        grid.Draw();
        EndDrawing();
    }
    CloseWindow();
}