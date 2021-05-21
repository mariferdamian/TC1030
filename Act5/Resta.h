#include "Operacion.h"
<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;
class Resta: public Operacion{
    public:
        Resta();
        Resta(double, double);       
};
Resta::Resta(): Operacion(){
    resultado=a-b;
};
Resta::Resta(double a_, double b_): Operacion(a_,b_){
    resultado=a-b;
};
=======
class Resta: public Operacion{
    public:
        void Operar();

};
void Resta:: Operar(){
    resultado = valor1 - valor2;
}
>>>>>>> e95078a4ee7129c761eddfa9b2856cb08d5f47e0
