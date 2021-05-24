#include <iostream>
using namespace std;

#include "Multiplica.h"
#include "Resta.h"
#include "Suma.h"

int main(){
while (true){

//Menu
string op;

cout << "\nBienvenido!." << endl;
cout << "Ingresa la letra que represente la operación que deseas hacer." << endl;
cout << "s = Sumar" <<endl;
cout << "r = Restar" <<endl;
cout << "m = Multiplicar" << endl;
cout << "0 = Salir" <<endl;

if (op == "s" ){
    string valor 1;
    Suma s("NombreDefault", 10, "CarreraDefault");
    
    s.setValor1(valor1);
    s.muestraResultado();
}

};



}