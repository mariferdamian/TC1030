#include "Personaje.h"
using namespace std;

class Marciano: public Personaje{
    public:
        Marciano();
        void setPedido(string);
        void usarPapel();
        void mostrarLugar();

    protected:
        int lugar;  

};

Marciano::Marciano(){
    lugar = 0;
}
void Marciano::mostrarLugar(){
    cout<<"Desde Marciano "<<lugar<<endl;
}

/*
void Marciano::setPedido(string pedido_){
    pedido=pedido_;

}
void Marciano::usarPapel(){
    cout<<"usarPapel"<<endl;
}
*/