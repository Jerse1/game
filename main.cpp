#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <string>

const int SCREEN_HEIGHT = 25;
const int SCREEN_WIDTH = 80;

bool GAME_ON = 1;

int Position[2] = {40, 5};  // x,y;
int Direction[2] = {0, -1}; // x,y;

void Draw()
{
    system("CLS");
    for (int i = 0; i < 2; i++)
    {
        if (Direction[i] != 0)
            Position[i] += Direction[i];
        if (Position[0] == SCREEN_WIDTH && Direction[0] == 1)
            Position[0] = 0;
        else if (Position[0] == 0 && Direction[0] == -1)
            Position[0] = SCREEN_WIDTH;
        else if (Position[1] == SCREEN_HEIGHT -1 && Direction[1] == 1)
            Position[1] = 0;
        else if (Position[1] == 0 && Direction[1] == -1)
            Position[1] = SCREEN_HEIGHT -1;
    }

    for (int y = 0; y < SCREEN_HEIGHT; y++)
    {
        std::cout << "X";
        for (int x = 0; x < SCREEN_WIDTH; x++)
        {
            if (x == Position[0] && y == Position[1])
                std::cout << "@";
            else if (y == 0 || y == SCREEN_HEIGHT - 1)
                std::cout << "X";
            else
                std::cout << " ";
        }
        std::cout << "X\n";
    }
}

void Start()
{
    while (GAME_ON == 1)
    {
        Draw();
        Sleep(50);
    }
}

int main()
{
    Start();
    std::cin.get();
    return 0;
}