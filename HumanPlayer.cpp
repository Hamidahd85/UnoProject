#include "HumanPlayer.h"
HumanPlayer::HumanPlayer(string Name) : Player(Name){}

int HumanPlayer::ChooseCard(shared_ptr<card> &TopCard) {
    while (true){
        for (int i = 0; i < (int)InHand.size(); ++i) {
            cout << "[" << i << "]" << InHand[i]->tostring() << '\n';

        }
        cout <<"Enter index or -1 to draw: ";
        int Choice;
        cin >> Choice;
        if (Choice == -1){
            return -1;
        }
        if(Choice < 0 || Choice >= (int)InHand.size()){
            cout << "Invalid index\n\n";
            continue;
        }
        if(!InHand[Choice]->playable(*TopCard)){
            cout << "Cannot play " << InHand[Choice]->tostring() << " on " << TopCard->tostring() << "\n\n";
            continue;
        }
        return Choice;
    }
}
