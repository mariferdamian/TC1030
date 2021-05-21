#include "Operacion.h"
#include <iostream>
#include <string>
using namespace std;
class Multiplicacion: public Operacion{
    public:
        Multiplicacion();
        Multiplicacion(double, double);        
};
Multiplicacion::Multiplicacion(): Operacion(){
    resultado=a*b;
};
Multiplicacion::Multiplicacion(double a_, double b_): Operacion(a_,b_){
    resultado=a*b;
};