#include "snake.h"
#include <algorithm>

char *TeamName()
{
    return "犇犇犇犇就是牛";
}

int NextStep(int *map, int width, int height, int *headers, int count, int index)
{
    std::vector<Point> directions = {Point(-1, 0), Point(1, 0), Point(0, -1), Point(0, 1)};
    std::vector<int> indexs = {0, 1, 2, 3};

    std::random_shuffle(indexs.begin(), indexs.end());

    int headx = headers[index * 2 + 0];
    int heady = headers[index * 2 + 1];
    for (auto i : indexs)
    {
        auto &point = directions[i];
        int x = point.x + headx;
        int y = point.y + heady;

        int code = map[width * y + x];
        if (code == 0 || code == '*')
        {
            return i;
        }
    }

    return -1;
}

