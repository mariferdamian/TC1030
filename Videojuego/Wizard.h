#include "Personaje.h"
using namespace std;

class Wizard: public Personaje{
    public:
        Wizard();
        void displayHouse();
        
    

    protected:
        string house;  

};

Wizard::Wizard(){
    house = "Ravenclaw"; //mostrar numero de habitacion

}
void Wizard::displayHouse(){
    cout<<"Wizard está en el Common Room de "<<house<<endl;
}

