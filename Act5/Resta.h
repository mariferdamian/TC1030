#include "Operacion.h"
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