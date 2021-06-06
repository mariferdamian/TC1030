// Itempotion.h

#include "Item.h"

class Potion : public Item {
    private:
        string potionType; // poisson (-), health (+)
        string description;
    public:
        Potion();
        Potion(string, string, int);
        void use();
        void showItem();
};

Potion::Potion() : Item() {    // Default Constructor
    potionType = "";
    description = "";
}

Potion::Potion(string p, string d,  int live) : Item(live){
    potionType = p;
    description = d;
}

void Potion::use() {
    cout << "I am a Potion and I am using it !" << endl;
}

void Potion::showItem() {
    cout << "Potion tipo : <"<<potionType<<">  Uso: " << description <<endl;
}
