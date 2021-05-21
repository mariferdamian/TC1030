#include "Operacion.h"
#include <iostream>
#include <string>
using namespace std;
class Division: public Operacion{
    public:
        Division();
        Division(double, double);
        
    
        
};
Division::Division(): Operacion(){
    resultado=a/b;
};
Division::Division(double a_, double b_): Operacion(a_,b_){
    resultado=a/b;
};