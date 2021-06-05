#include "Personaje.h"
using namespace std;

class Wizard: public Personaje{
    public:
        Wizard();
        void mostrarLugar();
        void crear();
        //void tacoFrijol();
        //void caramelo();
        //int getPedido(string);

    protected:
        int lugar;  

};

Wizard::Wizard(){
    lugar = 0; //mostrar numero de habitacion

}
void Wizard::mostrarLugar(){
    cout<<"Desde Wizard "<<lugar<<endl;
}
/*
void Wizard::crear(){
    cout<<"crear"<<endl;
}
void Wizard::tacoFrijol(){
    cout<<"tacoFrijol"<<endl;
}

void Wizard::caramelo(){
    cout<<"Caramelo"<<endl;
}

int Wizard::getPedido(string pedido){
    cout<<pedido<<endl;
}
*/

