//
// Nombre    : Juan Pablo Montoya  
// Matrícula : A01251887    
//
// TC1030 Programacion Orientada a Objetos
// Fecha 3 de Junio del 2021
//
// Completa el siguiente codigo de C++ para que compile y ejecute correctamente
//

#include "A01251887_veterinaria.h"
#include <string>
#include <iostream>
using namespace std;

class Cat : public Veterinaria {
private:
    bool pedigree;
    
public:
    Cat(bool, string, string );
    void Pet();
    void getDatos(bool*, string*, string*);

};




void Cat::Pet(){
    cout <<"   Miau!"<<endl;
}
Cat::Cat(bool pedigree_, string name_, string type_): Veterinaria(name_, type_){
    pedigree=pedigree_;
}