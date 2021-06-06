// Itemcoin.h

#include "Item.h"

class Coin : public Item {
    private:
        string coinType; // peso, dollar
        string description;
    public:
        Coin();
        Coin(string, string, int);
        void use();
        void showItem();
};

Coin::Coin() : Item() {    // Default Constructor
    coinType = "";
    description = "";
}

Coin::Coin(string c, string d, int live) : Item(live){
    coinType = c;
    description = d;
}

void Coin::use() {
    cout << "I am a COIN and I am using it !" << endl;
}

void Coin::showItem() {
    cout <<"Moneda tipo :<" <<coinType<<"> Usala para : " << description <<endl;
}
