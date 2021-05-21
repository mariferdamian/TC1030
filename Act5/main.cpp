#include <iostream>
#include <string>
#include "Multiplicacion.h"
#include "Suma.h"
#include "Resta.h"
#include "Division.h"
using namespace std;
int main(){
    Suma suma;
    suma.mostrarResultado();
    Resta resta;
    resta.mostrarResultado();
    Division division;
    division.mostrarResultado();
    Multiplicacion o;
    o.mostrarResultado();
    return 0;
}