// 
// Nombre    : Juan Pablo Montoya 
// Matricula : A01251887
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

class Dog : public Veterinaria {
private:
    bool pedigree;
    
public:
    Dog(bool, string, string );
    void getDatos(bool*, string*, string*);
    void Pet();

};
Dog::Dog(bool pedigree_, string name_, string type_): Veterinaria(name_, type_){
    pedigree=pedigree_;
}
void Dog::getDatos(bool* pedigree_, string* name_, string* type_){
    *pedigree_=(pedigree);
    *name_=nombre;
    *type_=tipo;

}


void Dog::Pet() {
    cout <<"   Guau!"<<endl;
}
