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

class Dog : public Veterinaria {
private:
    bool pedigree;
    
public:
    Dog();
    Dog(bool, string, string);
    void setDatos(bool, string, string);
    void getDatos(bool*, string*, string*);
    void Pet();
    void showInventory();
    int checkInventory();

};

Dog::Dog(): Veterinaria(){
    pedigree = false;
}

Dog::Dog(bool b, string n, string t): Veterinaria(n, t){
    pedigree = b;
}

void Dog::setDatos(bool b, string n, string t){
    pedigree = b;
    nombre = n;
    tipo = t;
}
void Dog::getDatos(bool *p, string *n, string *t){
    *p = pedigree;
    *n = nombre;
    *t = tipo;
}
void Dog::Pet(){
    cout <<"   Guau!"<<endl;
}

void Dog::showInventory(){
    cout<<"---Inventario de: "<<nombre<<".---"<<endl;
    for (int i=0;i<vecItems.size();i++){
        vecItems[i]->showItem();
    }
}

int Dog::checkInventory(){
    int llaves = 0;
    for (int i=0;i<vecItems.size();i++){
        if (vecItems[i]->showKeyType() =="llave"){
            llaves = llaves +1;
        }
    }
    return llaves;
}