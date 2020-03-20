#include "Battle.h"
#include "damage.h"
#include "Skills.h"
#include "experience.h"

using namespace std;

void Battle::battleChoice(Player *playerCharacter, Enemy *target)
{
    int menu = 0;
    cout << "--------------------" << endl << "What will " << playerCharacter->name << " do?" << endl << "1. Attack" << endl << "2. Skill" << endl << "3. Item" << endl << "--------------------" << endl; //player combat options
    cin >> menu;
    switch (menu) {
        case 1 :
            playerCharacter->Attack(playerCharacter, target);
            break;
        case 2 :
            playerCharacter->skill(playerCharacter, target);
            break;
    }
}

void Battle::battleCycle(Player *playerCharacter, Enemy *target)
{
    battleChoice(playerCharacter, target);
    while (playerCharacter->health > 0 && target->health > 0)
    {
        target->Attack(playerCharacter, target);
        battleChoice(playerCharacter, target);
    }
    if (target->health = 0)
        cout << "The " << target->name << " has been defeated!" << endl;
        exp(playerCharacter, target);
    if (playerCharacter->health <= 0)
        cout << "You have been defeated!" << endl;
}
