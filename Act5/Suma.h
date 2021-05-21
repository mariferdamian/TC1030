#include "Operacion.h"
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