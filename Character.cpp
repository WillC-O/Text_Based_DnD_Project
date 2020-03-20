#include "Character.h"
#include "damage.h"
#include "Skills.h"

using namespace std;

void Player::Attack(Player *playerCharacter, Enemy *target)
{

    int dmgTaken;
    dmgTaken = dmg(playerCharacter, target, 1, false);
    target->health -= dmgTaken;
    cout << endl << playerCharacter->name << " strikes " << target->name << " for " << dmgTaken << endl;
    if (target->health < 0){
        target->health = 0; //Stops enemy health becoming negative
    }
    cout << target->name << " has " << target->health << "Hp remaining" << endl << endl;
}

void Player::skill(Player *playerCharacter, Enemy *target)
{
    int dmgTaken;
    dmgTaken = skills(playerCharacter, target);
    cout << endl << name << " strikes " << target->name << " for " << dmgTaken << endl;
    if (target->health < 0){
        target->health = 0; //Stops enemy health becoming negative
    }
    cout << target->name << " has " << target->health << "Hp remaining" << endl << endl;
}

void Enemy::Attack(Player *playerCharacter, Enemy *target)
{
    int dmgTaken;
    dmgTaken = enemyDmg(playerCharacter, target);
    playerCharacter->health -= dmgTaken;
    cout << endl << target->name << " strikes " << playerCharacter->name << " for " << dmgTaken << endl;
    if (playerCharacter->health < 0){
        playerCharacter->health = 0;
    }
    cout << playerCharacter->name << " has " << playerCharacter->health << "Hp remaining" << endl << endl;
}
