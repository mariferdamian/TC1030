
#ifndef veterinaria_h
#define veterinaria_h

#include "Itemgem.h"
#include "Itemcoin.h"
#include "Itempotion.h"
#include "Itemkey.h"
using namespace std;

class Veterinaria {
protected:
    string nombre;
    string tipo;
    vector <Item*> vecItems;
public:
    Veterinaria();
    Veterinaria(string, string);
    void setDatos(string, string);
    void getDatos(string*, string*);
    virtual void Pet();
    void addItemGema(string, string, int);
    void addItemPotion(string, string, int);
    void addItemKey(string, string, int);
    virtual void showInventory();
};
Veterinaria::Veterinaria(){
    nombre = "N/A";
    tipo = "N/A";
}
Veterinaria::Veterinaria(string nom, string tip){
    nombre = nom;
    tipo = tip;
}
void Veterinaria::setDatos(string nom, string tip){
    nombre = nom;
    tipo = tip;
}
void Veterinaria::getDatos(string *nom, string *tip){
    *nom = nombre; 
    *tip = tipo;
}
void Veterinaria::Pet(){
    cout <<"Yo no soy ninguno animalito"<<endl;
}

//Agrego Items aki

void Veterinaria::addItemGema(string nombre, string info, int xp){
    Item *objItem;
    objItem = new Gem(nombre, info, xp);
    vecItems.push_back(objItem);
}
void Veterinaria::addItemPotion(string nombre, string info, int xp){
    Item *objItem;
    objItem = new Potion(nombre, info, xp);
    vecItems.push_back(objItem);

}
void Veterinaria::addItemKey(string nombre, string info, int xp){
    Item *objItem;
    objItem = new Key(nombre, info, xp);
    vecItems.push_back(objItem);

}
void Veterinaria::showInventory(){
    cout<<"No hago nothing"<<endl;
}

#endif
