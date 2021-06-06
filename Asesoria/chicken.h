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

class Chicken : public Veterinaria {
private:
    bool pedigree;
    
public:
    Chicken();
    Chicken(bool, string, string);
    void setDatos(bool, string, string);
    void getDatos(bool*, string*, string*);
    void Pet();
};
Chicken::Chicken(): Veterinaria(){
    pedigree = false;
}
Chicken::Chicken(bool b, string n, string t): Veterinaria(n, t){
    pedigree = b;
}
void Chicken::setDatos(bool b, string n, string t){
    pedigree = b;
    nombre = n;
    tipo = t;
}
void Chicken::getDatos(bool *p, string *n, string *t){
    *p = pedigree;
    *n = nombre;
    *t = tipo;
}

void Chicken::Pet(){
    cout <<"   Pio!"<<endl;
}