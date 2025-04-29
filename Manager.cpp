#include "Manager.h"
Manager::Manager(vector<shared_ptr<Player>> &players) : Players(players), CurrentIndex(0), turn(Turn::Left), GameOver(
        false) {}

void Manager::StartGame() {

}