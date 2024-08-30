#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    Color darkGreen = {1, 50, 32, 255};
    InitWindow(300, 600, "Tetris by Darish");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    ZBlock block = ZBlock();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }
    CloseWindow();
}