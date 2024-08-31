#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score = 0;
    Music music;

private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    void MoveBlockLeft();
    void MoveBlockRight();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int movedDownPoints);
    Grid grid;
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Sound rotateSound;
    Sound clearSound;
};