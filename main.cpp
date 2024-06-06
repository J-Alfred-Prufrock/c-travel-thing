#include <iostream>
#include "smartCard.h"
void run();
int createSmartCardID();
int main() {
    run();
    return 0;
}

void run(){
    std::cout << "this will be the start\n";
    smartCard cards[10];
    for(int i=0;i<10;i++){
        cards[i] = smartCard();
    }
    int ID = createSmartCardID(cards);
    cards[0].setSmartCardID(ID);
    cards[0].display();

}

int createSmartCardID(smartCard cards[]){//gets a id from the user then tests if its unique
    int tempID = 0;
    bool uniqueID = true;
    bool done = false;
    while(done == false){
        tempID = 0;
        std::cout<<"What would you like your cardID to be? please enter a non 0 integer";
        std::cin>> tempID;
        for(int i = 0;i<10;i++){
            if(cards[i].getSmartCardID() == tempID){
                uniqueID = false;
            }
        }
        if(uniqueID == true) {
            done = true;
        }
        else{
            std::cout<<"Sorry that ID is already in use, please try again\n";
            uniqueID = true;
        }
    }
    return tempID;
}

