#include <iostream>
#include "smartCard.h"
void run();
int createSmartCardID();
bool mainMenu(smartCard cards[]);

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
    bool done = false;
    while(done==false) {
        done = mainMenu(cards);

    }
    std::cout<<cards[0].getSmartCardID();

}

int createSmartCardID(smartCard cards[]){//gets a id from the user then tests if its unique
    int tempID = 0,cardNum=0;
    bool uniqueID = true;
    bool done1 = false;
    while(done1 == false){
        tempID = 0;
        std::cout<<"What would you like your cardID to be? please enter a non 0 integer";
        std::cin>> tempID;
        for(int i = 0;i<10;i++){
            if(cards[i].getSmartCardID() == tempID){
                uniqueID = false;
            }
        }
        if(uniqueID == true) {
            done1 = true;
        }
        else{
            std::cout<<"Sorry that ID is already in use, please try again\n";
            uniqueID = true;
        }
    }
    cards[0].setSmartCardID(tempID);
    for(int i2=0;i2<10;i2++) {
        if(cards[i2].getSmartCardID()!=0) {
            cardNum=i2;
            return cardNum;
        }
    }
    return cardNum;
}

bool mainMenu(smartCard cards[]){
    int choice;
    std::cout<<"0-exit\n1-Create Smartcard\n2-Delete Smartcard\n3-Delete Journey\n4-List of smartcards\n5-list of journeys\n6-List of journeys with mode\n7-Summary of costs\n8-input from file\n9-Output to file\n";
    std::cin>>choice;;
    switch(choice) {
        default:
            return false;

        case(0):
            return true;;
        case(1):
            createSmartCardID(cards);
            return false;

    }
}

