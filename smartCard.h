#ifndef C___JAVA_ASSESSMENT_2_SMARTCARD_H
#define C___JAVA_ASSESSMENT_2_SMARTCARD_H


class smartCard {
public:
    smartCard();
    void display();
private:
    int ID;
    double balance ;
    char type;
    static int numCards;
};


#endif //C___JAVA_ASSESSMENT_2_SMARTCARD_H
