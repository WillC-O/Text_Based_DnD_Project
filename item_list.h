#ifndef ITEM_LIST_H_INCLUDED
#define ITEM_LIST_H_INCLUDED

using namespace std;

int value(int place, int hold){

    string item;

    int item_id [50] = {1, 2, 3, 4};
    int item_value[50] = {6, 3, 5, 4};

    int item_attribute[50] = {10, 10, 10, 10};

    int item_type[50] = {4, 1, 2, 3};

    string item_name[50] = {"Sword", "Helmet", "Chestpiece", "Greaves"};


    if (hold = 1) {
       return (item_value[place]);
    }
    if (hold = 2) {
       return (item_attribute[place]);
    }
    if (hold = 3) {
       return (item_type[place]);
    }


}
#endif // ITEM_LIST_H_INCLUDED
