#include "smartCard.h"
#include <iostream>


int smartCard::numCards = 0;//static num of smartcards

smartCard::smartCard() {
    ID = 0;
    type = 'x';
    balance = 0;
}


int smartCard::getSmartCardID(){
    return ID;
};

void smartCard::setSmartCardID(int ID){
    this->ID = ID;
}
