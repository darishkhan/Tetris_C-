#include <raylib.h>
#include "game.h"
#include <iostream>

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

int main()
{
    InitWindow(500, 620, "Tetris by Darish");
    SetTargetFPS(60);

    Font font = LoadFontEx("font/KnightWarrior.otf", 64, 0, 0);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        game.HandleInput();
        if (EventTriggered(0.2))
        {
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkGreen);
        DrawTextEx(font, "Score", {360, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);
        if (game.gameOver)
        {
            DrawTextEx(font, "Game\n\n\nOver!", {335, 450}, 65, 5, ORANGE);
        }

        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        // std::cout << scoreText << "\n";
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);
        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, lightGreen);
        DrawTextEx(font, scoreText, {320 + (170 - textSize.x) / 2, 65}, 38, 2, BLACK);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, lightGreen);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}