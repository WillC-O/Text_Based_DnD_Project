#ifndef SHOP_BUY_H_INCLUDED
#define SHOP_BUY_H_INCLUDED
#include <iostream>
#include "inventory.h"
#include "shop.h"
#include "item_list.h"

using namespace std;

int buying(int *gold){

    int item;
    int player_input;
    int i;
    int items[4] = {1, 2, 3, 4};
    int player_gold = *gold;

    cout << "--------------------------" << endl;


    for(i = 0 ; i < 4 ; ++i)
  {
        cout << value(i, 1) << " gold: " << items[i] << endl;
  }
    cout << "You have "<< player_gold << " gold, 9. Exit" << endl;

    cin >> player_input;

    switch (player_input) {
        case 1:

            if(player_gold - value(0, 1)>= 0) {
            item = items[0];

            player_gold -= value(0, 1);

            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 2:
            cout<<player_gold<<endl;
            if(player_gold - value(1, 1)>= 0) {
                    cout<<player_gold<<endl;
            item = items[1];
            cout<<player_gold<<endl;
            player_gold -= value(1, 1);
            cout<<player_gold<<endl;
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 3:
            if((player_gold - value(2, 1))>= 0) {
            item = items[2];
            player_gold -= value(2, 1);
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 4:
            if((player_gold - value(3, 1))>= 0) {
            item = items[3];
            player_gold -= value(3, 1);
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 5:
            if((player_gold - value(4, 1))>= 0) {
            item = items[4];
            player_gold -= value(4, 1);
            } else {
                cout << "you cannot afford that item" << endl;

            }
            break;
        default:
            break;
    }

    *gold = player_gold;
    inventory hold;
    hold.slot1 = item;

}

int sell(int *gold){


    inventory hold;
    cout << "----------------" << endl;
    hold.slot1 = 1;
    cout << hold.slot1 << endl;
    cout << hold.slot2 << endl;
    cout << hold.slot3 << endl;
    cout << hold.slot4 << endl;
    cout << hold.slot5 << endl;
    cout << hold.slot6 << endl;
    cout << hold.slot7 << endl;
    cout << hold.slot8 << endl;
    cout << hold.slot9 << endl;
    cout << hold.slot10 << endl;


    string item;
    int player_input;
    int i;

    int player_gold = *gold;

    cout << "--------------------------" << endl;



    cout << "You have "<< player_gold << " gold, 9. Exit" << endl;
    cout<<player_gold<<endl;
    cin >> player_input;

    switch (player_input) {
        case 1:



            if (hold.slot1 != 0) {
                hold.slot1 = 0;
                player_gold += 5;
                cout << player_gold << endl;
            }


            break;
        case 2:
            cout<<player_gold<<endl;
            if(player_gold - value(1, 1)>= 0) {
                    cout<<player_gold<<endl;
            item = hold.slot2;
            cout<<player_gold<<endl;
            player_gold -= value(1, 1);
            cout<<player_gold<<endl;
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 3:
            if((player_gold - value(2, 1))>= 0) {
            item = hold.slot3;
            player_gold -= value(2, 1);
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 4:
            if((player_gold - value(3, 1))>= 0) {
            item = hold.slot4;
            player_gold -= value(3, 1);
            } else {
                cout << "you cannot afford that item" << endl;
            }
            break;
        case 5:
            if((player_gold - value(4, 1))>= 0) {
            item = hold.slot5;
            player_gold -= value(4, 1);
            } else {
                cout << "you cannot afford that item" << endl;

            }
            break;
        default:
            break;
    }

    *gold = player_gold;


}
#endif // SHOP_BUY_H_INCLUDED
