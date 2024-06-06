#include <iostream>
#include "smartCard.h"
void run();
int main() {
    run();
    return 0;
}

void run(){
    std::cout << "this will be the start\n";
    smartCard card;
    card.display();
}

