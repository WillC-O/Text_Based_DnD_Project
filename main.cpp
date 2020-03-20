#include <iostream>
#include <cmath>
#include <windows.h>
#include "Character.h"
#include "Battle.h"
#include "shop.h"
#include "MiniGameR.h"
#include "primsMain.h"
#include "prims.h"

using namespace std;

int main()
{
    Player playerCharacter;
    Battle battle;

    string character;
    int playerChoice;

    cout << "Choose your Character: Warrior, Assassin, Mage or Hunter... " << endl;
    cin >> character;

    if (character=="Warrior")
        {
            playerCharacter.set_att("Warrior", 100, 100, 6, 5, 0, 5, 10, 0, 2, 10);
            cout << "Welcome Warrior, your stats are: " << endl;
            cout << playerCharacter << endl;
        }
    else if (character=="Assassin")
        {
            playerCharacter.set_att("Assassin", 80, 100, 7, 3, 0, 10, 1, 0, 5, 10);
            cout << "Welcome Assassin, your stats are: " << endl;
            cout << playerCharacter << endl;
        }
    else if (character=="Mage")
        {
            playerCharacter.set_att("Mage", 75, 200, 2, 2, 15, 0, 1, 0, 5, 10);
            cout << "Welcome Mage, your stats are: " << endl;
            cout << playerCharacter << endl;
        }
    else if (character=="Hunter")
        {
            playerCharacter.set_att("Hunter", 90, 100, 6, 5, 5, 5, 1, 0, 5, 10);
            playerCharacter.health = 90;
            cout << "Welcome Hunter, your stats are: " << endl;
            cout << playerCharacter << endl;
        }
    else
    {
        cout << "Please enter a character from the list (Proper Case)" << endl;
        main();
    }

    int answer = 0;
    string startArea = "";
    string Start_Answer = "";
    cout<<"Ortios speaking: Hello , I am Ortios, the god of this land and I have a a proposal for you,some pathetic mortal stole my most precious artifact"<<endl;
    Sleep(2500);
    cout<<"Ortios speaking: The Mythological Plate, this plate holds in it the secrets of unimaginable power you must get it back, in return I will give you anything you want"<<endl;
    Sleep(2500);
    cout<<"Ortios speaking: So "<<playerCharacter.characterClass << ", Will you help me and become become the most fearless and strongest mortal alive? (Yes/No) "<<endl;
    cin>> Start_Answer;
    if(Start_Answer=="Yes")
    {   Sleep(2500);
        cout<<"Ortios speaking: Excellent, I will give you a little gift before you start, she is Loxi, your protective spirit, she will guide and help you if you find yourself in a bad situation."<<endl;
       Sleep(2500);
        cout<<"Ortios speaking: Good luck"<<endl << endl;
        answer=1;
    }
    else
    {
        Sleep(2500);
        cout<<"Ortios speaking: I knew you were not worthy. Until next time, mortal..." << endl;
        main();
    }
    cout<<"Game is Starting.."<< endl << endl;
    Sleep(4000);

    cout << "You awake surrounded by a thick ocean of trees as far as you can see. Your head is pounding and you have no idea where you are or how you got here. " << endl << endl;
    Sleep(2500);
    cout << "Loxi speaking: You don't look so good. Ortios said there may be some side effects of you being chosen, but I didn't realise it would be this bad. Let's start from the beginning." << endl;
    cout << "Loxi speaking: You at least remember your name, right?" << endl;
    cin >> playerCharacter.name;
    cout << "Loxi speaking: Great! For now, lets explore. Hopefully your memories will come back on the way. For now... " << endl;

    Sleep(2500);
    if (playerCharacter.characterClass == "Assassin")
    {
        startArea = "Lost town of Arcadia";
        cout<<"You should go in the " << startArea << ", it is a dangerous place, filled by thieves and bounty hunters, but it's the perfect place to start for a deadly Assassin like you!"<<endl;
    }
    else if(playerCharacter.characterClass == "Mage")
    {
        startArea = "Mystical Dungeon";
        cout<<"You should go in the " << startArea << ", it is a mystical and dangerous place, but it's the perfect place to start for a skilled Mage like you!"<<endl;
    }
    else if(playerCharacter.characterClass == "Hunter")
    {
        startArea = "Kola Forest";
        cout<<"You should go in the " << startArea << ", it is a mystical and dangerous place, it's filled by dangerous and deadly creatures and monster, it's the perfect place to start for a fearless Hunter like you! "<<endl;
    }
    else if(playerCharacter.characterClass == "Warrior")
    {
        startArea = "Bloody Mountains of Xorus";
        cout<<"You should go in the " << startArea << ", it is a land full of war and blood, it's the perfect place to start for a ruthless Warrior like you!"<<endl;
    }


    Sleep(2000);
    cout << endl << "Just ahead of you are some signs pointing towards several clearings through the trees." << endl;
    cout << "The sign to the West reads ===DANGER AHEAD===" << endl << "The sign to the North reads ===D&D SHOP===" << endl;
    cout << "A sign pointing East is damaged and no longer readable. Which path will you follow?" << endl;
    cout << "--------------------" << endl << "What will " << playerCharacter.name << " do?" << endl << "1. Head West (Battle)" << endl << "2. Head North (Shop)" << endl << "3. Head East (???)" << endl << "--------------------" << endl;

    Enemy slime1;
    slime1.name = "Green Slime";
    slime1.set_Att(20, 5, 2, 0, 1);

    cin >> playerChoice;
    switch(playerChoice){
    case 1:
        cout << "Blocking the path before you is a small green slime. Although you wouldn't call it dangerous, it is still a monster. You prepare yourself for battle. " << endl;
        Sleep(1000);
        cout << endl << "Level: " << slime1.level << "   Health: " << slime1.health << endl;
        battle.battleCycle(&playerCharacter, &slime1);
        Sleep(1000);
        cout << "Your first battle over, you continue down the path the creature was blocking, emerging out of the forest." << endl;
        break;
    case 2:
        cout << "A mysterious voice welcomes you to the store..." << endl;
        control(&playerCharacter.gold);
        break;
    case 3:
        cout << "You walk for what feels like forever down a winding path through the forest. Just as you feel like you've lost your way, you stumble a note pinned to the wall. Seemingly a message from another adventurer, it details a way out of the forest." << endl;
        break;
    }

    Sleep(2000);
    cout << endl << "Exiting the forest, you find yourself on a hilltop. You take a moment to take in your surroundings. Although you still don't know how you ended up in the forest, you remember where it was you were heading." << endl;
    cout << "From the hilltop you can see some areas that pique your interest." << endl;

    cout << endl << "To the North-East seems to be a small village. A good place to potentially gather information and supplies" << endl;
    cout << "More towards the North-West you notice the ruins of a small keep. Its unlikely that there's anything left there, but it could be worth investigating; just in case." << endl;
    cout << "--------------------" << endl << "What will " << playerCharacter.name << " do?" << endl << "1. Head North-East (Village)" << endl << "2. Head North-West (Ruined Keep)" << endl << "--------------------" << endl;
    cin >> playerChoice;
    switch(playerChoice){
    case 1:
        cout << "You arrive at the town. Walking through the wooden gates you notice how busy the town is. Despite it's small size the place if full of people running and cheering left and right. You decide to explore further, but where to start?" << endl;
        cout << "--------------------" << endl << "What will " << playerCharacter.name << " do?" << endl << "1. Explore the wares on the other side of town (Shop)" << endl << "2. Speak to some of the locals (Information)" << endl << "3. Head towards the watchtower (???)" << endl << "--------------------" << endl;
        cin >> playerChoice;
        switch(playerChoice){
            case 1:
                control(&playerCharacter.gold);
            case 2:
                cout << "A peculiar man approaches you from a neighbouring alley. He challenges you to a game, promising great fortune if you can complete it..." << endl;
                miniGameR(&playerCharacter);
        }
    case 2:
        cout << "The keep appears to be in pieces. Clearly some battle was held here, but time hasn't been kind to it either. All that remains are cracked, mossy bricks making up the base of what used to be walls." << endl;
        cout << "Loxi speaking: Hey, " << playerCharacter.name << ", over there!" << endl << "A glimmer of light appears underneath some rotting wood. A ladder. Must be a small dungeon. You decide to head down..." << endl;

        primsMain();
    }


}
