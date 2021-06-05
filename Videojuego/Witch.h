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
    house = "";
}
void Witch::displayHouse(){
    cout<<"Witch se encuentra en "<<house<<endl;
}

