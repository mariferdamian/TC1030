#include "Operacion.h"
<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;
class Suma: public Operacion{
    public:
        Suma();
        Suma(double, double);        
};
Suma::Suma(): Operacion(){
    resultado=a+b;
};
Suma::Suma(double a_, double b_): Operacion(a_,b_){
    resultado=a+b;
};
=======
class Suma: public Operacion{
    public:
        void Operar();

};
void Suma:: Operar(){
    resultado = valor1 + valor2;
}
>>>>>>> e95078a4ee7129c761eddfa9b2856cb08d5f47e0
