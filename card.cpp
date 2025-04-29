#include "Card.h"

card::card() {
    this->color = Color::none;
    this->cardtype = Cardtype::number;
    this->id = 0;
}
card::card(int id, Color co, Cardtype ct) {
    this->color = co;
    this->cardtype = ct;
    this->id = id;
};

Color card::getcolor() {
    return color;
};

int card::GetId() {
    return id;
}

Cardtype card::gettype() { return cardtype; };

void card::setcolor(Color new_color) { color = new_color; };


string card::colortostring(Color color) {
    switch (color) {
        case Color::red :
            return "red";
        case Color::blue :
            return "blue";
        case Color::yellow :
            return "yellow";
        case Color::green :
            return "green";
        case Color::none :
            return "none";


    }
}



