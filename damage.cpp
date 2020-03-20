#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "damage.h"
#include "Main.h"
#include "Character.h"
#include "Enemy.h"

using namespace std;

int dmg(Player *playerCharacter, Enemy *target, float modifier, bool skill)
{

    int crit;
    float total;
    crit = rand() % 100; //critical strike chance; is calculated by generating a random number between the characters luck statistic and 100

    if(skill == true)
    {
        playerCharacter->attack = playerCharacter->attack * modifier;
    }
    else if (crit <= playerCharacter->crit)
        {
        playerCharacter->attack = playerCharacter->attack * 1.5; //if the character lands a critical strike, the damage of their next attack is increased by 1.5x
        cout << "Critical Hit!" << endl;
    }

    total = round(playerCharacter->attack * 100/(100+target->defence));


    return total; //how damage is calculated based on the attacks Atk stat, and the defenders Def stat. Higher defence reduces damage by a percentage
}

int enemyDmg(Player *playerCharacter, Enemy *target)
{
    int crit;
    crit = rand() % 100; //critical strike chance; is calculated by generating a random number between the characters luck statistic and 100

    if (crit <= target->crit)
        {
        target->attack = target->attack * 1.5; //if the character lands a critical strike, the damage of their next attack is increased by 1.5x
        cout << "Critical Hit!" << endl;
    }

    return round(target->attack * (100/(100+playerCharacter->defence))); //how damage is calculated based on the attacks Atk stat, and the defenders Def stat. Higher defence reduces damage by a percentage
}
