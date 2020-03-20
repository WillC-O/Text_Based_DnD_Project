#include "prims.h"

using namespace std;

prims::prims()
{
    //ctor
}

prims::~prims()
{
    //dtor
}

prims::voidCheck(int x, int y){
    prims primsObj;

    int hold = 1;
    int rows =  sizeof primsObj.maze / sizeof primsObj.maze[0];

    int cols = sizeof primsObj.maze[0] / sizeof(int);

    if ((x > 9) | (x < 0)){
            hold = 0;
        }
    if ((y > 9) | (y < 0)){
            hold = 0;
        }

    return (hold);
}

prims::addWalls(int y, int x, int * point){

    prims primsObj;

    int i;
    int j;



    int rows =  sizeof primsObj.maze / sizeof primsObj.maze[0];

    int cols = sizeof primsObj.maze[0] / sizeof(int);

    int *newpoint1 = point + x + (y*10) + 1;
    int check1 = *newpoint1;

    if (voidCheck(x+1, y) == 1) {
        if  ((check1 != 2)&(check1 != 3)){
            int *newpoint = point + x + (y*10) + 1;
            *newpoint = 1;

        }
    }

    int *newpoint2 = point + x + (y*10) - 1;
    int check2 = *newpoint2;

    if ((voidCheck(x-1, y) == 1)) {
        if ((check2 != 2)&(check2 != 3)){
        int *newpoint = point + x + (y*10) - 1;
        *newpoint = 1;
    }
    }

    int *newpoint3 = point + x + (y*10) + 10;
    int check3 = *newpoint3;

    if ((voidCheck(x, y+1) == 1)) {
        if  ((check3 != 2)&(check3 != 3)){
        int *newpoint = point + x + (y*10) + 10;
        *newpoint = 1;
    }
    }

    int *newpoint4 = point + x + (y*10) - 10;
    int check4 = *newpoint4;

    if ((voidCheck(x, y-1) == 1)) {
        if  ((check4 != 2)&(check4 != 3)){
        int *newpoint = point + x + (y*10) - 10;
        *newpoint = 1;
    }
    }






//int *myPtr = maze.data();
}

prims::addPassage(int x, int y, int * point){

    prims primsObj;



    int rows =  sizeof primsObj.maze / sizeof primsObj.maze[0];

    int cols = sizeof primsObj.maze[0] / sizeof(int);


    if ((voidCheck(x+1, y) == 1) & (1 == 1)){

        int *newpoint = point + x + (y*10) + 1;
        *newpoint = 1;
    }

    if ((voidCheck(x-1, y) == 1) & (primsObj.maze[x-1][y] = 1)){
        int *newpoint = point + x + (y*10) - 1;
        *newpoint = 1;
    }

    if ((voidCheck(x, y+1) == 1) & (primsObj.maze[x][y+1] = 1)){
        int *newpoint = point + x + (y*10) + 10;
        *newpoint = 1;
    }

    if ((voidCheck(x, y-1) == 1) & (primsObj.maze[x][y-1] = 1)){
        int *newpoint = point + x + (y*10) - 10;
        *newpoint = 1;
    }
    int *newpoint = point + (90);
    *newpoint = 1;

//int *myPtr = maze.data();
}

