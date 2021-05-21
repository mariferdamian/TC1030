#ifndef Operacion_h
#define Operacion_h
#include <iostream>
#include <string>
using namespace std;
class Operacion{
    public:
        Operacion();
        Operacion(double, double);
        void mostrarResultado();
        void setA(double);
        void setB(double);
    protected:
        double a;
        double b;
        double resultado;
};
Operacion::Operacion(){
    a=0;
    b=0;
}
Operacion::Operacion(double a_, double b_){
    a=a_;
    b=b_;
}
void Operacion::setA(double a_){
    a=a_;
}
void Operacion::setB(double b_){
    b=b_;
}
void Operacion::mostrarResultado(){
    cout<<"Resultado:  "<<resultado<<endl;

}
#endif