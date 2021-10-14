#pragma once
#include <vector>

struct Point
{
    Point(int xx = 0, int yy = 0) : x(xx), y(yy) {}
    int x;
    int y;
};

struct Snake
{
    std::vector<Point> body;
};

struct Map
{
    Map(int w, int h, int *d)
    {
        width = w;
        height = h;
        data = d;
    }
    int width;
    int height;
    int *data;
};

// 贪吃蛇
// 0表示空闲位置,'*'表示食物
// 11-19 表示蛇
// 其他表示障碍
// 蛇死了 还会继续停留在场地上

extern "C" char *TeamName();

// 返回下一步移动的方向
// 0左 1右 2上 3下
// map:地图数据
// width:地图宽度
// height:地图高度
// headers:各条蛇的头
// count:蛇的数量
// index:你的蛇的索引
extern "C" int NextStep(int *map, int width, int height, int* headers,int count,int index);

