#ifndef EQUIP_H_INCLUDED
#define EQUIP_H_INCLUDED
#include<iostream>
#include<string>
#include "shop.h"
#include "item_list.h"

using namespace std;

int equip(int hold){
    int player_input;
    inventory out;
    int temp1;
    int temp2;
    int i;

    cout << "Your current equipment" << endl;
    cout << "1. " << out.armour1<< endl;
    cout << "2. " <<out.armour2<< endl;
    cout << "3. " <<out.armour3<< endl;
    cout << "4. " <<out.weapon<< endl;
    cout << "Your inventory" << endl;
    cout << "1. " <<out.slot1<< endl;
    cout << "2. " <<out.slot2<< endl;
    cout << "3. " <<out.slot3<< endl;
    cout << "4. " <<out.slot4<< endl;
    cout << "5. " <<out.slot5<< endl;
    cout << "6. " <<out.slot6<< endl;
    cout << "7. " <<out.slot7<< endl;
    cout << "8. " <<out.slot8<< endl;
    cout << "9. " <<out.slot9<< endl;
    cout << "10. " <<out.slot10<< endl;
    cout << "Select what you would like to equip" << endl;
    cin >> player_input;

    switch (player_input) {
        case 1:

            i = value(out.slot1, 3);
            temp1 = out.armour1;
            out.armour1 = out.slot1;




            break;

    }
}




#endif // EQUIP_H_INCLUDED
