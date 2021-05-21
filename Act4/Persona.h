#ifndef Persona_h
#define Persona_h
#include <iostream>
#include <string>

using namespace std;

class Persona{
    public:
        Persona(string, int);
        string getNombre();
        int getEdad();
        void mostrarPersona();
        void setNombre(string);
        void setEdad(int);
    protected:
        string nombre;
        int edad; 

};
void Persona::setNombre(string nombre_){
    nombre= nombre_;
}
void Persona::setEdad(int edad_){
    edad= edad_;
}
void Persona::mostrarPersona(){
    cout<<"Nombre\t"<<nombre<<"\t Edad\t"<<edad<<endl;
}
string Persona::getNombre(){
    return nombre;
}
int Persona::getEdad(){
    return edad;
}
Persona::Persona(string nombre_, int edad_){
    nombre=nombre_;
    edad=edad_;
}
#endif