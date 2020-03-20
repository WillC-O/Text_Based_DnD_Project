#ifndef DAMAGE_H_INCLUDED
#define DAMAGE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Main.h"
#include "Character.h"
using namespace std;

class Player;
class Enemy;

int dmg(Player *playerCharacter, Enemy *target, float modifier, bool skill);

int enemyDmg(Player *playerCharacter, Enemy *target);


#endif // DAMAGE_H_INCLUDED
