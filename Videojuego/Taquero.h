#include "Personaje.h"
using namespace std;

class Taquero: public Personaje{
    public:
        Taquero();
        void mostrarLugar();
        //void tacoAsada();
        //void tacoFrijol();
        //void caramelo();
        //int getPedido(string);

    protected:
        int lugar;  

};

Taquero::Taquero(){
    lugar = 0; //mostrar numero de habitacion

}
void Taquero::mostrarLugar(){
    cout<<"Desde Taquero "<<lugar<<endl;
}
/*
void Taquero::tacoAsada(){
    cout<<"tacoAsada"<<endl;
}
void Taquero::tacoFrijol(){
    cout<<"tacoFrijol"<<endl;
}

void Taquero::caramelo(){
    cout<<"Caramelo"<<endl;
}

int Taquero::getPedido(string pedido){
    cout<<pedido<<endl;
}
*/

