#ifndef PRIMSMAIN_H_INCLUDED
#define PRIMSMAIN_H_INCLUDED

#include <iostream>
#include "prims.h"
#include <array>
#include <stack>
#include <cstdalign>
#include <time.h>
#include <stdlib.h>


using namespace std;

bool arrayEmpty(int checkMaze[10][10]){
    prims hold;

    int *Ptr = hold.startPtr;
    int i;
    int j;

    for (j=0;j<10;j++){
        for (i=0;i<10;i++){
        if (checkMaze[i][j]== 1){
            return true;
        }
    }
    }
    return false;

}

int primsMain()
{

    int i;
    int j;
    prims hold;





    int rows =  sizeof hold.maze / sizeof hold.maze[0];

  int cols = sizeof hold.maze[0] / sizeof(int);


    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            hold.maze[i][j] = 1;
            hold.walls[i][j] = 0;
            cout << hold.maze[i][j];
    }
    cout << endl;
    }

    //int *Ptr = hold.startPtr + 10;


    //int *yeet1 = hold.maze[0][0];



    hold.maze[hold.startx][hold.starty] = 0;
    hold.walls[hold.startx][hold.starty] = 2;
    hold.addWalls(0,0,hold.startPtr2);
        for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {

            cout << hold.walls[i][j];
    }
    cout << endl;
    }
    hold.walls[hold.startx][hold.starty] = 2;

        for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {

            cout << hold.maze[i][j];
    }
    cout << endl;
    }
    while(arrayEmpty(hold.walls) == true){
    cout << endl << endl;
    int rnum;
    int rhold = 0;
    stack <int> xcoor;
    stack <int> ycoor;
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            if (hold.walls[i][j] == 1){
            xcoor.push(i);
            ycoor.push(j);
            rhold += 1;

        }
        }
    }
    srand(time(NULL));
    rnum = rand() % rhold  ;



    for (i=0; i<rnum ; i++){
        xcoor.pop();
        ycoor.pop();
    }


    int x = xcoor.top();
    int y = ycoor.top();

    int stacksize = xcoor.size();
    for (i=0; i<stacksize ; i++){
        xcoor.pop();
        ycoor.pop();
    }

    int store = 0;


rhold = 0;

    if (hold.voidCheck(x+1, y) == 1) {
        if  (hold.walls[x+1][y] == 2){
            store += 1;
        }

    }

    if (hold.voidCheck(x-1, y) == 1) {
    if (hold.walls[x-1][y] == 2) {

            store += 1;


    }
    }

    if (hold.voidCheck(x, y+1) == 1) {
    if (hold.walls[x][y+1] == 2) {

            store += 1;


    }
    }

    if (hold.voidCheck(x, y-1) == 1) {
    if (hold.walls[x][y-1] == 2) {

            store += 1;


    }
    }

    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {

            cout << hold.walls[i][j];
    }
    cout << endl;
    }


    if (store == 1){
        hold.maze[x][y] = 1;
        hold.walls[x][y] = 2;
        hold.addWalls(x, y, hold.startPtr2);

    }
     else {
        hold.walls[x][y] = 3;
        //hold.addWalls(x, y, hold.startPtr2);
    }

    store = 0;





}
    cout << endl;
 for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            if (hold.walls[i][j] == 2){
                cout << "X";
            }
            else
            {
                cout << "O";
            }

            }
         cout << endl;
    }

    int playerPos[2];

    for (int i = 10; i > 0; i--){
        if (hold.walls[i][10] == 2){
            playerPos[1] = {i};
            playerPos[2] = {9};
            break;
        }

    }
    cout << playerPos[1] << playerPos[2] << endl;

    while ((playerPos[1] != 0)|(playerPos[2] != 0)){
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            if ((i == playerPos[1])&(j == playerPos[2])){
                cout << "P";
            }
            else if (hold.walls[i][j] == 2){
                cout << "X";
            }

            else
            {
                cout << "O";
            }

}
         cout << endl;
    }
    cout << "move using 8456" << endl;
    cout << " You can move in the Xs but cannot move in the Os and your goal is to reach the top left corner";
    int playerChoice;
    cin >> playerChoice;
    int currentx = playerPos[1];
    int currenty = playerPos[2];

    if (playerChoice == 8) {
    if (hold.walls[currentx][currenty - 1] == 2 ){
            playerPos[2] -= 1;
        }
    }
         if (playerChoice == 4) {
    if (hold.walls[currentx-1][currenty] == 2 ){
            playerPos[1] -= 1;
        }
         }
         if (playerChoice == 5) {
    if (hold.walls[currentx][currenty + 1] == 2 ){
            playerPos[2] += 1;
        }
         }
         if (playerChoice == 6) {
    if (hold.walls[currentx + 1][currenty] == 2 ){
            playerPos[1] += 1;
        }
         }
    }
    return 0;
}









#endif // PRIMSMAIN_H_INCLUDED
