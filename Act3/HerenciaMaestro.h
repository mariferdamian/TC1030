
#include "HerenciaPersona.h"

//Maestro
class Maestro: public Persona{
    public:
        Maestro(string, int, string);
        string getDepto();
        void setDepto(string);
        void muestraDatos();
    private:
        string Depto;
};
void Maestro::muestraDatos(){
    cout<<"Nombre\t"<<nombre<<"\tEdad\t"<<edad<<"\tDepto\t"<<Depto<<endl;
}
void Maestro::setDepto(string Depto_){
    Depto=Depto_;
}
string Maestro::getDepto(){
    return Depto;
}
Maestro::Maestro(string nombre_, int edad_,string Depto_ ):Persona(nombre_,  edad_){
    Depto=Depto_;
}

