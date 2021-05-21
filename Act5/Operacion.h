#ifndef Operacion_h
#define Operacion_h
<<<<<<< HEAD
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
=======

class Operacion {
    public:
    int valor1;
    int valor2;
    int resultado;
    void setValor1(int);
    void setValor2();
    void mostrarResultado(int);

};

void Operacion::setValor1(int valor1_){
    valor1 = valor1_;
};

void Operacion::setValor2(int valor2_){
    valor2 = valor2_;
};

void Operacion::mostrarResultado(){
    cout<<"Valor 1 \t"<<valor1<<"\t Valor 2 \t"<<valor2<<"\t Resultado \t"<<resultado<<endl;
}


>>>>>>> e95078a4ee7129c761eddfa9b2856cb08d5f47e0
