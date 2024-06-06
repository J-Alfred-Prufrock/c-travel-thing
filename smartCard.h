#ifndef C___JAVA_ASSESSMENT_2_SMARTCARD_H
#define C___JAVA_ASSESSMENT_2_SMARTCARD_H


class smartCard {
public:
    smartCard();
    int getSmartCardID();
    void setSmartCardID(int ID);
private:
    int ID;
    double balance ;
    char type;
    static int numCards;
};
int createSmartCardID(smartCard cards[]);


#endif //C___JAVA_ASSESSMENT_2_SMARTCARD_H
