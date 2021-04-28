#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <stdlib.h>
#include <iostream>

#define SCREEN_HEIGHT 720;
#define SCREEN_LENGTH 1080;

int main()
{


    std::cout << "wait" << std::endl;
    Sleep(1);
    std::cout << "begin" << std::endl;
    for (int y = 1; y < 720; y++)
    {
        for (int x = 1; x < 1080; x++)
        {
            std::cout << "*";
        }
    }
    return 0;
}