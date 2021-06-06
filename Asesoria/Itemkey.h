// Itemkey.h

#include "Item.h"

class Key : public Item {
    private:
        string keyType; // open, close
        string description;
    public:
        Key();
        Key(string, string, int);
        void use();
        void showItem();
        string showKeyType(){
            return keyType;
        }
};

Key::Key() : Item() {    // Default Constructor
    keyType = "";
    description = "";
}

Key::Key(string k, string d, int live) : Item(live){
    keyType = k;
    description = d;
}

void Key::use() {
    cout << "I am a KEY and I am using it !" << endl;
}

void Key::showItem() {
    cout <<"Llave tipo :<" <<keyType<<">  Uso : " << description <<endl;
}

