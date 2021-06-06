// Itemgem.h

#include "Item.h"

class Gem : public Item {
    private:
        string gemType; // rubi, diamond, saphiro, emerald
        string description;

    public:
        Gem();
        Gem(string, string, int);
        void use();
        void showItem();
};

Gem::Gem() : Item() {    // Default Constructor
    gemType = "";
    description = "";
}

Gem::Gem(string g, string d, int live) : Item(live){
    gemType = g;
    description = d;
}

void Gem::use() {
    cout << "I am a Gem and I am using it !" << endl;
}

void Gem::showItem() {
    cout << "Gema tipo: <"<<gemType<<">  Uso: " << description <<endl;
}
