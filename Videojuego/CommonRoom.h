#ifndef CommonRoom_h
#define CommonRoom_h
#include "Item.h"
class CommonRoom {
    private:
        string house; // Ravenclaw, Hufflepuff, Griffindor, Slytherin, salida
        string description;
        string respuestas;
        vector <Item*> vecItemCommonRoom;
    public:
        CommonRoom();
        CommonRoom(string, string, string);
        void getDatos(string*, string*);
        void showInventoryCommonRoom();
        // add Gem
        void addItemGem(string g, string d, int live){
            Item *objItems;
            objItems = new Gem(g, d, live);
            vecItemCommonRoom.push_back(objItems);
        }
        void addItemPotion(string p, string d, int live){
            Item *objItems;
            objItems = new Potion(p, d, live);
            vecItemCommonRoom.push_back(objItems);
        }
        void addItemKey(string k, string d, int live){
            Item *objItems;
            objItems = new Key(k, d, live);
            vecItemCommonRoom.push_back(objItems);
        }
        void addItemCoin(string c, string d, int live){
            Item *objItems;
            objItems = new Coin(c, d, live);
            vecItemCommonRoom.push_back(objItems);
        }
};

CommonRoom::CommonRoom() {    // Default Constructor
    house = " ";
    description = " ";

}

CommonRoom::CommonRoom(string h, string d, string r) {    // Default Constructor
    house = h;
    description = d;
    respuestas =r;
}

void CommonRoom::getDatos(string* h, string* d) {
    *h = house;
    *d = description;
    // *v = vecItemCommonRoom;
}

void CommonRoom::showInventoryCommonRoom(){
    for (int i=0; i < vecItemCommonRoom.size(); i++) {
        vecItemCommonRoom[i]->showItem();
    }
}


#endif