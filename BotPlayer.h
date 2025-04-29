#pragma once

#include <iostream>
#include "Player.h"

using namespace std;

class BotPlayer : public Player {
public:
    BotPlayer(string Name);

    int ChooseCard(shared_ptr<card> &TopCard) override;

    Color ChooseColor() override;
};