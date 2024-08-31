#include <raylib.h>
#include "game.h"

int main()
{
    Color darkGreen = {1, 50, 32, 255};
    InitWindow(300, 600, "Tetris by Darish");
    SetTargetFPS(60);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkGreen);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}