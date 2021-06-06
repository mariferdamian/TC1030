//
// Nombre    : Juan Pablo Montoya  
// Matrícula : A01251887    
//
// TC1030 Programacion Orientada a Objetos
// Fecha 3 de Junio del 2021
//
// Completa el siguiente codigo de C++ para que compile y ejecute correctamente
//
#ifndef veterinaria_h
#define veterinaria_h
#include <string>
#include <iostream>
using namespace std;

class Veterinaria {
protected:
    string nombre;
    string tipo;
public:
    Veterinaria(string, string);
    virtual void Pet();
    void setDatos(string, string);
    void getDatos(string*, string*);
};
Veterinaria::Veterinaria(string nombre_, string tipo_){
    nombre=nombre_;
    tipo=tipo_;
}

void Veterinaria::setDatos(string nom, string tip){
    nombre = nom;
    tipo = tip;
}
void Veterinaria::getDatos(string *nom, string *tip){
    *nom = nombre; 
    *tip = tipo;
}
void Veterinaria::Pet(){
    cout <<"Yo no soy ninguno animalito"<<endl;
}

#endif

