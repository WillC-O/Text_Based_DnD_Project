#ifndef PRIMS_H
#define PRIMS_H

#include <iostream>
#include <cstring>
#include <array>
using namespace std;

class prims
{
    public:
        prims();



    const int a = 10;
    const int b = 10;
    int startx = 0;
    int starty = 0;
    array<array<int,10>,10> maze;

    int walls[10][10];
    int &check = maze[0][0];
    int *startPtr = &check;
    int &check2 = walls[0][0];
    int *startPtr2 = &check2;
    int getHeader(int x);
    int voidCheck(int x,int y);
    int addWalls(int x, int y, int* point);
    int addPassage(int x, int y, int* point);



        virtual ~prims();

    protected:

    private:
};

#endif // PRIMS_H
