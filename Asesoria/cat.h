// 
// Nombre    :
// Matricula :
//
// TC1030 Programacion Orientada a Objetos
// Fecha 3 de Junio del 2021
//
// Completa el siguiente codigo de C++ para que compile y ejecute correctamente
//

#include "veterinaria.h"

class Cat : public Veterinaria {
private:
    bool pedigree;
    
public:
    Cat();
    Cat(bool, string, string);
    void setDatos(bool, string, string);
    void getDatos(bool*, string*, string*);
    void Pet();
};
Cat::Cat() : Veterinaria(){
    pedigree = false;
}
Cat::Cat(bool b, string n, string t): Veterinaria(n, t){
    pedigree = b;
}
void Cat::setDatos(bool b, string n, string t){
    pedigree = b;
    nombre = n;
    tipo = t;
}
void Cat::getDatos(bool *p, string *n, string *t){
    *p = pedigree;
    *n = nombre;
    *t = tipo;
}

void Cat::Pet(){
    cout <<"   Miau!"<<endl;
}