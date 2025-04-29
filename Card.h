#include <iostream>
#include <string>
#pragma once
using namespace std;

enum class Color {
    red,
    blue,
    yellow,
    green,
    none
};
enum class Cardtype {
    number,
    skip,
    wild,
    reverse,
    drawtwo,
    wilddrawfour
};

class card {
protected:
    int id;
    Color color;
    Cardtype cardtype;

public:
    card();
    card(int id, Color co, Cardtype ca);

    Cardtype gettype();

    Color getcolor();

    int GetId();

    void setcolor(Color new_color);

    static string colortostring(Color color);

    virtual bool playable(card &topcard) = 0;

    virtual string tostring() = 0;


};