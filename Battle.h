#ifndef BATTLE_H_INCLUDED
#define BATTLE_H_INCLUDED

#include <iostream>

#include "Character.h"


using namespace std;

class Battle
{
    public:

        void battleChoice(Player *playerCharacter, Enemy *target);

        void battleCycle(Player *playerCharacter, Enemy *target);

    protected:

    private:
};

#endif // BATTLE_H_INCLUDED
