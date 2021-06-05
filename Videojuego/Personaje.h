#ifndef Personaje_h
#define Personaje_h
#include "ItemVarita.h"
#include "ItemPocion.h"
using namespace std;
class Personaje{
    public:
           
        virtual void displayHouse();
        // aquí meteré items
        void addVarita();
        void addPocion();
        void showInventario();


    protected:
        string house;
        vector <Item*> vectorInventario;
        
};


void Personaje::displayHouse(){
    cout<<"Desde personaje "<<house<<endl;
}

// Aquí meteré items
void Personaje::addVarita(){
    Item *objetoItem = new Varita();
    vectorInventario.push_back(objetoItem);
}
void Personaje::addPocion(){
    Item *objetoItem = new Pocion();
    vectorInventario.push_back(objetoItem);
}

void Personaje::showInventario(){
    for (int i = 0; i < vectorInventario.size(); i++)
    {
        vectorInventario[i]->display();
    }
    
}

#endif