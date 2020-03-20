#ifndef EXPERIENCE_H_INCLUDED
#define EXPERIENCE_H_INCLUDED
using namespace std;

void exp(Player *playerCharacter, Enemy *target)
{
    int xp;
    xp = target->level*2; //experience gained is equal to double the enemies level
    cout << "PLAYER gained " << xp << " EXP" << endl;
    playerCharacter->exp += xp; // adds the experience earned to the players experience total
    if(playerCharacter->exp >= playerCharacter->expMax){
        playerCharacter->level += 1;
        playerCharacter->expMax += playerCharacter->expMax*2;
        playerCharacter->health += 20;
        playerCharacter->mana += 20;
        playerCharacter->attack += 5;
        playerCharacter->defence += 5;
        playerCharacter->magic =+ 5;
        playerCharacter->crit += 5;

        cout << "Level Up! You have reached Lv: " << playerCharacter->level << endl;
        cout << *playerCharacter << endl;

    }
}



#endif // EXPERIENCE_H_INCLUDED
