#include "Personaje.h"
using namespace std;

class Witch: public Personaje{
    public:
        Witch();
        void displayHouse();

    protected:
        string house;  

};

Witch::Witch(){
    house = "Ravenclaw";
}
void Witch::displayHouse(){
    cout<<"Witch está en el Common Room de "<<house<<endl;
}

