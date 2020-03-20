#ifndef MINIGAMER_H_INCLUDED
#define MINIGAMER_H_INCLUDED

#include <iostream>
#include <stdlib.h>
using namespace std;
void miniGameR(Player *playerCharacter)
{
for (int i=1; i<=3; i++){
int action_rand=0;
action_rand= rand() % 3 +1;
if (action_rand==3){

    int hp;
    string choice;
    hp=3;
    cout<<"This is your map, and also you have only 3 life points!"<<endl;
        cout<<"O X X X X X X "<<endl<<"X X X X X X X "<<endl<<"X X X X X X X "<<endl;

cout<<"'O' it's your starting position "<<endl;
cout<<"Next: Down/Right ?";
cin>>choice;
if(choice=="Right"){
    cout<<"Nice job, next: Down/Right? "<<endl;
    cout<<"O O X X X X X "<<endl<<"X X X X X X X "<<endl<<"X X X X X X X "<<endl;
}
else {
    cout<<"Wrong choice -1 HP"<<endl;

}
cin>>choice;
if(choice=="Right"){
    cout<<"Nice job, next: Down/Right? "<<endl;
    cout<<"O O X X X X X "<<endl<<"X X X X X X X "<<endl<<"X X X X X X X "<<endl;
}
else {
    cout<<"Wrong choice -1 HP"<<endl;
    hp=hp-1;
}
cin>>choice;
if(choice=="Down"){
    cout<<"Nice job, next: Down/Right/Up ? "<<endl;
    cout<<"O O X X X X X "<<endl<<"X O X X X X X X "<<endl<<"X X X X X X X "<<endl;
}
else {
    cout<<"Wrong choice -1 HP"<<endl;
    hp=hp-1;
}
cin>>choice;
if(choice=="Right"){
    cout<<"Nice job, next: Down/Right/Up ? "<<endl;
    cout<<"O O X X X X X "<<endl<<"X O O X X X X "<<endl<<"X X X X X X X "<<endl;
}
else if(hp != 0) {
    cout<<"Wrong choice -1 HP"<<endl;
    hp=hp-1;

}
else cout<<"You LOSE sorry :(";
cin>>choice;
if(choice=="Right"){
    cout<<"Nice job, next: Down/Right/Up ? "<<endl;
    cout<<"O O X X X X X "<<endl<<"X O O 0 X X X "<<endl<<"X X X X X X X "<<endl;
}
else if(hp != 0){
    cout<<"Wrong choice -1 HP"<<endl;
    hp=hp-1;

}
else cout<<"You LOSE sorry :(";
cin>>choice;
if(choice=="Right"){
    cout<<"Congratulations you went to the end! "<<endl;
    cout<<"O O X X X X X "<<endl<<"X O O O O X X "<<endl<<"C O N G R A T U L A T I O N S "<<endl;
}
else if(hp != 0) {
    cout<<"Congratulations you went to the end"<<endl;
    hp=hp-1;

}
else cout<<"You LOSE sorry :(";
}
else if(action_rand==2){
    cout<<"Hmmm... NOTHING I will keep looking.."<<endl;
}
else{
    cout<<"I just found a new item, I'll look at it more closely when I leave this land."<<endl;
    playerCharacter->gold += 10;
    cout<< playerCharacter->name << " Gained 10 Gold!" << endl;
    //HIre u get a random item when you leave the land, if u die you lose the item
}
}
}






#endif // MINIGAMER_H_INCLUDED
