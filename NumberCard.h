#include "iostream"
#include "Card.h"

using namespace std;

class NumberCard : public card {
private:
    int number;
public:
    NumberCard(int id, Color c, int num);

    int GetNumber();

    string tostring();

    bool playable(card &TopCard);
};