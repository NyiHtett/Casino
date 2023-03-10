#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
int main(){
    string message;
    vector<string> deck;
    string First[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    char Shape[] = {'S','H','C','D'};
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            deck.push_back(First[i]+Shape[j]);
        }
    }
    do{
        srand(static_cast<int>(time(0)));
        int r = rand() % deck.size();         // get random number
        cout << "Card: " << deck[r] << endl;  // print out the card
        deck.erase(deck.begin() + r);
        if (deck.size() == 0){
            break;
        }
        cin >> message;
    }while(message != "quit");
}
