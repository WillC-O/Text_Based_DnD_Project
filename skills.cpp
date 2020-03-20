#include "Skills.h"
using namespace std;


int skills(Player *playerCharacter, Enemy *target)
{
    int menu, dmgTaken, n;
    string currentSkill;
    string wSkillName[4]{"Heavy Slash", "Pummel", "Fortify", "Brutal Strike"};
    string aSkillName[4]{"Backstab", "Hidden Blade", "Critical Strike", "Eviscerate"};
    string mSkillName[4]{"Flame Burst", "Forked Lightning", "Wall of Flame", "Draconic Blaze"};
    string hSkillName[4]{"Head shot", "Cheap Shot", "Eagle Eye", "Crystal Arrow"};
    float skillModifier[4] = {1.5, 2, 2.5, 3};
    int skillCost[4] = {20, 35, 50, 65};
    int skillLv[4] = {2, 5, 8, 10};

    if(playerCharacter->characterClass == "Warrior"){
        cout << "Select a skill: " << endl;
        for (n=0 ; n < 4 ; ++n){
            if(playerCharacter->level < skillLv[n]){
                break;
            }
            cout << n+1 << "." << wSkillName[n] << endl;
        }
        cin >> menu;
        currentSkill = wSkillName[menu-1];
    }
    if(playerCharacter->characterClass == "Assassin"){
        cout << "Select a skill: " << endl;
        for (n=0 ; n < 4 ; ++n){
            if(playerCharacter->level < skillLv[n]){
                break;
            }
            cout << n+1 << "." << aSkillName[n] << endl;
        }
        cin >> menu;
        currentSkill = aSkillName[menu-1];
    }
    if(playerCharacter->characterClass == "Mage"){
        cout << "Select a skill: " << endl;
        for (n=0 ; n < 4 ; ++n){
            if(playerCharacter->level < skillLv[n]){
                break;
            }
            cout << n+1 << "." << mSkillName[n] << endl;
        }
        cin >> menu;
        currentSkill = mSkillName[menu-1];
    }
    if(playerCharacter->characterClass == "Hunter"){
        cout << "Select a skill: " << endl;
        for (n=0 ; n < 4 ; ++n){
            if(playerCharacter->level < skillLv[n]){
                break;
            }
            cout << n+1 << "." << hSkillName[n] << endl;
        }
        cin >> menu;
        currentSkill = hSkillName[menu-1];
    }
    if(playerCharacter->mana < skillCost[menu-1]){
        cout << "Not enough mana! You strike your foe instead!" << endl;
        dmgTaken = dmg(playerCharacter, target, 1, false);
    }
    else{
        dmgTaken = dmg(playerCharacter, target, skillModifier[menu-1], true);
        cout << "Player uses " << currentSkill << "!" << endl;
        playerCharacter->mana -= skillCost[menu-1];
        if(playerCharacter->mana < 0){
            playerCharacter->mana = 0;
        }
        cout << endl << "PLAYER has " << playerCharacter->mana << " Mana remaining!" << endl;
    }

    return dmgTaken;
}
