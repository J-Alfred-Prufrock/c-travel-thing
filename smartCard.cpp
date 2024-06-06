#include "smartCard.h"
#include <iostream>


int smartCard::numCards = 0;//static num of smartcards

smartCard::smartCard() {
    ID = 0;
    type = 'x';
    balance = 0;
}

void smartCard::display(){
    std::cout<<"ID "<<ID<<"\nBalance "<<balance<<"\nType"<<type<<"\n";
}


