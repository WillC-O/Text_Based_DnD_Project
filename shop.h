#ifndef SHOP_H_INCLUDED
#define SHOP_H_INCLUDED
#include <iostream>
#include "shop_buy.h"
#include "selling.h"

using namespace std;

int control(int *gold)
{


    int player_input;
    cout << "Would you like to: 1. Buy, 2. Sell, 3. Leave" << endl;
    cin >> player_input;


    switch (player_input) {
        case 1:
            buying(gold);
            control(gold);
        case 2:
            sell(gold);
            control(gold);
        case 3:
            break;


        }

}


#endif // SHOP_H_INCLUDED
