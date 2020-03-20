#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
#include <iostream>

#include "damage.h"


using namespace std;

class Character
{
    public:
        int health, mana,level, exp, expMax, gold;
        float attack, defence, magic, crit ;
        string name, characterClass;
};

class Enemy;

class Player : public Character
{
    public:

        void set_att(string setClass, int setHealth, int setMana, float setAttack, float setDefence, float setMagic, float setCrit, int setLevel, int setExp, int setExpMax, int setGold)
            {
            characterClass = setClass; health = setHealth; mana = setMana; attack = setAttack;
            defence = setDefence; magic = setMagic; crit = setCrit; level = setLevel; exp = setExp;
            expMax = setExpMax; gold = setGold;
            }

        friend int dmg(Player playerCharacter, float modifier, bool skill);
        friend int skills(Player playerCharacter, Enemy target);
        friend int exp(Player playerCharacter, Enemy target);

        void Attack(Player *playerCharacter, Enemy *target);
        void skill(Player *playerCharacter, Enemy *target);


        friend ostream& operator<<(ostream& os, const Player& att)
        {
        return os << "Class: " << att.characterClass << endl
                  << "Health: " << att.health << endl
                  << "Mana: " << att.mana << endl
                  << "Attack: " << att.attack << endl
                  << "Defence: " << att.defence << endl
                  << "Magic: " << att.magic << endl
                  << "Crit: " << att.crit << endl
                  << "Level: " << att.level << endl;
        }
    protected:

    private:
};

class Enemy : public Character {
    public:

        void set_Att(int setHealth, float setAttack, float setDefence, float setCrit, int setLevel)
            {
                health = setHealth; attack = setAttack;
                defence = setDefence; crit = setCrit;
                level = setLevel;
            }

        friend int enemyDmg(Enemy *target);

        void Attack(Player *playerCharacter, Enemy *target);


    protected:

    private:
};


#endif // CHARACTER_H_INCLUDED
